/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = (((((~(arr_4 [i_0])))) ? var_2 : (min((((arr_3 [i_1]) ? var_8 : (arr_0 [i_0]))), -89))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_12 *= (((((-(((arr_1 [i_0] [i_2 + 2]) - var_4))))) / (((arr_7 [i_0] [10] [i_0 - 3] [i_2 + 3] [i_3]) / (max((arr_4 [i_3]), (arr_2 [i_0] [i_0])))))));
                        var_13 ^= (((((var_3 ? (arr_3 [i_0]) : (max(var_4, var_7))))) ? (arr_8 [i_2 + 2] [i_1] [i_2 + 3] [i_2]) : (((-((max(var_7, (arr_4 [i_2])))))))));

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            arr_12 [i_4] [i_0] [i_2 - 2] [i_0] [i_0] = (((~88) - -89));
                            arr_13 [9] [i_3] [i_2 - 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] = (~var_2);
                            var_14 = var_10;
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_0 - 3] [i_2] &= (((arr_6 [i_0] [i_2]) < (max((((var_4 ? var_1 : var_1))), var_0))));
                            arr_17 [1] [i_0] [i_0] [1] [i_2] [i_3] [0] = var_10;
                            arr_18 [5] [i_3] [i_0] [i_1] [i_0] = (((arr_8 [i_0 + 3] [i_0] [i_2 + 3] [i_5 - 1]) / var_1));
                            arr_19 [1] [i_3] [i_0] [i_1] [i_0 + 2] = max((max((arr_8 [i_0] [i_0] [i_1] [i_1]), (arr_0 [i_0 + 3]))), ((((~var_5) & var_3))));
                            arr_20 [7] [i_1] [i_0] = (arr_14 [14] [i_1] [i_2] [i_2] [i_2] [1] [i_1]);
                        }
                        arr_21 [i_0 + 2] [i_0] = var_4;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0 + 1] [i_1] [i_0] [i_6] = min((((var_6 + var_2) - (min(86, (arr_23 [i_0] [i_0] [i_2] [i_6]))))), (~74));
                        arr_26 [i_0] [i_1] [i_2] [i_1] [i_0] = 3617476561;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_15 = var_10;
                        var_16 = ((((max((arr_3 [i_2 + 1]), -104)))) ? (min(((~(arr_6 [i_0] [i_0]))), ((16206687593357520743 ? var_3 : 39311)))) : (var_0 - var_10));
                    }
                }
            }
        }
        var_17 = (min((arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0]), ((var_3 - (arr_7 [i_0] [i_0 - 1] [10] [2] [i_0])))));
    }
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_18 ^= ((((min(3698676839, (((arr_22 [i_8] [i_8]) ? 9241908983388561346 : -976195625))))) ? (min((arr_39 [i_8] [i_9] [i_8] [i_8] [i_8] [i_10 + 1]), (arr_7 [i_8 - 2] [i_9] [i_10] [9] [i_11]))) : (min((max(17587782259321044328, (arr_35 [i_8] [1] [i_11]))), ((max(517152174, 3617476538)))))));
                        arr_42 [i_8 + 1] [1] [i_10] [i_11] = -517152171;
                        var_19 ^= (((((!(arr_24 [i_8 + 1] [12] [i_8 + 1] [i_8])))) << (((((var_10 * 26224) ? 3698676851 : (((arr_14 [i_8 - 2] [6] [i_10] [i_11] [6] [i_11] [i_8 - 2]) ? var_9 : 596290444)))) - 3698676846))));
                        arr_43 [9] [i_10] [i_10] [i_8] = -7491832274993905146;
                    }
                    arr_44 [i_10] [i_10] [i_10] [i_8] = (max((((((arr_1 [i_8 + 1] [i_9]) ? 98 : 596290479)))), ((+((((arr_1 [1] [i_10 + 1]) > var_6)))))));
                }
            }
        }
        var_20 = ((0 ? (min(50360, (((arr_27 [i_8] [0]) / (arr_37 [i_8]))))) : ((((arr_38 [8] [i_8] [i_8] [6]) || ((((arr_35 [i_8] [i_8] [i_8]) ? 23117 : var_2))))))));
        arr_45 [i_8] = ((((((var_1 ? 29600 : -104))) ? (arr_1 [14] [i_8]) : (min(var_9, 34815)))) << (((+-7491832274993905146) + 7491832274993905168)));
    }
    var_21 = (~var_2);
    #pragma endscop
}
