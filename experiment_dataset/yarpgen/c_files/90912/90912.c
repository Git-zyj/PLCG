/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(16687775723697013301, (((-(~27))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((max(53094, var_7)) != ((max((arr_1 [i_0 - 1]), (!141))))));
        var_12 = (min(var_12, ((var_0 ? 53090 : ((((~2865289165) > 1)))))));
        var_13 = (((((arr_0 [i_0] [i_0]) ? 1 : 16687775723697013301))) ? ((max((((arr_1 [i_0]) ? var_2 : var_7)), 120))) : (min(0, -6424727388878115451)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_14 = ((-(arr_6 [i_1 - 1])));

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_15 = (var_8 || 1254168094);
            var_16 = (~var_3);

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 |= ((var_9 << (var_5 - 20026)));
                            var_18 = 780255727;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 ^= (var_1 & 0);
                            var_20 = 2571090326;
                        }
                    }
                }
                var_21 = ((-((var_4 ? 10359 : var_4))));
                arr_26 [18] [1] [16] = (var_7 == var_5);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_22 = (2720294530 + 1);
                            var_23 ^= ((1 ? 1 : (arr_15 [i_1] [i_1 - 2] [i_3] [i_2 + 2])));
                            var_24 = (min(var_24, (((!(arr_28 [i_1 + 1] [i_1] [i_1 + 1] [i_2 + 3] [i_8 - 2]))))));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_25 = (min(var_25, (((var_5 ? (~1) : -5989653126029400939)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_26 = (~1758968350012538314);
                            var_27 -= (((((arr_20 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1]) ? (arr_18 [12] [12] [12] [i_10] [12] [i_10] [9]) : var_9)) & var_7));
                            var_28 = 1;
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_29 += var_8;
            var_30 += 0;
            var_31 -= ((-603590167 ? var_8 : var_2));
        }
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 22;i_16 += 1)
            {
                {
                    arr_52 [i_14] [i_16] [i_14] [i_14] = 1;
                    var_32 = (min((var_5 * 1), (arr_43 [i_14] [i_16 + 1])));
                }
            }
        }
        arr_53 [i_14] = -125;
    }
    #pragma endscop
}
