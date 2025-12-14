/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_5 ^ ((max(((12403 ? 34 : 0)), (var_12 || var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((((arr_2 [i_0]) ? ((max((arr_2 [i_1]), var_3))) : (12402 % 12403)))), (((arr_4 [i_0] [i_1]) ^ 2165624264))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_11 [i_0] [i_2] [i_2] = max((4678991236456396492 != 1569966223), (max(((var_10 ? (arr_4 [i_0] [i_0]) : (arr_3 [i_1]))), (var_3 * var_8))));
                    var_16 = (min(var_16, (arr_0 [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (arr_14 [i_0] [i_1] [i_2] [i_0] [i_4]);
                                var_18 = var_13;
                                var_19 = (((((arr_1 [i_0 + 1] [i_0 - 3]) & var_3)) | ((((arr_0 [i_0 + 1] [i_0 + 1]) / (arr_7 [i_0 + 1] [i_1] [i_2] [5]))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_1] [13] = 13767752837253155124;
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_20 = (min(((((arr_8 [i_0 - 2] [i_0]) ? (arr_8 [i_0 - 1] [i_1]) : (arr_5 [i_0 + 1])))), (max((arr_7 [i_1] [i_1] [i_5] [i_1]), (34 & 13767752837253155123)))));
                    var_21 = (min(1569966223, (((arr_14 [i_0] [i_1] [i_0] [i_0] [i_5]) ? (arr_14 [i_0] [i_0] [i_1] [i_5] [i_5]) : (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2])))));
                    var_22 += (arr_8 [i_0 - 1] [i_0 - 1]);
                    arr_21 [i_1] [i_5] = var_14;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_30 [i_6] [i_1] [i_6] [i_7] [i_6] = (max(13767752837253155123, 24));
                                var_23 ^= 18446708889337462784;
                                arr_31 [i_8] [i_7] [i_6] [i_6] [i_6] [i_1] [i_0] = (((((-3136611909246672137 / 1569966223) / (arr_1 [11] [i_1]))) % (arr_20 [i_8])));
                                var_24 = (max(36939, 192));
                            }
                        }
                    }
                    arr_32 [i_0] [12] [i_6] = (arr_23 [i_0 + 2] [i_0 - 1] [9]);
                    arr_33 [i_6] [4] [i_1] [i_6] = 18446708889337462796;
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_37 [15] [i_1] = (((((((-(arr_8 [i_1] [i_9])))) ? ((0 - (arr_10 [i_0 + 2] [i_1]))) : var_14)) - (arr_9 [i_9] [i_9] [12])));
                    var_25 = var_5;
                }
                var_26 = (min(var_26, (arr_22 [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    var_27 = ((var_6 >> (var_3 + 16498)));
    #pragma endscop
}
