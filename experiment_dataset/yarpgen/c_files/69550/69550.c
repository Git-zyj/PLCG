/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 = (min(var_11, ((max((((-var_8 || (~0)))), var_9)))));
        var_12 = (((((min((arr_0 [i_0 - 3]), var_0)))) > (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))));
    }
    var_13 = var_2;
    var_14 = (((((min(-31225, -7421886334455593828)))) ? 0 : -78));
    #pragma endscop
}
