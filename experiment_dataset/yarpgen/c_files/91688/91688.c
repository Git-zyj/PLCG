/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((arr_0 [i_0]) % (arr_0 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 -= var_10;
                                arr_14 [i_4] = var_5;
                            }
                        }
                    }
                }
                var_15 = (((((var_10 ? var_1 : ((max(var_12, var_9)))))) != ((139958752906621528 ? (((max((arr_11 [i_1] [i_1]), var_5)))) : 15356269395980340185))));
                var_16 = var_3;
            }
        }
    }
    var_17 = (max(var_7, (((3090474677729211431 << 1) ? 1 : (max(var_7, -4122219474849047387))))));
    #pragma endscop
}
