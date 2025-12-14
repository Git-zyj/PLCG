/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((max((arr_1 [i_0]), (arr_1 [i_0]))), (var_12 <= -98587430));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [0] &= (-1261169291 ? ((var_12 ? var_3 : -319789471)) : -98587448);
            arr_7 [i_0] [i_0] = (var_6 ? (arr_4 [i_1]) : var_8);
            var_13 = (arr_0 [i_0]);

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_10 [i_1] [i_0] [2] = ((((var_8 ? (arr_3 [i_2] [13] [i_2]) : -500338645)) <= (~var_6)));
                var_14 = (max(var_14, (((!(arr_1 [3]))))));
            }
            var_15 = (var_9 - var_10);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_16 = (((((((arr_11 [i_0] [i_0] [i_4]) ? 540588920 : 2147483647)) >> (((arr_18 [i_0] [i_6 + 4] [i_4] [i_5 - 3] [i_6] [17]) + 2025378142)))) > -98587430));
                            var_17 *= ((((arr_3 [i_0] [1] [i_3]) || (arr_3 [i_4] [i_3] [i_0]))) ? (!var_4) : (max((arr_3 [i_0] [i_6 + 1] [i_4]), (arr_3 [14] [i_3] [i_4]))));
                            arr_21 [i_0] = arr_13 [i_0] [i_0] [i_4];
                            arr_22 [i_4] &= var_2;
                        }
                    }
                }
            }
            arr_23 [i_3] [i_0] = (((!(arr_9 [i_0] [i_0]))) ? (((arr_17 [i_3] [i_3] [i_3] [i_0]) + var_2)) : ((var_9 | (max(var_10, (arr_18 [i_0] [i_0] [0] [i_0] [i_0] [i_3]))))));
        }
    }
    var_18 = -301438862;
    #pragma endscop
}
