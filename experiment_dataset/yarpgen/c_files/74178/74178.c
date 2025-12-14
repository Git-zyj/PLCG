/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(2348086750, (((7 ? 24576 : 24575)))));
                var_17 = ((0 ? 1 : (min(7, (arr_0 [16])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = (max(var_18, (~var_10)));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_19 = (83 && 1);
                    var_20 -= (((arr_0 [9]) % (var_7 != 1)));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_17 [i_2] [i_3] [i_5] = var_1;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_21 = ((((min(((var_1 ? (arr_13 [i_3] [i_5] [i_5]) : (arr_10 [i_7]))), (((1 ? -570498171 : -10399)))))) ? var_9 : -65));
                                var_22 = (max(var_22, ((var_13 ? 16845 : (max(((var_9 ? var_14 : (arr_10 [4]))), ((min((arr_18 [i_2] [i_2] [i_2]), 9889)))))))));
                            }
                        }
                    }
                    arr_24 [0] [i_5] |= (min((max((arr_0 [i_3]), (!1))), ((max(1, 7)))));
                }
                for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    var_23 = (73 / 13);
                    arr_27 [i_8] [i_8] [i_8] [5] = 4294967293;
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_24 = 0;
                    var_25 = ((-24575 + ((((max(1, var_11)))))));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_35 [i_3] &= (20371 ^ ((((min(-75, (arr_30 [i_2] [i_3] [i_9])))) * (((!(arr_6 [11])))))));
                        var_26 = (((-(30 + var_8))) - -var_4);
                    }
                    var_27 = (((((!(arr_21 [i_2 + 1] [i_2] [i_9 - 1] [i_2]))) ? (!var_11) : -4165844480426540811)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_28 = (arr_22 [i_11] [i_11] [0] [i_11] [i_11] [i_11]);
        var_29 = (((var_12 ? var_5 : (arr_6 [9]))));

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_30 = (min(var_30, 0));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_31 = 167;
                            var_32 |= (((arr_32 [i_11] [i_12] [i_13] [i_13] [i_15]) - 4165844480426540811));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_33 = (arr_41 [i_16] [i_14 - 1] [i_12] [i_11]);
                            var_34 -= ((~1) ? 3304157788 : (arr_22 [i_14] [i_14 - 1] [i_14] [i_14] [i_14] [i_11]));
                            var_35 = (min(var_35, (!-1039054370)));
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_36 *= (arr_0 [22]);
                            arr_51 [1] [i_12] [i_13 - 1] = ((1 ? 45 : 1763230196));
                            arr_52 [i_11] [i_14] [i_17] = (~var_6);
                        }
                        var_37 += 1;
                        var_38 = (max(var_38, (~var_9)));

                        for (int i_18 = 1; i_18 < 9;i_18 += 1)
                        {
                            var_39 = -23503;
                            arr_55 [i_11] [i_12] [i_13] [i_14] [i_14 - 1] [i_18] = ((var_12 ? (arr_32 [3] [i_12] [i_12] [i_12] [i_12]) : (arr_32 [i_11] [i_12] [i_13] [i_14 - 1] [4])));
                            arr_56 [i_11] [i_11] [i_11] [i_11] [i_11] = (arr_31 [i_13 + 1] [i_13 - 3] [i_14 - 1] [i_18 + 2]);
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            var_40 = ((-(var_14 / 1763230178)));
            arr_60 [i_11] [i_19] = 2147483647;
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 9;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    {
                        arr_69 [i_11] [i_11] [i_11] [i_11] = ((((1785646008 / (arr_66 [i_11] [i_19] [i_20] [10]))) ^ var_15));
                        var_41 -= var_7;
                    }
                }
            }
        }
        for (int i_22 = 1; i_22 < 9;i_22 += 1) /* same iter space */
        {
            var_42 = var_5;
            var_43 = ((20371 && (arr_54 [i_22 - 1] [i_22 - 1])));
            var_44 = (arr_26 [i_22] [i_11] [i_22 - 1]);
        }
        for (int i_23 = 1; i_23 < 9;i_23 += 1) /* same iter space */
        {
            var_45 = ((var_13 ? (arr_1 [i_23]) : (((1 && (arr_70 [i_11] [i_11] [i_11]))))));
            var_46 = (max(var_46, (!var_11)));
        }
        var_47 = ((~(arr_40 [i_11] [i_11])));
        var_48 = ((-3147985678 != (arr_54 [i_11] [i_11])));
    }
    var_49 = var_4;
    #pragma endscop
}
