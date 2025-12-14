/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    var_13 = min(var_9, 529);
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 *= (max((min((min(var_1, 709184994537861360)), var_5)), -530));
        var_16 -= var_10;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = (min((max(var_9, var_4)), -528));
        var_18 = var_7;
        arr_4 [i_1] = var_3;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = (min(((max(((min(115, -538))), var_4))), (max(var_7, var_2))));
        var_19 = (min(var_19, ((min(((max(137, var_6))), (min(var_1, var_3)))))));
        var_20 *= var_8;
        var_21 = (-9223372036854775807 - 1);
    }
    #pragma endscop
}
