/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (var_5 * (!-18446744073709551615));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = 15900932683103426408;
                                var_15 &= (max((((arr_9 [i_2] [i_3] [i_4] [i_4 + 1] [i_4]) + (min(var_13, (arr_1 [i_3]))))), (min(var_13, var_10))));
                                var_16 = (~32763);
                            }
                        }
                    }
                    var_17 = (max(1, (((min(127, -32765))))));
                }
            }
        }
        var_18 -= 9223372036854775807;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_19 = (((+((((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) < var_7))))));
        var_20 = ((~(((arr_1 [i_5]) ? (((arr_4 [i_5] [i_5] [i_5]) ? 9223372036854775807 : (arr_1 [i_5]))) : 249))));
        var_21 = (~65535);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_22 = (min((max((arr_22 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]), (arr_22 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]))), (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])));
                    arr_23 [i_6] [i_8] [i_6] [8] = -20304;
                }
            }
        }
    }
    var_23 = 0;
    #pragma endscop
}
