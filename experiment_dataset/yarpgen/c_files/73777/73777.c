/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((301714408 % (-9223372036854775807 - 1)));
    var_20 = var_3;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((65526 ? 2032 : -6));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_21 -= (((((~(-9223372036854775807 - 1)))) ? (((((arr_12 [0] [0] [i_1] [i_0] [0] [i_1] [i_4]) > var_5)))) : -9223372036854775806));
                            arr_14 [8] [8] [i_2] [i_2] [i_4] [i_4] [9] = (arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_2]);
                            var_22 -= (((arr_5 [i_0] [i_1] [i_1]) ? -2476290554426088478 : -23169));
                            var_23 = (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1] [5]);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_2] = (max(((((arr_11 [i_0] [i_0] [i_0 + 2]) <= (arr_10 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 3])))), (arr_11 [i_0 - 1] [i_0] [i_0 + 2])));
                            var_24 = ((var_17 % ((((0 ? (arr_18 [i_2] [0] [i_2]) : var_8))))));
                        }
                        var_25 = (((((max(1966158644, 9223372036854775807)) >= (((-8 ? var_14 : var_14))))) ? (arr_1 [i_2 + 1] [i_3]) : (arr_6 [i_0 - 2] [i_1] [i_0 - 2])));
                        var_26 = ((((min((((83 ? var_18 : var_18))), ((-56 ? var_2 : var_6))))) ? (max((15374198204609838518 != 9223372036854775807), (18446744073709551590 + var_9))) : (((-(min((arr_0 [i_0]), var_17)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
