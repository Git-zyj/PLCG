/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((847243154123344731 ? (arr_0 [i_0] [i_0 + 1]) : -2825093513349633288));
        var_15 = (8646911284551352320 && 7036328118362754245);
        var_16 = (!6865);
    }
    var_17 = var_9;
    #pragma endscop
}
