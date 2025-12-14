/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_4;
        arr_5 [i_0] = (~var_17);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = 198;
        var_21 &= ((13095 / ((93 - ((52441 ? (arr_7 [i_1] [i_1]) : var_4))))));
        arr_11 [i_1] [i_1] = var_10;
        arr_12 [i_1] [i_1] = ((var_7 ? (min(var_12, (arr_6 [i_1]))) : (((13109 == (arr_6 [i_1]))))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_22 -= 13108;

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_23 ^= var_16;
                var_24 = (13095 + 1976685788);
                var_25 = (11 ^ 59489);
                var_26 = (min(var_26, var_5));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_27 = ((var_0 == ((min((arr_13 [i_1] [i_2]), -84)))));
                var_28 = 172;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {
                arr_27 [i_1] = min((min((arr_13 [i_1] [i_1]), ((var_3 ? 9353156739646692716 : (arr_23 [i_1]))))), (arr_7 [14] [i_5]));
                arr_28 [i_1] = var_13;

                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_29 = ((var_10 ? (1748972500 || var_12) : var_10));
                    var_30 = (min(var_30, (~93)));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, (((9223372036854775785 - 10) ? var_14 : (((~var_11) ^ (((arr_32 [i_7] [i_7] [i_7] [22]) | var_2))))))));
                    arr_33 [17] [i_2] [i_1] [15] = (((((min((~142), -2)) + 2147483647)) >> (((((arr_6 [i_1]) == var_13))))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_32 = var_4;
                    var_33 = var_1;
                    arr_36 [15] [i_1] [i_2] [i_2] [i_1] [6] = (+((((arr_18 [i_1] [i_1] [i_5] [13]) == (arr_18 [i_1] [i_1] [i_5] [i_1])))));
                    arr_37 [i_1] = (((min(46992, 46989))) ? ((min((arr_34 [i_8] [i_1] [3] [i_1] [i_1]), (arr_23 [i_8])))) : ((((min(9223372036854775785, 23874))) ? 1 : ((var_0 ? (arr_13 [i_1] [i_2]) : var_10)))));
                    var_34 = (((var_17 | 23878) ? ((var_1 ? (arr_21 [i_1] [i_5] [i_8]) : (arr_21 [i_2] [i_2] [i_8]))) : ((18574 & (arr_21 [i_1] [i_2] [i_5])))));
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            arr_40 [i_1] [i_1] [i_1] = ((175 ? -4456463499915757215 : 37558));
            var_35 ^= (((((1748972512 ? 32 : 196928978))) == (arr_7 [i_1] [i_9])));

            /* vectorizable */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_36 = -46992;
                    arr_47 [i_10] [i_1] = (var_14 == (arr_26 [i_1]));
                }
                arr_48 [i_1] [i_9] [i_9] [i_9] = (arr_15 [i_1]);
            }
            var_37 = (((((var_9 && var_11) && ((max(var_16, 65528)))))) >> (13108 - 13103));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    {
                        var_38 -= ((+((((arr_23 [12]) <= var_10)))));
                        var_39 = (max(var_39, (-var_9 >= 0)));
                    }
                }
            }
            var_40 = (min(var_40, -31692));
            arr_57 [i_1] [i_12] [i_12] = ((+((((arr_41 [i_1] [i_1] [i_12] [i_12]) > (arr_41 [i_1] [i_1] [i_1] [i_1]))))));
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_41 = (min((arr_26 [i_15]), 43));
        var_42 = (max(var_42, (((arr_55 [i_15] [i_15]) + ((max(181, -105)))))));
    }
    #pragma endscop
}
