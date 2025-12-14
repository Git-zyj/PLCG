/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min((var_8 - 65535), (!var_6)))) ? ((((min(var_1, var_1))) ? var_5 : var_0)) : ((((((var_6 ? var_1 : 27459)) != (var_3 != var_6)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((-((((arr_1 [i_0]) <= -1))))) * (((((arr_0 [i_0] [i_0]) & (arr_1 [i_0]))) / var_7))));
        var_11 = arr_0 [i_0] [5];
        var_12 = ((!((((~var_3) ? ((((arr_1 [i_0]) < 65535))) : (arr_1 [i_0]))))));
        var_13 = var_5;
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_14 = (arr_3 [i_1]);
        var_15 = var_5;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = (arr_7 [i_2]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_17 = 65532;
            var_18 = ((var_2 ? (~var_5) : ((var_3 >> (((((var_9 + 2147483647) >> (var_9 + 32365))) - 508))))));
            var_19 = (max(((((var_9 < (arr_8 [17]))) ? var_9 : (arr_8 [i_3]))), ((max((((62546 >> (((arr_6 [i_3]) + 547215628))))), (var_0 / var_4))))));
            var_20 = (arr_8 [i_2]);
            var_21 = (((~var_9) & ((var_1 >> ((((min(65532, (arr_1 [i_3])))) - 50782))))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_13 [i_2] [5] [i_2] = ((((((var_0 + var_1) ^ ((var_0 ? (arr_1 [i_2]) : (arr_8 [i_4])))))) ? (arr_6 [i_2]) : -2115003187));
            var_22 = max(((((arr_9 [i_2] [i_4]) ? (((var_9 + (arr_12 [i_2] [i_2] [i_2])))) : (((arr_9 [i_2] [i_4]) - var_0))))), 4797270947610292704);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_17 [i_2] = ((((var_9 | (min((arr_14 [i_2] [i_4] [i_5]), var_4)))) != var_5));
                arr_18 [i_2] [i_2] [i_2] = var_0;
                var_23 = var_0;
            }

            /* vectorizable */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_24 = (((var_4 == var_8) + (arr_19 [i_2] [i_6 - 3] [i_6 - 2] [i_6 - 3])));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_25 = (arr_22 [i_6 - 1] [9] [i_7 + 2] [9]);
                            var_26 = ((((var_6 ? 62546 : var_8)) <= (arr_11 [i_7 - 1] [i_6 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_29 [i_2] [i_2] [i_2] = var_6;
            arr_30 [i_2] [i_2] [i_2] = (((var_2 ? var_9 : var_6)));
            var_27 = ((min(var_9, (max(var_1, var_8)))));
            var_28 = ((~((((min(var_0, var_6)) < (arr_21 [i_9] [i_9] [i_2] [i_9]))))));
            var_29 = (arr_10 [i_2] [i_9] [i_9]);
        }
        var_30 = var_2;
    }
    var_31 = var_0;
    #pragma endscop
}
