/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (max(var_16, (((!(var_4 % var_8))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (1739974805 * 1423858675868447835);
        var_18 = ((!(arr_0 [i_0] [i_0])));
        var_19 = (arr_1 [i_0]);
        var_20 = (arr_2 [i_0]);
    }
    #pragma endscop
}
