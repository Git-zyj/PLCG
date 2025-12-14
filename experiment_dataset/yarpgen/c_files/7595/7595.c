/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 49631;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(var_11, var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 -= ((~((-(arr_4 [i_2 + 2])))));
                    arr_8 [i_0] = (min(0, 1));
                    var_13 = (min(var_13, ((min(var_4, ((~(arr_5 [4]))))))));
                    var_14 = ((((max((var_2 - var_2), (((arr_3 [i_0] [15] [i_0]) * (arr_7 [8] [i_0] [i_1] [i_1])))))) ? (var_1 >> -var_6) : ((((((max(1858464492, 26636))) || (var_9 | var_9)))))));
                }
            }
        }

        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            var_15 -= ((var_9 ? (~var_4) : ((~(arr_10 [i_3 + 2] [i_3 + 4])))));
            arr_11 [i_0] = (max(2436502826, 1688023194));
            var_16 -= (var_0 * 1);
            arr_12 [i_0] = ((min((!0), (~var_6))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = 2436502803;
            arr_16 [i_0] [i_0] [i_4] = (1858464492 | 4294967295);

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_17 = (((((((arr_14 [i_6 + 1]) <= (arr_14 [i_6 + 1]))))) != ((((((arr_24 [i_0] [i_4] [i_0] [i_0]) ? var_6 : var_3))) ? (8017 / -1074134376173450906) : ((max((arr_6 [i_0] [i_4] [i_0]), var_3)))))));
                            var_18 ^= 0;
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = min(((((((!(arr_3 [i_0] [14] [i_0]))))) - 10841289023177572962)), var_9);
                        }
                    }
                }
                arr_26 [i_0] [i_4] [i_0] = (max(1065353216, var_8));
            }
        }

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_19 = ((~(min(5027, (arr_17 [i_0] [i_0])))));
            var_20 *= ((~(((((max(var_3, var_5)))) / (arr_23 [i_0] [i_0])))));
            var_21 = (arr_27 [i_0]);
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_31 [i_0] = ((!(((3718150526 ? 2606944122 : 15912)))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    {
                        var_22 *= (-(((arr_14 [i_11 + 1]) / (arr_18 [i_11 - 1] [i_11 + 3] [i_11 + 1]))));

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_23 = (min(var_23, (((-((min((arr_22 [i_11] [7] [i_11 + 3] [i_11 - 1]), (arr_22 [i_11 + 3] [i_11] [i_11 + 3] [i_11 + 1])))))))));
                            var_24 -= ((-(min((((var_2 ? (arr_32 [i_10]) : 70))), (arr_33 [i_0] [i_0])))));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_25 = (min(var_25, (((var_2 << (1987251176 + 47))))));
                            var_26 = (min(var_26, ((max((max(var_5, 536608768)), (((var_8 - (arr_22 [i_9] [i_9] [i_11 + 2] [i_11 + 2])))))))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_27 *= (arr_43 [i_11 + 3] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_10]);
                            arr_46 [9] [i_0] [i_10] [7] [7] [7] = (~var_1);
                        }
                    }
                }
            }
            arr_47 [i_0] [i_0] [i_0] = ((((((min(var_2, (-32767 - 1)))) ? (arr_2 [i_0] [14] [i_0]) : (var_6 / var_7))) * (((((max((arr_23 [5] [5]), var_8))) && (!7177179240116341660))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_50 [i_0] [i_0] = ((~(arr_9 [i_0] [i_0])));
            var_28 = ((var_4 & (arr_3 [i_0] [i_0] [1])));
            var_29 *= (((arr_38 [i_0]) >= var_3));
        }
    }
    #pragma endscop
}
