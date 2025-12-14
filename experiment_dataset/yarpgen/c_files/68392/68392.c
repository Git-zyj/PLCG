/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-29102 ? var_19 : 1))) ? ((var_11 ? (((var_13 ? var_8 : var_0))) : -4142447151)) : ((((4047724669 && ((max(13201435865424292469, var_19)))))))));
    var_21 = 247242627;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (-var_8 * var_11);
        arr_4 [i_0 + 1] [i_0 + 1] = ((-(((arr_0 [i_0]) | (arr_1 [11])))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0 + 1] [i_1] = max((max((37908 % 27627), 12464880493587842866)), (((37908 ? (arr_6 [3] [i_0]) : ((((-127 - 1) != 8301349744807863852)))))));
            arr_8 [i_1] = ((((((arr_0 [i_1 - 2]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))) ? (((((arr_0 [i_1 - 1]) < (arr_0 [i_1 - 2]))))) : (arr_0 [i_1 - 2])));
            var_22 += ((45 ? (arr_1 [i_0]) : ((~(arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_16 [i_0] [i_0] = ((!(arr_0 [i_0 - 1])));
                var_23 = var_14;
                var_24 |= ((~(((~var_5) ? (arr_10 [i_3]) : (arr_10 [i_2])))));
                arr_17 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
            }
            var_25 = (max(var_25, (((((~(!var_0))) >= (((!(arr_13 [6] [i_2])))))))));
            var_26 += ((~(max(45, 8583346603686925773))));
        }
        var_27 = (max(var_27, var_14));
        var_28 = (min(var_28, ((max((((arr_1 [i_0 - 2]) ? var_11 : (((~(arr_12 [i_0] [5])))))), ((((((3702296802 ? 46 : 2829929408))) ? ((~(arr_1 [i_0]))) : (arr_1 [i_0])))))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_29 = (arr_20 [i_5]);
            var_30 &= (((((arr_9 [i_5] [i_5] [i_4]) ? var_8 : 2887256300970736797)) + ((((arr_21 [i_4]) ? (arr_19 [i_4] [i_4]) : 1645319098)))));
            var_31 = (max(var_31, (arr_6 [i_4] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    {
                        var_32 = arr_0 [i_4];
                        var_33 = ((~((-(arr_10 [i_4])))));
                        arr_28 [i_4] [10] [i_4] [10] |= (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_34 = ((((arr_23 [i_8 - 1] [i_8 + 2]) | (arr_23 [i_8 + 2] [i_8 + 2]))));
                    var_35 = var_4;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {

        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 4; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_36 = ((1338080649 ? 2065342805 : 45));
                            var_37 = ((27628 ? 122 : 37));
                            var_38 += (arr_43 [i_10] [i_10] [i_10] [i_10]);
                        }
                    }
                }
            }
            var_39 = (((arr_38 [i_10] [i_11 - 1] [3]) ? (arr_44 [i_10] [i_11 - 1] [15] [i_11]) : (arr_38 [i_10] [i_10] [i_11 + 2])));
            var_40 *= (~-1);
            var_41 *= ((1040 && (((var_18 ? var_16 : (arr_40 [i_10] [i_10]))))));
        }
        var_42 = (arr_42 [i_10] [i_10] [i_10]);
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 19;i_17 += 1)
            {
                {
                    var_43 *= (arr_54 [i_17]);
                    var_44 |= 35;
                }
            }
        }
        var_45 = ((-var_2 ? 13201435865424292486 : ((((arr_52 [i_15] [i_15] [i_15]) ? 179 : (min((arr_52 [i_15] [i_15] [i_15]), (arr_55 [i_15] [i_15] [i_15] [i_15]))))))));
    }
    var_46 = ((!(~var_11)));
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            {
                var_47 = (arr_61 [i_18] [i_18] [i_18]);
                var_48 = (max(167, 33205));
                arr_62 [i_18] [i_18] &= (((arr_60 [i_18] [i_19]) ? 2887256300970736797 : 220));
            }
        }
    }
    #pragma endscop
}
