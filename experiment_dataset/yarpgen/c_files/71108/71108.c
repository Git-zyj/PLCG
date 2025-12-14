/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_17 = (-5481470188499090448 | 40029);
        arr_3 [2] = (((!5481470188499090447) ? var_6 : (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (((2612063907626486978 ^ 1) ? (min(-1, 15)) : 10393152007229325439));
        arr_8 [i_1] = (min((arr_6 [i_1] [i_1]), (((var_7 ? (arr_5 [i_1]) : var_2)))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_18 = ((var_4 + (arr_11 [18])));
            var_19 = ((((arr_12 [i_2]) ? ((var_11 ? (arr_11 [i_3]) : 3148458045072576759)) : ((-(arr_10 [i_2]))))) / (arr_14 [i_2]));
            var_20 = (arr_10 [i_2]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_26 [i_2 - 1] [i_4] [i_5] [i_2] [i_6] [i_7] = ((var_2 ? (arr_25 [i_2 + 1] [i_4] [i_5 + 1] [i_4] [i_4]) : (min((((var_9 <= (arr_19 [i_2] [i_4])))), ((-3148458045072576756 & (arr_9 [i_2])))))));
                            var_21 ^= (56117 > 3571569186518506574);
                            var_22 *= ((~(min((arr_17 [i_2 + 2] [i_2] [i_2 - 1]), ((4561498864811963809 ? var_8 : var_14))))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, ((((((var_1 + var_16) / -97)) / var_16)))));
            var_24 *= (((~var_11) ? (arr_14 [16]) : ((var_12 ? (arr_23 [i_2] [i_2] [i_4] [i_4]) : 17469572408637177))));
            arr_27 [i_2] = (min(var_14, ((min((min(var_9, 65)), var_6)))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_34 [i_2] = (((((((((arr_16 [i_2] [i_2 + 1]) ? var_9 : var_11))) ? (arr_30 [i_2] [i_2]) : (var_12 || var_5)))) ? (((arr_16 [i_2] [i_2]) ? (max((arr_32 [i_8] [i_2]), 9581048228787694895)) : ((max(513654902, var_10))))) : ((min(var_6, (arr_29 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_25 = (arr_21 [i_2] [i_2] [i_2] [i_9] [i_10]);
                        var_26 = ((-(((!(3067531413419735348 == var_9))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_32 [i_2 + 1] [i_2]);
                        arr_42 [i_2 - 1] [i_2 - 1] [i_2] [i_11] = (arr_9 [i_2]);
                    }
                    var_27 = (max(var_27, var_4));
                }
            }
        }
    }
    var_28 = var_16;
    var_29 = var_7;
    var_30 = (min(var_30, 3614995716));
    #pragma endscop
}
