/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 ^= (var_5 / var_4);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_15 -= (max((min(var_11, var_4)), var_10));
                        var_16 = ((!(~var_9)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_17 = (!1);
                        var_18 *= ((-var_4 | (7222654224305692361 != 32767)));
                        arr_12 [6] [i_1] [i_1] [i_1] &= (max(var_4, (min(var_8, var_5))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_5] = var_8;
                            arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((!((((max(var_1, var_1)) / (((min(var_3, var_6)))))))));
                            var_19 = -var_7;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] = var_0;
                            var_20 = var_4;
                            var_21 = (max(var_21, var_0));
                            arr_22 [i_0] [i_0] [i_2] [5] [i_0] = (!var_2);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [12] [11] [i_0] = (((var_5 % var_6) ^ var_1));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                        }
                        var_22 = var_4;
                    }
                    var_23 &= (min(var_4, (max(650449569, (-9223372036854775807 - 1)))));
                    arr_27 [i_1] |= (max((~var_11), (max(var_1, (!var_0)))));
                    var_24 ^= (var_3 | var_12);
                }
            }
        }
    }
    var_25 = (max(var_25, var_0));
    #pragma endscop
}
