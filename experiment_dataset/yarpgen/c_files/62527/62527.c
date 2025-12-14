/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((127 ? 13 : 13010613884586057880)) * 0)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (((!var_8) - 12));
        var_14 *= (arr_1 [i_0]);
    }
    #pragma endscop
}
