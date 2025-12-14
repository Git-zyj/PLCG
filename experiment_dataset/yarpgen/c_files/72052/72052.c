/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 = -var_6;
        var_13 = (max(var_13, (((9438317413369571281 ? 9438317413369571281 : 9438317413369571281)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 = (var_2 ? 143752430 : (var_3 >> var_2));

            for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
            {
                var_15 = ((!((!(arr_6 [i_0] [i_2] [i_2 - 2] [i_0])))));
                var_16 = (((arr_6 [i_1] [i_2] [i_2] [i_0]) >> (var_10 - 18446744073709538004)));
                var_17 = 127;
                var_18 = (min(var_18, ((max(((min(((min(1, var_5))), (max(-12014, var_0))))), (min((arr_2 [i_1]), (arr_7 [i_0] [i_1] [i_2]))))))));
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
            {
                var_19 += var_7;

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_20 = ((((((arr_3 [i_0] [i_0] [i_0]) * 0))) ? ((var_10 ? var_2 : var_7)) : (arr_11 [i_1] [i_1] [i_3] [i_1])));
                    var_21 ^= ((~((-(arr_8 [i_1] [i_1] [i_1] [14])))));
                }
                var_22 = (((var_1 ? 1745466531 : var_9)));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_23 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                var_24 ^= var_5;
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_25 = (max(var_25, ((!(((!3296382590) < (arr_11 [i_0] [i_6] [i_6] [i_6])))))));
            var_26 = -21233;
            arr_18 [i_0] [i_6] = (((min(var_0, var_2))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_25 [i_7] [i_7] [i_8] = ((+(min((-1880786910 > -20254), ((-127 ? var_3 : (arr_7 [i_0] [i_0] [8])))))));
                var_27 = (!(((1424086808 ? (arr_7 [i_0] [18] [i_0]) : 2470076177))));
            }
            for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_28 = (i_7 % 2 == zero) ? (((((((arr_20 [i_9 + 3] [i_9 + 2] [i_9 + 3]) + 2147483647)) >> (((arr_26 [i_9] [i_7] [i_9 - 1]) - 17014601306269615426)))) + ((-7944532334450640934 ? ((max(var_10, var_2))) : ((min(var_4, var_1))))))) : (((((((arr_20 [i_9 + 3] [i_9 + 2] [i_9 + 3]) + 2147483647)) >> (((((arr_26 [i_9] [i_7] [i_9 - 1]) - 17014601306269615426)) - 14650413879260348528)))) + ((-7944532334450640934 ? ((max(var_10, var_2))) : ((min(var_4, var_1)))))));
                            var_29 = (max((((var_1 ? ((~(arr_20 [i_0] [i_9] [i_0]))) : (arr_11 [i_9 + 2] [i_9] [i_7] [i_10])))), (min(((max(var_2, (arr_27 [i_0] [i_7] [i_0])))), (9147151229258960587 & 1)))));
                        }
                    }
                }

                for (int i_12 = 3; i_12 < 22;i_12 += 1)
                {
                    var_30 = ((((((-((var_6 << (((var_9 + 1801997881392401576) - 26)))))) + 2147483647)) >> (~18446744073709551615)));
                    var_31 ^= ((0 * (var_4 & var_11)));
                    var_32 = 1099511611392;
                }
                /* vectorizable */
                for (int i_13 = 4; i_13 < 23;i_13 += 1)
                {
                    arr_38 [i_13 - 3] [i_7] [i_7] [i_0] = (((arr_9 [i_7]) ? (arr_9 [i_7]) : (arr_9 [i_7])));
                    var_33 = (((~var_7) ? ((-(arr_33 [i_0] [14] [i_7] [i_13]))) : (((arr_4 [i_0] [i_9]) ? var_0 : (arr_33 [i_13] [i_7] [i_7] [i_0])))));
                    var_34 = (~9008426660339980331);
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_35 = 4944;
                    var_36 &= -var_1;
                }
            }
            var_37 ^= (min((max((28 ^ var_10), (max((arr_26 [i_0] [i_0] [14]), var_4)))), ((min((arr_37 [i_0] [i_7]), var_11)))));
        }
        for (int i_15 = 1; i_15 < 23;i_15 += 1)
        {
            var_38 = ((var_1 ? ((0 ? 5212 : -9185)) : 7944532334450640932));
            var_39 = 0;
            var_40 = ((min(-9147151229258960588, -119)));
        }
        var_41 = (((((arr_43 [i_0]) < var_6))));
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
    {
        arr_50 [i_16] = (max((max((arr_44 [i_16] [i_16]), (((32767 - (arr_32 [i_16] [22] [22] [i_16] [i_16] [i_16])))))), ((min((arr_41 [i_16] [i_16] [i_16] [i_16]), (arr_41 [i_16] [i_16] [i_16] [i_16]))))));
        var_42 = ((((min(var_5, var_7))) ? (arr_16 [i_16] [i_16] [i_16]) : (((arr_11 [i_16] [i_16] [i_16] [i_16]) ? ((min(var_0, var_1))) : (arr_42 [i_16])))));
        var_43 = (((arr_23 [i_16] [i_16] [i_16]) ? (((min(var_3, var_1)) + ((var_7 ? 8164 : var_6)))) : var_3));
        var_44 = ((((min((((arr_19 [i_16] [i_16]) ? var_7 : 112)), var_7))) & ((+(((arr_35 [i_16] [i_16] [i_16] [i_16]) ? var_5 : 3296382611))))));
    }
    var_45 = ((!(var_8 & 51672)));
    #pragma endscop
}
