/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 -= (-32745 ? (((var_12 ? var_7 : var_18))) : var_6);
                    var_21 = (max(var_21, ((((~-32745) ? (-9223372036854775807 - 1) : (arr_6 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [19] [i_0] [8] [i_0] [i_1] [i_0] = 32754;
                                var_22 = -32761;
                                var_23 ^= ((-((((max(32767, 6936438955295502032))) ? (((max(1, 84)))) : 1444466018228943553))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] [i_0] = var_18;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 ^= min(((1 ? 2147483648 : -9223372036854775780)), 268435328);
                                arr_22 [i_1] [i_0] [0] [i_1] [i_0] [i_0] = 1;
                                arr_23 [i_0] [i_1] [7] [i_0] [i_6] = ((~((-(arr_8 [i_0] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = 18446744073709551615;
    var_26 = (min(var_26, (!var_5)));
    #pragma endscop
}
