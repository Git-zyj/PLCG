/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((!((((arr_4 [i_0] [i_1]) ? 95 : (arr_4 [i_0] [i_1]))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_13 *= ((((max((arr_0 [i_0]), (arr_4 [i_0] [i_0])))) * (arr_0 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_4] = ((-(min((arr_9 [15] [i_2] [i_4]), var_7))));
                                arr_16 [i_0] = (((min(((-18 ? var_8 : var_10)), -18)) | ((17 * ((min((arr_7 [1] [i_2] [i_2] [i_2]), 89)))))));
                                var_14 = var_5;
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [i_1] [i_2] = (arr_13 [i_0] [i_1] [i_1] [i_1] [i_2]);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_15 = (((((((-89 ? 7072797366422283326 : -90))) ? (arr_0 [i_0]) : (arr_10 [i_0] [i_1] [i_5] [i_1]))) != ((min((max((arr_14 [i_5] [1] [i_1] [i_1] [i_0]), var_7)), ((min(1, 18))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_5] [i_6] [i_5] [i_7] = (((((arr_11 [i_0] [i_1] [i_6 + 1] [8] [i_7] [i_5]) / 75)) - (((-90 + (arr_1 [i_6]))))));
                                var_16 -= min(-108, -80);
                                var_17 = (((((-56827168 <= 5598) + 1)) % 91));
                            }
                        }
                    }
                    var_18 = var_5;
                    var_19 = (arr_20 [i_0] [7] [i_5]);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_36 [i_10] [i_10] [15] [i_10] [i_10] [i_10] [i_10] = (min((((((var_11 << (var_0 + 906084892)))) ? ((((arr_3 [11] [i_1] [i_8]) ? 1 : 17))) : -56827152)), 56827168));
                                arr_37 [i_10] [i_10] [i_10] [i_8] [i_10] [11] [i_0] = ((56827169 | (max(15, ((-(arr_18 [i_0] [i_10])))))));
                            }
                        }
                    }
                    arr_38 [9] [i_8] [i_0] [i_0] = (1217442844 * (max((arr_27 [i_0] [i_0] [i_8] [i_8]), -var_10)));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_20 = ((-(((arr_27 [i_11 - 1] [i_11 - 4] [i_12] [i_12]) ? var_9 : (((arr_0 [i_11]) ? -18 : 20))))));
                                var_21 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
