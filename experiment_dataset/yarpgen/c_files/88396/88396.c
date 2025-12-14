/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(((-31 ? ((170 ? 6 : 193)) : ((min(1400746269, (-9223372036854775807 - 1)))))), (min(12530874554736552220, (((30 ? 0 : 21075)))))));
        arr_3 [i_0] [i_0] = 988149424;
    }
    var_17 += -31;
    var_18 = 988149427;
    var_19 = 187;
    #pragma endscop
}
