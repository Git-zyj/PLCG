/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_16 = 37;
                    arr_7 [i_0] [i_1] [i_0] = (((-(arr_2 [i_1 + 1] [i_1 + 1]))) < (0 | 0));
                }
            }
        }
        arr_8 [i_0] = ((((+((9 ? (arr_4 [i_0] [i_0] [i_0]) : var_2)))) | ((max(2697484183733598019, 37)))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((!((max((!var_15), (min(35610, var_4)))))));
        var_17 = (arr_11 [i_3 + 1]);
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_18 = ((((((arr_22 [i_4 + 1] [i_5] [i_4] [i_5 + 1]) ? (arr_22 [i_4 + 1] [i_5] [i_4 - 1] [i_5 + 1]) : (arr_22 [i_4 + 1] [i_5] [19] [i_5 + 1])))) ? ((((arr_22 [i_4 + 1] [i_5] [i_4 + 1] [i_5 + 1]) <= (arr_22 [i_4 + 1] [i_5] [i_5] [i_5 + 1])))) : (arr_22 [i_4 + 2] [i_5] [1] [i_5 + 1])));
                                var_19 = 1230;
                            }
                        }
                    }
                    arr_27 [19] [i_5] [i_5] [i_6] = (+((var_13 % ((((arr_24 [i_5] [i_5] [i_5] [i_5]) ? (arr_17 [i_4]) : (arr_17 [i_5])))))));
                }
            }
        }
        arr_28 [i_4] = (min(20383, ((9386341425507467496 ? (arr_10 [1]) : (arr_14 [i_4 + 1] [i_4 - 1])))));
    }
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        arr_32 [i_9] = 244;
        arr_33 [i_9] = (max((((!var_14) ? (max((arr_10 [i_9]), (arr_20 [i_9] [i_9 + 1] [i_9] [i_9 - 1]))) : (arr_17 [i_9 - 2]))), ((((var_13 ? 1 : (arr_30 [i_9] [i_9])))))));
    }
    var_20 = (((max((7 && -9223372036854775798), (!1))) ? var_13 : ((((~var_10) ? var_5 : ((min(var_11, var_2))))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            {
                arr_39 [i_10] [i_10] = 0;
                arr_40 [i_10] [i_11] = arr_3 [i_10] [3] [0];
            }
        }
    }
    #pragma endscop
}
