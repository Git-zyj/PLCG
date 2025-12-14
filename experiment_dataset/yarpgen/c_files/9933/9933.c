/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (var_1 * (((213 ? -1922262123 : 217))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            var_14 = 50331648;
            arr_4 [i_0] [2] [i_1] = 50331648;
        }
        arr_5 [i_0] [i_0] |= 19460;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_0] [i_4] [4] [i_4] = ((-1922262123 + 2147483647) >> (1987760920 - 1987760890));
                        arr_16 [i_4] [i_3] [i_2] [i_0] [i_0] [5] = ((!(((245 ? 1036131696 : 1922262143)))));
                        arr_17 [i_2] [i_4] = (~17946082899493209929);
                    }
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        arr_20 [4] [4] [i_3] [i_5] = var_7;
                        arr_21 [i_2] [i_2] [5] [i_2] = -var_9;
                        var_15 = (((var_11 - var_10) ? (((arr_12 [i_0] [7] [i_0]) ? -992800744405136104 : (arr_9 [i_0] [3] [4]))) : ((((arr_11 [i_3] [i_2]) * 20920)))));
                        var_16 = var_2;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_26 [i_0 + 1] [i_2] [i_3] [i_3] [i_0] [i_3] = 4315;
                        var_17 |= (arr_2 [i_0 + 1] [1]);
                    }
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        var_18 = 27288;
                        var_19 |= -1922262138;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_20 = (arr_18 [i_0] [1] [i_8]);
                                var_21 -= (~-var_4);
                                arr_33 [i_0 - 1] [i_0 - 1] [i_3] [i_8 - 1] [i_9] [i_8] = (arr_11 [i_2] [i_0 - 1]);
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_36 [i_0] [i_2] [i_3] [i_10] = ((!(arr_18 [i_0 + 2] [i_0 - 1] [i_0 + 1])));
                        arr_37 [i_10] [9] [i_2] [i_2] [i_2] [i_0] = ((!(arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 1])));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_41 [i_0] [0] = 5698;
                        var_22 = 1;
                        arr_42 [i_0] [i_2] [i_3] [i_3] [i_3] = 5712;
                        arr_43 [i_0] [i_2] [i_3] [3] [i_3] [i_3] |= var_9;
                        var_23 = ((~(((-1922262119 == (arr_6 [i_0] [i_0] [i_11]))))));
                    }
                    var_24 = (max(var_24, (((-(arr_40 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2] [1] [i_0 + 1]))))));
                }
            }
        }
        arr_44 [5] [i_0 - 1] = ((((arr_38 [2]) + 2147483647)) >> (((!(arr_3 [i_0] [6] [i_0])))));
    }
    #pragma endscop
}
