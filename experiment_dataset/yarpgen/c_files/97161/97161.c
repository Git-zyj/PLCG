/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_10 = (min(var_10, var_2));
        var_11 = ((!(arr_0 [i_0])));
        var_12 = (max((arr_0 [i_0]), var_6));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_13 = ((((-((~(arr_4 [i_1]))))) / (arr_2 [i_1])));
        var_14 = (min(var_14, -0));
    }
    var_15 = (max(var_15, 4294967168));
    #pragma endscop
}
