/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((((var_7 ? var_13 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 ^= 12873065097199950979;
                var_17 = 27909;
                var_18 = ((((min(((max(var_5, var_6))), var_1))) ? ((min(var_9, (-21172 < 524287)))) : ((((max(var_14, var_12))) ? 5573678976509600642 : ((((var_2 < (arr_1 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
