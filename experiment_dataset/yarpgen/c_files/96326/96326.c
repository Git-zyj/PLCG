/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (arr_2 [16])));
        var_14 += (max(((((-814848822 ? (arr_0 [18]) : var_1)))), (min((((!(arr_1 [i_0])))), (arr_1 [22])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        var_15 = (min(var_15, (((var_3 ? (((!var_4) ? (arr_5 [i_1]) : 814848838)) : (((((max(var_8, (arr_5 [i_1])))) != (arr_0 [4])))))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_12 [i_2] = (arr_9 [i_2]);
        arr_13 [i_2] = (arr_8 [i_2]);

        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_16 = (min(var_16, var_3));
            var_17 = ((((max((((!(arr_14 [10])))), var_7))) ? var_4 : ((~(((arr_15 [i_2] [11]) ? (arr_8 [i_3]) : var_5))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                arr_22 [i_2] [i_5] [i_5] = (((arr_20 [i_5]) ? (arr_18 [5]) : (arr_18 [i_5])));
                arr_23 [i_5] [i_4] [i_5] = ((var_9 ? -var_5 : (arr_4 [i_5])));
                var_18 = (max(var_18, (arr_6 [i_2])));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_29 [i_4] [i_4] [i_6] [i_7] [i_4] = (arr_9 [i_7]);
                    arr_30 [i_2] [i_4] [10] = ((1 ? var_3 : var_12));
                    var_19 = -118;
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_20 = (arr_17 [7] [3]);
                    arr_34 [i_2] [4] [i_6] [i_8] = ((((((-916764465 + 2147483647) >> (((arr_32 [i_2] [i_8] [i_6] [i_4] [i_2] [i_2]) - 17807))))) ? (arr_21 [12] [12]) : (arr_19 [i_8] [i_4])));
                    arr_35 [i_2] [14] [i_6] [i_8] = ((-(arr_31 [i_2] [i_2] [i_8] [11])));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_38 [14] [i_4] [i_4] = (!var_2);
                    var_21 = ((2 ? (805306368 % 916764464) : 15));
                    var_22 = (((arr_4 [i_9]) == (arr_4 [i_6])));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_23 = (max(var_23, (arr_10 [i_4])));
                        arr_43 [i_9] [i_9] = ((-(((arr_4 [i_4]) % (arr_0 [i_4])))));
                        arr_44 [14] [i_4] &= var_9;
                        var_24 = (max(var_24, (((var_11 ? (arr_4 [i_2]) : 814848848)))));
                        var_25 |= (arr_18 [i_4]);
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_26 = (max(var_26, (arr_26 [i_6])));
                        var_27 = (arr_5 [i_11]);
                        arr_47 [i_2] [i_4] [i_4] [i_9] [i_11] = (((((1188631231 ? var_0 : 916764467))) ? (~var_4) : ((((arr_11 [i_2] [i_2]) << (((arr_42 [1]) - 47038)))))));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_28 = (min(var_28, (((!(arr_39 [i_9] [i_4] [i_9] [i_9] [i_12]))))));
                        arr_51 [i_12] [i_9] [i_12] [i_6] [i_4] [i_4] [i_12] = (arr_11 [i_2] [i_4]);
                        arr_52 [i_2] [i_12] [i_2] [i_2] [i_2] [10] = ((var_6 ? (arr_16 [i_2] [i_4] [i_12]) : (arr_26 [i_2])));
                    }
                    arr_53 [i_9] |= ((!(arr_10 [i_2])));
                }
                arr_54 [i_2] [i_2] |= (!var_2);
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
            {
                var_29 = (arr_4 [i_13]);
                var_30 |= ((!((!(arr_26 [i_2])))));

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    arr_61 [i_2] [4] [4] [0] [i_14] [i_14] &= ((!(arr_10 [i_14])));
                    var_31 = (((arr_40 [i_2] [1] [i_2] [i_2] [i_2] [i_2] [9]) ? (arr_21 [i_2] [i_2]) : ((110 ? (arr_32 [i_2] [5] [i_13] [i_13] [i_2] [i_13]) : (arr_2 [i_13])))));
                    arr_62 [i_2] [i_13] [i_2] [i_2] = (((arr_25 [i_2] [i_13]) ? var_12 : ((((arr_41 [9] [i_4] [i_4] [i_4] [i_13] [i_14] [i_14]) ? var_10 : (arr_21 [i_4] [i_2]))))));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_32 ^= (((arr_57 [i_2] [i_4] [i_15]) ? (arr_15 [i_4] [i_4]) : var_4));
                    var_33 = (min(var_33, (((!-87) ? (arr_21 [12] [16]) : (arr_28 [i_2] [i_4] [i_4] [i_13] [i_15] [i_4])))));
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_34 = ((!(arr_39 [0] [i_4] [15] [1] [i_17])));
                        var_35 |= ((((((arr_37 [3] [i_16] [i_2] [i_4] [i_2]) ? 96 : (arr_66 [i_2] [12] [i_4] [i_13] [12] [i_17])))) ? (arr_68 [i_16] [i_13] [i_4] [i_2]) : ((var_5 ? var_11 : -1073741824))));
                    }

                    for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                    {
                        var_36 += (!var_5);
                        var_37 = (max(var_37, (arr_1 [i_18])));
                    }
                    for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
                    {
                        arr_76 [i_2] [15] [i_13] [i_13] [16] [i_2] [12] = (((arr_41 [i_2] [i_2] [i_2] [i_2] [i_16] [i_4] [i_2]) || (((arr_41 [i_2] [i_2] [i_2] [5] [5] [3] [i_2]) && (arr_28 [1] [i_4] [i_13] [i_16] [i_4] [i_16])))));
                        var_38 = (max(var_38, ((((arr_70 [i_2] [i_4] [0] [i_16] [i_19]) + (((!(arr_49 [i_19] [i_4] [i_4] [i_2])))))))));
                    }
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        var_39 &= ((var_4 ? (arr_25 [i_2] [i_20]) : 1));
                        arr_80 [i_2] [i_2] [i_2] [i_2] [i_2] [i_13] [i_2] = (((arr_41 [i_13] [i_2] [i_13] [i_13] [i_13] [0] [i_2]) ? (arr_41 [2] [i_16] [i_13] [i_13] [i_4] [i_4] [i_2]) : (arr_41 [i_20] [i_16] [i_16] [i_13] [i_4] [i_2] [i_2])));
                        arr_81 [i_2] [i_4] [i_13] [i_16] [i_4] [i_4] [i_13] = var_6;
                    }
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        var_40 ^= (((16383 - var_4) ? (arr_67 [i_4] [i_16] [7]) : (arr_17 [i_13] [i_21])));
                        var_41 = (min(var_41, ((((arr_65 [i_2] [i_21] [i_13] [i_21]) ? (arr_65 [i_4] [10] [15] [15]) : (arr_65 [i_4] [i_4] [i_4] [i_16]))))));
                        var_42 |= ((var_2 ? var_2 : (arr_5 [i_2])));
                    }
                    var_43 = (max(var_43, var_4));
                }
                var_44 = ((-(arr_14 [i_4])));
            }
            var_45 = (((arr_14 [i_2]) ? (arr_14 [i_2]) : (arr_14 [i_4])));
        }
        var_46 = 3968;
    }

    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {
        var_47 &= 1;
        var_48 = 12288;
        var_49 ^= ((((((((arr_85 [i_22]) ? var_7 : var_5))) ? (((-2147483647 - 1) ? (arr_18 [6]) : var_11)) : (!1188631234))) < ((((((arr_63 [i_22] [i_22]) - 115)) >= (arr_18 [i_22]))))));
    }
    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {
        arr_89 [i_23] &= (((((!((((arr_88 [i_23]) ? (arr_2 [8]) : var_2)))))) <= (((arr_3 [i_23] [i_23]) ? (max(var_11, (arr_5 [i_23]))) : ((min(var_8, var_7)))))));
        var_50 = (min(var_50, (arr_1 [i_23])));
    }
    #pragma endscop
}
