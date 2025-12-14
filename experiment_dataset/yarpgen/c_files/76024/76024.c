/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_5;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = (((arr_2 [i_0 - 3] [4] [4]) ? (((!(arr_2 [i_0 - 2] [2] [9])))) : ((max((arr_2 [i_0 - 1] [i_1] [i_1]), (arr_2 [i_0 - 1] [i_0 - 1] [4]))))));
            var_13 = ((!(arr_4 [i_0 + 1])));
            var_14 = (((arr_3 [i_0] [i_0]) * (((arr_2 [i_1] [i_1] [i_1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_1])))));
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 *= ((min((arr_3 [i_0 - 2] [i_2 + 1]), (max((arr_0 [i_3]), 154)))) + ((((((var_5 ? var_8 : (arr_5 [i_0])))) ? 102 : ((((arr_11 [2] [i_2] [i_3] [i_0 - 3] [i_3]) > var_6)))))));
                        var_16 = ((((((arr_4 [i_0 - 1]) <= (-2147483647 - 1)))) + (arr_3 [i_0] [i_0])));
                        var_17 = (min(var_17, (((!(12389376098792547503 < var_7))))));
                        var_18 *= 0;
                    }
                }
            }
            var_19 = (arr_9 [i_0] [i_0 + 1]);

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_20 = (max(var_5, var_10));
                var_21 = (!102);

                for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_22 = ((-(arr_17 [i_6] [i_6] [i_6] [i_6 + 2] [i_2 - 1] [i_2 - 1])));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_23 = (arr_10 [i_0] [2]);
                        var_24 = (arr_21 [i_0] [i_2] [i_2] [i_6 - 3] [i_2 + 2]);
                        var_25 = (max(var_25, (arr_20 [i_7] [i_7] [i_7] [i_7])));
                    }
                    for (int i_8 = 3; i_8 < 6;i_8 += 1)
                    {
                        var_26 = (max(var_26, (((469704293 & ((((var_7 ? (arr_19 [i_0]) : (arr_14 [6] [i_2 - 1] [i_6 - 2]))))))))));
                        var_27 = (((arr_21 [i_5] [i_2] [9] [i_6] [i_8 + 4]) ? 101 : (arr_12 [i_0 - 1] [i_0 - 1])));
                        var_28 = -154;
                    }
                    for (int i_9 = 2; i_9 < 6;i_9 += 1)
                    {
                        var_29 = (max(var_29, 18446744073709551615));
                        var_30 = (min(var_30, (((((var_4 ? (max(var_2, (arr_10 [i_0 + 1] [i_6]))) : (((arr_20 [i_0 + 1] [i_5] [i_5] [i_6]) ? (arr_20 [i_0] [i_2 - 1] [i_2 - 1] [i_6 - 1]) : var_10)))) ^ var_6)))));
                    }
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 8;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 3; i_11 < 8;i_11 += 1)
                    {
                        var_31 *= ((var_7 ? (arr_18 [i_11 - 2] [i_2 + 2] [i_2 + 2] [i_11 - 2] [i_11] [9]) : (arr_9 [i_11 - 2] [i_2 + 2])));
                        var_32 = (-(arr_13 [i_0 - 2]));
                    }
                    var_33 = var_6;
                    var_34 = -153;
                }
                for (int i_12 = 3; i_12 < 8;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        var_35 = arr_7 [i_0 - 1] [0];
                        var_36 = (((-(18446744073709551615 - 102))));
                        var_37 &= (((arr_19 [i_0 - 1]) ? (max((arr_19 [i_0 + 1]), (arr_0 [i_0 - 1]))) : 153));
                    }
                    var_38 = (min(var_38, (((-((var_8 / (((((arr_8 [i_5]) > (arr_4 [i_0 - 2]))))))))))));
                    var_39 = ((((255 == (arr_21 [i_12] [i_2] [i_2 - 1] [i_2] [i_0 - 1]))) ? (arr_21 [i_12] [i_2] [i_2 + 2] [i_2] [i_0 - 1]) : 154));
                    var_40 ^= (((((var_7 ? (max((arr_28 [i_0 - 2] [2] [i_5] [0]), (arr_1 [i_0 + 1] [i_0 - 1]))) : var_10))) && 33554431));
                    var_41 = (((((~(max(1806480687, var_1))))) ? (max((arr_34 [i_0 - 3] [i_0] [i_0 - 3] [9]), ((((arr_27 [i_2]) ? (arr_29 [i_5] [i_2 + 2] [i_0 - 3] [i_2 + 2]) : (arr_10 [i_0] [i_12])))))) : ((-(arr_23 [i_2 + 2] [i_2 + 2] [i_2 + 2] [9])))));
                }
                var_42 = (max(var_42, (min((min((var_5 == var_1), (((arr_1 [i_0] [i_0]) ? 65535 : 34187)))), (((!(arr_23 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))))))));
                var_43 *= arr_12 [i_0 - 3] [i_2];
            }
        }
        var_44 = (819081966 == -176110926);
        var_45 = ((((((~0) ? (((arr_27 [6]) - (arr_12 [i_0 - 2] [i_0 - 3]))) : (max((arr_16 [i_0] [2] [i_0]), (arr_0 [i_0])))))) ? 176110925 : (((!(((var_8 ? 1694221502 : 4294967295))))))));
    }
    #pragma endscop
}
