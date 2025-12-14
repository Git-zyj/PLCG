/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 < ((-(~var_7)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = ((((min(var_12, (arr_3 [i_0] [i_1] [5]))) - 114)));
            var_15 = (max(var_15, (((var_13 ? ((min((((arr_3 [i_0] [1] [4]) <= var_0)), (57409 < 536346624)))) : (arr_4 [i_1]))))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                arr_9 [i_1] [i_1] [7] = (((((((min(var_1, 65535))) ? (var_6 == var_13) : (((arr_6 [i_0] [i_1] [13] [i_0]) ? (arr_3 [i_0] [i_1] [i_2 + 1]) : (arr_8 [3] [i_1] [i_1])))))) ? (((~(2147418112 - var_7)))) : (((((-2147483647 - 1) | -1)) ^ (arr_3 [i_2 + 1] [i_1] [i_2 + 1])))));
                arr_10 [i_1] [i_1] [i_2 + 1] [i_2 + 1] = ((-(arr_0 [i_2 + 1] [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_16 = var_4;
                            var_17 = (min(var_17, var_4));
                        }
                    }
                }
                arr_15 [i_1] [22] [i_1] [i_2] = min(65507, 65520);
            }
        }
        var_18 |= (-2147483647 - 1);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = (max(var_2, 77));
        var_19 = (arr_7 [i_5] [i_5] [i_5] [1]);
        arr_21 [i_5] = -var_4;
    }
    var_20 = (max(var_20, var_9));
    #pragma endscop
}
