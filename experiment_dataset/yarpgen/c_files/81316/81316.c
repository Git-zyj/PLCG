/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (((((1 > (-9223372036854775807 - 1)))) & ((var_10 * (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_21 = (min(var_21, ((max((arr_5 [i_1]), (arr_2 [i_1]))))));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_22 |= (((min((min((arr_4 [i_0] [22] [i_2]), var_4)), (((!(arr_0 [i_0] [i_0])))))) / (arr_1 [i_2])));
                var_23 = (max((arr_4 [i_1] [i_1] [i_1]), ((max((arr_7 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_2]))))));
            }
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_3] [i_3] = (((~var_2) | (((var_17 ^ (~var_5))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_24 = ((((~(arr_1 [1]))) >= -var_5));
                var_25 = (min(var_25, (((~(arr_10 [i_0] [i_3] [i_0]))))));
                var_26 = ((~(arr_3 [i_0])));
                var_27 = (((247 < -5840050980314356624) / ((~(arr_14 [i_0] [i_3] [i_3] [i_4])))));
            }
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_22 [22] [i_3] [i_0] [0] = var_19;
                            arr_23 [i_0] [14] [i_5 + 1] [i_0] [15] [i_6] [14] = (var_6 && var_2);
                        }
                    }
                }
                arr_24 [i_0] = (i_0 % 2 == 0) ? (((((max((arr_10 [i_5 + 1] [i_0] [i_5 + 4]), (arr_10 [i_5 + 2] [i_0] [i_5 + 3])))) << (((min(var_13, (arr_9 [i_5 - 1] [i_0] [i_5 + 1]))) - 405667367427200035))))) : (((((max((arr_10 [i_5 + 1] [i_0] [i_5 + 4]), (arr_10 [i_5 + 2] [i_0] [i_5 + 3])))) << (((((min(var_13, (arr_9 [i_5 - 1] [i_0] [i_5 + 1]))) - 405667367427200035)) + 8100243854937145618)))));
                var_28 = (((((arr_5 [i_0]) ^ (arr_5 [i_0]))) ^ (arr_5 [i_0])));
            }
        }
        var_29 = ((var_11 >> ((((-((((arr_3 [i_0]) <= (arr_9 [i_0] [i_0] [i_0])))))) + 6))));
        var_30 = min(((max(((((arr_8 [i_0]) > var_5))), (max((arr_10 [i_0] [i_0] [i_0]), var_17))))), (arr_9 [i_0] [i_0] [i_0]));
    }
    var_31 |= ((var_16 && (((var_9 && var_13) < (min(var_2, var_6))))));
    #pragma endscop
}
