/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (max(var_20, ((max((((~((var_0 ? 253 : var_0))))), (min(255, var_18)))))));
    var_21 = (!3);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_22 = (((~((var_11 ? 1 : var_0)))));
        arr_4 [i_0 + 2] = max(6006476889495186028, (((!(arr_3 [i_0 + 1])))));
        var_23 = (!10570529121217909788);
    }
    #pragma endscop
}
