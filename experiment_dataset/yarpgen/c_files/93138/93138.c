/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = 16775949871050082445;
        var_18 *= 4265507977;
    }
    var_19 = ((((((((-32758 ? 1301423880 : 83))) ? (min(39241, -1301423879)) : 1))) ? 4389456576512 : 0));
    var_20 = 41;
    var_21 = 0;
    var_22 = (max(var_22, (58 || -1708451727)));
    #pragma endscop
}
