/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(1360928936480117013, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 *= arr_7 [i_0] [i_0] [i_0] [9];
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((var_11 ? -17085815137229434631 : ((-(arr_2 [i_3]))))))));
                                var_21 = ((2147483627 > (arr_2 [i_0])));
                                var_22 = (arr_0 [i_1 + 1] [i_4 - 1]);
                            }
                        }
                    }
                    arr_14 [9] [9] [i_2] = (min(((2147483622 ? ((var_16 ? var_3 : var_17)) : (!0))), (arr_13 [7] [7] [i_0] [i_0] [7] [i_2] [i_2])));
                    arr_15 [i_0] = (arr_10 [i_0] [i_0] [i_0] [14]);
                }
            }
        }
    }
    #pragma endscop
}
