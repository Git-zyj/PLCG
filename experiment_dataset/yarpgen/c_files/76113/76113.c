/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (~(((!(((var_4 ? var_0 : var_11)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, (((!((max((max(-30470, (arr_2 [i_0] [1]))), ((min(1, 8927116)))))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_16 += (var_0 ? (arr_0 [i_1]) : (arr_0 [i_1]));
            var_17 = ((-(!var_0)));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_18 = var_2;
            arr_9 [i_0] [i_0] [i_0] = ((-((var_1 ? (arr_4 [i_0]) : (arr_4 [i_0])))));
            arr_10 [i_0] [i_0] = ((!((((arr_1 [i_0]) ^ (max(var_5, (arr_7 [13] [i_2] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 += ((1 >= ((((!(((var_12 << (29 - 28))))))))));
            arr_14 [i_0] [i_0] = (arr_0 [i_0]);
            arr_15 [i_0] [i_0] = (arr_13 [i_3] [i_3]);
            var_20 = ((~((((var_11 ? (arr_4 [1]) : var_12)) + (arr_1 [i_3])))));
            arr_16 [i_0] [i_0] [i_0] = max(((28 ? 227 : 8796093022176)), (((((max((arr_2 [i_0] [i_0]), (arr_4 [i_0])))) ? ((min(227, 223))) : var_6))));
        }
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_21 *= (min((((arr_18 [i_4 - 1]) ? var_5 : var_11)), (arr_18 [i_4 - 1])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 -= (((arr_24 [8] [i_5 + 2] [i_4 - 1]) ? (max(33554431, var_4)) : (((var_12 != (((!(arr_23 [i_4] [5])))))))));
                    var_23 = (max(var_23, (arr_22 [i_6 - 1] [i_5] [i_5 + 1] [i_4 - 1])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = -786646197531159687;
                                var_25 *= (arr_30 [i_5] [i_5] [15] [i_5] [i_5 + 2]);
                                var_26 = (arr_20 [i_4] [i_4]);
                                var_27 *= ((!(((-((~(arr_23 [i_4] [i_4 + 1]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_28 += (((((1 ? var_6 : (arr_33 [i_6] [8] [i_6] [i_6])))) | (arr_37 [i_5] [6] [i_10] [i_5 + 1] [i_5 + 1])));
                                var_29 += (min((!22), 29109));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
