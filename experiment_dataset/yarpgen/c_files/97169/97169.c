/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, ((((arr_1 [i_0]) < var_2)))));
        var_12 = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (var_7 | var_5)));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_13 = (min(var_13, (((!((max((((var_10 ? (arr_1 [1]) : var_7))), (arr_3 [i_1 - 3] [i_1])))))))));
        var_14 = ((+((((arr_2 [i_1 + 1]) > (arr_2 [i_1 - 3]))))));
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_15 = ((((var_9 != (arr_1 [i_2])))) > (arr_0 [1] [i_2 + 2]));

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_2] = (((arr_8 [i_2] [i_3 + 2]) ? 23306 : 1));
            var_16 = (arr_5 [i_2] [i_2]);

            /* vectorizable */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                var_17 = (((arr_10 [i_4 + 2] [i_4] [i_4 - 1]) ? (arr_10 [i_4 - 1] [i_4] [i_4 - 1]) : (arr_10 [i_4 + 2] [i_4] [i_4 + 2])));
                arr_14 [i_2] [2] [2] = 1;
                arr_15 [10] [i_3 - 1] [i_2] = ((-(arr_8 [i_2] [i_4 + 2])));
                var_18 -= (arr_12 [i_2] [i_4 + 2] [i_4] [10]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_19 -= (((((var_2 ? var_10 : var_4))) ? (arr_6 [i_3]) : (arr_8 [i_3] [i_3])));
                arr_19 [i_5] [i_3] [i_3] [i_2] &= (((arr_1 [i_2 - 1]) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 + 2])));
            }
            var_20 = (min(var_20, ((((((!(arr_1 [i_2 + 2])))) / -35)))));
            arr_20 [i_2] = arr_3 [i_2 + 2] [6];
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_2 [1])));
                            arr_32 [11] [i_2] [i_7] [i_8] [i_9] = arr_2 [i_2];
                            var_22 += (arr_25 [i_6 - 3] [i_6] [i_7] [i_8]);
                            arr_33 [i_2] [i_6 - 2] [i_7] [i_8] [i_2] = (arr_12 [i_6 - 2] [i_8] [4] [1]);
                        }
                    }
                }
            }
            arr_34 [i_2] = (arr_5 [i_2] [i_2]);
            var_23 = (arr_5 [i_2] [i_2]);
            arr_35 [i_2] [i_2] = (arr_27 [i_2 + 2]);
        }
        var_24 |= (arr_0 [i_2] [i_2]);
    }
    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_39 [3] &= (arr_10 [i_10 + 1] [i_10] [i_10]);
        var_25 = ((((max((arr_22 [i_10 + 2] [i_10 - 1] [i_10 + 1]), var_5))) ? (arr_28 [2] [i_10 + 2] [2]) : (((((var_6 ? var_0 : (arr_13 [i_10] [0])))) ? (max(4294967271, var_6)) : (arr_7 [i_10 + 2])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((((((((max((arr_7 [i_14]), (arr_44 [i_14] [0] [i_12] [0] [i_14])))) ? (arr_12 [i_10 + 1] [i_11] [i_13] [i_14]) : (arr_41 [i_10] [i_11] [i_13])))) ? (((min(28, 1020592233589750869)) / 1)) : var_0)))));
                                var_27 = (max(var_27, (max(var_0, (min(1, (min((arr_13 [10] [i_11]), var_0))))))));
                                var_28 |= (max(((max((arr_3 [i_10 - 1] [i_10]), (arr_3 [i_10 - 1] [8])))), (min(var_0, (arr_3 [i_10 + 2] [i_10])))));
                            }
                        }
                    }
                    arr_52 [8] [i_12] [5] [i_12] = (((arr_24 [i_12] [i_11] [i_10 + 1]) != (arr_17 [i_12])));
                    var_29 ^= (arr_18 [i_10 - 1] [i_11]);
                }
            }
        }
    }
    var_30 = (max(var_30, var_3));
    #pragma endscop
}
