/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(max(var_13, (!26064)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 *= (((arr_1 [i_0]) ? ((~(min(var_3, 16997410055269818432)))) : ((min(0, (((arr_1 [i_0]) | 14)))))));
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
        var_17 = ((((max(var_9, var_13))) && ((((arr_0 [i_0]) ? 7 : ((1 ? (arr_1 [7]) : (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
