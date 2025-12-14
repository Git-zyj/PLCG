/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (var_5 ? var_9 : ((~((max(var_2, var_1))))));
    var_14 = (min(var_14, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((((min(var_10, 65530)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 *= (arr_7 [i_1] [i_1] [i_2]);
                            var_17 = (min(var_17, ((((((arr_1 [i_0]) + (arr_8 [i_0] [i_3]))) + (((22 + (arr_1 [i_0])))))))));
                            var_18 = (min(var_18, (var_1 / -var_12)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
