/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(var_4, (arr_0 [i_0])));
        var_15 = ((((max((arr_1 [i_0]), (((27055 << (var_13 + 1725798909015246429))))))) ? var_10 : (min(((var_13 ? 9223372036854775807 : -9223372036854775800)), 7140))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_16 = 564817789;
            var_17 = (arr_2 [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_18 = ((!(arr_10 [i_3 - 1] [i_3 + 2] [i_3 + 1])));
            arr_12 [i_1] = (arr_2 [i_1]);
            var_19 = (((arr_6 [i_3 + 2] [i_1]) / (arr_5 [i_3 + 2])));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_20 -= ((((((((28236 ? 10982607663599270608 : 38471))) ? 23189 : (2022082966 || 1)))) || (((arr_11 [12] [12] [12]) && ((max(var_1, 61)))))));
            var_21 = ((195 * ((-(arr_6 [i_1] [i_1])))));
            var_22 = (min((((arr_10 [7] [17] [i_4]) & -9223372036854775780)), (arr_3 [i_1] [i_4])));
        }
        arr_15 [i_1] = (((((~(arr_3 [i_1] [i_1])))) ? (((-27065 / ((-(arr_2 [i_1])))))) : (max(1, var_9))));
        arr_16 [i_1] = (((arr_9 [i_1] [i_1] [i_1]) % ((((arr_6 [i_1] [i_1]) > ((min(53, (arr_4 [i_1])))))))));
        var_23 ^= (((-(arr_4 [i_1]))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_24 = (((((((arr_7 [i_5]) / (arr_5 [14]))))) | var_4));
        var_25 = (min(-9223372036854775807, -7133));
        arr_20 [i_5] = (!((max((var_8 || var_5), (((arr_11 [i_5] [i_5] [1]) ? 1111408221091112437 : (arr_7 [i_5])))))));
    }
    var_26 = -7131;
    var_27 = var_8;
    var_28 ^= ((((131 << (1111408221091112449 - 1111408221091112440)))) ? (~var_1) : (33198 ^ var_4));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            {
                var_29 = (!(((var_7 | (arr_10 [i_7] [5] [i_6 - 1])))));
                var_30 = ((-(min((18446744073709551615 - 127), (arr_13 [i_6] [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
