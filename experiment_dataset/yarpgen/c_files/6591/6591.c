/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((!(134217696 & var_19))) ? ((((!(!663))))) : ((4294967295 ? ((max(var_7, 4160749599))) : (min(var_1, var_18)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((~(arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [2] [i_0] [i_1] = -9016045118088009067;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = ((-((var_6 ? var_0 : var_11))));
                        var_23 = (((var_17 + var_14) >= ((~(arr_8 [i_0] [i_0] [i_2])))));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            var_24 *= var_19;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        {
                            var_25 = (~-134217713);
                            arr_22 [i_0] = ((-667 % (arr_2 [i_7 - 2] [i_4 + 1] [i_4 + 1])));
                            var_26 = ((var_8 ? (arr_17 [i_4 - 2] [i_4 - 1]) : (arr_17 [i_4 - 1] [i_4 - 1])));
                        }
                    }
                }
            }
            var_27 = (-1 ? (((-(arr_3 [i_0] [i_4] [i_0])))) : (arr_8 [i_0] [i_0] [i_4 + 1]));
        }
        var_28 = ((-664 ? (arr_18 [i_0]) : -8543));
    }
    for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_29 = (arr_24 [i_8 + 1]);
        var_30 = (max(var_30, (((((max(65532, var_6))) ? (((arr_26 [1]) + (((max((arr_25 [i_8 - 2]), (arr_23 [5]))))))) : (((0 + (var_4 - var_15)))))))));
        var_31 = ((((arr_25 [i_8 - 2]) ? (arr_25 [i_8 - 1]) : 649)));
        var_32 = ((((-51 == (arr_23 [i_8 - 1]))) ? (min(var_16, (arr_26 [i_8]))) : (4160749599 * var_16)));
    }
    for (int i_9 = 2; i_9 < 24;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = ((-((-(arr_23 [i_9 - 2])))));
        var_33 = var_3;
        var_34 ^= (((~120) ? (((arr_23 [i_9 - 1]) - (arr_26 [0]))) : ((((arr_29 [i_9 - 1]) ? (arr_27 [i_9 - 1]) : (arr_27 [i_9 - 1]))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] = -8543;
        arr_35 [i_10] [i_10] = 3415499663;
    }
    var_35 ^= ((-(!var_7)));
    #pragma endscop
}
