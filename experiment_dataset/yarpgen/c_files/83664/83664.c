/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 |= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] &= ((((min((arr_0 [i_0]), (arr_2 [i_0])))) ? ((var_18 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((((arr_0 [i_0]) < 22562))))));
        var_22 = ((-15964060083804107310 > (arr_1 [i_0] [i_0])));
        var_23 = (max(var_23, ((max((((7168 >= var_2) & (!var_9))), ((((23773 >= 1488730719092728624) > (arr_2 [i_0])))))))));
    }
    var_24 = (var_17 & var_13);
    #pragma endscop
}
