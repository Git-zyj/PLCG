/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 += (min(8444249301319680, 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_1]);
                        arr_12 [i_0] = ((((arr_3 [i_0 + 2] [i_0 + 1]) | (arr_5 [i_3] [i_1] [i_0]))));
                        arr_13 [i_0] [13] [i_0] [i_0] [4] = (max((arr_10 [i_0 - 2] [i_0 + 1]), (max((min((arr_5 [i_0] [21] [i_2]), (arr_8 [i_0 + 1] [i_1] [i_2] [i_3] [i_3]))), (arr_0 [i_3])))));
                    }
                    arr_14 [i_0] [2] = (arr_9 [1] [3] [i_0] [i_0 - 1]);
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((min((arr_5 [i_0] [i_0 - 1] [i_0]), (arr_9 [i_0 + 2] [i_0 - 1] [3] [3]))))) | (((arr_1 [i_0 + 1] [i_0 - 2]) | (max(1, 3665997142))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (max((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) - (min(8444249301319682, 0)))), ((((arr_7 [i_4] [i_4] [i_4] [i_4]) + (arr_2 [i_4]))))));
        var_20 = (max(var_20, (((-3798026577450279280 && ((min((arr_6 [i_4] [i_4] [i_4] [i_4]), -19718))))))));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_25 [19] [i_5] [i_6] = (((arr_9 [i_5] [i_6] [i_6] [9]) - (((((arr_23 [20]) + (arr_5 [i_6] [i_6] [i_6]))) / (arr_9 [i_5] [i_5] [i_5 + 3] [17])))));
            var_21 = ((min((arr_23 [i_5 + 2]), (arr_23 [i_5 + 1]))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_32 [i_5] [i_6] [2] [i_7 - 1] [i_6] [19] [13] = (max((arr_26 [i_5 + 1]), (arr_5 [i_5 + 1] [14] [7])));
                            arr_33 [i_5] [i_5 - 2] [i_5 - 2] [6] [i_5] [i_5] [i_5] = (arr_4 [i_6]);
                            arr_34 [i_5] [i_6] [i_7] [i_7] [i_8] = (max((arr_23 [i_6]), (arr_23 [i_5])));
                            arr_35 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5] = (((((arr_24 [14] [i_6] [14]) && (arr_30 [9] [i_6] [i_6] [2] [i_6] [i_6]))) || ((min((arr_24 [i_8] [i_7] [i_6]), (arr_8 [1] [i_6] [i_6] [i_8] [i_9]))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_43 [i_10] [i_10] [i_10] = (arr_39 [i_5] [i_10] [i_10] [i_12]);
                        arr_44 [i_11] [i_11 - 2] [i_11] [i_10] [i_11] = arr_19 [i_11] [i_10 - 1];
                    }
                }
            }
        }
        arr_45 [i_5] = (arr_9 [i_5] [0] [i_5] [i_5]);
        var_22 *= min((2537451761117943157 + 4294967293), (arr_31 [i_5 - 2] [i_5] [i_5 - 1] [i_5] [1]));
    }
    /* LoopNest 2 */
    for (int i_13 = 4; i_13 < 9;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            {
                arr_50 [i_13] [i_14] &= (max((max((arr_40 [i_13 + 4] [i_13 + 3] [i_13 - 2]), (arr_10 [i_14] [i_13 + 3]))), (max((arr_40 [i_14] [i_13 - 3] [i_13 - 3]), (arr_40 [i_13 - 4] [i_13 - 4] [i_13])))));
                arr_51 [i_13 + 1] [6] [11] = (max((arr_22 [i_13] [9]), (arr_21 [i_14])));
                arr_52 [i_14] [4] = (arr_10 [i_13] [18]);
                var_23 = (((arr_4 [i_13]) / (max(18438299824408231935, (max(549761139437196896, 3044652712))))));
                var_24 = (arr_31 [i_13] [i_14] [i_13 - 1] [10] [i_14]);
            }
        }
    }
    var_25 = (max(var_25, var_18));
    var_26 = (min((var_10 ^ var_16), var_8));
    #pragma endscop
}
