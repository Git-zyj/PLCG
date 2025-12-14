/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((((-127 - 1) ? 1 : 5443864047257749822))) ? ((((-127 - 1) && (-127 - 1)))) : var_15));
    var_21 = 121;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_22 = (arr_1 [i_0 + 1]);
        var_23 = (arr_1 [i_0]);
        var_24 = (min(((max((arr_0 [i_0 + 1]), 1))), ((var_15 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0])))));
        var_25 *= 31;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (2447 * 530162878);
        arr_5 [i_1] |= (((arr_2 [i_1] [i_1]) ? 0 : (arr_2 [i_1] [i_1])));
        arr_6 [i_1] = (2126959284 && 4294967273);
    }
    #pragma endscop
}
