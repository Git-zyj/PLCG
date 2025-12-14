/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] &= (((var_10 ^ var_5) & (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) != var_5));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        arr_7 [3] = (arr_4 [9] [i_1 - 3]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_14 = (min(var_14, (min((arr_13 [i_1] [i_2] [i_3] [4] [i_4 - 3]), (((arr_13 [1] [i_2] [i_3] [i_2] [i_4 + 1]) / (arr_13 [i_1] [i_1] [i_3] [13] [i_4 - 2])))))));

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_15 = (max(((max((arr_12 [i_4 + 3] [i_3]), ((((arr_0 [i_1]) > (arr_11 [i_1] [i_1] [i_1]))))))), (min(var_0, (arr_15 [i_3 - 1] [i_3 - 1] [10] [i_4] [i_3] [i_4 - 2] [i_5])))));
                            var_16 = ((((((arr_15 [3] [i_5] [i_5] [i_5 + 1] [i_3] [5] [i_3]) / (arr_15 [i_5] [i_5] [i_5] [i_5 - 1] [i_3] [i_3] [i_5])))) || ((((arr_11 [i_1] [i_1] [i_1]) & var_7)))));
                            var_17 *= max(var_0, (arr_4 [i_2] [i_2]));
                        }
                    }
                    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_3] = (max((min(1726831107, 4294967295)), ((((arr_18 [13] [i_3] [i_3 - 1] [i_3 - 1]) >> (((arr_17 [i_2] [10] [i_3 - 1] [10]) - 992630778)))))));
                        var_18 = (((max((min(var_7, var_0)), (arr_6 [i_2]))) == (max(var_5, (min((arr_0 [i_3]), (arr_16 [i_2])))))));
                        var_19 = min((min((arr_1 [i_1] [i_6]), (min(var_5, var_1)))), (arr_17 [i_1 - 1] [i_2] [i_2] [i_6]));
                    }
                    arr_20 [i_3] = max(1, 2344191584);
                    var_20 *= ((arr_13 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_3 - 1]) | var_9);
                }
            }
        }
        var_21 = (min(var_21, ((min(310135844, 4294967288)))));
        arr_21 [i_1] [i_1] &= (((arr_11 [i_1] [i_1] [i_1 + 3]) && (((((var_0 + (arr_18 [i_1] [0] [0] [i_1]))) - (max((arr_11 [i_1] [i_1] [i_1]), var_9)))))));
    }
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        arr_24 [9] = (max((537434846 * -93), (((((arr_17 [i_7] [4] [i_7 - 3] [i_7]) ^ (arr_17 [i_7] [i_7] [i_7] [i_7]))) | (arr_15 [i_7 - 3] [4] [i_7] [i_7] [i_7] [2] [i_7 + 1])))));
        arr_25 [i_7] [i_7] = (max(var_9, (0 || 120)));
    }
    var_22 = ((var_0 / var_8) % (((min(var_1, var_3)) ^ (var_0 & var_6))));
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            {
                arr_34 [i_8] = arr_30 [i_8] [17];
                arr_35 [i_9] [i_8] = min(11, 112);
                var_23 = (min((max((arr_32 [i_8]), var_12)), (min(((((arr_31 [i_8 - 1] [i_8] [i_8]) <= var_0))), (max(var_8, var_3))))));
            }
        }
    }
    #pragma endscop
}
