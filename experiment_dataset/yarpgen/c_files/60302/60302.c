/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_9 ? (((max(var_7, -1312928123)) ^ (!var_2))) : ((var_14 ? (!1312928122) : ((var_17 ? 1312928123 : var_14))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -527820631;
        var_21 -= (min(-190047291, ((~(((arr_0 [i_0]) ? (arr_1 [i_0]) : var_0))))));
    }
    var_22 = (((var_7 & -17625) << (((((((var_6 ? var_0 : var_4))) ? var_14 : (max(var_13, var_2)))) - 30141))));
    #pragma endscop
}
