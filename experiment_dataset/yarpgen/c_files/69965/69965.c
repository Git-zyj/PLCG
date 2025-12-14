/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min(var_10, var_18))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0 + 3] [i_0] [i_0] [1] [i_0 + 1] [i_0] = (((((2147483647 / var_5) / -1089243227)) <= ((-17 ? var_2 : (arr_1 [12] [i_0])))));
                        var_20 *= (((var_3 + 2147483647) >> (var_15 - 4249427779869130639)));
                        var_21 |= ((((1089243223 + (((arr_8 [0] [i_3]) ? var_18 : (-32767 - 1)))))) ? ((-(arr_1 [i_0] [i_2]))) : ((-1089243227 ? var_8 : var_5)));
                        arr_14 [i_0 + 2] [i_1] [i_0] = 1089243227;
                        var_22 |= (arr_5 [i_0] [i_0 - 1]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                arr_21 [i_5] = -var_1;
                var_23 -= (min(var_5, var_18));
                var_24 = var_11;
            }
        }
    }
    var_25 = ((var_10 - var_10) >= (!-1780116511583062478));
    #pragma endscop
}
