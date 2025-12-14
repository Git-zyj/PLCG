/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_11 = (-2147483647 - 1);
                        arr_10 [i_0] = var_0;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_2] [12] = (arr_9 [i_0 + 1] [i_0] [i_4] [i_2 - 3] [i_0 + 1] [i_2 - 3]);
                            arr_19 [i_0] [i_0] [i_5] = 13353232733369118506;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_12 &= (min((max(115, (max((arr_8 [i_0 + 1] [i_1] [i_2 - 1] [i_4]), var_2)))), var_8));
                            var_13 = (((~var_2) ? (((13393604390799694754 ? -117487487 : (-32767 - 1)))) : (((arr_12 [i_0] [i_2 + 1] [i_4] [i_0]) ? 8299499760826763000 : (arr_21 [i_0] [i_1] [i_6])))));
                            var_14 = (max((((arr_0 [i_2 - 2] [1]) ? (arr_0 [i_0] [20]) : (arr_0 [i_1] [i_2 - 1]))), var_10));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_15 = (-127 - 1);
                            var_16 = (max(var_16, (arr_11 [i_4] [i_4] [i_4])));
                            var_17 = (~var_5);
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_0] = 117487494;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [i_1] [i_0] = ((!((max((arr_4 [i_2 - 1] [i_0 + 1] [i_0]), var_2)))));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_33 [i_0] [17] [16] [i_8] [i_0] [3] = var_9;
                            var_18 = (arr_6 [i_2 + 1] [i_0] [i_2 - 2]);
                        }
                    }
                    var_19 = (min(var_19, var_6));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            {
                arr_38 [i_11] = var_10;
                var_20 += (((((((((arr_14 [i_10] [i_10] [i_10] [i_10] [9] [9]) ? 117487494 : var_3))) ? (min((arr_22 [24] [i_11 - 2] [i_11 - 2] [i_11] [i_10]), -4295430765674788349)) : (arr_2 [i_10])))) <= var_5));

                /* vectorizable */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_41 [i_11] [i_11] = -113;
                    arr_42 [i_10] [i_11] = (((arr_1 [i_11 - 2] [i_11 - 3]) ? -115 : (arr_11 [i_11] [i_11 + 1] [4])));
                    var_21 += (arr_5 [i_10] [i_10] [i_10] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
