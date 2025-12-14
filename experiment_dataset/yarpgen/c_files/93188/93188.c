/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = 680807817;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = -1110114994;
        arr_4 [i_0] [8] |= ((-(arr_0 [i_0 + 1])));
        arr_5 [i_0] = 15811629556498815226;
    }
    #pragma endscop
}
