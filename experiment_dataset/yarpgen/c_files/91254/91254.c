/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1689605069224816187;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = 58520;
                var_20 = (58533 > 58539);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (min((!var_6), (max(var_17, var_13))));
                                var_22 = var_3;
                                var_23 = ((-(((max(30558, var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_5;
    var_25 = (!var_4);
    #pragma endscop
}
