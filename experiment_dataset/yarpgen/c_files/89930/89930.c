/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (((((-((1 ? 137438953471 : 1))))) ? -5705018242857867675 : ((((!((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [8]) : (arr_1 [i_0]))))))))));
        arr_4 [10] = (var_2 ? (arr_1 [i_0]) : ((((((arr_1 [i_0]) || 14))))));
        var_12 = (max(var_12, (arr_0 [i_0] [i_0])));
    }
    var_13 = (max(var_13, var_10));
    #pragma endscop
}
