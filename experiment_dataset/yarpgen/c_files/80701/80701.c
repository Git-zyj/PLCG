/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 += var_17;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_21 += (min((((arr_1 [4]) >= (arr_1 [2]))), (arr_1 [2])));
        arr_3 [i_0] [i_0] = ((+((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        var_22 = ((1 << (((((arr_2 [i_0] [i_0 + 2]) ? ((var_11 ? -1 : (arr_0 [i_0 + 1]))) : (!2162))) + 23))));
    }
    #pragma endscop
}
