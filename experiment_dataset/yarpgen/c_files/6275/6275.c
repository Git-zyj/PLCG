/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~(var_13 & var_14)))) ? (max(var_12, var_8)) : var_12));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = (!-var_10);
        var_20 = ((1 ? (max(7503108427743466898, (arr_1 [i_0 - 2] [i_0]))) : ((((((0 >> (7503108427743466894 - 7503108427743466890)))) ? ((((var_17 > (arr_0 [i_0]))))) : 8642)))));
    }
    #pragma endscop
}
