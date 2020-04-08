/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   reverse_bits.c                              _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/04/07 20:12:59 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/04/07 20:12:59 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

uint32_t reverseBits(uint32_t n) 
{
    int				i;
	uint32_t	    new;

	i = 0;
	new = 0;
	while (i < 32)
	{
		new |= (((n >> i) & 1) << (31 - i));
		i++;
	}
	return (new);
    
}
