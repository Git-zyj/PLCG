/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_0);
    var_13 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    var_14 = var_7;
                    var_15 &= var_2;
                    var_16 += ((~(arr_3 [i_0] [i_1] [i_2 - 4])));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = -var_9;
                        arr_10 [i_0] [5] [i_0] [i_3] [3] = (arr_3 [i_0] [i_0] [i_0]);

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_1] [i_1] [i_0] [i_1] [i_1] = ((((arr_2 [i_0]) ? 144115188075593728 : (arr_7 [i_0] [i_0] [i_3] [i_3]))) * ((((((arr_8 [i_0] [i_1] [i_0] [i_3]) + 2147483647)) >> (((arr_8 [i_1] [i_2 - 3] [6] [i_4]) + 391793406))))));
                            arr_14 [i_0] [i_0] [6] [3] [i_0] = (((((((arr_0 [i_0]) & var_6)) + 9223372036854775807)) << (1 - 1)));
                        }
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (((arr_15 [i_2 - 3] [i_5 + 1] [i_5 + 1]) ^ (arr_15 [i_2 - 2] [i_5 - 1] [i_5 - 1])));
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] = var_11;
                        var_18 = (~var_1);
                    }
                    arr_18 [13] [i_0] [i_2] = arr_8 [0] [i_0] [0] [i_0];
                }
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    var_19 ^= 8028159002255086217;
                    var_20 = ((((arr_7 [i_0] [i_0] [i_6] [i_6 - 1]) ? (arr_12 [i_0] [i_0] [i_6] [i_6 + 1] [i_0]) : (arr_7 [i_0] [i_1] [i_1] [i_6 + 3]))) + (arr_8 [14] [14] [i_1] [i_6]));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_21 = (max((((arr_5 [i_0]) ? -415868825 : (((arr_7 [i_0] [i_0] [i_7] [i_7]) ? (arr_8 [i_7] [i_7] [i_1] [i_0]) : 1624903447)))), (arr_8 [i_1] [i_1] [i_1] [i_0])));
                    var_22 *= (arr_21 [16] [i_1] [i_7] [i_7]);
                    var_23 = (arr_5 [i_0]);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            {
                                var_24 *= (arr_25 [i_0] [i_1]);
                                arr_35 [i_0] [i_1] [i_8] [i_8] [i_8] = (arr_6 [i_0] [i_0]);
                            }
                        }
                    }
                    arr_36 [i_0] [i_0] [i_0] [i_0] = 0;
                }
                arr_37 [i_0] [i_0] [i_1] = (((arr_25 [i_0] [i_0]) & (arr_21 [i_0] [i_0] [4] [i_1])));
            }
        }
    }
    #pragma endscop
}
