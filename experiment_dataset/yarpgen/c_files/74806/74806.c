/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(1, var_6)) / 10))) ? 1 : (~var_3)));
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((((max(72, var_13))) ? -var_8 : (((arr_0 [i_0]) ? (arr_0 [10]) : 18446744073709551615))))) ? var_3 : ((-(max(10838441468252898117, 16)))));
        arr_3 [i_0] = ((((((arr_1 [i_0]) * 1))) ? 9626177388307209539 : (arr_0 [i_0])));
        var_17 = ((!(((var_8 / (arr_1 [i_0]))))));
    }
    var_18 = ((((max(var_10, ((var_12 ? var_11 : var_14))))) ? (!var_1) : 1976012990));
    #pragma endscop
}
