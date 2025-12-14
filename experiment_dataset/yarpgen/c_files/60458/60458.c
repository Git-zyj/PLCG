/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((var_0 ^ (min(var_2, var_0)))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((min(((((((arr_2 [i_1]) << (-512 + 558))) < var_0))), ((min((arr_3 [i_0] [i_1] [i_1]), 1480))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] = (~262144);
                                var_13 *= 61467;
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = (~(arr_9 [i_0] [i_0] [i_0] [i_0]));
    }
    var_14 = (max(var_14, (((+(((var_6 - var_3) - var_8)))))));
    var_15 = (min(65535, 12723053344870275565));
    #pragma endscop
}
