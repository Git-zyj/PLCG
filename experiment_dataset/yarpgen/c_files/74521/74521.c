/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            arr_12 [0] [3] [i_2] [i_3] [9] = (((((var_5 ? var_11 : var_0))) ? (~var_7) : ((var_3 ? var_8 : var_15))));
                            var_17 = (max(var_17, var_16));
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_18 |= (((((var_4 ? var_8 : var_8))) ? ((var_2 ? var_2 : var_14)) : (((var_16 ? var_8 : var_6)))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_0] = ((var_3 ? (!var_8) : ((var_2 ? var_13 : var_4))));
                            var_19 = var_4;
                            arr_18 [i_2] [i_2] [i_2] [13] = ((-(!var_3)));
                            arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] = (((((var_1 ? var_9 : var_9))) ? ((var_5 ? var_4 : var_9)) : (((var_11 ? var_7 : var_6)))));
                        }
                        arr_20 [i_2] [i_2] [i_1] [i_2] = (((~var_14) ? (!var_2) : ((var_3 ? var_5 : var_9))));
                        var_20 = (~((var_6 ? var_15 : var_15)));
                        var_21 = (((((var_6 ? var_10 : var_2))) ? ((-5370755695698640308 ? 1 : var_3)) : ((var_6 ? var_0 : var_13))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 = var_7;
                                var_23 = ((((max((max(var_15, var_11)), (((var_1 ? var_2 : var_8)))))) ? ((((((var_1 ? var_4 : var_0))) ? (~var_4) : (~var_10)))) : ((((min(var_6, var_1))) ? ((min(var_4, var_3))) : (~var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_24 = ((~(((((var_11 ? var_7 : var_6))) ? (min(var_12, var_13)) : ((3 ? var_0 : 1))))));
        arr_27 [i_8] = (-((~((var_10 ? var_9 : var_14)))));

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_25 = (((((~((var_11 ? -17626 : 74))))) ? 74 : 4602678819172646912));
            arr_32 [i_8] [i_9] [7] = ((var_11 ? (((((var_5 ? var_7 : var_7))) ? ((var_4 ? var_6 : var_7)) : ((var_16 ? var_15 : var_0)))) : ((-((min(var_15, var_16)))))));
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 8;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_10] [i_10 - 2] = (max(((((((var_9 ? var_2 : var_10))) ? ((var_9 ? var_2 : var_0)) : ((var_1 ? var_2 : var_12))))), (((((var_6 ? var_6 : var_4))) ? (max(var_14, var_8)) : var_15))));
                    var_26 = (max(((-((var_9 ? var_12 : var_14)))), ((((((var_4 ? var_6 : var_1))) ? ((var_15 ? var_16 : var_12)) : ((var_0 ? var_5 : var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}
