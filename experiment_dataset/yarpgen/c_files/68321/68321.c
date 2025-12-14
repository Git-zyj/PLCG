/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        arr_3 [i_0] [i_0] = ((~(-913459002 || 3987043856)));
        arr_4 [21] = ((((((arr_1 [i_0] [18]) ^ ((-913459002 ? 913459001 : -2505201629274413177))))) ? ((0 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (((((arr_0 [i_0] [i_0]) > var_17))))));
        arr_5 [i_0] = (((arr_0 [i_0] [i_0]) ? 913459001 : ((913459001 ? 57 : (max((arr_0 [i_0] [i_0]), 2505201629274413186))))));
        arr_6 [i_0] [i_0] = (4294967280 != -25338);
    }
    var_20 = (((((var_4 ? var_3 : -14103))) || ((((max(-588529846, 913459022))) || (var_4 || 32742)))));
    var_21 = (-3134869381907396184 ? ((max(62256, -12038))) : var_16);
    #pragma endscop
}
