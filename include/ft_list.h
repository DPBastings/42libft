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
	void			*content;
	struct s_dlist	*next;
}	t_dlist;

void	list_append(t_list **lst, t_list *new);
void	list_clear(t_list **lst, void (*del)(void *));
void	list_delete(t_list *lst, void (*del)(void *));
void	list_iter(t_list *lst, void (*f)(void *));
t_list	*list_last(t_list *lst);
t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*list_new(void *content);
void	list_push(t_list **lst, t_list *new);
size_t	list_size(t_list *lst);

#endif
