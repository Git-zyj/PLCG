/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 |= var_9;
        var_12 = (min(var_12, (((-(((arr_2 [i_0]) ? (arr_3 [i_0]) : (max(var_5, 2972575818)))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_13 -= (arr_6 [i_2]);
                        var_14 |= (~4294967290);
                    }
                }
            }
        }
        var_15 = (((((arr_10 [i_1]) ? ((var_4 ? (arr_8 [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_1]))) : (((arr_11 [i_1] [i_1]) ? var_3 : (arr_10 [i_1])))))) ? (((arr_7 [i_1]) ? (arr_7 [i_1]) : var_7)) : (((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_10 : (arr_3 [i_1]))))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_24 [i_5] [i_7] [i_5] [i_6] [i_5] = (((((arr_3 [i_5 - 1]) + 2147483647)) << (((((arr_3 [i_5 + 1]) ? 554138256 : -1377682902)) - 554138256))));
                        var_16 = (arr_20 [i_5] [i_5] [i_7] [i_8]);

                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            var_17 = ((+(((arr_20 [11] [i_6] [i_7] [i_8]) - ((var_7 ? (arr_11 [i_5] [1]) : (arr_6 [i_8])))))));
                            var_18 = (((arr_22 [i_8] [i_8]) ? (arr_22 [i_7] [i_7]) : ((-(((var_6 && (arr_7 [i_8]))))))));
                            arr_27 [i_5] = (((((((min(3013, var_1))) >> (((!(arr_12 [i_5] [2] [i_7] [i_8] [i_9]))))))) ? (((~var_6) ? 3013 : (~var_9))) : (1377682902 > var_10)));
                        }
                        var_19 = ((var_6 ? (min(((37 ? 1377682904 : 3013)), -1377682902)) : (((!(arr_10 [i_5]))))));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_20 -= ((max(var_9, (max((arr_29 [i_5] [i_6] [i_6] [i_5] [i_8] [i_8] [i_10]), (arr_10 [i_5 - 1]))))));
                            var_21 -= ((((max((max(var_4, var_1)), 59268))) ? -28047 : (-27317 / 77)));
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            var_22 = (arr_30 [i_5] [i_8] [i_11 - 1]);
                            var_23 = (arr_25 [i_5 + 1] [i_5] [12] [i_5 + 2] [i_5]);
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_24 = (max((((((((arr_13 [i_5]) >> (((arr_31 [i_12]) - 20586))))) ? (arr_32 [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] [1]) : (((arr_1 [i_7] [i_7]) ? -1100944511 : var_2))))), ((~(arr_11 [i_5 + 2] [i_5 + 1])))));
                            var_25 |= -41;
                            var_26 = arr_21 [14] [i_5] [14];
                            var_27 = ((((min((((arr_22 [i_5] [11]) ? var_8 : (arr_11 [i_5 + 2] [i_5 + 1]))), -28047))) ? var_9 : var_0));
                        }
                    }
                }
            }
            var_28 = (arr_20 [i_5] [i_5] [i_6] [i_6]);
        }
        var_29 ^= (((((!1377682904) ? ((27306 >> (((arr_22 [i_5] [12]) + 86)))) : (((arr_34 [i_5] [i_5] [i_5] [i_5] [10] [1] [1]) ? 27306 : var_3))))) ? 28026 : var_7);
    }
    var_30 &= (((-127 - 1) ? var_4 : (!var_0)));
    var_31 &= ((((var_10 ? 28004 : var_2))));
    #pragma endscop
}
