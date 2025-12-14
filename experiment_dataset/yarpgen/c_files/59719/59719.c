/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_21 |= var_9;
                arr_9 [i_0] [i_0] &= var_19;
                var_22 *= 7;
                var_23 += (max((arr_8 [i_0 - 1] [i_0 - 2] [i_0 + 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
            }
            /* vectorizable */
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_0 - 1] [i_0] [i_0] [i_0] = ((var_7 ? (arr_11 [i_4 + 1] [i_3] [i_3 + 2]) : (arr_11 [i_4 - 1] [i_4] [i_3 - 1])));
                    arr_17 [i_0] = var_18;
                    arr_18 [i_0] [i_1] [i_3] = (arr_2 [i_0]);
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_24 = (((arr_15 [i_0] [i_0 + 1] [17] [i_3 - 2] [i_3 - 4] [17]) == 274978851));
                    var_25 = arr_10 [i_0] [i_1] [i_1] [i_5];
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [3] [i_3] [i_6] = ((var_5 >= (((arr_12 [i_0] [i_1] [i_3] [i_6]) << (((arr_14 [i_0 - 2] [i_1] [i_3] [i_6]) - 6239171000244865127))))));
                    var_26 |= var_8;
                    var_27 = (arr_22 [i_0] [i_1] [i_0]);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, 6741303470743487103));
                    var_29 = (arr_7 [i_0] [i_3]);
                }
                var_30 |= -1530471291;
            }
            var_31 = (max(((((arr_12 [i_0] [i_1] [i_0] [i_0]) && var_13))), (arr_19 [i_0] [i_1] [i_1] [i_1])));
            var_32 = (((arr_6 [i_1] [i_1]) ? ((-(min(var_6, var_14)))) : (((min((arr_11 [i_0 - 2] [i_0] [i_0 - 2]), (arr_11 [i_0 - 1] [i_0] [i_0 + 1])))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    {
                        var_33 = (arr_5 [i_9] [i_1] [i_0]);
                        arr_34 [i_0] [i_0] [i_0] [i_0] = 1139924867;
                    }
                }
            }
            arr_35 [i_0] [i_1] = 1139924866;
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 20;i_12 += 1)
                {
                    {

                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            arr_46 [13] [i_10] [i_10] [i_11] [i_12] [i_13] = var_17;
                            var_34 &= var_7;
                        }
                        var_35 *= (((max((arr_45 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 4] [i_12]), (arr_43 [i_12] [i_12] [i_12 + 2] [i_12 - 2] [i_12] [i_12 - 4]))) == (((arr_45 [i_12] [4] [i_12] [4] [i_12] [i_12 - 4] [i_12]) ? (arr_45 [i_12 + 1] [10] [i_12] [i_12] [i_12 + 2] [i_12 - 4] [i_12]) : (arr_43 [15] [i_12] [i_12] [i_12] [i_12] [i_12 - 4])))));
                    }
                }
            }
            var_36 = (((arr_43 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1]) | (min(4293987548, ((max(var_19, 1)))))));
        }
        var_37 = (min(((var_9 >> (((arr_43 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1] [15] [i_0]) - 647112344)))), ((-4294967292 + ((var_6 - (arr_1 [i_0])))))));
    }
    var_38 = (min(((var_11 ? ((var_7 ? -473965655 : var_8)) : var_19)), var_7));
    #pragma endscop
}
