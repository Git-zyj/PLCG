/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_5 ? var_8 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 += var_9;
                var_13 ^= var_6;
            }
        }
    }
    var_14 |= (((((!(((1 ? 27139 : 208)))))) != (!14005552891561254416)));
    var_15 = 4;
    #pragma endscop
}
