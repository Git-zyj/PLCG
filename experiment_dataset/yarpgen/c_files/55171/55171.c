/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 *= ((1172 ? (((var_4 && (((1 ? 0 : 1)))))) : (((!(((var_1 ? var_8 : (arr_1 [i_0])))))))));
        var_12 = (21258 | var_9);
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 = arr_0 [i_1 - 2];
        var_14 = (arr_2 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 ^= ((-(arr_0 [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_16 = 1;
                                arr_16 [i_1] [i_1] = (((arr_2 [i_1 + 1]) ^ var_5));
                                var_17 = 104833284;
                            }
                        }
                    }
                }
            }
        }
        var_18 = ((~(arr_4 [i_1])));
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_19 = ((-(((arr_13 [i_6] [i_6 + 1] [i_6] [i_6]) ? (arr_13 [i_6] [i_6 + 1] [i_6] [i_6]) : (arr_13 [i_6] [i_6 + 1] [i_6] [i_6])))));
        var_20 = ((-(var_3 ^ 22892)));
        arr_20 [i_6] [i_6] = ((-(arr_4 [i_6])));
        arr_21 [i_6] [i_6] = ((var_10 || ((((~var_4) ? ((((arr_13 [i_6] [i_6] [i_6] [i_6]) >= var_10))) : (arr_5 [i_6 - 2] [i_6] [i_6 + 1]))))));
        var_21 = (max(var_21, ((((!2334496452113866598) && (((var_1 ? 21258 : 1))))))));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    var_22 *= ((!((((((arr_8 [4] [4] [4]) + 2147483647)) >> (((arr_8 [6] [6] [6]) + 992762312)))))));
                    var_23 = (max(var_23, var_10));
                }
            }
        }
        var_24 = (((arr_29 [i_7 - 2] [i_7] [i_7]) ? ((((var_3 ? 42647 : var_8)) >> (((arr_2 [i_7]) ^ (arr_12 [i_7]))))) : 1186667626));
        var_25 = ((((min(1, var_6))) * var_2));
        arr_30 [i_7] = var_10;
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_26 -= ((((min((arr_29 [i_10] [i_11] [i_12]), var_0))) / var_4));
                    arr_41 [i_10] [i_10] [i_12] = (60207 - 18587);
                    var_27 = (((var_6 / 1) / var_0));
                }
            }
        }
    }
    var_28 *= var_1;
    var_29 &= var_10;
    #pragma endscop
}
