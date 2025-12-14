/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~((min(var_15, 214)))))) ? var_18 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_20 = (max(var_20, ((max(var_15, ((((arr_5 [i_0] [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : 53913))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((arr_3 [i_0] [i_3] [i_3]) ? 758985602 : var_18)))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_3] |= ((~(arr_7 [i_3])));
                                var_22 = (max(var_22, (((~(~var_16))))));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (((~(arr_4 [i_2 - 1] [i_0 - 2] [i_0 - 1]))));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_23 += 53913;
                        var_24 = (arr_10 [i_6] [i_6] [i_5] [i_1] [i_6] [i_5] [i_5]);
                        arr_18 [i_1] [i_5] [i_1] [i_1] = (((13711 ? ((~(arr_10 [i_5] [i_5] [i_5] [i_1] [i_5] [i_5] [5])) : (((var_10 ? 1255832083 : (arr_4 [4] [i_5] [i_6]))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_25 = (arr_3 [i_1] [i_5] [i_5]);
                        arr_22 [i_1] [i_5] [i_1] = arr_0 [i_1];
                        arr_23 [i_1] [i_1] [i_1] [i_1] = (~11361032939107749838);
                    }
                    var_26 *= (((arr_4 [i_5 - 2] [i_5 - 2] [i_5 - 1]) ? 51841 : (arr_16 [i_5] [i_5] [i_5] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_27 += 1;
                                arr_29 [i_5] [i_5 - 1] [i_5] [i_1] [i_9] [i_5 - 1] = 9;
                                arr_30 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (((+(max((arr_21 [i_0] [i_1] [i_5 - 2] [i_5 - 2] [i_8] [i_9]), var_17)))));
                            }
                        }
                    }
                    var_28 = (((~78) ? 53612 : (arr_19 [i_5] [10] [i_1] [i_1] [i_1] [i_0])));
                    var_29 = ((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [4])));
                }
                var_30 = ((max(1372965833, (arr_20 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0]))));
            }
        }
    }
    #pragma endscop
}
