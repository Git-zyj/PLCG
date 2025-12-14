/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (min((((!(((var_11 ? 32762 : var_8)))))), (~var_1)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_13 *= ((2803915701519967319 ? (((((~(arr_4 [4] [4] [i_1]))) < 1))) : (((32762 <= ((min(1, var_7))))))));
                            arr_11 [i_0 + 1] [7] [7] [i_0] &= 9840688757652857260;
                            var_14 ^= -var_10;
                        }
                    }
                }
                var_15 = (min(var_15, ((min((((((var_2 ? var_12 : (arr_8 [i_1] [i_0] [0] [i_0] [i_0])))) + ((var_11 ? 1 : var_3)))), (((((arr_1 [i_0] [i_0 - 1]) / var_11)))))))));
            }
        }
    }
    var_16 = (max((min((min(9840688757652857254, -14802)), -9840688757652857261)), ((max((min(var_6, var_2)), var_10)))));
    var_17 = (max(var_17, 1));
    var_18 *= (max((max(var_3, (244 ^ var_0))), 1));
    var_19 |= ((9840688757652857247 ? ((~((235 ? 126 : 15642828372189584292)))) : (((var_4 ? ((237 ? 237 : 159)) : var_8)))));
    #pragma endscop
}
