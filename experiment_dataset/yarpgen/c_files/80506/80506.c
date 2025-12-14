/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 &= (max((((~var_9) ^ 16410)), (((~var_8) ? var_0 : ((16410 ? 49109 : 55))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 += (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (((((-(((8740882289981273927 >= (arr_0 [i_0]))))))) - 4101270800));
                                var_15 = (~(arr_14 [i_1 + 3] [i_1 + 3] [i_1 + 3]));
                            }
                        }
                    }
                    arr_16 [i_0] [16] [i_1] = (1707278217 / -1707278212);
                }
            }
        }
    }
    #pragma endscop
}
