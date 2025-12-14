/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((~((var_7 ^ (arr_2 [i_0])))));
        arr_5 [i_0] = (((arr_3 [i_0] [14]) / (arr_3 [i_0] [i_0])));
    }
    var_18 = (min((+-104), var_7));
    #pragma endscop
}
