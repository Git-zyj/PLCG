/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -29016;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = (max((max(-7512965490845542389, 1)), (max(-2147483634, var_4))));
        arr_4 [i_0] = ((((((1 ? 2147483626 : 5)))) ^ 14442051067958910038));
    }
    var_14 = -9223372036854775807;
    var_15 = 0;
    #pragma endscop
}
