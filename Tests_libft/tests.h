#ifndef TESTS_H
# define TESTS_H

# include "../libft/libft.h"
# include "Unity-master/src/unity.h"
# include <ctype.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <sys/cdefs.h>
#include <stdlib.h>
char	*my_strdup2(const char *s1);

//#1 isalpha Test
void	test_isalpha_0_to_A(void);
void	test_isalpha_A_to_Z(void);
void	test_isalpha_91_to_96(void);
void	test_isalpha_97_to_122(void);
void	test_isalpha_123_to_255(void);

//#2 isdigit Test
void	test_isdigit_0_47(void);
void	test_isdigit_48_57(void);
void	test_isdigit_58_255(void);

//-3 isalnum Test
void	test_isalnum_0_47(void);
void	test_isalnum_48_57(void);
void	test_isalnum_58_to_A(void);
void	test_isalnum_A_to_Z(void);
void	test_isalnum_91_to_96(void);
void	test_isalnum_97_to_122(void);
void	test_isalnum_123_to_255(void);

//-4 isascii Test
void	test_isascii_0_127(void);
void	test_isascii_128_255(void);

//-5 isprint Test
void test_isprint_0_31(void);
void test_isprint_32_126(void);
void test_isprint_127_255(void);

//-6 strlen Test
void test_strlen(void);
void test_strlen_NULL(void);

 //-7 memset Test
void	test_memset(void);
void	test_memset2(void);
void	test_memset3(void);
void	test_memset4(void);
void	test_memset5(void);
void	test_memset6(void);
void	test_memset7(void);
void	test_memset8(void);

//-8 memset Test
void test_bzero(void);

//-9 memcpy Test
void test_memcpy(void);
void test_memcpy_all_NULL_n_5(void);
void test_memcpy_all_NULL_n_0(void);
void test_memcpy_src_NULL_n_5(void);
void test_memcpy_dst_NULL_n_5(void);

//-10 memmove Test
void test_memmove_memory_overlapping_src_is_dst3_n0();
void test_memmove_memory_overlapping_dst_is_src3_n0();
void test_memmove_memory_overlapping_dst_is_src3();
void test_memmove_memory_overlapping_src_is_dst3();
void test_memmove_n_0();
void test_memmove_Test_NULL();
//void test_memmove_size_bigger_then_src(void);
//void test_memmove_dst_NULL(void);
//void test_memmove_src_NULL(void);

//-11 strcpy Test
void test_strlcpy(void);
void test_strlcpy_10(void);
void test_strlcpy2(void);
void test_strlcpy3(void);
void test_strlcpy_dst_null_len_0(void);
void test_strlcpy_dst_src_null_len_0(void);
void test_strlcpy_dst_null_len_1(void);
void test_strlcpy_src_null_len_0(void);

//#24 atoi Test
void	test_atoi_all_pos_num(void);
void	test_atoi_all_neg_num(void);
void	test_atoi_amx_int_with_aaa(void);
void	test_atoi_max_64bit(void);
void	test_atoi_mini_64bit(void);
void	test_atoi_space(void);

//#20 striteri Test
void	test_striteri_empty_str(void);
void	test_striteri_str_0(void);
void	test_striteri_str_0000000000_0123456789(void);

#endif