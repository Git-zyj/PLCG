/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(1, 0))));
    var_17 ^= var_13;
    var_18 = (max(var_18, (((var_14 ? ((((var_1 || (!var_8))))) : var_14)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_5 [i_1] = (((!(arr_2 [i_1 - 1] [i_1 - 1]))));
            arr_6 [i_1] = (max((arr_3 [i_1 - 1] [i_1 - 1] [i_1]), (!3325963713)));
            arr_7 [i_1] [i_0] [i_1] = 1;
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    var_19 = arr_3 [i_0] [i_2 + 1] [i_0];
                    var_20 *= 3325963724;
                }
            }
        }
        var_21 = ((~(!var_15)));
        var_22 -= (min((!127), (((var_3 + 1) ? var_3 : (min(8, 114))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            var_23 += ((var_7 ? (arr_13 [i_5 - 2]) : (min(var_4, (arr_13 [i_4])))));
            var_24 = (max(var_24, ((max(16135, ((((max(1, 4294967288))) ? (1 + 3325963724) : ((var_5 ? (arr_17 [10]) : var_11)))))))));
            var_25 = (max(var_25, ((var_1 > (((var_15 ? (arr_14 [i_5 - 1]) : (arr_14 [i_5 - 2]))))))));
            var_26 = (arr_13 [i_5]);
            var_27 = ((~(arr_15 [i_4] [i_5])));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_28 &= (min((arr_19 [i_4]), (((~(arr_16 [i_6] [i_6 - 1] [i_6 - 1]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        var_29 = -969003569;
                        var_30 = ((!((((969003553 << (-27483 + 27496)))))));
                        arr_29 [i_4] [7] [i_6] [i_8 - 2] = -20225;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_31 ^= ((((((min((arr_14 [i_4]), 7506185407697249744)) + (arr_23 [i_4] [i_4] [i_4])))) ? -577211839 : (6689 + var_13)));
            var_32 = (arr_30 [i_9]);
        }
        var_33 = (min(var_33, (!var_8)));

        /* vectorizable */
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            arr_37 [i_4] = 1;
            var_34 = (!-1976954136);
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_35 &= var_8;

            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                var_36 = ((((((arr_23 [i_4] [i_11] [i_12]) ? ((var_11 ? var_10 : (arr_36 [i_12] [i_11] [i_4]))) : (!1)))) ? ((((arr_32 [i_12] [i_4]) ? (arr_15 [i_11] [i_12]) : 541163440))) : (((arr_19 [i_12]) ? -var_8 : (((arr_24 [i_4] [i_4] [21] [i_12]) + -4765011791734784174))))));
                arr_42 [i_12] [i_12] = 577211838;
                arr_43 [i_12] [i_12] [5] [i_12] = (((-6686 ? (arr_38 [21] [i_11] [i_12]) : 4450)));
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {
                var_37 = (min(var_37, 4));
                arr_47 [1] [1] [1] &= (min((((1 / (arr_36 [i_13] [i_11] [i_4])))), (~var_15)));
                var_38 = var_4;
                var_39 += (arr_30 [i_4]);
            }
            var_40 -= (((arr_38 [10] [i_11] [i_11]) ? -6656 : ((var_3 ^ (arr_38 [i_4] [i_4] [i_4])))));
            var_41 ^= ((((((min(1, var_13)) ? ((var_7 ? (arr_17 [i_4]) : (-2147483647 - 1))) : var_7))) ? (var_7 - 23838) : var_4));
        }
    }
    for (int i_14 = 2; i_14 < 20;i_14 += 1)
    {

        /* vectorizable */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            var_42 = (!(arr_19 [i_15 + 1]));
            var_43 = 1;
            var_44 = (-16 ^ 1);
        }
        var_45 = (((((3 ? var_3 : ((3 ? (arr_40 [i_14 + 1] [i_14 + 2] [i_14] [i_14 + 1]) : (arr_34 [i_14] [i_14])))))) + var_9));
    }
    #pragma endscop
}
