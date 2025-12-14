/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-32767 - 1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [10] [i_0] &= (18446744073709551615 & 32752);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = ((((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (32756 % 9)));
            arr_8 [i_1] = ((((((arr_6 [i_1]) < (arr_6 [i_1])))) * (((!(arr_6 [i_1]))))));
            arr_9 [i_1] [9] = -32738;
            arr_10 [i_1] [i_1] = ((((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_0 [i_0] [i_1])))) + (((arr_2 [i_0] [i_0]) - (var_14 + 8372224)))));
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_22 = (((arr_12 [i_2] [i_2]) ? (max((arr_12 [i_2] [i_2]), (arr_13 [i_2]))) : ((var_4 ? (arr_12 [i_2] [i_2]) : var_5))));
        arr_14 [14] |= ((+((32730 ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] [12] = (((arr_15 [i_3]) ? (arr_15 [i_3]) : (arr_15 [i_3])));
        var_23 = 31;
        arr_19 [1] |= (((((var_5 + (arr_15 [i_3])))) <= (arr_11 [i_3])));
        arr_20 [i_3] = (((~var_4) == (arr_13 [i_3])));
    }
    var_24 = ((var_6 && ((min((((-32767 - 1) ? var_16 : var_10)), var_3)))));
    #pragma endscop
}
