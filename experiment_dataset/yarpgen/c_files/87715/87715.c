/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) - (((arr_1 [i_0] [i_0]) & 15650711487350833976))));
        var_11 = ((((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))) == (arr_0 [i_0])));
    }
    var_12 = var_3;
    var_13 = (~12918);
    #pragma endscop
}
