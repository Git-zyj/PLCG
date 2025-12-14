/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 5365;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((~((((~(arr_2 [18] [i_1]))) << (((var_6 + 7456650582091733000) - 55))))));
                    var_15 -= var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_3 [9] [i_2] [i_0])));
                                var_17 |= arr_11 [8] [i_1] [i_1] [i_1] [12];
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_4] = (var_2 + (((-(arr_7 [5] [i_0] [i_2] [5])))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [21] = (max((min(9210557296228896518, (~53465))), 9223372036854775807));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
