/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += ((((!var_3) | -var_5)));
        arr_2 [14] = (min(-122, (max(2147483647, (~8176)))));
    }
    #pragma endscop
}
