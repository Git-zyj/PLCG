/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [1] = 96;
                var_10 ^= ((!(((1 ? (!1) : ((221 ? var_9 : var_5)))))));
            }
        }
    }
    var_11 ^= ((1 >> (235 - 227)));
    var_12 = (var_6 ? var_1 : (~39248));
    #pragma endscop
}
