#ifndef FT_LIST_H
# define FT_LIST_H

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

t_list	*list_new(void *content);
void	list_push(t_list **lst, t_list *new);
int		list_size(t_list *lst);
t_list	*list_last(t_list *lst);
void	list_append(t_list **lst, t_list *new);
void	list_del(t_list *lst, void (*del)(void *));
void	list_clear(t_list **lst, void (*del)(void *));
void	list_iter(t_list *lst, void (*f)(void *));
t_list	*list_map(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
