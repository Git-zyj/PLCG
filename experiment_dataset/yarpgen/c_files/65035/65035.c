/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (min(var_11, (((-107 < (arr_2 [i_0]))))));
        arr_3 [8] [i_0] = (max(3140839607009656, var_5));
        var_17 = (min(var_17, (((~(((!((min((arr_0 [i_0] [2]), var_2)))))))))));
    }
    var_18 = -1243394533;
    #pragma endscop
}
