/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 248;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1] = (((((12 ? (arr_6 [i_0] [i_1]) : 2176))) && (!39)));
                                var_11 -= (28346 < -7323208424777078513);
                            }
                        }
                    }
                }
                arr_13 [9] [i_0] = (max(8904791871283532398, -4308137827307895578));
                var_12 = max(((-(arr_1 [i_1] [i_0]))), (((-(arr_3 [i_0])))));
            }
        }
    }
    var_13 = var_0;
    var_14 = (max(var_14, (((1 >> (var_2 + 26899))))));
    #pragma endscop
}
