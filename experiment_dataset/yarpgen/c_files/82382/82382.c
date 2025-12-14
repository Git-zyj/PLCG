/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_5, var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 += (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = var_5;
                    var_15 = (arr_2 [i_1]);
                }
            }
        }
        arr_8 [i_0] = ((-(arr_7 [i_0 - 1] [i_0 - 1])));
        arr_9 [i_0 - 1] [i_0 - 1] = (((arr_6 [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? var_9 : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
        var_16 = (arr_7 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                var_17 = ((+(max(var_5, (((arr_11 [i_4 + 1]) ? (arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2]) : (arr_12 [i_3] [i_3 + 1] [i_3 + 1])))))));
                arr_15 [i_4 + 4] [i_4 + 4] [i_3] = 65535;
                var_18 += (((arr_12 [i_3] [i_4 + 1] [i_4 + 4]) ? (max((arr_10 [i_4] [i_4]), -1669876423)) : 6039));
                var_19 = (min(var_19, (arr_12 [i_3 + 2] [i_3 + 2] [i_3 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 = var_10;
                                arr_28 [i_8] [i_5] = (min(1669876423, 18446744073709551596));
                            }
                        }
                    }
                    var_21 = (-1669876424 - 1023);
                }
                var_22 = arr_24 [i_5] [i_6] [i_6] [i_6] [i_5] [i_5];
            }
        }
    }
    #pragma endscop
}
