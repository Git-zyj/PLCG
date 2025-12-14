/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (arr_9 [i_1] [i_1 + 2] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 += (arr_1 [i_0]);
                                var_14 = (min(var_14, ((((arr_0 [i_2]) != (arr_5 [i_4] [6] [i_4]))))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_1] = (((arr_13 [i_0] [i_1 - 1] [i_1 + 1]) | (arr_13 [i_0] [i_1 + 2] [i_1 - 1])));

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            arr_19 [5] [5] [5] [5] [i_1] [5] = (arr_17 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [2] [i_6 + 1] [i_1]);
                            arr_20 [i_0] [i_6] [i_6] [i_6] |= ((-(arr_8 [i_2] [i_5 + 1] [i_6] [i_5 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_15 += (((arr_21 [i_1] [i_1] [i_7] [i_1 + 2] [i_1 - 2]) * ((((arr_13 [i_1] [i_5] [i_5]) == (arr_17 [i_0] [i_1 - 2] [i_2] [i_1 - 2] [i_7] [i_5] [i_0]))))));
                            var_16 = (max(var_16, (((~(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        var_17 = (((((arr_12 [i_0] [i_0] [i_0] [i_5]) - (arr_7 [i_0] [i_1] [i_1]))) / ((((arr_7 [i_0] [i_2] [i_1]) == (arr_7 [8] [12] [i_1]))))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_1] = (arr_22 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3]);
                        arr_29 [i_8] [i_8] [i_8] [i_8] |= (((arr_10 [i_0]) > (arr_10 [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_1] [i_1] = (2243003720663040 | 37202);
                        var_18 = (arr_27 [i_0]);
                        var_19 = (max(var_19, (arr_10 [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_20 = (arr_17 [i_1 - 3] [i_1 + 2] [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1]);
                        arr_37 [i_0] [i_1] [i_1] [i_10] = (((arr_13 [i_1] [i_2] [2]) + ((((arr_10 [i_1]) > (arr_21 [i_0] [i_0] [i_1] [6] [3]))))));
                        var_21 = (((((arr_10 [i_1]) + (arr_3 [i_2]))) + -10));
                    }
                    arr_38 [i_0] [i_0] [i_2] [4] |= ((-(arr_4 [i_0])));
                }
            }
        }

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            arr_42 [i_0] [i_11] [11] = ((-(arr_21 [i_0] [i_0] [i_11] [i_11] [i_11])));
            arr_43 [i_0] [i_0] [i_0] &= (arr_2 [11]);
            var_22 = (min(var_22, (arr_32 [i_0] [7] [7] [13])));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_46 [i_0] [i_12] = (arr_35 [i_0] [i_0] [i_0] [i_0]);
            arr_47 [9] [9] = (~(arr_40 [i_12] [i_12]));
            var_23 = (min(var_23, ((((arr_8 [i_0] [i_12] [i_0] [i_12]) % (arr_4 [i_0]))))));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 12;i_14 += 1)
                {
                    {
                        arr_52 [i_0] [i_0] [i_13 + 1] [i_14] = ((arr_32 [i_0] [i_12] [i_12] [i_0]) % (arr_24 [i_0] [i_0] [4] [i_14] [4] [i_14 - 4]));
                        arr_53 [i_0] [i_0] [i_0] [i_0] = ((!(arr_36 [i_0] [i_0] [i_13 - 1] [6])));
                        arr_54 [i_0] [14] [i_0] = (((arr_3 [i_0]) - (arr_18 [10] [10] [i_0] [10] [7])));
                        arr_55 [i_12] [i_12] = -193009092;
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {
            arr_59 [i_0] &= (-(arr_30 [i_0] [i_0] [i_0] [i_0]));
            var_24 = (arr_23 [13] [i_0] [i_15] [14] [i_15]);
        }
        arr_60 [i_0] [0] &= (arr_9 [i_0] [i_0] [14]);
        arr_61 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
    {
        arr_66 [i_16] = (max((arr_65 [i_16]), (arr_64 [i_16])));
        var_25 += ((~(min(((~(arr_65 [6]))), ((min((arr_63 [i_16] [6]), (arr_62 [2]))))))));
        arr_67 [i_16] = ((~(arr_63 [i_16 + 1] [i_16])));
    }
    for (int i_17 = 1; i_17 < 21;i_17 += 1) /* same iter space */
    {
        var_26 ^= (-(arr_62 [11]));

        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_27 = (max(var_27, (((min((arr_68 [i_17] [i_17 + 1]), (arr_68 [i_17 - 1] [i_17 + 1])))))));
            arr_73 [i_17] [i_17] |= (max((max(4101958189, -20552)), ((-1 & (arr_65 [12])))));
            var_28 = ((~(min((arr_70 [i_17 - 1] [i_17 - 1] [i_17]), (arr_65 [20])))));
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            arr_76 [i_17 + 1] [9] [i_17 + 1] = ((~((((arr_62 [i_19]) || (arr_72 [i_17]))))));
            var_29 -= (arr_69 [i_17 + 1]);
            arr_77 [i_17] [i_19] [i_19] = (max(18446744073709551609, 193009096));
        }
    }
    var_30 |= (((-(min(193009107, var_4)))));
    #pragma endscop
}
