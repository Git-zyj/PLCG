/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_16 = (max(32, ((-((119 ? var_15 : var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 -= ((32748 ? 1 : 4290318780484234809));
                                arr_10 [i_0] [i_2] [i_0] [i_2] [i_3] [i_4] = 113;
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((0 ? ((max(var_4, 9516))) : (max((((arr_2 [7]) ? (-9223372036854775807 - 1) : var_0)), (~255)))));
                    arr_12 [i_0] [i_0] [i_2] [7] = (-8714578181408611866 <= 3901582373479777197);
                }
            }
        }
    }
    var_18 = (((((76 ? 116 : ((min(var_1, var_6)))))) * var_13));
    var_19 *= ((var_11 ? var_6 : (max(36350, ((var_5 ? 21 : -68))))));
    #pragma endscop
}
