/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_18 = 7348502724946542336;
    }
    var_19 = (((((((var_4 << (var_2 - 4081652242859834961)))) ? (49018 & -7348502724946542337) : 16283))) ? (min(((var_16 ? -5328707159556694912 : 17003339371988767315)), (min(1443404701720784290, var_6)))) : var_0);
    #pragma endscop
}
