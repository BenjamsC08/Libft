#include "libft.h"

static void split_list(t_list *head, t_list **front, t_list **back)
{
    t_list *fast;
    t_list *slow;
    
    if (!head || !head->next)
    {
        *front = head;
        *back = NULL;
        return;
    }
    slow = head;
    fast = head->next;
    while (fast)
    {
        fast = fast->next;
        if (fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    
    *front = head;
    *back = slow->next;
    slow->next = NULL;
}

static t_list *merge(t_list *left, t_list *right, int (*compare)(void *, void *))
{
    t_list dummy;
    t_list *tail = &dummy;
    
    dummy.next = NULL;
    while (left && right)
    {
        if (compare(left->content, right->content) <= 0)
        {
            tail->next = left;
            left = left->next;
        }
        else
        {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }
    if (left)
        tail->next = left;
    if (right)
        tail->next = right;
    return dummy.next;
}

/*
*
*	  this function take the head of your list and a ptr to func who return an int and take 2 void *
*										(the int is <0 if left <  rigth etc like stcmp)
*	  this function need to be build for compare what u want into u're void * content
*
*/

t_list *lst_merge_sort(t_list *head, int (*compare)(void *, void *))
{
    t_list *front;
    t_list *back;
    
    if (!head || !head->next)
        return head;
    split_list(head, &front, &back);
    front = lst_merge_sort(front, compare);
    back = lst_merge_sort(back, compare);
    return (merge(front, back, compare));
}
