/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_1] &= (((((((max((-32767 - 1), 0)))) | (((arr_0 [i_1]) | (arr_6 [i_0] [i_1])))))) * ((min((arr_2 [15]), (arr_1 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] |= (arr_4 [i_1] [6]);
                            arr_19 [i_0] [i_2] [i_0] [i_4] = ((arr_11 [i_0] [i_1] [i_2 - 3] [i_3]) ? -2144028983055454243 : var_6);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_12 ^= ((-(arr_13 [i_5] [i_2] [i_2] [i_1] [i_0])));
                            arr_23 [i_0] [i_0] = (arr_14 [i_0] [i_1] [13] [i_3]);
                            var_13 &= (~var_2);
                        }
                        var_14 = (max(((max((((var_0 + 2147483647) >> (2939047904 - 2939047885))), (~-4)))), ((-91197647869107700 ? (arr_8 [i_0]) : (arr_1 [i_0] [i_0])))));
                        var_15 = max((max((arr_0 [i_2 - 3]), (arr_0 [i_2 - 2]))), (arr_17 [i_0] [i_1] [i_1] [i_2 - 1] [i_3]));
                    }
                }
            }
            var_16 += var_3;
            arr_24 [i_0] [i_0] = (max(((((max((arr_3 [i_1] [i_0]), 4294967295)) - 1))), (!var_0)));
            arr_25 [i_0] = ((((-(arr_22 [i_1] [i_1] [i_0] [1]))) & (arr_3 [i_0] [i_1])));
        }
        arr_26 [17] [i_0] = ((-((max((arr_9 [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_17 = ((((((arr_6 [i_6 - 1] [i_6]) / 1245144728))) ? (((((arr_6 [i_6] [i_6]) && (arr_1 [i_6 + 1] [i_6]))))) : (min((arr_9 [i_6] [i_6 - 1] [i_6]), (arr_0 [i_6 + 2])))));
        var_18 = ((-21 <= (((arr_3 [i_6 + 1] [i_6 - 1]) ? (((arr_1 [i_6] [i_6]) ? var_10 : (arr_1 [i_6 - 1] [i_6]))) : (-9223372036854775807 - 1)))));
    }
    var_19 = ((-((((min(var_0, 1358064767))) ? var_11 : var_5))));
    var_20 = (min((((max(var_3, var_4)) / var_6)), ((min(var_5, var_9)))));
    var_21 = (min(var_21, var_0));
    #pragma endscop
}
