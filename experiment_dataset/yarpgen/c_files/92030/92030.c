/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_13 ^= ((var_7 ? var_7 : (arr_2 [6] [i_0])));
        var_14 = var_6;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, (arr_12 [i_1] [i_1] [i_1] [i_1])));
                        var_16 = (min(var_16, ((min((arr_1 [i_1]), ((((((arr_8 [i_4]) ? (arr_0 [i_1]) : 33240))) ? (arr_7 [i_2]) : var_3)))))));
                    }
                }
            }
        }
        arr_16 [i_1] = var_8;
        arr_17 [10] [i_1] = (min((((-((-(arr_6 [24])))))), -var_3));
        arr_18 [1] [14] = ((var_2 ? (arr_7 [i_1]) : 52706));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_23 [i_6] [i_5] = ((((min((arr_4 [i_1]), (arr_3 [i_6] [i_5])))) ? (((arr_15 [1] [18] [6] [i_5] [6] [i_5]) ? ((min(var_0, (arr_10 [18] [4] [18] [i_5])))) : var_7)) : (arr_14 [i_1] [i_6] [24] [1] [i_1])));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_17 = (arr_10 [i_1] [i_5] [5] [i_5]);
                        var_18 |= (arr_0 [i_1]);
                        var_19 = (max(var_19, (((((min((arr_5 [i_1]), -1823266416996147386))) ? (arr_19 [i_1] [1] [1]) : 179)))));
                    }
                    for (int i_8 = 4; i_8 < 22;i_8 += 1)
                    {
                        var_20 = ((((-(arr_9 [i_1] [5])))) ? ((((arr_5 [i_8 + 3]) ? (arr_5 [i_8 - 4]) : (arr_5 [i_8 - 1])))) : 3881160165664271320);
                        arr_29 [i_6] [i_6] = (min((min(1, (~77))), var_5));
                    }
                    var_21 += (~119);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_22 &= (arr_3 [i_10] [i_10]);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_47 [i_10] [i_11] [i_13] |= (((arr_19 [i_9] [i_12] [i_11]) ? (arr_3 [i_10] [1]) : var_12));
                            var_23 = (min(((-2 ? 0 : -361464377)), (arr_6 [i_13])));
                            arr_48 [1] [i_10] [i_11] = ((var_4 ? 16020561018447678995 : (((-(min(var_2, (arr_37 [1]))))))));
                        }
                    }
                }
            }
            arr_49 [i_10] = var_9;
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_24 ^= (arr_15 [i_9] [9] [1] [14] [i_14] [19]);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 20;i_16 += 1)
                {
                    {
                        var_25 = (min(var_25, (((~((~(arr_34 [1]))))))));
                        var_26 -= (min(28452, 228));
                    }
                }
            }
            var_27 = (min(var_27, ((((arr_15 [i_9] [i_14] [2] [i_9] [1] [i_9]) ? var_1 : ((~((min(var_4, (arr_34 [7])))))))))));
            arr_59 [i_9] = var_3;
        }
        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {

            for (int i_18 = 1; i_18 < 19;i_18 += 1) /* same iter space */
            {
                arr_65 [i_9] [8] [8] |= (arr_42 [i_9] [1] [i_17] [i_18 - 1]);
                /* LoopNest 2 */
                for (int i_19 = 4; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_71 [i_17] [i_17] [i_18] [i_19] [i_20] = (arr_54 [18] [1] [i_17]);
                            arr_72 [18] [i_17] [7] [18] [i_17] [i_19] [i_17] = var_5;
                            arr_73 [1] [i_17] = arr_28 [i_17] [i_9];
                        }
                    }
                }
            }
            for (int i_21 = 1; i_21 < 19;i_21 += 1) /* same iter space */
            {
                arr_77 [i_9] [i_17] [i_9] = ((~(arr_15 [i_9] [i_9] [1] [i_9] [i_17] [i_9])));
                arr_78 [i_17] [i_17] = 182;
            }
            var_28 ^= (arr_34 [6]);
            arr_79 [i_9] [i_17] = (arr_3 [i_17] [i_17 + 1]);
            var_29 -= ((~((-(arr_54 [i_17 + 1] [i_17 + 1] [16])))));
        }
        arr_80 [i_9] [i_9] = (-(((((arr_24 [i_9] [i_9] [i_9] [12]) ? 389412698 : var_9)))));

        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {
            arr_83 [i_22] [i_22] = (((arr_58 [i_9] [5] [i_22] [i_22]) ? 66571993088 : (((-(arr_14 [i_9] [i_9] [i_9] [11] [i_22]))))));
            arr_84 [4] [4] [i_22] = (arr_6 [i_9]);
            arr_85 [i_22] = -var_5;
            arr_86 [i_22] = 26;
            arr_87 [i_22] = (arr_40 [i_9] [15] [i_22] [6] [i_22]);
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_30 = (((arr_5 [i_9]) ? (min(-3088774201896036429, var_12)) : (arr_45 [19])));
            var_31 = ((-(arr_63 [i_9] [14] [i_23])));
        }
    }
    var_32 = -var_8;
    #pragma endscop
}
