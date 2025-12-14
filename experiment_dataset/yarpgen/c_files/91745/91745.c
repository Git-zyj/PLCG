/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0] [i_0]) < 8070450532247928832));
        arr_2 [i_0] = -14424;
    }
    var_18 = 14424;
    #pragma endscop
}
