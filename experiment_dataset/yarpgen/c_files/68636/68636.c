/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (((var_7 + 2147483647) >> ((((~(min(var_5, 252)))) - 4294967043))));
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_1] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (max(((~(~23569))), (((!(((var_5 ? var_3 : var_7))))))))));
                                var_18 -= (((min(var_5, var_10)) ^ (((-2028192788 ? var_2 : var_12)))));
                            }
                        }
                    }
                    var_19 *= (((min(var_11, var_11)) ? (((var_4 * 32767) ? ((min(var_2, var_1))) : (var_1 - var_8))) : (((1 ? (-32767 - 1) : (var_2 >= var_7))))));
                    var_20 -= (var_0 <= var_9);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_21 &= (max(var_12, (~14037)));
                                var_22 = (var_4 * var_10);
                                var_23 = (max(var_1, (!var_9)));
                                var_24 -= (13 | 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_6));
    #pragma endscop
}
