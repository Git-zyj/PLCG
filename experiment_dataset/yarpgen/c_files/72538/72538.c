/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [7] [4] [i_2] [i_2] [i_1] [17] = (arr_7 [14] [i_1] [i_2] [i_3]);
                        arr_11 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0] = ((((-(arr_1 [i_0] [i_2 - 1]))) != (arr_1 [i_0] [i_1])));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [1] [19] [11] = var_7;
                            arr_16 [i_0] [i_0] [i_0] [1] [i_4] [i_3] [i_2] = var_3;
                        }
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [0] [i_0] [14] = (((arr_4 [14] [0] [0]) && ((((((arr_20 [i_5]) ? (arr_13 [18] [i_1] [i_2] [10] [i_5]) : 61112)) - (arr_2 [i_2 + 1] [i_2 - 1]))))));
                        arr_22 [i_5] [13] [13] = (arr_20 [i_2 + 1]);
                        arr_23 [i_0] [i_1] [i_1] [i_5] [i_2] = ((!((min((arr_13 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1]), (arr_18 [7] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]))))));
                        arr_24 [i_5] [i_5] [15] [7] [7] [i_0] &= max((arr_19 [i_5] [i_2 - 1] [i_2] [i_1]), (arr_19 [i_2 - 1] [i_2 - 1] [i_2] [i_1]));
                    }
                    arr_25 [i_0] [i_1] [i_2 - 1] = 61112;
                    arr_26 [19] [i_1] [i_0] = (~var_9);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_33 [i_1] = (arr_7 [i_0] [i_2 + 1] [i_0] [i_6 - 2]);
                                arr_34 [20] = ((-(((arr_18 [19] [i_2 - 1] [i_2 - 1] [i_6] [i_6] [i_6 - 1]) ? (arr_18 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_7] [i_6 - 1]) : (arr_18 [i_0] [i_2 - 1] [i_0] [i_6] [i_2 - 1] [i_6 + 1])))));
                            }
                        }
                    }
                }
                arr_35 [4] [i_1] = ((~(((arr_2 [i_1] [i_1]) % (arr_2 [i_1] [i_0])))));
            }
        }
    }
    var_20 = (((var_11 > var_16) && -20175));
    var_21 = ((((((!var_2) ? var_5 : var_13))) || var_16));
    var_22 = var_10;
    #pragma endscop
}
