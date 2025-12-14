/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 20889)));
        var_15 = (((arr_1 [i_0]) != (~-34)));
    }
    var_16 = (((max(((119 ? 0 : -16)), ((var_9 >> (3789058212047988275 - 3789058212047988245))))) > 249));
    #pragma endscop
}
