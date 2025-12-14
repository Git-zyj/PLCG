/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (var_4 & 1522541558388703418);
    var_18 = (max(var_18, var_11));
    var_19 = ((var_8 ? (((((((var_13 ? var_0 : var_2))) && var_2)))) : var_7));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((((204 ? var_2 : ((var_3 ? -1522541558388703418 : var_15))))) ? ((2147483647 / ((min(18133, 24370))))) : (((((-2530 ? var_6 : var_3)) > 471928521)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_21 = (-1 & 3);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((1005430115 - var_4) ? 471928530 : ((2080885337 ? -9687 : 28)))))));
                                var_23 -= 18133;
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = 9223372036854775807;
                }
            }
        }
        var_24 = (min(var_24, (((!(((~(arr_9 [i_0])))))))));
    }
    #pragma endscop
}
