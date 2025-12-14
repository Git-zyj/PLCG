/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_9;
    var_16 = (((((4240588267848715651 >> (-4214 + 4215)))) ? ((2147483647 ? var_7 : -119)) : ((-1 ? -7488427114024923624 : (139 > -707687895776077262)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [8] = ((-18446744073709551615 + ((-55 ? -16059478383586075299 : ((-97 ? 18446744073709551604 : 4591))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 &= ((max(30, 0)));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] = ((max(17437, 232)));
                            var_18 ^= ((-39 ? 139 : 57));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
