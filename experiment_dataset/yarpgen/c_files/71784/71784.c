/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 -= ((((((((((arr_1 [i_0]) && 1832730573)))) - (((var_1 + 9223372036854775807) << (1053152133 - 1053152133)))))) ? (((!(((1902686650 ? (arr_1 [i_0]) : var_5)))))) : 29321));
        var_18 = (min(var_18, var_5));
        var_19 = var_6;
        var_20 = (-(arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 += ((((min((arr_2 [i_1] [i_1]), (arr_3 [i_1])))) || (((var_10 ? (arr_3 [i_1]) : var_7)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] [i_1] = 23727;
                                var_22 -= 11179869634596424374;
                            }
                        }
                    }
                    var_23 = (min(((((((~(arr_16 [i_1])))) ? (~1185889646) : var_15))), (((min(var_1, var_3)) - (arr_13 [1] [1] [i_3] [7])))));
                    arr_18 [i_1] [i_2] [i_1] = ((max((arr_13 [i_3] [i_2] [i_2] [i_1]), (arr_13 [i_1] [i_2] [i_2] [i_3]))));
                    var_24 = (((arr_16 [i_1]) != (min((arr_12 [i_1] [i_1] [i_1] [i_3]), (arr_16 [i_1])))));
                }
            }
        }
        arr_19 [i_1] = (!-6389115127173518790);
        var_25 = (((arr_15 [i_1] [i_1] [i_1] [i_1] [4]) ? var_9 : var_11));
    }
    var_26 = var_4;
    var_27 = var_14;
    var_28 = ((((min(2147483647, 2868569261))) ? (((((-941357145 ? 5411298341331480366 : var_1)) > (-1069612029 - var_6)))) : 1053152147));
    #pragma endscop
}
