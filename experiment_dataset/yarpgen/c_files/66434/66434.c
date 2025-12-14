/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (((~(var_4 ^ 252))));
        var_20 = max((max((arr_0 [i_0]), var_5)), (max((arr_1 [i_0]), var_2)));
        arr_2 [i_0] [i_0] = ((-(((((-9702 ? 8191 : 16176124816261859196))) ? (arr_1 [6]) : ((max(var_4, 1)))))));
    }
    var_21 |= (min(var_7, 18446744073709551613));
    var_22 |= var_14;
    #pragma endscop
}
