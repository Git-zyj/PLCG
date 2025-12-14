/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = min(var_5, 14880592332605507380);
        arr_4 [i_0] = ((min(((((arr_0 [i_0 + 1] [i_0 + 1]) ? 1079979642 : 2611001931))), 3566151741104044236)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] [1] [i_1] = 3566151741104044259;
            var_13 = (((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (var_9 * 0)));
            arr_9 [i_1] = (min((min(4233667443328890879, (!1044728102481013167))), (((~((var_9 ? 435919222 : -1032436644)))))));
        }
        arr_10 [i_0] [i_0] = 14880592332605507380;
    }
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 = ((var_7 && ((!(((1 ? 0 : 8637101665610225927)))))));
                            var_16 = (min(var_5, 223));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_23 [i_2] [i_3] [1] [i_6] = -1328683362;
                    arr_24 [8] [i_3] [i_6] [i_3] = (arr_14 [i_2] [9]);
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_33 [i_7] [i_7] = var_2;
                                var_17 = ((!(!63230)));
                                arr_34 [i_2] [i_3] [i_7] [i_7] [i_7] = ((255 ? (arr_0 [i_7] [i_3]) : -8637101665610225950));
                                var_18 = (-14880592332605507377 & var_4);
                            }
                        }
                    }
                    arr_35 [i_7] = (min(-5499679875503989740, ((max(var_8, ((2381946002 ? 1044728102481013163 : (arr_19 [i_7]))))))));
                    arr_36 [i_7] = (min((((~(arr_29 [1] [i_3] [i_2])))), (min(1732344915, 1033683031))));
                }
                arr_37 [i_3] = (!(((+(((-1044728102481013135 + 9223372036854775807) >> (4095 - 4033)))))));
                arr_38 [i_3] [i_2] = 59487;
            }
        }
    }
    var_19 = 16;
    #pragma endscop
}
