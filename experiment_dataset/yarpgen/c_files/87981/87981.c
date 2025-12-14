/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (28 ? (min(((max(-862189733, var_12))), -17944029765304320)) : (((17944029765304320 ? var_13 : (var_15 || 10056)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = (min(-17944029765304320, (arr_12 [i_0] [i_1] [17] [i_3] [i_4])));
                            var_19 *= max(((min((max(-17944029765304320, 17944029765304320)), var_7))), (max(47075, var_14)));
                            var_20 = ((((((arr_13 [i_0] [i_1] [i_1] [15] [7] [i_4]) > (arr_2 [i_3] [14])))) >> ((((arr_4 [i_0] [i_4]) && 2147483631)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = (((arr_12 [i_0] [i_1] [1] [7] [i_0]) & var_1));
                            var_22 ^= (((arr_4 [i_3] [i_5]) ? -17944029765304320 : (arr_4 [i_0] [i_0])));
                            var_23 -= (((arr_1 [2] [8]) ? (arr_1 [4] [i_1]) : (arr_1 [i_0] [i_2])));
                        }
                        var_24 &= -457347004712994487;
                        arr_20 [i_3] [i_1] [i_0] [i_3] = (arr_1 [i_0] [i_3]);
                    }
                    arr_21 [i_1] [i_1] [3] = min((min((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_2]))), (((arr_6 [i_0] [i_0]) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_1] [i_2]))));
                    arr_22 [i_0] [i_1] [i_2] = -8394828959563701043;
                }
            }
        }
    }
    var_25 *= (~-5969578712466114982);
    #pragma endscop
}
