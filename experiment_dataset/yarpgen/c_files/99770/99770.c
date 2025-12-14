/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_3, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = ((((var_7 / (arr_1 [0]))) * var_1));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_12 = ((arr_0 [i_1 - 1] [i_1 + 2]) ? -var_6 : 0);
            var_13 = ((var_8 ? 0 : (arr_1 [i_1 + 1])));
            arr_4 [i_0] [5] |= -6;
            var_14 = (arr_2 [i_1 + 1] [14] [i_1 + 2]);
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            var_15 = ((((((0 ? (min(0, 8)) : (~882427922))) + 2147483647)) >> ((((0 ? 25 : -22)) + 33))));
            var_16 -= (arr_6 [i_3]);
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_12 [i_2] [i_2] = (min(1977, 255));
            var_17 |= (min((((arr_11 [i_2] [i_2]) * (arr_11 [i_2] [i_4]))), (arr_11 [5] [i_4])));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_15 [i_2] [i_5] = ((((max(((~(arr_10 [i_2] [i_2] [i_5]))), (arr_14 [i_5] [i_2])))) ? ((((59999 ? var_2 : 253)) & (min(53, -403078806)))) : (max(-1, ((-2 ? (arr_6 [i_5]) : -1129829845))))));

            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_18 ^= (max((min(((-(arr_2 [i_2] [i_2] [i_6]))), -var_1)), 22575));
                var_19 += ((((arr_8 [i_6]) || (arr_8 [i_2]))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_20 = (min((((var_0 < (arr_17 [i_2] [i_5] [i_7])))), ((((((arr_20 [i_2] [12] [i_5] [0]) & var_8))) ? var_3 : ((229 ? (arr_5 [4]) : 7657914502556320489))))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_21 = (((arr_19 [i_2] [i_8] [i_7]) % var_4));
                    var_22 += (((~-1465382632) ? (arr_13 [i_7]) : 21184));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    arr_26 [i_2] [i_5] [i_5] [1] [i_7] [6] = max((1465382631 && -1), (min(((min(48, 28))), (min((arr_3 [2] [i_7] [i_9]), (arr_9 [i_2]))))));
                    var_23 = ((~((var_3 ? var_5 : (min(4095, var_1))))));
                    var_24 &= ((0 ? 4284 : -3));
                }
                arr_27 [i_5] [i_7] = (arr_6 [i_2]);
                arr_28 [i_2] [i_5] = (((((-(arr_19 [i_7] [i_5] [i_2])))) ? (max((arr_0 [i_2] [i_5]), (var_3 - var_7))) : (arr_6 [i_2])));
                arr_29 [i_7] [1] [i_2] [i_2] = ((!((min(-11, -25883)))));
            }
        }
        var_25 = (min((max(-9003871375925371354, 0)), ((max(9010, 0)))));
    }
    #pragma endscop
}
