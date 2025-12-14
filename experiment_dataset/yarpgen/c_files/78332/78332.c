/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 = var_1;
                            var_14 = var_11;
                            var_15 = ((var_1 ? var_4 : ((var_8 ? var_6 : var_5))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_17 [i_0] [i_3] [i_2] [i_1] [i_4] [i_2] = (var_10 ? (((var_5 - var_12) ? ((-6270696190594908140 ? -116 : 6738585381920735197)) : -var_0)) : var_5);
                                var_16 = (((((((-6738585381920735198 ? 115 : 6270696190594908139)) - var_11))) ? (((var_4 + var_11) ? (~var_5) : var_1)) : ((var_4 ? var_0 : var_5))));
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                var_17 = (((((~(~2842189855)))) ? ((((~var_4) ? ((var_3 ? var_9 : var_1)) : (var_12 | var_0)))) : (((((var_9 ? var_2 : var_10))) ? (((var_5 ? var_2 : var_1))) : (~var_8)))));
                                var_18 = -var_4;
                                var_19 = ((var_5 ? (((var_7 ? var_3 : var_3))) : var_12));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {

                            for (int i_8 = 3; i_8 < 15;i_8 += 1)
                            {
                                arr_29 [i_1] [i_6] [i_1] = ((-var_6 ? (var_8 - var_0) : -116));
                                var_20 = ((((!(var_11 - var_6))) ? var_5 : (((var_3 ? var_9 : var_0)))));
                                var_21 = ((var_7 ? ((((var_10 ? var_1 : var_12)))) : var_3));
                            }
                            var_22 = ((var_8 % ((((!var_4) ? -var_9 : ((var_6 ? var_12 : var_0)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_23 = ((~(var_1 > var_4)));
                var_24 = (((((var_8 ? var_6 : var_2))) ? (((var_9 - ((var_1 ? var_4 : var_12))))) : (((var_0 ? var_3 : var_12)))));
            }
        }
    }
    #pragma endscop
}
