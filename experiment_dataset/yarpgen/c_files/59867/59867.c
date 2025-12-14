/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_19 = (max((max(var_5, (max(var_15, (arr_1 [i_0]))))), ((((arr_0 [i_0 + 1]) / (arr_2 [i_0 - 1] [i_0 - 1]))))));
        var_20 = ((((max((arr_2 [i_0] [i_0]), -1756517838629840317))) ? -1756517838629840317 : (511 - -516)));
    }
    var_21 = var_14;
    var_22 = (min(-562948879679488, (15 ^ var_17)));
    #pragma endscop
}
