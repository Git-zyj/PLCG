/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((max(((min(var_16, var_1))), (min(var_9, var_1)))))));
    var_19 += (min((max((!var_7), (min(var_2, var_0)))), (((~(!var_0))))));
    var_20 = (max(((max(var_17, ((min(var_14, var_11)))))), (max((~-20), (max(2147483648, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 += ((~((-(max((arr_5 [i_0] [0]), var_13))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [3] [i_1] [i_3] [i_3] [i_2] [i_0] [i_2] = (min(((-(max(var_5, 1308487206)))), (((!((max(8, -31910))))))));
                                var_22 = (min(((-(max(var_8, var_13)))), (((!((min((arr_4 [i_4] [i_4] [i_4]), var_4))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
