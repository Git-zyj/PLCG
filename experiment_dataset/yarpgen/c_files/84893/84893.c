/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((var_17 ? var_9 : (((min(217, var_12))))))) ? (max(var_8, (max(1742139827534204177, var_2)))) : (((((min(203, var_4))) ? var_16 : var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (((arr_0 [i_0] [i_0]) ? var_13 : (max((217 * 203), ((var_9 ? var_8 : var_14))))));
                    var_20 = -217;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (((((0 >> ((((var_3 ? var_10 : (arr_1 [i_1]))) + 1262368275))))) ? (arr_1 [i_0]) : ((max(8, 0)))));
                                var_22 = (max(var_22, 31));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
