/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((-(arr_1 [i_1] [i_1])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = ((var_10 ? (((arr_10 [i_1] [i_1] [i_1] [i_3] [i_2]) ? var_12 : var_9)) : (!var_11)));
                    arr_13 [i_1] = (!var_5);
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_16 -= (((arr_0 [i_1]) + var_10));
                    arr_16 [i_1] [i_1] [i_2] [i_2] = 1040135789549113584;
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_17 = (1 != 2247940145);

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_18 = (arr_18 [i_0] [i_0] [i_2] [i_5]);
                        var_19 = (min(var_19, (((~(arr_20 [i_1] [i_1] [i_6 - 1] [i_1] [8]))))));
                        var_20 = (((arr_11 [i_0] [i_6 - 1] [i_6 - 1] [i_5] [i_6 + 2] [i_6 + 1]) & (arr_11 [i_0] [i_6 + 2] [i_6 + 2] [i_5] [i_6 + 2] [i_6 + 2])));
                        var_21 = (((((arr_9 [i_1]) ? var_9 : 188)) <= (arr_8 [i_0] [i_1] [i_1])));
                    }
                }
                var_22 = (((arr_14 [i_0] [i_1] [i_2]) ? (arr_9 [i_1]) : (arr_14 [i_0] [i_1] [i_2])));
                var_23 = ((arr_1 [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_0] [i_1]));
            }

            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                var_24 -= var_3;
                var_25 = (min(var_25, (((!(var_11 | -64))))));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_26 -= var_3;

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_27 [i_1] [i_0] [i_1] [i_8] [i_8] [i_9] = var_12;
                    var_27 = (((arr_19 [i_0] [i_0] [i_8] [i_0] [i_0] [i_1]) ^ var_0));
                    var_28 = var_8;
                }
                var_29 = -0;
            }
            var_30 -= (!var_8);
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_31 = (max(var_31, (arr_26 [i_0] [i_10] [i_10] [i_10])));
            var_32 = (min(((((min(var_2, (arr_23 [15] [15] [i_10] [i_10]))) <= var_4))), var_6));
        }
        var_33 = (max(((-(((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / -93)))), (max((var_4 > 8852800122987690286), var_9))));
        var_34 = (max((((((((arr_9 [4]) ? (arr_11 [i_0] [20] [15] [i_0] [i_0] [i_0]) : var_4))) == ((0 ? 31 : 18446744073709551615))))), (max(var_8, (((var_3 <= (arr_4 [i_0]))))))));
        var_35 = (((((((((67104768 ? var_5 : 0))) || (((var_7 ? (arr_14 [i_0] [14] [i_0]) : (arr_8 [i_0] [10] [i_0])))))))) == ((((min(var_12, (arr_12 [i_0] [i_0] [i_0])))) * (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_36 = var_4;
    var_37 = var_1;
    #pragma endscop
}
