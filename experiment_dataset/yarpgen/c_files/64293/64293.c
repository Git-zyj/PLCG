/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [0] [i_0] [i_3] = var_11;
                                arr_16 [i_0] [i_0] [i_2] [i_4 + 1] = (65535 + 65533);
                            }
                        }
                    }
                    var_13 = (((!6766582952038363678) ? (2007326846 - var_3) : (((min(-44, 1))))));
                    arr_17 [i_2] [i_0] [i_0] = ((((44 ? -34 : 30))) ? ((1 ? var_5 : 17447210323244257465)) : 7666241250084771685);
                }
            }
        }
    }
    var_14 &= (!var_6);
    var_15 = var_6;
    var_16 = (max(var_16, ((((((((var_5 ? var_0 : var_8))) ? (max(-1, 6365293473371354248)) : var_5)) < (~44))))));
    #pragma endscop
}
