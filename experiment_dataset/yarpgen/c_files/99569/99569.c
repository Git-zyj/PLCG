/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 -= arr_14 [i_0] [16] [i_0] [i_0] [i_0];
                                arr_15 [i_0 - 1] [9] [i_0] [i_0] [i_0] = ((-(((((-5506432462161878239 ? (arr_10 [11] [i_1] [i_3] [i_4]) : 0))) ? (((((arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_3] [24]) < (arr_13 [i_2 + 1]))))) : ((~(arr_13 [i_4])))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_19 [i_0] [23] [22] [i_5] [i_0] = (min(-1369308552, 5506432462161878239));
                        arr_20 [i_0] [i_0] = (((arr_18 [i_0] [15] [i_0] [i_1] [i_2] [0]) ? (arr_5 [i_0] [i_1] [24]) : var_12));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        arr_23 [23] [20] [i_6] = (((arr_0 [2]) ? (arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (!-5506432462161878239)));
                        var_18 = (((((2147483647 ? -6074057649622934366 : 1712145557))) ? ((((var_6 >= (arr_16 [i_0] [1] [i_2] [3] [i_6]))))) : (((arr_12 [i_2] [i_1] [i_6 - 1] [13] [13]) ? 260096 : 2147483647))));
                    }
                    var_19 = (min(var_19, (((((((-1335069102 + 2147483647) >> (18446744073709551615 - 18446744073709551607)))) ? (((arr_0 [i_2]) ? (arr_11 [i_0] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_0 - 3]) : (arr_2 [i_0] [8] [i_0 - 4]))) : ((-(arr_22 [i_0]))))))));
                    var_20 = ((5506432462161878261 ? ((-(arr_5 [8] [8] [i_2]))) : (~1)));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = (((~var_9) ? ((((min(-2147483643, var_15)) >= ((min(var_11, var_0)))))) : var_5));
    #pragma endscop
}
