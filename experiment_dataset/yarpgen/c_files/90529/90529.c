/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 |= (min((arr_0 [i_0]), ((((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        var_20 = -var_13;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_21 += (-46 | (((var_18 != (arr_1 [i_1 + 2] [i_1 + 2])))));
            var_22 = ((((var_17 ? var_18 : var_17))));
            var_23 += (max(var_3, 1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_24 = 255;

                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] = (max(var_13, 0));
                            var_25 = (min(var_25, (((-(min(var_3, (arr_1 [i_2] [i_2]))))))));
                            var_26 = (!3);
                            var_27 = max((((max(var_3, var_13)))), (max(var_9, ((241 ? 14 : var_9)))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3 + 1] [10] [i_1] [i_5] = (arr_5 [i_1] [i_1]);
                            arr_20 [i_5] [i_3] [i_1] [i_1] [i_0] [i_0] = (max((arr_9 [i_0] [5] [5] [i_3] [16]), -707406946));
                            arr_21 [i_0] [i_1] [7] [i_3] [i_5] = 241;
                            var_28 ^= var_2;
                            var_29 *= ((((max((arr_7 [i_3 - 1] [i_3 + 1]), (arr_7 [i_3] [i_3 - 2])))) ? (((arr_7 [i_3 - 3] [i_3 - 2]) ^ (arr_7 [i_1] [i_3 - 1]))) : ((var_4 ? 1708671112 : var_9))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_30 = (var_9 ? ((((14 ? var_3 : var_2)))) : ((-((min(var_11, 30))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_29 [i_7] [i_6] [1] [9] = (max((arr_24 [i_0] [i_7]), ((((7801 / 1) ? (max(var_4, (arr_9 [1] [i_6] [1] [4] [1]))) : var_15)))));
                        arr_30 [i_0] [i_7] [i_8] = ((max((min(2926642703, var_13), var_10))));
                        arr_31 [i_0] [i_0] [i_7] [i_0] = (max(var_11, (-32767 - 1)));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_31 = 707406946;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_42 [i_0] [i_9] [i_10] [i_11] [i_12] [i_10] = ((((max((arr_27 [i_12] [i_10] [17]), (((~(arr_27 [i_9] [i_10] [7]))))))) ? ((min(242, 14))) : ((0 ? 160 : 19))));
                            var_32 = (min(var_32, (((-(max(((0 ? var_17 : (arr_6 [i_0] [i_0] [10] [i_0]))), (arr_10 [i_0] [11] [i_0] [i_11]))))))));
                        }
                    }
                }
            }
            arr_43 [i_0] |= (((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_9]), var_7))) ? -4294967295 : (min(var_17, (max(var_16, (arr_17 [18] [18]))))));
            var_33 += (arr_15 [i_0] [i_9] [i_9] [1] [1]);
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_34 = min((((((arr_34 [i_13] [i_13] [i_13]) ? (arr_35 [i_13] [1] [4]) : var_12)) & ((max((-32767 - 1), var_10))))), ((((((var_17 ? (arr_9 [i_13] [i_13] [i_13] [i_13] [i_13]) : 704349268))) || (((var_7 >> (65527 - 65518))))))));
        var_35 = (var_13 ? ((min(var_15, var_1))) : 2946342924);
    }
    var_36 = (max(var_36, (max(var_6, var_13))));

    for (int i_14 = 3; i_14 < 19;i_14 += 1)
    {
        var_37 = (min(var_37, ((min((arr_37 [i_14] [i_14] [i_14] [i_14 + 2] [1]), (max((arr_37 [6] [i_14 - 2] [i_14 - 3] [i_14 + 1] [16]), (arr_37 [10] [10] [i_14] [i_14 - 1] [22]))))))));
        arr_50 [10] &= 145;
        arr_51 [i_14] = (arr_15 [i_14] [i_14 - 2] [i_14] [i_14 - 2] [i_14]);
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_38 = (arr_53 [i_14]);
                    var_39 = (min(var_39, ((max(((max(19, (arr_25 [i_14 - 3] [i_14 - 1] [20])))), 797322498)))));
                }
            }
        }
    }
    #pragma endscop
}
