/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((68 ? ((var_8 ? 2076731806 : var_6)) : var_4))) ? -var_8 : var_8));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [8]);
        var_15 = 85;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [6] = (((arr_7 [i_2 + 1] [i_2]) || 28806));
            var_16 -= 1708106588825839605;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_17 = 4;

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_18 = (min(var_18, (((~(var_4 - var_9))))));
                            var_19 = (arr_1 [2]);
                            arr_16 [8] [8] [i_4] = arr_5 [i_2 + 1];
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_20 = ((((((arr_15 [i_6] [i_1] [0] [i_1] [i_1]) & (arr_19 [i_6])))) * 0));
            var_21 = (min(var_21, 30092));
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_22 = (-65 ^ (((arr_15 [i_1] [i_1] [i_7 + 1] [i_1] [i_1]) ^ 28)));

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_26 [i_8] [i_8] [10] [i_1] = (arr_25 [11] [11] [i_7] [4]);
                var_23 = (arr_25 [i_1] [i_7] [i_8] [i_1]);
                var_24 = (((arr_15 [i_1] [i_1] [i_1] [i_1] [0]) ? -30092 : (arr_14 [i_7] [0] [i_1])));
                var_25 = (min(var_25, ((((11937 == var_5) ? ((((arr_1 [i_8]) >= (arr_22 [i_1])))) : (var_0 - 30078))))));
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_26 = (var_0 >= var_12);
                var_27 *= var_1;
                var_28 = ((arr_27 [i_9 + 1] [i_9 + 1] [2]) ? (arr_27 [i_9 + 1] [i_9 + 1] [i_9]) : (arr_27 [i_9 + 1] [i_9 + 1] [i_9]));
                var_29 = arr_20 [i_1] [5] [5];
                var_30 -= (((arr_28 [0] [0] [i_9] [6]) >> (((~var_9) + 1))));
            }
            arr_29 [i_1] &= 500653268;
        }
        arr_30 [i_1] = (((((arr_21 [i_1]) + var_9)) % var_1));
        var_31 = (min(var_31, ((((1 ? 95 : 4611686018427387903))))));
        var_32 = (((arr_18 [11] [i_1]) || ((((arr_1 [10]) ? var_9 : 1)))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_33 = (min(var_33, ((((arr_31 [i_10] [3]) ? ((-4611686018427387904 ? (arr_31 [2] [i_10]) : ((var_3 ^ (arr_32 [i_10]))))) : (((-7383311720875656799 ? 76 : 0))))))));
        var_34 -= 20;

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_35 = (min(var_35, (((~(((((var_0 ? var_5 : 1))) | ((var_5 ? (arr_35 [4] [4] [9]) : (arr_36 [i_10]))))))))));
            arr_37 [i_10] [9] = (!(arr_31 [i_10] [1]));
            var_36 -= var_7;
            var_37 = (((arr_32 [i_11]) ? ((var_5 ^ (arr_32 [i_11]))) : (min((arr_32 [i_10]), (arr_32 [i_10])))));
        }
    }
    #pragma endscop
}
