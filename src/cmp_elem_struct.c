#include "ft_ls.h"

int		cmp_atime(t_filename *one, t_filename *two)
{
	if (one->buf->st_atimespec.tv_sec > two->buf->st_atimespec.tv_sec)
		return (TRUE);
	else
		return (FALSE);
}

int		cmp_mtime(t_filename *one, t_filename *two)
{
	if (one->buf->st_mtimespec.tv_sec > two->buf->st_mtimespec.tv_sec)
		return (TRUE);
	else
		return (FALSE);
}

int		cmp_name(t_filename *one, t_filename *two)
{
	if (ft_strcmp(one->filename, two->filename) < 0)
		return (TRUE);
	else
		return (FALSE);
}
