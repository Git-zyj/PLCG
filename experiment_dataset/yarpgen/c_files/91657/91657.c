/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_1] [i_1] [i_0] = 17996806323437568;
                            var_17 = ((!((((arr_6 [i_1] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2] [i_2]) & (arr_0 [i_0 - 2]))))));
                            arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] &= (arr_4 [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_5] [i_4] [i_1] = (min(59, 53262));
                            var_18 = ((~(arr_13 [i_1] [i_1] [i_1] [i_1])));
                            var_19 = var_12;
                            var_20 &= 122;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((-(arr_3 [i_0]))))));
                                var_22 = -var_14;
                                var_23 = ((~(arr_4 [i_1] [i_1] [i_7] [i_1])));
                                var_24 = (min(var_8, 157));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, (arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])));
            }
        }
    }
    var_26 -= var_4;
    #pragma endscop
}
