/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (476711437 <= 130)));
                var_21 = (((((((arr_5 [i_1] [i_1]) ? 1472280689 : (arr_2 [i_0]))) + (arr_0 [i_0]))) * ((((arr_1 [i_1]) >> ((((var_13 ? var_14 : (arr_2 [i_1]))) - 162)))))));
                var_22 = (arr_0 [i_0]);
                var_23 ^= var_8;
            }
        }
    }
    var_24 = ((-835157101 ? (max((var_7 & 109), var_19)) : 16384));
    var_25 |= var_13;
    var_26 = -2147483647;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_27 &= ((-(((arr_6 [i_2]) ? var_7 : (arr_6 [i_2])))));
        var_28 += var_12;
        var_29 = var_13;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_10 [i_3] = (((arr_9 [6] [6]) ? (arr_9 [i_3] [i_3]) : (((((max((arr_8 [i_3]), (arr_8 [1]))) != (((((arr_9 [i_3] [i_3]) > 1))))))))));
        var_30 = ((((((((-16406 ? (arr_8 [i_3]) : (arr_8 [15])))) ? (arr_8 [i_3]) : (max(188, (arr_8 [8])))))) ? (((arr_9 [i_3] [i_3]) & (arr_9 [i_3] [i_3]))) : -1823785605));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_31 = (arr_17 [i_4] [i_5]);
                        var_32 = (i_4 % 2 == zero) ? ((((arr_12 [i_4] [18]) >> (arr_15 [i_7] [i_7] [i_7 + 1])))) : ((((((arr_12 [i_4] [18]) + 2147483647)) >> (arr_15 [i_7] [i_7] [i_7 + 1]))));
                        var_33 += var_18;
                        var_34 -= (((arr_17 [i_5] [i_7 - 1]) - (arr_17 [i_5] [i_7 - 1])));
                    }
                }
            }
        }
        var_35 = (((~-16380) ^ ((var_9 ? (arr_8 [1]) : -16380))));
        arr_21 [i_4] [i_4] = (((arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) < (arr_12 [i_4] [i_4])));
    }
    #pragma endscop
}
