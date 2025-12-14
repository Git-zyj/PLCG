/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= (((min(var_0, (arr_1 [i_0] [i_0]))) * ((((arr_0 [i_0]) % (arr_0 [i_0]))))));
        var_14 *= (min(3027750556460118955, 1312205546));
        var_15 *= ((min(var_7, (arr_1 [9] [i_0]))) / (max(-8624759812203714916, 2147483647)));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_16 -= (max(((max(var_1, (arr_7 [i_1 - 1] [i_1 - 2])))), ((-1312205546 ? 0 : -82))));

                /* vectorizable */
                for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_17 &= (9223372036854775807 ^ 5050694243865719877);

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_18 |= ((var_6 ? (arr_10 [i_1 - 2] [i_5 + 1] [i_3 - 1] [i_2 + 2]) : (((var_7 ? var_0 : (arr_8 [i_1] [i_2] [i_3] [11]))))));
                        var_19 -= ((~(arr_14 [i_1 - 1] [12] [i_1] [i_1 - 1])));
                        var_20 = arr_14 [i_1] [i_2] [i_3] [7];
                        var_21 = (((arr_4 [i_5 + 1]) % (arr_4 [i_5 - 1])));
                        var_22 = (arr_1 [i_1] [i_1]);
                    }
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_23 |= var_0;
                    var_24 -= (min((((((((arr_7 [i_1] [i_6]) % var_11))) ? ((~(arr_2 [i_1] [i_2]))) : (arr_1 [i_1] [i_2])))), var_0));
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_25 = (min(281474976645120, (min(281474976645120, 13157442442114530519))));
                    var_26 = ((6854391629807548094 % (~2412)));
                }
            }
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                var_27 = (max(var_10, (((((-(arr_7 [i_1] [i_8]))) % var_10)))));
                var_28 = min(((var_0 / (arr_2 [i_2 + 1] [i_2 - 1]))), (min((arr_2 [i_2 - 1] [i_2 - 1]), (arr_23 [1] [1] [i_8 + 2]))));
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_29 = (54 ^ 1);
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_30 = (min((arr_1 [i_1 - 3] [i_2 + 1]), (min((min(var_1, var_7)), ((min(var_12, (arr_29 [i_2] [i_9] [i_10] [i_9]))))))));
                            var_31 = ((!((min((arr_14 [i_1] [i_1] [i_1] [i_1]), (arr_29 [i_1] [i_2] [i_10 - 1] [i_9]))))));
                            var_32 = (((arr_28 [i_11] [i_2] [1]) == ((max(var_0, (arr_17 [i_10] [i_10] [i_9] [i_10] [i_11] [1]))))));
                        }
                    }
                }
                var_33 = (min((min(var_10, -6854391629807548095)), 2809438508));
            }
            var_34 = (min((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1]), (max(var_11, (max((arr_6 [i_1] [i_2]), (arr_18 [i_1] [i_1] [i_1] [i_1])))))));
        }

        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            var_35 = (max(((min(((min(var_5, var_2))), (min((arr_33 [i_1] [i_12]), var_6))))), (((arr_11 [13] [i_12 + 2] [i_12] [5]) / ((((arr_37 [i_12]) ? var_0 : (arr_1 [i_1] [i_12]))))))));
            var_36 = ((((min(var_1, (arr_7 [i_1] [i_1]))))) * (min((var_0 % var_5), (var_6 / var_1))));
            var_37 = (max(((min((arr_22 [i_1] [1] [i_12]), var_8))), (((arr_8 [i_1] [i_12] [i_1] [i_12]) * (((arr_19 [i_1] [i_12] [i_1] [i_1] [i_1] [i_12]) * var_2))))));
        }
        for (int i_13 = 4; i_13 < 13;i_13 += 1)
        {
            var_38 = (((min((((arr_29 [10] [i_13] [i_13] [12]) ? (arr_21 [i_1] [i_1] [i_1] [6]) : var_7)), (max((arr_12 [i_1] [i_13] [i_13] [i_1] [i_1] [2]), var_6)))) % ((max(((max(var_5, var_12))), 1)))));
            var_39 = (~(arr_21 [i_1] [i_13] [8] [8]));

            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                var_40 += (!(((2080374784 ? 8624759812203714915 : 55288))));
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_41 = (arr_23 [i_1] [i_13] [5]);
                            var_42 = -var_4;
                        }
                    }
                }
            }
            var_43 = ((max((arr_13 [i_1 - 3] [i_1] [8] [i_1]), var_2)));
            var_44 *= (min(((((min(var_4, var_1))) % var_12)), ((min(1, 65535)))));
        }
        for (int i_17 = 3; i_17 < 11;i_17 += 1)
        {
            var_45 |= (max((((var_5 % var_7) * (min((arr_28 [i_1] [i_17] [i_1]), (arr_48 [i_1] [i_1] [10] [i_17] [i_17] [i_17]))))), (((((min(var_6, var_3))) ? (((min(var_12, var_4)))) : (arr_17 [i_1] [i_1] [i_17] [i_1] [i_17] [i_17]))))));
            var_46 = (((var_2 ^ (((arr_24 [i_1] [i_17] [i_17]) % var_11)))));
        }
    }
    var_47 = (max((((var_8 % var_8) / (~var_7))), (((!((max(var_5, var_0))))))));
    var_48 = var_9;
    #pragma endscop
}
