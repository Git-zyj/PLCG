/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((+(((var_8 * var_12) ? (~6719) : var_9))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 ^= (max(((((max(var_16, (-127 - 1)))) - ((max(var_1, 1))))), ((-109 ? -117440512 : 1))));
        var_19 -= (max((((!var_8) ? (~0) : var_12)), (max(var_10, ((max(var_1, -115)))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_20 *= var_0;
            var_21 = (min(var_21, (~var_13)));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_22 = (!1);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_11 [i_2] [i_3] [i_3] = ((!(arr_3 [i_2])));
            arr_12 [i_2] &= (arr_10 [i_3]);
            var_23 = (min(var_23, (arr_6 [i_3] [i_2])));
            arr_13 [i_3] = ((884984656 ? -83 : 1243965499822226145));
            var_24 -= (arr_8 [i_2]);
        }
        arr_14 [i_2] [i_2] = (((-127 - 1) & -49));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_25 &= ((((((arr_8 [3]) ? var_1 : (arr_5 [i_4])))) ? (var_15 && var_6) : (arr_5 [i_4])));
        arr_18 [i_4] [i_4] = ((-(max((~0), (((arr_1 [2]) ? var_15 : var_6))))));
    }
    var_26 = (min(var_26, (((~((~(min(8355840, var_16)))))))));
    var_27 = (max(var_16, var_12));

    for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_28 = (min(var_10, (((((var_9 && (arr_15 [i_5 - 1]))) ? ((((arr_5 [i_5]) && 121))) : ((((arr_20 [i_5] [i_5]) && -32767))))))));
        var_29 *= (((((~(arr_0 [i_5] [i_5 - 1])))) ? (((arr_15 [i_5 + 1]) ? var_9 : (arr_15 [i_5 - 1]))) : ((max((arr_0 [i_5 - 1] [i_5 + 1]), (arr_0 [i_5] [i_5 + 1]))))));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((-(arr_7 [i_6 - 2])));
        arr_25 [i_6] = ((~((35 ? 0 : 15560573814391094423))));
    }
    #pragma endscop
}
