/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 += min(var_9, 1);
        var_14 += -2041730060;
    }
    var_15 = ((~var_4) == ((((var_0 + 2147483647) >> ((((323150888 ? 187 : var_9)) - 167))))));
    #pragma endscop
}
