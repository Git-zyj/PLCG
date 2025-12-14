/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = var_11;
                        var_20 &= ((var_17 ? var_14 : var_1));
                        var_21 = ((var_3 ? var_3 : var_13));
                    }
                    var_22 = ((var_16 ? var_4 : var_12));
                    var_23 = (((((var_9 ? var_13 : var_18))) ? ((var_14 ? var_1 : var_18)) : ((var_0 ? var_15 : var_13))));
                    var_24 = (((((var_15 ? var_3 : var_7))) ? ((var_8 ? var_13 : var_12)) : var_18));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_25 = (min(var_25, var_6));

                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    var_26 = (((((var_9 ? var_13 : var_8))) ? ((var_2 ? var_4 : var_3)) : ((57684 ? 238 : 243))));
                    arr_17 [13] [i_5] [i_6 - 1] &= var_14;
                    var_27 = (max(var_27, ((((((var_9 ? var_9 : var_13))) ? ((var_10 ? var_9 : var_17)) : ((var_8 ? var_12 : var_9)))))));
                }
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    arr_21 [i_7 - 4] = ((2144764100 ? 63413 : 171));
                    var_28 = (min(var_28, var_11));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_24 [i_8] [20] [i_5] [i_4] = var_13;
                    var_29 = var_4;
                    arr_25 [i_4] [i_4 - 1] [i_4] = ((var_3 ? var_3 : var_17));
                    var_30 = ((var_16 ? var_5 : var_7));
                }
                arr_26 [i_5] = var_18;

                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    var_31 = var_10;
                    var_32 = var_18;
                    arr_29 [20] [i_5] [i_5] [i_5] = ((var_18 ? ((var_1 ? var_8 : var_15)) : ((var_14 ? var_15 : var_13))));
                    arr_30 [i_4] [i_4] [i_5] [i_9] = ((63 ? 1171083727 : 0));
                    var_33 = (min(var_33, ((((((var_2 ? var_15 : var_0))) ? ((var_7 ? var_15 : var_0)) : (((var_15 ? var_8 : var_16))))))));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_33 [i_4] [i_4] = ((((var_8 ? var_0 : var_14))) ? ((42 ? -28395 : 7)) : ((115 ? -1 : var_3)));
                    arr_34 [i_4] [i_4] [i_10] = (((((var_16 ? var_9 : ((var_1 ? var_12 : var_9))))) ? ((var_12 ? var_7 : var_11)) : ((var_7 ? ((var_17 ? var_0 : var_5)) : var_0))));
                    var_34 = (max(var_34, var_14));
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 17;i_11 += 1)
                {
                    var_35 = ((var_3 ? var_3 : var_17));
                    var_36 = (max(var_36, (((var_10 ? var_17 : var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
