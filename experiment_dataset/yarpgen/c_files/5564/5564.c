/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (141 * 29235);
        var_12 = (arr_1 [i_0] [i_0]);
        var_13 = ((((min(115, 1)))));
        var_14 = (!28);
    }
    var_15 = (var_5 ? var_6 : var_10);
    var_16 = 102375322;
    var_17 = (min(var_17, var_5));
    #pragma endscop
}
