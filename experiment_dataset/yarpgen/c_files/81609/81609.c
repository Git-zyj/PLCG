/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((1 && 1560003658) >> (-113 + 124)))));
                var_18 = (max(var_18, (((!(49309 / 128))))));
            }
        }
    }
    var_19 = (max(var_19, 49309));
    var_20 = (max(var_20, ((min(1, 19387)))));
    var_21 = (~4242);
    #pragma endscop
}
