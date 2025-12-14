/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (((((~(max((arr_0 [i_0] [i_0]), var_11))))) ? 32487 : ((((((arr_1 [i_0] [i_0]) - var_2))) - (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 8074804237145050704))))));
        var_16 |= ((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? 12 : (((-(arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [13] = ((-(max((max(-3172612671000410308, 8074804237145050707)), (297404281849164960 | 27013)))));
        var_17 ^= (min((((+(((arr_1 [i_0] [i_0]) | 38522))))), (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
