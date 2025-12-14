/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((min(var_8, ((32835 ? var_4 : var_14)))))));
    var_19 = (var_6 > var_4);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_21 = (min(var_21, ((max((arr_0 [22] [17]), (((arr_0 [i_0] [i_0]) ? (((-(arr_0 [i_0] [i_0])))) : ((~(arr_1 [20]))))))))));
        arr_2 [18] [18] = ((-((((((arr_0 [12] [12]) * 0)) != (((!(arr_1 [i_0])))))))));
        var_22 += (max((arr_0 [i_0] [i_0]), (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_23 = (((((((max(var_7, (arr_0 [i_0] [i_0])))) ^ ((var_2 ? var_8 : var_14)))) + 2147483647)) >> (var_7 - 46864));
            var_24 = (((arr_0 [i_0] [20]) | (arr_0 [i_0] [i_0])));
            var_25 ^= (max(1, -1696228204));
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_26 = ((((((var_15 == (arr_3 [i_2] [i_2] [i_2]))))) != ((-1 ^ (((arr_5 [i_2]) ? var_1 : (arr_5 [i_2])))))));
        var_27 = (max(var_27, (((((((!18) ? (((arr_4 [3] [3] [i_2]) ? (arr_5 [i_2]) : (arr_1 [i_2]))) : (((arr_6 [i_2]) ? (arr_6 [i_2]) : 262142))))) ? 1 : (((((var_15 ? 1 : var_15)) >= (arr_6 [i_2])))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_28 = (max((((arr_8 [i_5]) ? (arr_8 [i_3]) : (arr_8 [i_3]))), (arr_8 [i_4])));
                arr_16 [i_3] [i_4] [i_4] = (arr_12 [i_3] [i_4] [i_5]);
                arr_17 [i_3] [i_3] [8] = (3878519034 == (arr_9 [i_5]));
            }
            var_29 = (((((((arr_8 [i_3]) < (arr_10 [i_4] [i_3] [i_3]))) && ((max((arr_13 [i_3]), (arr_14 [i_3] [i_4])))))) ? (((~var_17) % ((-(arr_15 [i_4] [i_3] [i_3]))))) : (((arr_15 [i_3] [i_3] [i_3]) ? (((min(1, 81)))) : (arr_13 [i_4])))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_30 = (arr_10 [i_3] [i_3] [i_6]);
            arr_21 [i_3] [i_3] = (max((min(var_6, (12568315122919520692 % var_6))), (max((((-(arr_14 [i_3] [24])))), (max((arr_14 [i_6] [i_6]), (arr_11 [i_3])))))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    arr_28 [i_3] [i_3] [i_7] [i_3] = (min((((((-1696228204 + (arr_26 [i_8] [i_3] [i_3] [i_3])))) ? ((max((arr_20 [i_3]), var_16))) : ((((arr_27 [i_8]) >= (arr_26 [i_3] [i_3] [i_7] [i_8])))))), ((((arr_26 [i_3] [i_3] [i_8] [i_7]) != (arr_24 [i_3] [i_7]))))));
                    var_31 = (max(var_31, ((((~(arr_13 [i_8])))))));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_32 = ((((((arr_26 [i_3] [i_3] [i_8] [i_9]) & (arr_26 [i_9] [i_3] [i_3] [i_3])))) ? ((((((min(255, (arr_9 [i_7]))))) ^ (var_2 ^ var_2)))) : (min((((arr_11 [9]) ^ (arr_11 [i_3]))), (((arr_18 [i_3] [8] [i_8]) ? (arr_11 [i_7]) : (arr_9 [i_3])))))));
                        arr_31 [i_3] [i_3] [i_7] [i_3] [i_3] = (arr_23 [i_3]);
                        arr_32 [i_3] [i_7] [i_7] [1] [i_7] = ((!((((max((arr_9 [i_3]), (arr_25 [i_3]))) ^ (arr_18 [i_3] [i_8] [i_3]))))));
                    }
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        var_33 = ((((((-(arr_15 [i_7] [i_3] [i_8]))) / ((((arr_10 [i_3] [i_3] [i_7]) / var_6))))) * ((((((min((arr_24 [i_3] [i_3]), (arr_30 [i_10] [i_10] [i_8] [i_7] [i_7] [i_3]))))) / (((arr_14 [i_8] [i_8]) * var_9)))))));
                        arr_35 [i_10] [i_3] [i_8] [i_3] [i_3] [i_3] = 1943447142;
                        var_34 &= ((((min(4086432569, 1))) << (((arr_33 [i_10 - 1] [i_10 - 2] [i_10 - 3]) - 10285223071981293311))));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_35 = (((min((~-20), (((arr_12 [i_8] [17] [i_8]) ? (arr_9 [i_7]) : (arr_8 [i_8]))))) & var_3));
                        var_36 = min((((!(((arr_19 [i_11] [i_3]) > -29))))), (arr_37 [i_7]));
                        arr_38 [i_3] [i_3] [i_7] [i_3] [i_8] [i_3] = (arr_11 [i_3]);
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_3] [i_3] [i_3] [0] = ((var_5 / (arr_15 [i_7] [i_3] [i_3])));
                        var_37 |= 1;
                        arr_44 [i_3] [i_12] [4] [i_3] [i_3] &= ((var_5 == (((-(arr_20 [i_7]))))));
                        var_38 = (arr_9 [i_3]);
                        var_39 = (((max((arr_15 [i_12] [i_3] [i_3]), (arr_11 [i_8]))) << (min(-12568315122919520680, var_12))));
                    }
                    var_40 = (max(var_40, var_3));
                }
            }
        }
        var_41 = ((((1 ? -1696228204 : (-1696228204 < 3878519034))) <= 118));
        var_42 |= 1;
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                var_43 = (((arr_24 [i_13] [i_14]) / (arr_22 [i_13] [i_14])));
                arr_49 [i_13] [i_13] [i_14] = ((~(~1)));
            }
        }
    }
    #pragma endscop
}
