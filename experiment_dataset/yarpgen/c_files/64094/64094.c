/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max((min(var_9, var_14)), (!-26))), var_13));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (var_8 ? var_13 : (max(var_9, var_14)));
        var_16 = ((((max(var_7, 50676))) << (((((min(var_2, var_13)) + 27411)) - 20))));
        var_17 = ((((max(var_4, var_6))) ? var_9 : (min(((max(56, var_10))), 2784005098))));
    }
    var_18 = -19568;
    #pragma endscop
}
