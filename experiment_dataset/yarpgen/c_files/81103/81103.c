/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((962072674304 ? var_3 : 57208711)) + var_9))) ? ((~((min(1, var_2))))) : (((!var_3) | (1 == 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((~((((((arr_2 [13] [i_1]) << 1))) ? (((!(arr_3 [i_0] [i_1])))) : (((4062268445 > (arr_5 [i_0] [i_0] [i_0]))))))));
                arr_6 [i_1] = (((max((arr_1 [i_1]), (arr_0 [i_0]))) <= ((((!(arr_0 [i_0])))))));
                var_17 = (max(var_17, (arr_4 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                var_18 = (min(var_11, (min((arr_2 [i_3] [i_0]), 1))));
                                var_19 = (min(((!(arr_12 [8] [i_1] [i_2] [i_3] [i_1] [i_2] [i_2]))), ((!(((var_0 - (arr_11 [i_0] [i_0] [3] [i_0] [5] [i_0]))))))));
                            }
                            var_20 -= (+(((arr_13 [i_3] [i_2] [i_1] [i_0] [i_0]) | (arr_13 [12] [i_1] [i_2] [i_1] [i_0]))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_21 = (((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) == ((1 ? (arr_7 [i_5] [i_5]) : (arr_5 [i_5] [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_22 = ((~(arr_16 [i_7] [i_6])));
                    var_23 = (var_4 <= var_10);

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 ^= ((arr_7 [i_6] [i_8]) ? (arr_11 [i_8] [i_7] [i_5] [i_5] [i_6] [i_5]) : var_0);
                        var_25 ^= (arr_18 [i_6] [i_7] [i_8]);
                        arr_24 [i_7] [i_7] [i_6] |= ((var_2 ? (arr_2 [i_7] [i_6]) : (arr_16 [i_7] [1])));
                        arr_25 [i_5] [i_6] [i_5] [i_8] [i_8] = (arr_19 [i_5]);
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, (1 && 1)));
                        arr_28 [i_9] = ((!((((arr_13 [i_5] [i_5] [i_5] [i_5] [15]) % var_13)))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_27 = ((!(arr_13 [i_6] [i_7] [i_7] [i_6] [i_5])));
                            var_28 |= (arr_21 [i_6]);
                            var_29 |= (arr_32 [i_6]);
                            var_30 = ((~(arr_8 [i_5] [i_11])));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_31 = (max(var_31, (!1)));
                            arr_35 [10] [i_5] [i_10] [i_7] [i_10] [i_6] [i_5] = (((arr_5 [i_5] [i_10] [i_7]) >= (arr_5 [i_6] [14] [i_12])));
                            var_32 = (min(var_32, (((arr_12 [i_12] [i_12] [i_10] [i_5] [i_6] [i_5] [i_5]) ? (arr_12 [i_5] [i_5] [i_6] [i_6] [i_7] [i_10] [i_6]) : 25474))));
                            var_33 += (((arr_16 [i_6] [i_7]) ? (arr_10 [i_5] [i_5] [i_7] [i_7] [i_10] [13]) : var_2));
                        }
                        var_34 += (!(!var_13));
                        var_35 = (((arr_3 [i_5] [i_6]) * (arr_3 [i_5] [i_10])));
                        var_36 = (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_37 = (arr_4 [i_5]);
                        var_38 += var_14;
                    }

                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            arr_46 [i_14] = (arr_43 [i_14 - 2] [i_14 + 2] [i_14 - 1] [i_14 - 2] [i_14 + 1]);
                            var_39 ^= ((arr_34 [i_14 - 2] [i_14 + 2] [i_14] [i_14 + 2] [i_7] [i_5]) ^ (arr_34 [i_5] [i_6] [i_14 + 1] [i_14] [i_14 + 1] [i_7]));
                        }
                        var_40 += (((((arr_44 [i_14]) ? (arr_37 [i_5]) : (arr_12 [i_5] [i_6] [i_7] [i_7] [i_7] [i_14] [i_14 - 1])))) && var_8);
                        var_41 = (arr_0 [i_7]);
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_42 -= ((arr_1 [i_5]) ? (1 * var_7) : var_10);
                        var_43 += -1478663884;
                        var_44 -= ((-32763 ? (arr_48 [i_5] [i_7] [i_7] [i_7]) : (arr_48 [i_5] [i_6] [i_7] [i_5])));
                    }
                    var_45 = (arr_12 [11] [i_5] [i_7] [i_7] [i_6] [i_7] [i_7]);
                }
            }
        }
        arr_51 [i_5] = ((((((arr_38 [i_5] [5] [i_5] [i_5] [i_5] [i_5]) ? (arr_42 [i_5] [i_5] [5]) : var_2))) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) : (!68)));
        var_46 *= (arr_37 [i_5]);
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        var_47 &= (arr_52 [i_17]);
        var_48 = (min(var_48, (arr_54 [i_17] [i_17])));
    }
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        var_49 += (((arr_32 [i_18]) | (arr_49 [i_18])));
        var_50 = ((~(min(0, -var_9))));
        arr_58 [i_18] = ((((-((((arr_16 [i_18] [i_18]) && 1))))) % (arr_39 [i_18] [i_18])));
        var_51 = min(-10003, ((max((min(193, 64)), 1))));
    }
    #pragma endscop
}
