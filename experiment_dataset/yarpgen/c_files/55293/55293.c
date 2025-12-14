/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_9, (((((794075667503551916 >> (var_4 + 140)))) ? 41 : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2 - 1] [i_2 - 3] [i_2 - 3] [i_2 + 1] = (!3368545180);
                                arr_14 [i_2 + 1] [i_2 + 1] [i_1] [i_3 + 1] [i_4] [i_4] = (arr_4 [i_1]);
                                arr_15 [i_0 - 2] [i_1] [i_2 - 3] [i_3 + 1] [i_2 - 3] = (arr_2 [i_0]);
                            }
                        }
                    }
                    arr_16 [i_1] [i_1 + 1] [i_1 - 2] = ((-289383673 ? ((max(-55, (arr_7 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))) : (arr_12 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_14 ^= (arr_1 [i_5]);
                                arr_23 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1] [i_0 - 1] = ((((min(var_4, (~2300023207086320838)))) ? (min((arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (min((arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2]), 3368545185)))) : -1782721119));
                                arr_24 [i_1] [i_5] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] = (max((max(-1782721102, ((var_8 ? 6893324098480215960 : 0)))), 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((max(var_2, var_3)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_37 [i_7] [i_7] [i_9] = ((11553419975229335655 ? (((max((arr_36 [i_9] [i_8 + 1] [i_10] [i_9] [i_9] [i_9]), 246)))) : (max((arr_28 [i_7]), (((17563 != (arr_35 [i_7] [i_7] [i_8 + 1] [i_10] [i_10] [i_8]))))))));
                            var_16 += (9 || var_3);
                            arr_38 [i_7] [i_9 - 2] [i_8] [i_8] [i_7] [i_7] = (((~var_6) ? (((max((arr_27 [i_7]), (arr_30 [i_10] [i_8] [i_7]))))) : (((arr_25 [i_7]) ? (max((arr_26 [i_7] [i_7]), -946719572711758415)) : (max(22, -990779254769461566))))));
                            arr_39 [i_7] [i_8 - 1] [i_9] [i_10] = (arr_27 [i_7]);
                        }
                    }
                }
                arr_40 [i_7] [i_7] [i_7] = (arr_36 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8]);
                arr_41 [i_7] [i_8 - 1] = (10281 >> (((min((var_4 % var_7), ((max(var_10, -14))))) + 118)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        {
                            arr_49 [i_7] [i_7] [i_7] = ((~((-(arr_44 [i_7] [i_8] [i_11] [i_12 + 1])))));
                            var_17 = ((((5 ^ ((((arr_42 [i_11] [i_8 - 1]) >= 2314284562)))))) ? (((((min(1, var_7))) || 1))) : var_9);
                            arr_50 [i_7] [i_8 + 1] [i_11] [i_7] = 507904;
                            var_18 = (arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
