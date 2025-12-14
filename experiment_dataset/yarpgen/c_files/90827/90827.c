/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_12, var_5));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_3 [i_0] [i_0 + 2])));
        var_15 = (max(var_15, ((min(((-(min(7581, (arr_0 [i_0]))))), (~2056330877))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 ^= var_7;
        arr_7 [i_1] [i_1] = max((-5173339256087360821 + 7567), (arr_6 [i_1] [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_17 = (max(var_17, -7583));
                        var_18 = arr_8 [i_2] [i_3] [i_2];
                        arr_15 [i_1] [i_1] [i_1] = ((-((-7596 + (var_7 > var_3)))));
                        arr_16 [i_1] = (7588 - 1515661830178036177);
                        arr_17 [i_4] [i_2] [i_2] [i_4] [i_1] = (((((93 << (255 - 244)))) ? ((max(2320955682517498719, 1111839610))) : (~7772520333365586488)));
                    }
                }
            }
        }
        arr_18 [i_1] = (((((var_0 ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1] [i_1])))) && (!var_8)));
        var_19 = (min(var_7, var_12));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_20 = (min(var_20, (~3895337878566348611)));
        var_21 = (min(var_21, (arr_3 [i_5] [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_22 = ((28 / ((var_3 + (arr_1 [i_9])))));
                            var_23 &= ((178 + var_7) || var_4);
                            var_24 |= (arr_26 [i_6 - 1] [i_6] [i_6 - 1] [i_8] [i_7] [i_8]);
                            var_25 = (min(var_25, (arr_20 [i_8] [i_9])));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_26 &= var_12;
                            arr_32 [i_5] [i_8] [i_5] [i_5] &= (((arr_0 [i_6 - 2]) ^ (arr_0 [i_6 - 3])));
                            var_27 ^= 2658098638152801223;
                            var_28 -= var_7;
                        }
                        var_29 = (max(var_29, 255));
                        var_30 |= (~6045291616584279575);
                        var_31 = var_6;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    arr_38 [i_5] [i_5] [i_12] [i_12] = ((65535 ? 1792 : var_0));
                    var_32 = (max(var_32, (((~(arr_13 [i_12] [i_12] [i_11 - 2] [i_12] [i_11 - 2] [i_12]))))));
                    var_33 += var_4;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_34 = (max(var_34, 1));
                                arr_43 [i_5] [i_11] [10] [i_14] [i_14] [i_12] [i_12] = -7552;
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_46 [i_15] [i_12] [i_11 + 1] [i_5] [i_5] [i_5] &= (var_11 - var_4);

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_35 = var_5;
                            var_36 ^= ((~(arr_1 [i_11 + 2])));
                        }
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            var_37 += -1;
                            arr_52 [1] [1] [i_5] = var_12;
                            arr_53 [i_5] [i_17] [i_12] [0] = ((var_4 | (arr_5 [i_5])));
                        }
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_38 = (((arr_30 [i_18] [i_18] [0] [i_12] [i_18]) || (arr_41 [i_18] [i_11 - 3] [i_5] [i_18] [i_11 + 2] [i_12])));
                        var_39 = ((var_2 & (((!(arr_47 [i_12] [i_12] [i_12] [i_11] [i_5]))))));
                    }
                    for (int i_19 = 2; i_19 < 11;i_19 += 1)
                    {
                        var_40 = (arr_25 [i_5] [i_5] [i_11] [i_11] [i_12] [i_19]);
                        var_41 = (max(var_41, 255));
                    }
                    for (int i_20 = 0; i_20 < 0;i_20 += 1)
                    {
                        var_42 &= (((2147483647 ? (arr_9 [i_5] [i_11]) : -8671196898511442550)));
                        var_43 ^= (((((arr_0 [i_12]) | 4260661264207276099)) >= var_0));
                    }
                }
            }
        }
    }
    #pragma endscop
}
