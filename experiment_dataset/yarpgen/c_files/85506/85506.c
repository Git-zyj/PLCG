/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = 1;
    var_22 = (min(var_22, 32688));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [10] = ((arr_0 [12]) ? (((10638 ? (arr_4 [6] [10] [i_2 - 2]) : -22755))) : 630837814038156777);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [2] |= ((260182653304903065 ? 32944 : 32767));
                                var_23 *= -64;
                                var_24 ^= (((arr_9 [i_0] [i_4] [i_0] [11] [i_0]) != 260182653304903065));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
