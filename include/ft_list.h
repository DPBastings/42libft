/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dbasting <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 16:30:58 by dbasting      #+#    #+#                 */
/*   Updated: 2023/03/28 11:53:24 by dbasting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_dlist
{
	struct s_dlist	*prev;
	void			*data;
	struct s_dlist	*next;
}	t_dlist;

// Singly-linked list functions.
int		list_append(t_list **lst, void *data);
void	list_append_node(t_list **lst, t_list *node);
void	list_clear(t_list **lst, void (*del)(void *));
void	list_delete(t_list *lst, void (*del)(void *));
void	list_iter(t_list *lst, void (*f)(void *));
t_list	*list_last(t_list *lst);
t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*list_new(void *content);
void	*list_pop(t_list **lst);
t_list	*list_pop_node(t_list **lst);
int		list_push(t_list **lst, void *data);
void	list_push_node(t_list **lst, t_list *node);
void	list_rev(t_list **lst);
size_t	list_size(t_list *lst);

// Doubly-linked dlist functions..
int		dlist_append(t_dlist **lst, void *data);
void	dlist_append_node(t_dlist **lst, t_dlist *node);
void	dlist_clear(t_dlist **lst, void (*del)(void *));
void	dlist_delete(t_dlist *lst, void (*del)(void *));
t_dlist	*dlist_last(t_dlist *lst);
t_dlist	*dlist_new(void *data);
void	*dlist_pop(t_dlist **lst);
t_dlist	*dlist_pop_node(t_dlist **lst);
int		dlist_push(t_dlist **lst, void *data);
void	dlist_push_node(t_dlist **lst, t_dlist *node);
void	dlist_rev(t_dlist **lst);
size_t	dlist_size(t_dlist *lst);

#endif
