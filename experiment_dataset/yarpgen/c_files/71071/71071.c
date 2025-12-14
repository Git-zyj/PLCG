/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(min(4611685880988434432, -32767)));
        var_13 = ((2451928241 != (!0)));
    }
    #pragma endscop
}
