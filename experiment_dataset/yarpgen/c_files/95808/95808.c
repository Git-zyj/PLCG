/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_9) ? ((((max(0, 2147483647))) ? 42198 : (65530 == 34466))) : -573694808));
    var_12 = (min(var_5, (max(var_6, 8855362954386071748))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 += ((min((!var_3), (16 || -125))) ? (!2016) : var_4);
                            var_14 = 47;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] [i_4] |= (((~((~(arr_12 [i_4] [i_5] [i_4] [i_4]))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_5] = var_0;

                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_15 -= (var_9 / var_2);
                                var_16 = (min(var_16, var_0));
                                var_17 = (min((((arr_18 [i_6] [i_5] [i_4] [i_1]) ? (arr_18 [i_6] [i_0] [i_6] [i_5]) : (arr_0 [i_1]))), 46));
                                arr_19 [i_6] [i_0] [i_4] [i_1] [i_0] = (~var_6);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_18 = (max(var_18, (!-31)));
                                var_19 = (min(var_19, (~var_7)));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] = max(((44651 ? (((~(arr_6 [i_0] [i_1])))) : (var_0 ^ var_7))), -125);
                arr_23 [i_1] = (max(((+(max((arr_0 [12]), (arr_11 [i_0]))))), 203));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_20 |= var_9;
                                var_21 &= ((var_4 ? (~var_6) : (arr_0 [3])));
                                arr_32 [i_0] = ((((!(arr_25 [i_0] [17] [i_0] [i_10])))));
                                var_22 = (max(var_4, ((-(arr_18 [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 -= (((min(var_10, -65))));
    #pragma endscop
}
