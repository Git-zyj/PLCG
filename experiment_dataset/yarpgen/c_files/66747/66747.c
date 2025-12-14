/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_5));
        var_14 = ((((~(arr_2 [i_0]))) <= (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_0] [17] [i_1 + 3] |= (((arr_6 [16] [i_1 + 4] [i_0]) % (arr_6 [i_0] [i_1 + 1] [i_1 + 1])));
            var_15 += 65527;
            arr_9 [i_1] = (((var_9 | var_1) && (((var_10 | (arr_1 [i_0]))))));
            var_16 += ((((var_4 ? (arr_3 [i_0]) : (arr_7 [i_1]))) + var_6));
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_17 = (min(var_17, -5095963672187380651));
        var_18 = var_5;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_19 |= ((!((!(arr_1 [i_3])))));
        var_20 = var_6;
        arr_16 [i_3] = (max((arr_1 [i_3]), (((arr_1 [i_3]) % (arr_5 [i_3])))));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 += (min(((0 ? -92 : 65514)), ((-((-(arr_12 [i_3])))))));
            var_22 = -1;
            var_23 *= (arr_11 [i_4] [i_3]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_24 += (((arr_10 [i_5]) + (((arr_4 [i_3] [13] [13]) % (arr_12 [i_5])))));
            var_25 = (125 || 2802987678);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_25 [i_3] = (((arr_22 [i_3] [i_3]) != (arr_22 [i_3] [i_6])));
            arr_26 [i_3] [i_3] |= (arr_15 [i_3]);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_26 = (51704 & 65531);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_27 = (((arr_21 [i_7] [i_9]) | (arr_34 [i_3] [i_6] [i_7] [i_8] [22] [i_9 + 1])));
                            arr_36 [i_3] [i_6] [i_7] [i_7] [i_9] = ((((!(arr_28 [1] [i_6] [i_6]))) ? ((-(arr_20 [i_9 + 2]))) : (arr_23 [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                        }
                    }
                }
                var_28 = (max(var_28, (-9223372036854775807 - 1)));
            }
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                arr_39 [i_10] [i_6] [i_3] [i_3] = (arr_1 [i_3]);
                var_29 = (arr_29 [16] [i_10] [20] [i_6]);
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_30 = ((((((arr_19 [i_3]) + (arr_27 [i_3])))) ? (arr_12 [i_3]) : ((~(arr_22 [2] [2])))));
                arr_43 [i_11] = (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]);
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                arr_48 [i_12] [i_12] [i_12] [i_3] = ((var_10 / (arr_33 [i_6] [i_6] [i_6] [i_6] [i_6])));
                arr_49 [i_3] [i_3] [i_3] [i_12] = ((-(arr_5 [19])));
                var_31 = (max(var_31, -1));
                var_32 += (arr_1 [i_12]);
                arr_50 [i_3] [i_12] [i_12] = 65535;
            }
            var_33 = 0;
            var_34 = ((!(arr_15 [i_6])));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {
        arr_54 [9] = (arr_19 [i_13]);

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        var_35 = (((3104362674 >> 9) == 31));
                        arr_63 [5] [i_14] [2] [i_13] = (arr_57 [i_13]);
                        var_36 += (~11693);
                        var_37 += (179 + 32767);
                    }
                }
            }
            arr_64 [i_13] = ((!(arr_60 [1] [1] [i_14] [i_14])));
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 22;i_18 += 1)
                {
                    {
                        arr_71 [i_13] [i_18] [i_13] [i_13] [i_18] = var_8;
                        var_38 = (var_3 != (0 != 1));
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            arr_75 [i_13] = ((47621 | (!11693)));
            arr_76 [i_13] [i_13] [i_13] = ((arr_17 [i_13] [i_13]) || (arr_51 [i_19]));
        }
    }
    #pragma endscop
}
