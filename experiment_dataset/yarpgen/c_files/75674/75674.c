/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 -= (arr_0 [i_0 + 2] [14]);
        var_14 = var_4;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 *= ((53797 ? (-409212179595822710 >= -1281399386) : 40));
        var_16 = (var_8 ? (((17210237584301189793 + 225) & (arr_0 [i_1] [1]))) : (arr_2 [i_1] [i_1]));
        arr_6 [i_1] = (arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_17 &= (arr_4 [i_2]);
            var_18 = (!31);
            arr_11 [i_2] [i_2] &= (((arr_1 [i_3] [17]) ? ((~(arr_0 [i_2] [i_3]))) : (arr_1 [i_2] [i_3])));
            var_19 = (arr_3 [i_2] [i_2]);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (arr_13 [i_4] [i_2])));
            var_21 = ((32767 ? (arr_5 [i_2]) : (max((arr_0 [i_2] [i_2]), 3085292014681664915))));
            var_22 = ((~(max((arr_4 [i_2]), 4294967295))));
            var_23 -= (((max(((~(arr_8 [i_2]))), (arr_4 [i_4]))) * (((!((((arr_4 [i_4]) ? (arr_9 [i_2] [i_2] [i_4]) : (arr_7 [i_2])))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_24 = -131;
            var_25 = (((arr_8 [i_2]) ? (arr_8 [i_2]) : var_3));
        }
        var_26 = (max((((var_1 == 1522521816753252296) / var_3)), ((((((arr_16 [i_2] [10] [i_2]) ? var_1 : var_4))) ? ((var_7 ? (arr_16 [2] [i_2] [i_2]) : var_9)) : 31))));
    }
    #pragma endscop
}
