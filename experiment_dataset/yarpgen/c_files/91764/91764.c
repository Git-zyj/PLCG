/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((-1618022935 <= -121614681) ? (-2147483647 - 1) : ((var_4 ? var_0 : 60)))));
    var_12 = (((((var_3 - var_4) ? var_1 : var_3)) >> (var_3 - 560566725)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1618022940;
        var_13 *= (((arr_0 [i_0]) + (-77 - 10)));
        var_14 = (min(var_14, ((((81 == -1618022941) < (1280540879 / -1038777796))))));
        var_15 = ((!(arr_0 [1])));
    }
    #pragma endscop
}
