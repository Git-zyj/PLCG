/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (((8191 ? 3374746824 : 11578314531933459517)));
                    var_12 = arr_2 [i_2 + 2] [i_2 - 2];

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] = (arr_3 [i_2 + 2]);
                        var_13 *= arr_3 [i_2 - 1];
                        var_14 = (arr_8 [i_0] [i_0] [i_1] [i_1] [18] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_1] = (arr_11 [i_4]);
                        var_15 = (((4294967295 ? var_3 : var_3)));
                        var_16 = (arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2]);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_17 = (((-(arr_12 [i_5] [i_1] [i_1] [i_0]))));
                        var_18 = ((920220472 + (arr_11 [i_0])));
                        arr_16 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 - 1] [i_1] = 3374746829;

                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_19 = (arr_7 [i_0] [i_5] [i_6 + 1] [i_2 + 2] [i_2 + 2]);
                            var_20 = (max(var_20, (arr_12 [i_0] [17] [i_2 - 1] [i_6])));
                            var_21 = (max(var_21, ((((arr_17 [6] [6] [i_2 + 1] [i_6 - 1] [i_2 + 1]) ? (arr_17 [i_0] [i_6 - 1] [i_2 - 1] [i_6 + 1] [i_0]) : (arr_17 [17] [i_5] [i_2 - 1] [i_6 - 2] [i_6]))))));
                        }
                    }
                    var_22 = (((arr_7 [i_2 - 1] [i_2 + 2] [1] [i_2 - 1] [i_2 - 1]) ? (arr_9 [i_2 + 1] [i_2] [i_2 + 1]) : (4035225266123964416 % 58984)));
                }
            }
        }
        var_23 -= ((var_6 ? -var_2 : var_9));
        arr_19 [i_0] = (arr_2 [i_0] [i_0]);
        arr_20 [i_0] [i_0] = 54061;
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        var_24 = (arr_23 [i_7]);
        var_25 = (~var_8);
        arr_24 [i_7] [1] &= (3374746824 && -1707217591029003966);
        var_26 = (((max((arr_21 [i_7]), var_1))) || (((arr_21 [i_7]) || (arr_23 [i_7]))));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_27 ^= (max((arr_22 [i_8] [i_8]), 3374746824));
        arr_28 [i_8] = (((arr_21 [i_8]) * var_1));
    }
    var_28 -= var_9;
    var_29 = var_2;
    #pragma endscop
}
