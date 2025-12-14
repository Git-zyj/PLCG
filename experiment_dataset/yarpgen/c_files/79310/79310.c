/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [12] = ((24576 | (((arr_0 [i_0 - 3]) ? ((min(-540106840, -540106839))) : ((0 ? 9351668307403185685 : (arr_2 [i_0 - 1])))))));
        arr_4 [i_0] [i_0] = (((((~(arr_2 [i_0 - 3])))) ? (arr_2 [i_0 + 1]) : (1 & var_7)));
        var_19 = 0;
    }
    var_20 = var_11;
    #pragma endscop
}
