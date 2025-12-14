/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((max((arr_4 [i_0] [i_0 - 1] [i_1 + 1]), 127)), 341351409));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] = (min((((-127 - 1) ? 63 : (min(59, (arr_8 [i_0] [i_0 + 4] [i_0] [i_0]))))), (~86)));
                            arr_14 [i_0] [i_0] [i_2] [1] [i_3] = ((!(arr_11 [i_0 + 1] [i_0 + 3])));
                            var_19 = (max(127, (min(62, (min(44848, (arr_11 [i_0] [i_0])))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_20 = (arr_10 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]);
        var_21 = ((~(min((arr_5 [i_4 + 1]), var_10))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            var_22 = (((max(71, 161))));
            arr_23 [i_6] [i_6] [i_5] = (arr_4 [i_5 + 1] [i_5] [i_5 + 1]);
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            arr_28 [i_7] = (arr_27 [i_5] [i_7]);
            var_23 = (arr_10 [i_5] [i_5] [i_7] [i_7]);
        }
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            arr_31 [i_5] [0] [i_5] &= 34;

            for (int i_9 = 4; i_9 < 17;i_9 += 1) /* same iter space */
            {
                var_24 = ((((max((arr_19 [i_5 + 2]), (arr_19 [i_5 + 1])))) & (arr_19 [i_5 + 2])));
                var_25 = (((arr_27 [i_5 - 1] [i_8 - 3]) ? (min(var_3, 3840)) : (((!(arr_27 [i_5 - 1] [i_8]))))));

                for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 4; i_11 < 17;i_11 += 1)
                    {
                        var_26 = (min((arr_18 [i_5] [i_5]), (((arr_4 [i_10] [i_10 - 1] [i_10 - 1]) ? (arr_8 [i_11] [i_8] [i_5 - 1] [i_5]) : (arr_26 [i_5 - 1])))));
                        var_27 = (min((!20687), (58 == 1799614668)));
                        arr_41 [i_5] [i_8] [i_9 - 2] [i_8] [i_11] = (max((((arr_29 [i_8]) ? (arr_29 [i_8]) : 31)), (((arr_38 [i_9] [i_9 - 4] [i_9] [i_9 - 3] [i_9 - 1] [i_8]) ? (arr_29 [i_8]) : (arr_38 [i_9] [i_9 + 1] [i_9] [i_9 - 3] [i_9 - 3] [i_8])))));
                        arr_42 [i_5] [i_8] [i_9 - 1] [i_5] [i_11] = (arr_4 [i_5] [i_5] [i_5]);
                        var_28 = (((0 ? (min(2397358683294657065, 71)) : (arr_40 [i_11] [i_11 + 1] [i_11] [i_11] [7] [i_11 - 4] [i_11 - 4]))));
                    }
                    var_29 += ((+((12652 - (max((arr_39 [i_5 + 1] [i_5] [i_5] [i_5] [i_5] [i_5]), 1799614668))))));
                    arr_43 [i_8] [i_8] [i_8] [i_8] = ((-111 ? -75 : 26645));
                    var_30 = (-127 - 1);
                }
                for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        arr_49 [i_8] [i_12] [i_9] [i_8] [i_8] = (max((~var_16), 117));
                        var_31 = (max((((arr_39 [i_5] [i_5] [i_8] [i_9] [i_12] [i_5]) ? (arr_48 [i_8]) : var_1)), (arr_37 [i_8 + 3] [i_8] [i_9 + 1] [i_12 - 1] [i_12 - 1])));
                    }
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_32 = (((1652289936 != (arr_10 [i_5] [i_5] [i_9 - 4] [i_14 - 1]))));
                        var_33 = ((~(min((arr_0 [i_9 - 2] [i_12 - 1]), (arr_18 [i_5] [i_9 + 1])))));
                    }
                    var_34 = 1894128451;
                    var_35 = (((((18446744073709551615 ? 32758 : 227))) ? (4294967285 % -1799614669) : (((max((arr_21 [i_8 - 1]), 1))))));
                }
                var_36 += (!var_18);
            }
            /* vectorizable */
            for (int i_15 = 4; i_15 < 17;i_15 += 1) /* same iter space */
            {
                var_37 = 17834168693400798515;
                var_38 = (arr_9 [i_5 + 2]);
            }
        }
        arr_56 [i_5] = (140102576 % -42);
        arr_57 [i_5 + 1] [i_5 + 2] = 17085211943186684468;
    }
    for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
    {
        arr_61 [i_16 - 1] = ((min((arr_32 [i_16 - 1] [i_16] [i_16 + 2] [i_16 + 1]), 11)));
        var_39 = (min((((arr_19 [i_16 - 1]) * 5058)), ((min(-66, (arr_19 [i_16 + 1]))))));
    }
    #pragma endscop
}
