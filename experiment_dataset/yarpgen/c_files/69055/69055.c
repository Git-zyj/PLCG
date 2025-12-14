/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_10 = (min(var_10, (((((((var_8 ? var_8 : (arr_3 [0]))))) && (((~((var_7 | (arr_2 [i_0 - 2] [i_0])))))))))));
        var_11 = (max((((!(arr_3 [i_0])))), (min((arr_3 [i_0]), var_0))));
    }
    var_12 = (min(var_12, var_1));
    var_13 = (!51);
    var_14 = (max(var_14, (((~(max(((var_0 ? -1016208190 : 1016208190)), (var_5 && var_3))))))));
    #pragma endscop
}
