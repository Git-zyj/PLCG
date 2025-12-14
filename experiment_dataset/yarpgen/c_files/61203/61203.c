/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = var_5;
        var_14 = (arr_0 [i_0]);
        arr_2 [2] |= (arr_1 [4]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 ^= (arr_4 [i_0] [i_1]);
                    var_16 -= (arr_7 [i_1] [i_1]);
                    var_17 += var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = var_8;
                                var_19 = (((6989945507606706987 == 488512426) ^ (arr_3 [i_4])));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [21] = 17730;
                            }
                        }
                    }
                    var_20 += (arr_4 [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_21 = (min(var_21, 1));
        var_22 = ((-1903901563 && (((-(!var_12))))));
        arr_16 [i_5] = var_6;
    }
    var_23 = max(var_12, var_5);

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_24 = (max(var_24, (((!(((-6989945507606706998 ? -1802237490 : 3838))))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_27 [i_6] [i_7] [i_8 - 1] [i_8 - 1] [i_9] = (arr_3 [i_7]);
                        var_25 = (min(((((var_9 & (arr_23 [i_6] [i_6] [i_6]))) - (-63 <= 37257))), ((-(arr_4 [i_6] [i_8 + 2])))));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        arr_39 [i_11] [i_11] [i_11] [2] = (max(((min(((-(arr_21 [i_10] [10] [i_10] [10]))), var_3))), ((-610003355 ? (-45 - -1515964019341091766) : var_11))));
                        arr_40 [5] [i_11] [i_11 - 2] [i_11] [i_11] = ((((max((arr_7 [i_10] [i_11 - 1]), -124))) == ((~(arr_14 [i_10] [i_10])))));
                    }
                }
            }
        }
        var_26 = (max(var_26, (arr_7 [i_10] [i_10])));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_27 = (max(((-((min(var_3, -7359))))), (((((arr_1 [14]) && (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [8] [i_14]))) ? (arr_4 [i_14] [i_14]) : ((max(62, var_1)))))));
        var_28 = var_8;
    }
    #pragma endscop
}
