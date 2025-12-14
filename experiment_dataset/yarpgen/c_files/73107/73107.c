/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_14 = (max((max(var_13, var_10)), ((((((var_11 ? 145 : var_9))) ? var_3 : (((arr_4 [4]) / var_7)))))));
                        var_15 = (var_9 + -var_8);
                        var_16 = ((((1740568426 <= ((var_13 ? 4294967269 : var_3)))) ? (((~((max(var_4, var_13)))))) : (((~var_10) % (((var_11 ? var_4 : var_1)))))));
                    }
                }
            }
        }
        var_17 = (min(var_17, (((((((var_1 ? var_3 : (arr_4 [9])))) ? var_1 : ((111 ? 159 : 5276325955493095423))))))));

        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_18 |= 13014;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 *= max((((((!(arr_15 [i_0] [12] [12] [i_0] [i_4])))))), ((var_13 ? var_12 : (max(var_9, var_12)))));
                            var_20 = var_11;
                        }
                    }
                }
            }
            var_21 = ((!(arr_8 [i_4] [i_0] [i_0])));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_22 = ((-(!var_13)));
            var_23 &= (!var_7);
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_24 = (max(var_24, var_8));
                            var_25 = ((var_2 ? (~var_6) : (max(var_2, var_7))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (((~var_3) ? (((((var_3 ? var_4 : var_10))) ? var_0 : var_12)) : (!-5276325955493095413)));
    var_27 = ((var_9 ? ((var_11 ? var_5 : (var_13 * var_4))) : ((154 ? ((max(var_0, var_6))) : var_1))));

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_28 = (min(var_12, var_11));
        var_29 = (((arr_5 [i_12] [i_12] [i_12]) ^ ((var_11 ? (arr_5 [i_12] [i_12] [i_12]) : var_11))));
        var_30 = min((min(((var_5 ? var_2 : var_0)), var_6)), (max((max(var_10, var_7)), 101)));
    }
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    var_31 = ((!((((arr_34 [i_13 + 1]) / var_1)))));
                    var_32 = ((+(((arr_35 [i_13 - 1]) + (arr_35 [i_13 + 1])))));
                    var_33 = ((((max(var_6, (arr_41 [i_15] [i_14 - 3] [i_13 + 2])))) + ((min((arr_36 [i_14 - 2] [i_13 - 1]), var_6)))));
                }
            }
        }
        var_34 = ((((((min(var_12, var_0))) ? (max(var_10, var_11)) : (((var_8 ? (arr_36 [i_13 + 1] [i_13 - 1]) : var_11))))) ^ ((((!(~158)))))));
        var_35 = (arr_36 [i_13 - 1] [i_13]);

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            var_36 = var_9;
                            var_37 = ((var_10 ? (arr_35 [i_13 - 1]) : var_5));
                        }
                    }
                }
                var_38 = (~5276325955493095430);
                var_39 = ((-(arr_39 [i_13 + 1])));
                var_40 *= (((arr_44 [i_13 + 3] [i_13 + 2] [i_13 + 3]) * var_8));
            }
            var_41 = (((-5586108543337970956 + 9223372036854775807) >> (((arr_46 [1] [i_13 + 1] [i_13 - 1] [5]) - 1401909437))));
        }
        for (int i_20 = 3; i_20 < 23;i_20 += 1)
        {
            var_42 -= var_13;
            var_43 &= ((!(((var_2 ? var_4 : var_9)))));
            var_44 = ((((((~var_0) ? (var_2 % var_0) : var_3))) ? var_13 : (arr_41 [i_13] [i_20 + 2] [i_20])));
        }
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            var_45 = ((((((((6286027579145781130 ? (arr_54 [i_13 - 1] [i_21]) : var_7))) ? (arr_44 [19] [i_21] [i_21]) : (arr_53 [i_13 + 2] [i_13 + 2])))) ? (((min((arr_48 [i_13] [i_13 - 1] [24] [i_13 + 1]), var_0)))) : (((((var_11 ? var_11 : var_1))) ? ((var_0 ? (arr_52 [16] [10] [i_13 + 2]) : var_2)) : ((((arr_40 [i_13] [i_21] [i_21]) ? var_12 : var_4)))))));
            var_46 = (((min(144, 5276325955493095423)) + var_9));
        }

        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {

            /* vectorizable */
            for (int i_23 = 0; i_23 < 25;i_23 += 1)
            {
                var_47 = (((((arr_39 [i_13 + 3]) + 2147483647)) >> (262143 - 262128)));
                var_48 = (min(var_48, (arr_53 [i_13] [i_23])));
                var_49 |= (arr_45 [i_13 + 2] [16]);
                var_50 &= ((!(arr_59 [8] [i_13 + 1] [12])));
                var_51 = 124;
            }
            var_52 = (min(var_52, ((((arr_56 [16] [i_22] [i_22]) / var_1)))));
        }
        for (int i_24 = 1; i_24 < 24;i_24 += 1)
        {
            var_53 = var_2;
            var_54 = ((((min(var_0, (arr_57 [i_13])))) ? var_3 : ((-(!3208)))));
            var_55 |= min(31094, -3209);
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 25;i_25 += 1)
            {
                for (int i_26 = 3; i_26 < 23;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 25;i_27 += 1)
                    {
                        {
                            var_56 = ((var_13 >= ((~(arr_42 [i_13 - 1])))));
                            var_57 = (max(var_7, ((min(var_12, (arr_39 [i_13 - 1]))))));
                            var_58 = (max(var_58, (((!(!var_1))))));
                        }
                    }
                }
            }
            var_59 = -var_1;
        }
    }
    for (int i_28 = 0; i_28 < 19;i_28 += 1)
    {
        var_60 = (!var_10);
        var_61 = (max(var_61, var_12));

        /* vectorizable */
        for (int i_29 = 0; i_29 < 19;i_29 += 1)
        {
            var_62 *= (var_4 + var_1);
            var_63 = (((((var_5 ? var_11 : var_2))) ? var_10 : (((var_10 ? var_11 : var_11)))));
        }
        /* vectorizable */
        for (int i_30 = 0; i_30 < 19;i_30 += 1)
        {
            var_64 = ((-(arr_54 [i_28] [i_28])));
            var_65 = (arr_41 [i_28] [i_28] [i_30]);
        }
    }
    #pragma endscop
}
