/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 18446744073709551615;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] = ((arr_1 [i_0 + 2]) + (arr_1 [i_0 + 2]));
        var_12 = ((var_10 & (max((arr_0 [i_0 + 3]), (~0)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_13 += (((arr_3 [i_1] [i_1]) & (arr_7 [15] [i_1] [i_3])));
                                var_14 = (max(var_14, (((2044882296170870257 ? -32275 : (min((~2044882296170870252), 1)))))));
                                var_15 *= (((arr_10 [i_1] [i_3 + 3] [i_3] [i_3 - 2]) <= (!-2044882296170870263)));
                                var_16 -= ((!((max((arr_9 [i_1] [i_2 - 2] [i_3 - 2]), ((((arr_10 [i_1] [i_2 - 1] [i_1] [i_5]) % 49))))))));
                            }
                        }
                    }
                    var_17 = (17524325259220829807 == var_0);
                    var_18 = ((((((arr_14 [i_3 - 2] [i_2 + 1] [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_3 + 3] [i_2]) ? (~11) : (min((arr_13 [i_1] [i_1] [i_3]), (arr_12 [i_1] [12] [i_2] [i_3])))))) || (((-((var_2 << (9223372036854775807 - 9223372036854775806))))))));
                    var_19 = 18163;
                    var_20 = (((((188 | (-18123 + 192)))) ? (arr_8 [i_2 - 1]) : (((((((arr_4 [i_3 - 2]) == (arr_11 [i_3] [i_3] [i_2] [i_1] [i_1]))))) | (arr_9 [i_2 - 1] [i_2] [i_3 + 2])))));
                }
            }
        }
        var_21 = (((arr_10 [i_1] [i_1] [i_1] [i_1]) < (((var_8 ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_22 = (arr_15 [i_6] [i_6]);
        var_23 = ((var_8 ? ((~(!var_5))) : var_5));
        var_24 += var_5;
    }
    var_25 ^= var_6;
    #pragma endscop
}
