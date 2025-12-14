/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((arr_1 [i_0 - 2]), ((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))))));
        arr_3 [i_0] [i_0 + 2] = (min(113, 16966));
        arr_4 [i_0] = (((max((arr_1 [i_0]), (max(var_2, var_1))))) / ((-(arr_1 [i_0 - 1]))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_2] = ((var_15 || (((arr_6 [i_1]) != (arr_11 [i_2])))));
                        arr_16 [i_2] [i_3] = ((((((var_11 >= (arr_1 [i_1 - 1]))))) | var_9));
                        arr_17 [i_1] [2] [i_3] [i_4] [i_2] [0] = (((arr_14 [i_1 + 2] [i_1 + 2] [i_2 + 2] [i_2] [i_3] [3]) >> (((arr_13 [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_2 + 2]) - 1570))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_19 = ((829119157966308121 ? 17617624915743243500 : 829119157966308118));
                        var_20 = var_9;
                        arr_21 [i_1 + 1] [i_2] [i_2] [i_5 + 1] = (((80 <= (arr_0 [17]))));
                        var_21 = (max(var_21, ((((arr_0 [i_5 + 1]) + (arr_6 [i_1 + 1]))))));
                        var_22 = var_6;
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_24 [i_6] [i_2] [i_2] [i_1] = var_10;
                        var_23 = ((4294967290 & 1) || (~825723249));
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        var_24 = (((var_2 ^ var_3) - (arr_25 [i_7] [i_1] [14] [i_3] [i_2])));
                        var_25 = var_14;
                    }

                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        var_26 = (min(var_26, (4294967286 < 9198412089042018987)));
                        arr_29 [i_8] [i_2] [i_2] [i_2] [0] = (3711 / 19);
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_33 [i_9] [i_2] [i_3] [9] [i_2] [12] = (((arr_23 [i_1] [i_1] [13] [i_1 - 3]) || var_5));

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_36 [i_2] = (arr_13 [15] [19] [i_2 + 1] [i_2 + 2]);
                            var_27 = (min(var_27, 115));
                        }
                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            var_28 = ((((((arr_35 [i_1 + 2] [i_2] [17] [i_9] [i_11]) <= (arr_18 [i_11])))) & 9198412089042018987));
                            arr_40 [1] [i_2] [i_3] [i_2] [i_3] [i_9] [1] = (arr_31 [i_1] [i_2] [i_3] [i_3]);
                            var_29 = (max(var_29, (((-(((arr_28 [i_1] [i_11] [i_3]) / (arr_12 [6] [i_11] [i_3] [i_3]))))))));
                        }
                        var_30 = (min(var_30, 115));
                        arr_41 [i_9] [i_2] [i_2] [i_1] = ((2147483647 >> (43195 - 43177)));
                    }
                    arr_42 [i_2] = var_1;
                }
            }
        }
        var_31 = (min(var_31, 20));
        arr_43 [i_1] = (((((var_10 ? var_9 : (arr_28 [i_1] [16] [1])))) ? (arr_20 [i_1] [4] [i_1 - 1] [i_1 - 1]) : (arr_38 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
        var_32 = 9248331984667532601;
    }
    var_33 = (((max(((min(var_10, var_1))), 8382951987660175892)) / 1));
    var_34 = (max(var_34, var_4));
    #pragma endscop
}
