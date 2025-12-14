/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_3] = (max(-2528978213624904411, 1));
                            var_10 = (-((var_4 ? 6109287582573593602 : 101)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_5] = (min((~44390), 3988892282));
                            var_11 = ((-((((107 ? 2108008028913735196 : var_8))))));
                            arr_19 [i_0] [20] [i_4] [i_4] [i_1] [i_1] |= (~-var_0);
                            arr_20 [i_0] [i_1] = (min(((max(var_9, var_7))), var_2));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_26 [i_6] &= (min(var_9, ((103 ? -1981496697063352287 : 4197759947))));
                            arr_27 [7] [i_0] [i_6] [i_7] = (((68 ? 27297 : 17748503367538559500)));
                            var_12 = ((((!(((1 ? 1 : 101))))) ? (((~(~var_1)))) : ((max(var_1, 3236576535360215622)))));
                            var_13 = var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_14 = ((min((~3236576535360215617), (!230))));
                            arr_34 [i_0] [i_1] [i_0] [i_0] = (~(min(((max(var_1, 192))), var_3)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_15 = (!15210167538349335993);
                                var_16 = (max(var_16, (((+((((var_5 != 111) == 15210167538349335993))))))));
                                var_17 = (min((max(-45, (max(0, 101)))), (!109)));
                                var_18 = (max(var_18, (((!((min(var_6, 1))))))));
                                var_19 = (max(var_19, ((min(1500092010, (~-1981496697063352295))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_20 = (max(var_20, var_4));
                            var_21 = (max(var_21, (((((max(213, var_5))) == 127)))));
                            arr_53 [i_13] [i_13] [i_14 + 2] [i_15] [i_15] [i_15] = -0;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                arr_61 [i_17] [i_18] = (((75 ? var_0 : 144)));
                                var_22 = (18446744073709551591 & var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
