/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 30433;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [7] = (min(var_2, 602340772));
        arr_4 [i_0] = (min((arr_0 [i_0 + 1]), (arr_2 [i_0 + 1])));
        arr_5 [i_0] = (max((max((arr_1 [i_0 + 1]), (max(23, 23154)))), 2646));
        var_17 = (((((3692626521 || 160) ? (min(var_5, 602340772)) : 602340802)) >> (602340775 - 602340755)));
    }
    var_18 = var_4;
    #pragma endscop
}
