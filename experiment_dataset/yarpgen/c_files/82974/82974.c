/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min((!var_5), (min(9607, (-26 || 6)))));
        var_18 = (!1);
        var_19 = (min(var_19, ((min(((max((((var_4 || (arr_1 [i_0])))), var_4))), (min(var_14, (arr_2 [i_0]))))))));
    }
    var_20 = (var_13 - 15994739999915155530);
    var_21 = ((-55948 ? (((-2147483626 != (!65511)))) : var_12));
    var_22 = (max((max((min(var_13, 3145728)), var_5)), var_7));
    #pragma endscop
}
