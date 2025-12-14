/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = ((1831 ? (((arr_0 [i_0]) ? 197 : 128)) : -84));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? 0 : 4107))) ? 65535 : (max(28, 3472862355))));
        var_15 ^= (arr_0 [i_0]);
        arr_4 [i_0] &= ((((max((44188 | 98), 25464))) / ((((-(arr_1 [i_0]))) << (((min(7977376878340336740, var_11)) - 93))))));
    }
    var_16 = ((250 ? 9223372036854775789 : -23488));
    var_17 &= var_7;
    #pragma endscop
}
