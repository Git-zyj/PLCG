/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2159355107;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((-1089561201 ? 255 : 117));
        var_11 = (max((max(15432279119610988550, ((-1057389352280861716 ? 15432279119610988529 : 9925514141521311490)))), 3232060718));
    }
    var_12 = ((max(-615237904, var_6)));
    #pragma endscop
}
