/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_1] &= (arr_11 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 2]);

                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [6] [7] [i_0] = (((arr_2 [i_1] [4]) - 122));
                            var_12 = (((arr_2 [i_3] [i_4 - 4]) >= ((7 >> (var_6 - 221633388)))));
                            var_13 |= (((arr_8 [i_2] [16] [i_2] [i_2 - 1] [i_2 + 1] [i_4 - 1]) != 3086362693));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_2] [16] [i_3] [i_5] = 122;
                            var_14 = (((arr_8 [i_3] [i_3] [i_2 - 3] [i_2 + 3] [3] [i_2 - 3]) < (arr_8 [i_3] [13] [i_2 - 2] [i_2 + 3] [i_2] [i_2 - 3])));
                            arr_19 [i_1] [i_1] [i_0] [i_1] [i_1] [i_2 - 2] = (((((~(arr_0 [i_0])))) ? (7 || -1645576129) : (((var_11 || (arr_14 [i_0] [i_0]))))));
                            var_15 = -123;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_2 - 2] &= ((~(arr_16 [i_3] [i_6] [i_2 - 1] [i_2] [i_6] [i_2 + 3])));
                            var_16 -= var_5;
                            var_17 = var_2;
                        }
                        var_18 = (min(var_18, var_0));
                    }
                }
            }
            var_19 = (min(var_19, ((((arr_6 [i_1] [i_1]) > (arr_6 [i_1] [i_1]))))));
            var_20 += ((-1645576129 ? (arr_0 [i_1]) : (((-1556257824 + 2147483647) >> 0))));
        }
        var_21 = (min(var_21, (((~(arr_6 [6] [i_0]))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_22 ^= (((arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) == ((min((arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [11]), (arr_4 [i_7] [i_7]))))));
        var_23 = (max(var_23, (((-(((((arr_25 [i_7]) && 787649742)) ? -787649742 : var_5)))))));
        var_24 = (max(var_24, ((96 ? -1556257824 : -96))));
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_25 += (--933668916);
        var_26 += (min(((((max(var_2, var_11)) == var_0))), ((0 | (arr_26 [22] [22])))));
    }
    #pragma endscop
}
