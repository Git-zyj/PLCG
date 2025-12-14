/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min((max((min(-26832, var_8)), ((-(arr_2 [i_0]))))), ((5451 - ((-4796613318537990026 ? 0 : (arr_3 [i_0])))))));
        var_14 = ((((((arr_2 [i_0]) & -26832))) ? ((((arr_3 [i_0]) == (min(1, -6985375745380422325))))) : ((((min(-5851666966379753585, 11))) ? 28 : (!30539)))));
        var_15 = (min(var_15, 32750));
    }
    var_16 ^= (-((var_6 ? 740254064 : var_8)));
    #pragma endscop
}
