/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 *= ((+(((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2]) : var_1))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = -12429654246947062490;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (arr_9 [i_4] [i_4 - 2] [i_4] [i_4 - 2] [i_4 + 1]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_11 [11] [i_0] [i_2] [12])));
                            }
                        }
                    }
                    var_22 = (((((var_9 / (arr_1 [i_2])))) ? (arr_4 [i_0] [i_1 - 1] [i_2]) : (arr_5 [i_0] [i_1 + 1])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_23 = (arr_5 [i_1 + 1] [i_1 + 1]);
                    var_24 ^= 6017089826762489120;
                    var_25 = (((((arr_7 [i_0] [i_1 - 2] [i_5] [i_0]) ? (arr_15 [i_0] [i_0] [i_1] [i_5]) : (arr_13 [i_0] [i_0] [i_0] [i_0])))) ? var_11 : 18446744073709551615);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_26 ^= ((152670538 ? -6154765883032763431 : 7130765407645922694));
                    arr_18 [i_6] [i_0] [i_0] = (((((var_11 ^ (arr_16 [i_6] [i_0] [i_0])))) ? (((-(arr_3 [i_0] [i_1] [5])))) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                }
                var_27 = (arr_14 [i_0] [i_0]);
                var_28 = (arr_4 [i_1 - 2] [i_0] [i_0]);
            }
        }
    }
    var_29 ^= var_15;
    var_30 = (max(var_30, ((var_13 ? var_6 : ((((var_2 || var_2) ? (var_17 || var_8) : var_8)))))));

    /* vectorizable */
    for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_31 -= (((((arr_2 [6] [6]) + 2147483647)) >> (((arr_15 [12] [i_7] [i_7] [12]) - 6430845173209531735))));
        var_32 += (arr_1 [i_7 - 1]);
        var_33 = (!var_3);
        var_34 += 50;
        arr_22 [i_7] = (arr_2 [i_7] [8]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_35 = (((~18446744073709551615) << (5977297382383190684 - 5977297382383190675)));
        var_36 = var_5;
    }
    var_37 += var_5;
    #pragma endscop
}
