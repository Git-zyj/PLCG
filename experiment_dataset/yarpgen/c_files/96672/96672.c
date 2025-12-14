/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-((~(~var_5))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [3] = (min(((min(-var_1, var_16))), ((124 ? 31525197391593472 : (max((arr_4 [i_1 + 1] [i_2 - 2] [i_0]), 46368))))));
                        var_21 = (arr_0 [i_0]);

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            var_22 = (!(((~(max(-31525197391593476, (arr_8 [7] [i_0] [9] [i_0] [i_0] [i_0])))))));
                            var_23 -= var_14;
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] = 6594323884278423994;
                            var_24 = (((((~var_17) ? ((((arr_1 [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_2] [i_2 - 1]) : 0))) : -31525197391593493)) == (!7204867871791730707)));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_25 = ((var_12 - (((~-31525197391593491) ? (((~(arr_10 [i_0] [i_0] [13] [i_3 - 1] [i_3 - 1] [i_5])))) : -31525197391593478))));
                            arr_20 [i_0] [i_1 + 2] [i_0] [i_0] [4] [i_5] = (min((min(((max((arr_7 [i_0] [8] [0]), var_7))), (min(var_18, (arr_1 [i_0] [5]))))), (((-(max(-31525197391593471, -24)))))));
                            var_26 = (min(((((arr_14 [i_0] [i_0] [i_1 - 1] [i_1 + 2]) / (arr_14 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1])))), (max(7533183557414038251, var_15))));
                            var_27 = -31525197391593476;
                        }
                        var_28 = 2187855102077479191;
                    }

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_29 ^= (arr_11 [i_0] [i_6] [i_2 - 2] [i_0] [i_0] [i_0]);
                        var_30 = var_3;
                        var_31 = (((~var_5) != (max(((-1143715619 ? 31525197391593472 : 1984)), -1143715621))));
                        var_32 -= (min((arr_18 [i_0] [i_0] [i_1] [i_2 - 1] [i_0] [i_6]), ((~(var_2 % 383643317)))));
                    }
                    var_33 = (max(1143715619, (!-383643315)));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_34 = -31525197391593468;
                                arr_29 [i_0] [i_0] [i_2 - 2] [i_0] [i_8] = ((((~(~var_18)))) ? ((~(~var_3))) : (~383643317));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_8] = 1;
                                var_35 = ((!(arr_7 [12] [12] [0])));
                                var_36 *= 12280;
                            }
                        }
                    }
                }
            }
        }
        var_37 = ((31525197391593458 ? 31525197391593494 : -36));
    }
    var_38 = 31525197391593494;
    #pragma endscop
}
