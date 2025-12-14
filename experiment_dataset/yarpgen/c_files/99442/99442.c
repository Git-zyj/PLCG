/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = 1;
                var_13 = ((((!(~48112)))));
            }
        }
    }
    var_14 |= (min(var_1, 33554432));
    #pragma endscop
}
