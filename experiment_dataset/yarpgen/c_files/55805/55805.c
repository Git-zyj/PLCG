/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 *= ((((min(var_8, var_10))) ? var_7 : ((((((var_17 ? var_12 : -1014033843283219446))) && -1848549242)))));
    var_21 = 9541;
    var_22 = (min(var_22, (var_7 > var_7)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_17 ? (((((arr_0 [i_0]) ? var_5 : (-9223372036854775807 - 1))) * ((min((arr_0 [i_0]), var_5))))) : (((((1715845153 + 12288) < (arr_1 [i_0])))))));
        arr_5 [6] [i_0] = (max((min((~15394639039241578597), var_17)), ((((arr_1 [i_0]) | (min(-3883808728384492308, 3709983938)))))));
        var_23 = ((1 && (((3709983959 ? ((max(var_8, var_8))) : (((var_9 == (arr_2 [i_0] [i_0])))))))));
    }
    #pragma endscop
}
