/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (min(((-var_9 / (1 - var_5))), (arr_2 [9])));
                arr_4 [i_0 - 3] = var_8;
                arr_5 [i_0] [21] [i_0 - 1] = 10208;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = -4637726088256035016;
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_0] = (min(((((min((arr_10 [i_3] [i_2] [21] [i_0]), (arr_6 [i_0] [i_1] [1])))) || (-51 + 11308))), (arr_0 [9])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_12 = ((((((min((arr_6 [i_5] [i_7 + 1] [i_8]), (arr_1 [0] [6])))) ? var_0 : (4048148122984733795 & -1))) / 3508886031));
                                arr_29 [i_4] [i_8 + 1] [i_8] [12] = (((((!(arr_19 [i_4] [i_5] [9])) ? (3 >= var_7) : (((!(arr_21 [i_4]))))))));
                            }
                        }
                    }
                    arr_30 [i_4] [i_4] [13] = 15380;
                }
            }
        }
    }
    var_13 = (min(var_4, (~9801)));

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_14 = 65533;
        arr_33 [i_9] [i_9] = 4294967270;
        var_15 = var_8;
        arr_34 [i_9] = ((-127 ? ((72 ? (arr_25 [i_9] [i_9]) : -3)) : ((((arr_6 [i_9] [19] [i_9]) | -11)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_49 [i_10] [1] [i_12] [i_13] [i_14 - 1] = 53629;
                                var_16 = 7;
                                arr_50 [i_10] [i_11] [i_14] = arr_21 [i_10];
                            }
                        }
                    }
                    var_17 = 1;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 0;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_59 [i_10] [5] [i_12] [5] [i_15] [0] = 27299;
                                arr_60 [i_10] [4] [i_10] [7] [i_10] = -1;
                            }
                        }
                    }
                }
            }
        }
        arr_61 [i_10] = ((((((arr_18 [i_10] [i_10] [i_10]) ? 248 : var_9))) ? var_2 : (!113)));
        var_18 = ((-113 > ((((arr_0 [i_10]) || var_2)))));
        arr_62 [i_10] = ((var_7 + (arr_45 [7] [i_10] [i_10] [i_10])));
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_19 = ((-((((((arr_22 [1] [i_17] [i_17] [i_17]) ? 13882002329799428079 : (arr_64 [i_17] [i_17])))) ? ((25 ? (arr_20 [i_17] [i_17] [4] [i_17]) : 0)) : (1 != var_8)))));
        var_20 = -2652219717118464758;
        var_21 ^= (arr_14 [i_17] [i_17]);
    }
    #pragma endscop
}
