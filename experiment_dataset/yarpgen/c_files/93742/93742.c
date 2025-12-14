/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_15 ? var_4 : 21752))) ? (var_12 < var_6) : (~var_14)))) ? ((((min(var_15, var_1))) ? 43771 : ((min(var_10, var_10))))) : 21732));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += (((-(~var_13))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    var_21 = ((-((var_10 + ((-(arr_6 [i_2 + 1])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 = (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_23 = ((var_6 ? 2827653931 : 34));
                            var_24 |= ((((54646 ? -18939 : -89)) & (arr_9 [i_0] [i_0] [i_2] [i_3])));
                        }
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_25 |= var_7;
                        var_26 = (((max((((var_13 ? (arr_2 [i_1]) : var_6))), ((var_11 ? var_17 : var_12)))) > -155));
                    }
                    var_27 = (max(var_27, -var_16));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    var_28 ^= (((arr_9 [13] [i_1] [i_0] [13]) <= var_17));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_29 += (max(var_16, ((((-(arr_2 [i_6])))))));
                                var_30 = (min(var_30, 22813));
                            }
                        }
                    }
                    var_31 = (max(40482, -1));
                }
                var_32 ^= ((max(var_18, var_8)));
                var_33 = min(((-((var_2 ? var_4 : var_10)))), (var_1 - var_8));
            }
        }
    }
    var_34 = (-(((((var_13 ? var_15 : -1))) ? var_2 : (max(var_9, 2823422300)))));
    var_35 = (((((min(var_5, var_14)))) ? var_8 : (max(-137891884, var_18))));
    var_36 |= ((((min(var_15, ((var_4 ? var_1 : var_18))))) ? (var_11 > var_9) : ((((var_4 ? var_15 : var_8))))));
    #pragma endscop
}
