/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4294967295;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = 16007905795616177130;
        var_19 = (max(var_19, ((min((!var_7), -var_13)))));
        arr_4 [i_0] = (min((((!(((-34 ? 36 : var_3)))))), ((min(-36, 11536)))));
    }
    #pragma endscop
}
