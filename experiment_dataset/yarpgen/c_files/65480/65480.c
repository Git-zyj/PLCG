/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 -= (arr_1 [i_0]);
        arr_2 [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] |= ((arr_5 [i_1]) * (((arr_6 [i_1] [i_1]) ^ ((var_13 ? (arr_3 [i_1]) : var_13)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_19 = (min((((arr_4 [i_1]) ? ((((arr_6 [i_1] [i_1]) ? var_13 : var_14))) : (max(var_0, 2088851307356398663)))), ((((((arr_5 [i_1]) ? var_4 : var_2))) ? ((-1952850438 ? -214645577891633459 : 4294967294)) : (max(1633771671, -9223372036854775792))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (max(1, (arr_18 [i_1] [i_1] [20] [i_1])));
                                var_20 = (max(var_20, (var_9 / var_16)));
                            }
                        }
                    }
                    var_21 ^= (((arr_8 [i_1] [i_3]) ? (arr_17 [i_1] [i_1] [i_2] [i_3]) : (((arr_17 [i_1] [i_2] [i_3] [i_3]) ^ (arr_17 [i_1] [i_1] [i_2] [i_3])))));
                }
            }
        }
        var_22 ^= (~214645577891633480);
    }
    var_23 = var_16;
    #pragma endscop
}
