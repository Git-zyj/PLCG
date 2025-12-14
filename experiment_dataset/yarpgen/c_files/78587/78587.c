/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 4294967295;
    var_13 = (max(var_13, (~399374975)));
    var_14 = ((var_2 ? (min(((min(var_11, var_4))), (~-8077347881214051502))) : var_3));
    var_15 |= (min(((max(var_9, var_5))), (((((var_5 ? 4294967286 : var_0))) ? (((max(var_2, var_7)))) : 3630958824))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min((((0 ? (arr_1 [i_0]) : (arr_1 [i_0])))), (max(((((arr_1 [i_0]) ? 3630958824 : (arr_1 [i_0])))), (max((-127 - 1), 12703155763999562904))))));
        var_17 |= (535822336 <= 0);
        var_18 = (~((((arr_0 [i_0]) == (arr_0 [i_0])))));
        arr_2 [i_0] = (min(0, (((((var_6 ? 4294967277 : (arr_1 [i_0])))) ? (((min((arr_1 [i_0]), 1)))) : (arr_0 [i_0])))));
    }
    #pragma endscop
}
