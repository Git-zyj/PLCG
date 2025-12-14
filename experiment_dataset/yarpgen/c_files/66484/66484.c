/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_15 = ((((!(arr_0 [i_0] [i_1]))) ? (arr_4 [i_0]) : (((-(arr_3 [i_0]))))));
            var_16 = ((~((~(arr_1 [i_1])))));
            arr_5 [i_0] = ((~((~(arr_1 [i_1])))));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_9 [2] |= (arr_2 [1] [i_2]);
            var_17 = ((!(((-(arr_1 [i_0]))))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_18 = (max(var_18, ((((arr_6 [i_0] [0]) ? ((~(arr_0 [6] [6]))) : (((!(arr_10 [i_0] [i_3])))))))));
            arr_12 [i_0] [i_0] = (((~(arr_11 [i_0] [10] [i_0]))));
        }
        arr_13 [i_0] [i_0 - 1] = (arr_3 [i_0]);

        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            var_19 = (max(var_19, 1));

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_20 = (min(var_20, (((~((-(arr_11 [i_0] [1] [4]))))))));

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_23 [i_0] = ((-(arr_21 [i_5])));
                    arr_24 [i_0] [i_0] [0] [1] [i_6] = (arr_6 [7] [i_4]);
                }
            }
            var_21 = (-(arr_16 [i_0] [i_0]));
            var_22 = (((-(arr_21 [i_0]))));
            var_23 = ((-(((!(arr_20 [6] [i_0] [6] [i_4]))))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_24 = (((-(arr_27 [i_0] [i_0] [i_7]))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_34 [i_0] [1] [i_0] [i_8] [1] = (((arr_2 [i_0] [i_9]) ? (((-(arr_32 [i_0] [i_0])))) : (arr_11 [i_0] [i_7] [i_0])));
                        var_25 = ((!(((-(arr_17 [i_8] [i_9]))))));
                    }
                }
            }
            arr_35 [i_0] = ((-((-(arr_8 [1] [i_0] [i_0])))));

            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                arr_39 [i_0] [i_0] [i_10] = (!(((-(arr_37 [i_0] [i_0] [i_7] [i_10])))));

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_26 = ((((((arr_2 [i_0] [i_7]) ? (arr_19 [i_0] [5] [1] [i_11]) : (arr_1 [i_11])))) ? (arr_28 [i_0] [i_0] [i_10] [i_0]) : (((arr_20 [i_0] [i_7] [i_10] [i_11]) ? (arr_38 [i_0] [i_7] [3] [i_0]) : (arr_18 [i_0] [i_0])))));
                    var_27 = (arr_17 [i_7] [i_7]);

                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        arr_45 [i_0] [i_7] [i_0] [i_10] [i_11] [i_12] [i_12] = ((-(arr_38 [i_7] [i_10] [1] [i_0])));
                        var_28 = (((-(arr_40 [i_0] [i_7] [i_0] [i_12]))));
                    }
                }
                var_29 = ((!(arr_7 [i_0] [i_10])));
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_30 = (arr_38 [9] [i_7] [9] [i_0]);
                arr_48 [i_0 + 1] [10] [i_13] [8] |= (~(((arr_40 [0] [7] [i_13] [1]) ? (arr_47 [8] [10]) : (arr_25 [i_0]))));
            }
        }
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_51 [i_14] [i_14] = (((arr_49 [i_14]) ? (arr_50 [i_14] [i_14]) : (arr_49 [2])));
        arr_52 [i_14] = ((-(((!(arr_49 [i_14]))))));
        var_31 -= (~((max(3419924204261303561, 3570))));
    }
    /* vectorizable */
    for (int i_15 = 4; i_15 < 15;i_15 += 1)
    {
        arr_57 [1] |= ((~(((!(arr_50 [i_15] [10]))))));
        var_32 = (max(var_32, (arr_50 [i_15] [1])));
        var_33 = arr_50 [i_15] [11];
    }
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 19;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                {
                    var_34 = (max(var_34, (((~(~-1))))));
                    var_35 = min((((min((arr_59 [i_17] [i_18]), (arr_64 [i_16] [9] [9]))))), (max((arr_63 [i_17] [i_16] [i_17]), (arr_64 [i_16 + 1] [i_16] [i_16]))));

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_36 = (((arr_63 [i_16] [i_16] [i_16]) ? (((((max((arr_62 [i_16] [i_17] [i_18]), (arr_58 [20])))) ? (((arr_65 [i_16 + 1] [i_17] [i_18] [i_19]) ? (arr_59 [i_16] [i_17]) : (arr_60 [i_16 + 2] [i_16] [3]))) : (arr_68 [i_16] [1] [i_16] [i_18] [i_19] [1])))) : (min(((~(arr_62 [i_16] [i_16] [i_16]))), (min((arr_67 [i_17] [i_17] [i_17]), (arr_58 [i_16])))))));
                        arr_69 [i_16] [i_18] [i_19] = ((-(((~(arr_66 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))));
                    }
                }
            }
        }
    }
    var_37 *= (~var_3);
    var_38 = (max(var_38, ((((((var_11 ? var_1 : var_10))))))));
    var_39 = (min(((((var_4 ? var_7 : var_4)))), ((~(~var_7)))));
    #pragma endscop
}
