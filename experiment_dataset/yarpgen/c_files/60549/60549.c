/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_11;
        arr_3 [i_0] [i_0] = var_12;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((!((((((arr_1 [i_1] [13]) + var_9)) - (var_7 ^ 11544))))));
        var_15 = var_7;
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = var_10;
        var_16 = ((!((min(1384979602, (((arr_8 [i_2]) ? var_8 : var_3)))))));
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] = ((-((1 * ((var_6 ? var_6 : var_4))))));
        arr_16 [i_3] = (((((3 - (arr_4 [i_3])))) == ((~(min(var_2, 33554431))))));
    }
    var_17 = (~((var_9 ? 1 : var_0)));
    #pragma endscop
}
