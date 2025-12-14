/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_0;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_11 = ((1267874308 ? 0 : -26853));
        var_12 -= (arr_2 [i_0]);
    }
    #pragma endscop
}
