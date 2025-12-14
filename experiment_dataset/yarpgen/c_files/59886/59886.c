/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_11 |= ((~(((arr_7 [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_2] [i_1]) : 10733))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_4] = (max((((54803 ? 0 : 0))), (max((((arr_6 [i_3] [i_1] [i_3]) ? var_9 : (arr_12 [i_0]))), (arr_7 [i_0] [i_0] [i_0])))));
                            arr_14 [i_0] [i_1] [i_2] = ((!((max(52698, (arr_3 [i_3]))))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_12 = (((max(((1 ? 0 : var_6)), (arr_6 [i_0] [i_0] [i_5]))) | 10733));
                arr_18 [i_5] [i_1] [i_0] [i_0] = ((+(((arr_10 [i_5] [i_1] [i_5] [i_0] [i_1]) ? var_8 : ((~(arr_17 [i_0] [i_1] [i_5] [i_5])))))));
            }
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                arr_22 [i_0] [i_1] [i_1] [i_6] = ((((min((max(1, 19508)), (arr_17 [i_1] [i_1] [i_1] [i_0])))) ? var_6 : 1141858311));
                var_13 = (((((~((max((arr_12 [i_1]), var_3)))))) ? (arr_1 [i_1] [i_6]) : 1));
                var_14 *= (max(54802, (max(((var_7 ? -18085 : var_2)), (((arr_19 [i_6] [i_1] [i_0]) ? var_1 : var_2))))));
                arr_23 [i_0] = (arr_10 [i_0] [i_1] [i_6] [i_1] [i_0]);
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [i_7] [i_8] [i_9] |= 1;
                            var_15 += var_9;
                        }
                    }
                }
            }
            var_16 -= var_0;
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_35 [i_10] [i_0] = (max(((((!(arr_33 [i_10] [i_0]))))), var_2));
            arr_36 [i_0] = (arr_19 [i_0] [i_10] [i_10]);
            arr_37 [i_10] [i_0] = (((arr_17 [i_10] [i_10] [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_8 [1] [i_0] [1] [1])));
            var_17 = (min(var_17, (~6765)));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_18 = (min(((min(var_0, ((var_6 ? var_6 : 1))))), ((var_5 ? (arr_5 [i_0] [i_10] [i_11] [i_10]) : var_9))));
                        var_19 = (max(var_9, (max((min(var_4, (arr_16 [i_0] [1] [i_11] [i_11]))), 0))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            arr_46 [i_0] [i_13] = var_1;
            var_20 = ((-(arr_3 [i_13])));
            arr_47 [i_13] [i_0] |= 43196;
            arr_48 [i_0] [i_13] = var_7;
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_21 = (max(var_21, ((((arr_4 [i_0]) - (((-(((arr_40 [i_14]) ? (arr_7 [i_0] [i_0] [i_14]) : 32767))))))))));
            arr_53 [i_0] [i_0] [i_14] = -730;
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_58 [i_15] [i_16] [i_0] [i_15] [i_16] [i_0] |= (max((arr_10 [i_0] [i_14] [i_0] [i_16] [i_16]), (var_1 == 1)));
                        var_22 -= 669973696351264423;
                        var_23 = (max(var_23, ((max(((~(~65535))), var_8)))));
                        arr_59 [i_15] [i_14] [i_16] [i_16] [i_14] [i_15] |= (max(-3910, (arr_33 [i_0] [i_0])));
                        arr_60 [i_0] [i_15] [i_15] [12] = ((((!(arr_15 [i_0] [i_14] [i_15] [i_14]))) && ((!(~var_6)))));
                    }
                }
            }
        }
        arr_61 [i_0] = ((-((32767 ? ((min(var_3, (arr_21 [i_0] [i_0] [i_0])))) : var_0))));

        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            var_24 = var_0;
            arr_64 [i_17] [i_17] [i_17] |= (((arr_1 [i_17] [i_0]) ? (((!((max(var_7, var_2)))))) : ((((-(arr_31 [i_0] [i_17] [i_17] [i_0] [0])))))));
            var_25 |= -4;
            var_26 = (min((min(-1975, (min(var_5, (arr_44 [i_17] [i_0]))))), var_0));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    {
                        var_27 &= (arr_41 [i_17] [i_18] [i_17]);
                        arr_69 [i_0] [i_0] [i_18] [i_19] = (((((-111 ? ((max(-3910, 1))) : 1141858311))) ? (!1) : ((~(arr_42 [i_0] [i_0] [i_0] [i_0])))));
                        arr_70 [i_18] [i_18] [i_18] [i_0] [i_17] [i_0] |= arr_21 [i_0] [i_0] [i_19];
                        var_28 -= ((-(!-1)));
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            arr_75 [i_0] [i_20] [i_20] = (-(min(((min(1, (arr_7 [i_0] [i_0] [i_0])))), 144106391982833664)));
            var_29 = (max(var_29, (!1)));

            /* vectorizable */
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                var_30 -= (arr_11 [i_0] [i_0] [i_0] [i_20] [9] [i_0]);
                var_31 -= ((28030 ? 3899 : -32756));
                arr_79 [i_0] [i_20] [i_21] [12] = var_6;
                var_32 = (min(var_32, ((((~(arr_67 [i_0] [i_20] [i_0] [i_21])))))));
                var_33 -= var_5;
            }
        }
        /* vectorizable */
        for (int i_22 = 1; i_22 < 12;i_22 += 1)
        {
            var_34 = 32763;
            var_35 = (max(var_35, 5));

            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                var_36 += ((-(arr_43 [i_0] [1])));
                var_37 |= var_1;
                var_38 = (~var_7);
            }
            arr_85 [i_22] = var_3;
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 16;i_24 += 1)
        {
            arr_88 [i_0] [i_0] [i_24] = ((~(arr_72 [i_0] [i_0])));
            arr_89 [7] [1] [i_0] = (arr_24 [i_24] [i_24] [i_24] [i_24]);
            var_39 &= ((-3894 ? ((var_8 ? var_3 : (arr_1 [i_0] [i_0]))) : 1));
        }
    }
    #pragma endscop
}
