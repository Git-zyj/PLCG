/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] = (max(2700557012727164730, ((min(var_13, (arr_0 [i_1 + 1]))))));
                var_17 = var_13;
            }
        }
    }
    var_18 &= 4294967292;
    var_19 = var_7;
    #pragma endscop
}
