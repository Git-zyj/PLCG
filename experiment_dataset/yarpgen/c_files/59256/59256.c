/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_11 = var_4;
        var_12 = (arr_1 [i_0 - 2]);
    }
    for (int i_1 = 2; i_1 < 6;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1 + 3] [1] = (((arr_2 [i_1 - 1]) * ((1406885922 << (2888081373 - 2888081348)))));
        var_13 += (!2888081373);
        var_14 = ((((min((arr_1 [i_1 + 2]), var_1))) || ((min(var_9, (-6044754031463663516 <= var_0))))));
        var_15 ^= (arr_1 [i_1 + 1]);
    }
    var_16 ^= var_10;
    #pragma endscop
}
