/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_1] [i_1]);

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [1] = ((~(arr_8 [i_0] [i_4 - 1] [i_3 - 2] [1])));
                            arr_15 [i_0] = (0 & 0);
                        }
                        var_20 = (!(((~(arr_0 [i_0] [i_2])))));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5 - 1] = (0 * 0);
                        arr_19 [i_0] [i_0] [i_0] [i_0] = max((min((arr_7 [i_5 - 1] [i_5 - 1]), (arr_7 [i_5 - 1] [i_5 - 1]))), (min((arr_7 [i_5 - 1] [i_5 - 1]), (arr_7 [i_5 - 1] [i_5 - 1]))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 += ((0 + ((-(arr_2 [i_2])))));
                            var_22 = (max((max((arr_6 [i_1] [i_6]), (arr_6 [i_2] [i_7]))), (((arr_6 [i_2] [i_2]) ? 4095 : (arr_6 [i_2] [i_2])))));
                            var_23 = (min((arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_7]), (arr_8 [i_0] [6] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [21] [i_0] = ((0 < 63316) ? (arr_24 [1] [i_8]) : (arr_27 [i_0] [i_8] [i_0] [i_6] [i_0]));
                            var_24 += (((-2147483647 - 1) >= 241));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_32 [i_1] [i_0] = arr_1 [i_0];
                            arr_33 [i_0] [i_1] [i_2] [i_2] [2] [i_6] [i_0] = ((~(arr_2 [i_0])));
                            var_25 = (~-6655839306717520684);
                        }
                        var_26 = (max((max((min(-6655839306717520684, (arr_10 [i_0] [i_1] [21] [i_6] [3]))), (arr_22 [i_0] [1] [i_1] [i_1] [i_6] [i_6]))), (((-((0 ? (arr_0 [i_0] [0]) : 7)))))));
                    }
                    var_27 |= (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_28 = (arr_30 [i_1] [i_1] [i_2] [4] [i_1]);
                    var_29 = (((max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))) ? ((((var_18 / (arr_10 [i_0] [i_1] [i_0] [i_1] [5]))) & (max((arr_7 [i_0] [i_2]), var_17)))) : (((((~(arr_26 [i_0] [i_0] [i_2] [i_0])))) ? (((arr_21 [i_0] [i_2] [6] [i_1] [i_1] [i_0]) ? (arr_13 [1] [1] [i_2] [0] [19]) : (arr_1 [i_0]))) : (arr_24 [i_1] [i_1])))));
                }
            }
        }
    }
    var_30 = (var_5 || -1);
    #pragma endscop
}
