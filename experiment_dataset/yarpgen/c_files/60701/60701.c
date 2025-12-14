/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((!(arr_0 [i_0])));
        arr_2 [i_0] = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 4; i_1 < 7;i_1 += 1)
    {
        var_20 = (((((-461763017 ? -1574206404 : 2720760914))) && (~10737)));
        var_21 = (min((((!(!1574206404)))), (((((-111 ? 2720760891 : -5482712667242258070))) ? (~13) : (1 ^ 43579)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = ((!(arr_8 [i_2])));
        var_23 = 1529444545;
    }
    var_24 = (min(var_18, (((((max(var_9, 1574206375))) >= ((var_1 ? 18446744073709551597 : 235)))))));
    #pragma endscop
}
