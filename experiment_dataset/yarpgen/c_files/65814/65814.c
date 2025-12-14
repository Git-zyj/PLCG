/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (((~var_4) ? 204 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max((~108), ((max(var_2, var_8)))));
                var_14 = (max(var_14, (((((max((min((arr_2 [i_1]), (arr_5 [i_0] [i_0] [i_0]))), ((min(var_8, (arr_2 [i_1]))))))) ? var_8 : (arr_1 [i_1]))))));
                var_15 = (max(var_15, ((max((arr_0 [i_1] [i_1]), (((!((max((arr_5 [i_0] [i_0] [i_1]), (arr_4 [13] [i_1] [13]))))))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = (((arr_7 [i_0] [9] [i_1 + 1] [i_2]) ? -109 : var_4));
                    var_17 = ((-((-((((arr_2 [i_0]) || (arr_6 [i_0] [i_1] [5] [i_2]))))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = (max(61486, (arr_6 [11] [i_1] [i_0] [i_3])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_19 = (min(var_19, (((~(arr_0 [i_1] [i_0 - 1]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_3] [i_3]);
                            arr_14 [i_0] [11] [i_2] [i_0] [i_4] = (arr_12 [i_0] [i_0]);
                            var_20 = (min(var_20, ((((arr_10 [i_0] [i_1] [i_2] [i_2] [1] [i_3] [i_4]) ? (~var_6) : var_5)))));
                        }
                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            var_21 = ((!(arr_0 [i_0] [i_1])));
                            arr_17 [i_0 - 1] [i_0] = ((-var_9 < (arr_7 [19] [i_2] [17] [12])));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            arr_20 [i_0] = var_3;
                            var_22 = (min(var_22, (((-(~var_6))))));
                            var_23 = (min(var_23, (!var_5)));
                            var_24 = (max(var_24, var_2));
                        }
                        arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((!(((arr_7 [i_1 - 2] [7] [i_2] [i_3]) > (arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                    }
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_25 = -var_3;
                    var_26 = (min(var_26, var_10));
                    var_27 = ((((min((arr_16 [13] [i_1] [i_1] [i_1] [i_1 - 2]), (arr_16 [i_0 + 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])))) ? (arr_4 [i_0] [i_1] [i_7]) : (-32767 - 1)));
                }
            }
        }
    }
    var_28 = var_1;
    #pragma endscop
}
