/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_9 [i_0] = -1;
            var_17 = (!3189016396);
            var_18 = var_0;
            var_19 = (min(var_19, (arr_5 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_14 [6] [i_2] |= (arr_7 [i_0] [i_0] [i_0]);
            var_20 = ((((max(((((arr_0 [i_2]) ? var_14 : var_8))), (max(-16832, 15787106458887170892))))) || ((max(var_9, ((min(var_10, (arr_7 [i_0] [15] [i_0])))))))));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_17 [0] = ((!((max((!-5), (arr_0 [i_3]))))));
        var_21 = (arr_7 [i_3] [i_3] [i_3]);
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        arr_22 [i_4] = ((var_2 / ((max(((max((arr_10 [i_4] [i_4] [i_4]), var_7))), 3189016396)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_33 [i_4] [0] [i_7] [0] [i_6] [i_7] = (((((-(arr_20 [i_4 - 2])))) ? (((arr_20 [i_7 + 1]) ? (arr_20 [i_5]) : (arr_20 [i_4]))) : (arr_20 [i_4 - 1])));
                        arr_34 [i_7] = ((!((min((arr_19 [i_5]), 1)))));
                    }
                }
            }
        }
    }
    var_22 = var_13;

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_37 [i_8] = (min((arr_3 [i_8]), (((min(var_16, var_9)) ^ var_16))));
        arr_38 [i_8] = ((((max((arr_2 [i_8]), (arr_2 [i_8])))) ? (max(3189016396, (arr_2 [i_8]))) : ((~(arr_2 [i_8])))));
        var_23 |= (((3189016385 || 19123) ? ((9140910723680673241 ? 1105950895 : -9140910723680673242)) : (max(0, -9223372036854775804))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_24 = 5674;
        var_25 = (min(var_1, (arr_3 [i_9])));
        var_26 = (((((max((arr_5 [i_9] [i_9]), (arr_11 [i_9]))))) + (--3189016390)));
        var_27 = (min(var_27, (((((min((arr_3 [10]), (arr_39 [i_9])))) ? (((-((((arr_10 [i_9] [8] [i_9]) < (arr_3 [12]))))))) : (min((max(9140910723680673231, -1106076382839400248)), (((1 < (arr_3 [2])))))))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_28 += (arr_13 [i_10] [8]);
        arr_45 [i_10] = (((max(7193283806142609230, 3189016385)) * ((var_16 ^ (-9140910723680673228 | 3098470884)))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        var_29 = (min(var_29, (~var_14)));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                {
                    arr_54 [i_12] = ((1062323780 ? ((((var_3 && (arr_46 [i_11] [i_12]))))) : ((-(arr_46 [i_11] [i_11])))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_30 = var_0;
                                var_31 = (arr_58 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11 - 1] [i_11 - 1]);
                            }
                        }
                    }
                    var_32 = ((~(arr_59 [i_11 - 1] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 - 1])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        var_33 ^= (((arr_53 [i_16] [i_16] [i_16]) ? (arr_53 [i_16] [i_16] [i_16]) : var_5));
        arr_63 [i_16] = var_0;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    {
                        var_34 = (arr_66 [i_17]);
                        arr_73 [i_17] [i_18] [i_17] [i_17] [i_20] = 9144868055323619143;
                    }
                }
            }
        }
        arr_74 [i_17] = (arr_50 [3] [i_17]);
        var_35 = (min(var_35, (((-(arr_46 [i_17] [i_17]))))));
        arr_75 [i_17] = (((arr_49 [i_17]) ? (((arr_61 [i_17]) << 7)) : (~2047)));
        arr_76 [i_17] = ((var_11 ? (!12834) : var_6));
    }
    #pragma endscop
}
