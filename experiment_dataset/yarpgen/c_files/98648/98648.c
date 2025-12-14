/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(var_1, 17));
        var_18 = ((max(6279, (((arr_0 [i_0]) << (39675 - 39671))))) + (!11534743300351222065));
    }
    #pragma endscop
}
