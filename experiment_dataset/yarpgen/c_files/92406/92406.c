/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1361977994, (max(2932989301, 4294967294))));
    var_12 ^= 41;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [9]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) | ((3575171035045224979 ? (arr_1 [i_0]) : (arr_0 [3]))))));
        arr_3 [i_0] = (max(((1361977987 ? ((((!(arr_1 [i_0]))))) : (max((arr_0 [i_0]), 1361977987)))), var_0));
        arr_4 [i_0] [i_0] = ((-(((arr_1 [i_0]) - (arr_0 [i_0])))));
    }
    #pragma endscop
}
