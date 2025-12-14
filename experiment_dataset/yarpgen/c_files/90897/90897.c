/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [0] = ((var_2 && (((arr_3 [i_1] [i_1]) || var_0))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_10 += 8779501146904806134;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_11 |= (arr_1 [i_2]);
                            arr_14 [i_1] [19] = ((var_1 ? (0 || var_0) : (var_1 <= -8779501146904806134)));
                            var_12 = (max(var_12, (arr_7 [12])));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_13 -= (((~7864328607114146364) != var_3));
                            var_14 = ((23 + (arr_17 [i_1] [i_0 + 1] [i_0 + 1] [i_1])));
                            var_15 = arr_17 [i_1] [i_1] [i_1] [i_1];
                        }
                        arr_18 [i_0] [i_1] [i_0] = (((((-(arr_12 [i_3 - 3] [i_1] [i_2] [i_1] [i_0])))) && 16));
                        var_16 *= (((!255) < (~67108863)));
                    }
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        var_17 += (max(var_7, (arr_1 [i_0 + 1])));
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] = ((!(((((var_1 > (arr_10 [i_0 + 1] [i_1] [19] [19]))) ? (((min(1, 151)))) : (arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))))));
                    }
                    var_18 = var_2;
                }
            }
        }
    }
    var_19 |= var_4;
    var_20 = (var_6 ? (~var_1) : ((0 + (~18446744073709551615))));
    #pragma endscop
}
