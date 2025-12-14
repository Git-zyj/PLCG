/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [23]);
        arr_2 [i_0] = -3304377232479268592;
        var_13 = (((-4984734665302774352 + 9223372036854775807) << 1));
    }
    var_14 = ((124 >> (22153 - 22144)));
    var_15 = ((-(~8085420744872117980)));
    #pragma endscop
}
