/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((max(32767, 4468)))));
    var_11 = -16;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = (((18373 ? 1 : -5269681474954183888)));
        arr_3 [i_0] |= (4294967289 ? (0 - 17869988259286033846) : (arr_2 [i_0 + 1]));
        arr_4 [i_0] [14] &= var_5;
        var_13 = (max(((((((arr_1 [i_0] [i_0 + 2]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? 7888 : var_2)), (((!8) ? (26141 || -7255929438287699080) : -1182918777))));
        var_14 = -16507;
    }
    #pragma endscop
}
