/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_4, var_8));
                var_12 ^= 138207786;
                arr_7 [i_0] = (var_8 >> var_0);
                arr_8 [i_0] [i_0] [i_0] = (max(((((max(var_1, var_6))) ? (min(0, 3)) : (~var_6))), ((min(1, 22)))));
                arr_9 [7] &= ((-2 ^ (((((((min(var_10, var_1))) + 2147483647)) >> (var_6 - 96))))));
            }
        }
    }
    var_13 = var_8;
    #pragma endscop
}
