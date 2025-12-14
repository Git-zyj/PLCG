/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((var_16 ? var_15 : var_12)) ? (~var_8) : ((-1597080793 ? var_1 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((((((var_9 ? -69 : var_6))) ? ((var_3 ? var_1 : var_6)) : (var_17 & var_12))));
                arr_7 [i_0 + 1] [i_1] [i_1] = (-((max(var_6, var_17))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] [i_2 - 1] [i_2 + 1] [i_3] = (((((var_11 << (((var_13 + 112) - 26))))) || (((var_5 ? var_6 : var_8)))));
                            var_22 = ((~(min(var_14, -var_10))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((var_17 ? ((var_16 ? var_16 : var_3)) : (var_3 != var_19)))) ? var_5 : ((var_16 ? (!var_13) : ((var_18 ? var_0 : var_15))))));
    #pragma endscop
}
