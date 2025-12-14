/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = var_5;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_21 = var_19;
                    var_22 = max((((((!(arr_2 [i_0] [i_0]))) ? var_6 : (((arr_0 [i_0]) ? -4181 : var_7))))), ((var_9 ? ((2 ? 18446744073709551590 : -4181)) : ((max(459891676, -30652))))));
                    var_23 = (~-4181);
                }
                arr_6 [i_0] [i_1] = ((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_1]))));
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [13] [i_3] [i_5] [i_0] [i_5] = (18446744073709551613 % 53795);
                                arr_16 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [1] = -4205;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_24 = (min(var_24, (((3 ? -5586 : -1252050703)))));
                var_25 -= var_16;
                arr_24 [i_6] [i_6] [i_7] &= ((((((max(14414, -2042799022)) / 1))) ? (0 * 11) : ((var_18 / (arr_19 [i_6] [i_7])))));
            }
        }
    }
    #pragma endscop
}
