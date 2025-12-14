/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((118 ? (40890 >= var_10) : var_3)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 6;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 &= var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] = -var_2;
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_2 - 1] [i_0] [i_4] = (((((-32767 ? var_1 : 34))) ? var_3 : (arr_12 [i_1] [i_1])));
                                var_15 = (min(var_15, (((var_7 ? ((((arr_2 [i_0 + 1] [i_0]) > var_1))) : (((arr_13 [i_0] [i_1] [i_2 - 1]) ? var_3 : (arr_1 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_16 &= (~(((arr_1 [i_0] [i_0]) ? var_4 : var_3)));
        var_17 = (arr_2 [i_0 + 3] [i_0 - 1]);
        var_18 = ((~((3254058514160130283 ? 136 : var_2))));
    }
    for (int i_5 = 2; i_5 < 6;i_5 += 1) /* same iter space */
    {
        var_19 &= ((-(min(var_3, ((-(arr_17 [i_5 + 2] [9])))))));

        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            arr_21 [i_6] [1] [i_6 - 3] = (!(!var_3));
            var_20 += ((+(((arr_9 [i_5]) ? (var_2 > 251) : (var_4 | var_2)))));
            var_21 = -904707377;
            var_22 = ((var_6 ? 161 : (((arr_20 [i_5] [i_5]) ? (((12880523747335326497 ? (arr_2 [i_5] [i_6 - 3]) : 513737547))) : (~7112476138820394849)))));
            arr_22 [i_6] = ((~((~((var_2 << (((arr_4 [i_5] [i_5 + 3] [i_5 + 1]) + 570695185))))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_23 = ((16 ? var_1 : var_9));
            var_24 = (((arr_20 [i_5 + 3] [i_5 + 4]) ? (arr_20 [i_5 - 1] [i_5 + 1]) : 19718));
            var_25 -= ((-((((arr_23 [i_5 + 4] [i_7]) || var_0)))));
        }
        var_26 = (((~(arr_9 [i_5]))));
    }
    #pragma endscop
}
