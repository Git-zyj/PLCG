/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_9));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 |= (max(1, ((-(((arr_0 [16] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))));
        var_20 = (max(var_20, 2308588304345126211));
        var_21 = (min((max(2308588304345126211, (arr_1 [i_0]))), ((min(-7396, (2308588304345126211 == var_2))))));
        var_22 |= (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    var_23 = (min(var_23, var_13));
    var_24 = var_11;
    #pragma endscop
}
