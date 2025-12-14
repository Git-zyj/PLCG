/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 - var_4);
    var_14 = ((var_9 >> ((((-6 ? (~var_6) : (var_2 ^ 2147483647))) + 13686))));
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((-(((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (min(((-20815 ? 6 : 63)), ((~(arr_7 [i_1 + 2])))));
                        arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_1] = ((-164 ? ((~(-89 + 2147483645))) : (arr_0 [i_1 - 2] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1 - 1] [i_2] [i_2] = ((+(min((((arr_8 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_1 - 1] [i_2]))), -1278379327))));
                        arr_15 [i_1] [i_2] [i_4] = (~(((arr_4 [i_1 - 1] [i_1 + 2]) ? (arr_4 [i_1 + 2] [i_1 + 1]) : 785879046)));
                        var_18 = (arr_5 [i_0] [i_1] [i_1 + 2]);
                        var_19 = (632155527 ? (arr_5 [i_1] [i_2] [i_4]) : (((((arr_11 [i_1] [i_4]) ? (arr_12 [i_0] [i_0] [8] [i_0] [i_0]) : 6)) - (~7))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_20 = (-605558935 + -1177182069);
                        var_21 = (((arr_12 [i_0] [i_1] [i_1 - 2] [i_1] [i_1]) == (arr_12 [i_1 - 2] [i_1] [i_1 + 2] [i_1 - 2] [i_2])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_7] [i_2] [i_6 - 3] [i_2] [i_1] [i_1] = (min(((1278379335 % ((~(arr_4 [i_0] [i_1]))))), -6));
                                var_22 = ((arr_9 [i_2]) ? (((-11 + 2147483647) >> (((arr_9 [i_0]) + 41)))) : (((arr_9 [i_0]) | (arr_9 [i_1 + 2]))));
                            }
                        }
                    }
                    var_23 = (-(((arr_8 [i_1 + 2] [i_1 - 1] [i_1 - 1]) ? -6 : (arr_8 [i_1 - 1] [i_1 - 2] [i_1 + 1]))));
                    arr_23 [i_0] [i_0] [i_0] = ((!((!(~-1278379297)))));
                }
            }
        }
    }
    #pragma endscop
}
