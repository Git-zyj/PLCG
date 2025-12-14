/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 |= (min(((((var_0 > 147) > (arr_0 [i_0 + 1] [i_0])))), (max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0 - 1] [i_0 + 1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 = ((var_16 ? (max((33891 >> 0), 65535)) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) >> ((((~(arr_7 [i_0] [i_0] [i_2 - 1] [i_3]))) + 8))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] = (((((-8062744521776957887 ? var_10 : (arr_2 [i_0] [i_0]))) + ((min(var_15, var_10))))));
                            arr_13 [i_0 + 2] [4] [i_2 - 1] [i_0] [i_0 + 2] [i_2] [1] = (max((arr_0 [i_3 + 3] [i_3 + 1]), (arr_0 [i_3 + 2] [i_3 - 1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 += (min(var_18, (((((min(6032, -1)))) ^ var_5))));
        var_22 = 2147483647;
        arr_16 [i_5] |= ((var_7 > (max((arr_4 [8]), (max(4503599627370495, (arr_9 [i_5] [i_5] [i_5])))))));
        arr_17 [i_5] [i_5] = (max((((arr_5 [i_5] [i_5] [i_5]) / (arr_5 [i_5] [i_5] [i_5]))), (max((arr_5 [i_5] [i_5] [9]), 1551066415))));
    }
    var_23 = (min(var_23, (((var_8 ? (max((var_7 ^ var_12), ((var_13 ? var_6 : var_18)))) : (min(var_0, (((var_17 ? var_3 : var_13))))))))));
    var_24 = (var_3 && var_1);
    #pragma endscop
}
