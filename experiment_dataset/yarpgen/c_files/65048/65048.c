/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = ((((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_0]))));
                        var_17 = (!(((var_5 ? var_10 : (arr_4 [i_0])))));
                        var_18 = var_0;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_19 = (max(((((arr_12 [i_4 + 1] [i_4] [0] [i_4 + 1] [i_4 + 1]) ? (3790460649 > 1) : (var_6 * var_11)))), ((((((arr_2 [i_0] [i_2] [16]) ? 1 : 1))) ? (((arr_3 [i_0] [i_2] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_6 [i_0] [i_2]))) : (var_1 <= var_12)))));
                        var_20 = -1;
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_21 = (max(var_21, ((((((arr_8 [i_1]) - (arr_0 [i_0] [i_1]))))))));
                        var_22 = 10;
                        var_23 *= (arr_4 [i_1]);
                        var_24 -= ((var_11 || (((arr_3 [i_1] [i_5 - 1] [i_1]) && (arr_3 [i_1] [i_5 - 1] [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_17 [i_0] [i_6] [i_2] [i_2] [i_1] [i_0] = ((!((((arr_7 [i_0] [i_0]) ? var_4 : 2)))));
                        var_25 -= (arr_6 [i_0] [i_1]);
                        var_26 &= (((var_1 ? (arr_11 [i_1] [i_2] [i_6]) : (((arr_1 [i_1] [i_6]) ? var_10 : 2400560686190624887)))));
                        var_27 ^= (arr_2 [i_0] [i_1] [i_2]);
                    }
                    var_28 = (min(var_28, (((var_5 / (arr_4 [i_1]))))));
                    arr_18 [i_0] [i_2] = (i_0 % 2 == 0) ? ((var_9 & ((((((arr_2 [i_2] [i_1] [i_0]) << (((arr_10 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0]) - 243901551)))) != ((min(var_7, var_10)))))))) : ((var_9 & ((((((arr_2 [i_2] [i_1] [i_0]) << (((((arr_10 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0]) - 243901551)) - 1535200874)))) != ((min(var_7, var_10))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_29 *= (arr_8 [i_9]);
                    var_30 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
