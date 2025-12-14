/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [13] [1] [i_2] = min((((arr_8 [i_0 + 2] [i_0] [i_1 - 3] [i_2]) << (-var_7 - 100))), (max((min((arr_2 [i_2]), 2784818477345755256)), (arr_1 [i_1 - 2]))));
                    arr_10 [i_0] [11] [i_0 + 1] = (((arr_7 [i_0 - 3] [i_0 - 2] [i_0 - 2]) << (7232796471460614228 - 7232796471460614200)));
                    var_10 = ((~(min((arr_4 [i_2]), (arr_7 [i_0 - 2] [i_1] [i_1])))));
                }
            }
        }
    }
    var_11 = -86;
    var_12 = (var_9 > -1895384611636047278);
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            {
                var_14 = 1;
                arr_16 [9] [14] [i_3] = -8501953772671013917;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_15 = (((((arr_22 [11] [i_4 - 2] [1] [i_4]) ? (arr_8 [i_3] [i_4 + 1] [i_6] [13]) : var_6)) | (min(var_3, var_6))));
                            arr_23 [i_6 + 1] [i_5] [6] [i_3] = ((((min((arr_22 [i_3] [i_4 + 1] [i_5] [i_6 + 1]), (arr_2 [i_3])))) ? (((!(arr_6 [i_6])))) : (arr_21 [i_5])));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_16 -= (((arr_4 [i_4]) | (arr_4 [i_3])));
                                var_17 = (max(var_17, ((((arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? 909393590256750571 : (arr_3 [i_4 + 1]))))));
                            }
                            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                            {
                                arr_29 [i_3] [14] [i_3] [i_3] [i_3] [i_3] [i_3] = (((max(((min(-7618533738547589821, var_3))), 240)) << (((max((arr_0 [i_4 + 1]), 1)) - 9134753472372496120))));
                                arr_30 [i_3] = (max((min(-2832, 21)), (((arr_8 [i_3] [i_3] [1] [1]) ^ ((min(29, -6769772970526434505)))))));
                                arr_31 [i_3] [i_3] [i_5] [i_5] [10] [i_6] [i_8] = (!var_2);
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                            {
                                var_18 ^= (arr_0 [i_3]);
                                arr_34 [i_3] [4] [i_5] [i_6] = (arr_17 [i_6 + 1] [i_5] [i_4 - 1] [5]);
                                var_19 = ((!(arr_3 [i_4 + 3])));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    arr_37 [8] [2] [8] = (max(((max((((-2482513149520731704 > (arr_26 [i_10])))), (max(var_7, var_0))))), (min((max((arr_7 [i_3] [i_4 + 1] [i_3]), 52)), (arr_15 [i_4 + 2])))));
                    var_20 -= (arr_27 [i_10] [15] [i_3] [i_3]);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_21 = (((arr_11 [i_3] [i_4 + 1]) / (arr_11 [i_3] [i_4 + 3])));

                    for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_22 = 0;
                        var_23 = (min(var_23, var_2));
                        arr_45 [i_3] = 12288;
                        var_24 = (49 / 28933);
                        var_25 = (((arr_33 [i_3] [i_12 + 3] [i_11] [0] [i_4 + 3] [i_11]) != (arr_14 [i_4 - 1] [i_4] [i_12 - 1])));
                    }
                    for (int i_13 = 1; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_3] [i_3] [i_11] [i_3] = var_5;
                        arr_49 [i_3] [i_4 + 2] [i_11] [i_4 + 2] = (((arr_32 [i_13 + 3] [i_4 + 1] [i_11]) ? (arr_39 [i_3] [i_3] [4] [i_3]) : ((239 ? 11 : (arr_32 [i_3] [i_4] [i_3])))));
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_26 = arr_0 [i_4 - 2];
                        arr_52 [i_3] [i_4 + 1] [i_11] [i_11] |= (((arr_13 [i_4] [i_4 + 2]) ^ (arr_6 [i_3])));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            {
                                arr_59 [i_3] [i_16] [i_11] [i_3] [i_16 - 1] = var_3;
                                var_27 = (((arr_32 [i_4 - 1] [i_4 + 1] [i_16 + 1]) >= 17247));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_28 ^= (((arr_66 [i_19 + 3] [2] [i_19 + 3] [i_19 + 1] [i_19 + 2]) || 31878));
                                var_29 = ((((-32750 ? 18446744073709551599 : 10248))) ? (-75 <= 5446700702570730670) : (arr_33 [4] [4] [i_4 + 3] [i_18] [i_19 + 1] [14]));
                                var_30 = (-102 - 22557);
                            }
                        }
                    }
                    arr_68 [1] [i_4] [1] = ((1 ^ (arr_15 [i_4 + 3])));
                    var_31 = (min(var_31, (arr_55 [i_3] [i_4 - 1] [i_17] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
