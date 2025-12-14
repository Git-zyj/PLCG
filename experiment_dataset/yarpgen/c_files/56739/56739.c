/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 &= (arr_3 [i_0]);
        var_21 = 0;
    }
    var_22 = ((((!64) ? (((3118499680 ? 30720 : var_19))) : (max(-536870912, -5315385889359495231)))));
    var_23 = (!5315385889359495230);
    #pragma endscop
}
