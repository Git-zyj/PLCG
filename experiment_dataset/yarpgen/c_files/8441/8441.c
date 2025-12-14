/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((min(var_7, -2068028363816676969)))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (min((((-2298957698921607465 & (arr_6 [8])))), ((9223372036854775807 ? (arr_7 [i_2] [i_2 + 2] [i_2 + 2] [11]) : (((((arr_7 [i_0] [i_1] [i_1 + 3] [i_1]) != var_16))))))))));
                    var_19 = (min(var_19, ((-(arr_0 [i_0] [9])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 ^= -var_11;
                                arr_12 [1] [i_2] = arr_5 [i_0 + 3] [i_0 + 3];
                                var_21 = (max(var_21, (min(var_15, (((((arr_2 [i_2 + 2] [i_2 + 2]) & -9223372036854775797)) / 9223372036854775807))))));
                                var_22 = ((((4715035903070658518 && (arr_9 [i_0] [i_0] [i_2]))) && ((max(var_0, var_3)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_23 = (~(max(-7907581290666669482, (arr_20 [i_0] [2] [2]))));
                        var_24 |= (var_2 / (min((~9223372036854775807), (((arr_6 [4]) ^ var_11)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_25 = var_15;
                    var_26 |= (((arr_1 [i_8]) - (min(4083286114452407708, (arr_2 [i_0] [i_8])))));
                    var_27 = 5027592806878814198;
                }
            }
        }
        var_28 = (min(var_28, (max((arr_19 [i_0] [i_0] [1] [11]), (arr_14 [i_0] [i_0] [i_0 - 1])))));
    }
    #pragma endscop
}
