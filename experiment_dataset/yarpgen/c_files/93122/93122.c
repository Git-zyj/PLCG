/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((var_7 ? ((95 ? -93 : var_1) : 1)))))));
                var_20 = (max(var_20, ((min(2115, 48240)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_21 += var_3;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_22 = (((((-1 ? 17296 : 20848)) ? var_14 : (arr_14 [i_2] [i_3] [i_3] [i_5] [i_2]))));
                                var_23 = (arr_16 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1]);
                                var_24 += 811464758;
                                var_25 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((max(25185, -53))) ? (min(var_4, (var_14 + var_18))) : var_15);
    var_27 = (((!1) ? var_12 : (((((((var_17 ? var_6 : var_2))) || var_11))))));
    #pragma endscop
}
