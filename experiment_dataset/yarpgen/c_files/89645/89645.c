/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 |= (((((48177 ? -3263423531045737519 : (!-3263423531045737520)))) / (((-3263423531045737520 >= var_0) ? var_7 : (max(var_14, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = ((~(((((3263423531045737501 ? var_11 : 3))) ? ((19895 ? 48507 : 610663968)) : var_6))));
                            var_18 = var_2;
                        }
                    }
                }
                var_19 = ((((!(arr_5 [18] [i_0 - 1] [i_1])))));
                var_20 = (((((~((9223372036854775807 ? var_10 : -610663968))))) ? 0 : ((-(arr_4 [i_1] [i_0] [i_0 - 1])))));
                var_21 = (((((-(max(var_4, 35184372088831))))) ? ((~(arr_5 [i_0] [i_0] [i_0 - 1]))) : (!var_7)));
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
