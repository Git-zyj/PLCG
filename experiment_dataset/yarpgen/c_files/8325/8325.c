/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = (min(var_20, (((((min((((0 <= (arr_1 [i_0])))), (arr_1 [i_1 - 1])))) ? ((var_15 ? ((65528 ? (arr_2 [i_1]) : var_1)) : 11)) : (arr_2 [i_0]))))));
            arr_4 [i_1] [i_1] = ((-(arr_2 [i_1 - 1])));
            var_21 = var_8;
            var_22 = (max(var_22, ((min(65525, 65525)))));
        }
        arr_5 [i_0] [1] = (max(0, 0));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 *= (~-6164333852016796756);

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_24 = (~((((arr_18 [i_2] [i_2] [1] [8] [i_2] [0] [i_2]) < var_0))));
                            arr_20 [7] [7] [i_4] [i_3] [8] [i_4 + 2] [i_4 + 1] = (arr_8 [i_6 - 1] [i_3]);
                            var_25 ^= ((((!(arr_7 [11] [5]))) ? (((4294967295 || (arr_7 [i_2] [i_3 + 2])))) : (((!(arr_7 [i_2] [i_5]))))));
                        }
                    }
                }
                arr_21 [i_3] [i_3 - 2] [i_3] = ((~((max(var_15, 61153)))));
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_26 &= ((var_13 ? 65532 : ((1755099287053569388 ? (14 | 9316) : ((((arr_1 [13]) == 1073741823)))))));
                var_27 ^= var_15;
                var_28 -= ((((max(19432, -28))) ? var_11 : ((var_0 ? (var_14 + var_13) : var_15))));
                var_29 = (arr_14 [2] [13] [i_3 - 1] [i_2] [5]);
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_30 -= (((max((arr_26 [i_9] [0] [i_3] [0] [i_3 + 2]), ((16 ? 4395 : 10630334000462387841)))) * 3920));
                            var_31 = (min(var_31, (((((!(~var_14))) ? (((arr_22 [i_2] [i_2] [1] [i_8]) ? 62351 : (arr_22 [i_3] [i_9 + 3] [i_9 - 4] [i_9 - 1]))) : (arr_2 [i_10]))))));
                            var_32 -= (arr_23 [i_9] [i_9 - 2] [14]);
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_33 *= ((-(arr_14 [7] [i_11] [i_11] [i_11] [i_2])));
            var_34 = (!8033341195584018262);
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_35 = (((((var_4 ? var_11 : (arr_36 [i_12])))) ? (((arr_36 [i_12]) & var_7)) : (var_10 || 2147483637)));
        var_36 += 0;
        var_37 = 127;
    }
    var_38 |= (((((var_16 ? (0 / -124) : (min(var_10, var_0))))) ? var_9 : var_4));
    var_39 ^= 65529;
    #pragma endscop
}
