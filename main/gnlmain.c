/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:52:20 by agaussel          #+#    #+#             */
/*   Updated: 2025/11/14 16:52:22 by agaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	main(void)
{
	char	*line;

	line = get_next_line(0);
	printf("line: %s", line);
	free(line);

	line = get_next_line(0);
	printf("line: %s", line);
	free(line);
	return (0);
}
