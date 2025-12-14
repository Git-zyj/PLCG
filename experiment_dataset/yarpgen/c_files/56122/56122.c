/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 -= (((arr_1 [i_0]) < -129733563));
        var_14 += -22;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (max(var_15, (arr_4 [i_1])));
        var_16 += (max(((((arr_2 [i_1]) && (arr_2 [i_1])))), (~0)));
        arr_6 [i_1] [i_1] = (!-218550665);
        var_17 *= ((((((3 / 218550674) ? (((max(1, (arr_5 [i_1] [i_1]))))) : (max(var_1, 3704611337))))) ? -1 : (((65472 >= ((0 ? var_9 : -14264)))))));
        var_18 = ((8 ? ((((((var_0 >= (-127 - 1)))) < (arr_5 [i_1] [i_1])))) : ((((min(310654981, var_3))) ? ((((arr_3 [i_1]) != 4294967295))) : (~-14259)))));
    }
    var_19 = var_0;
    #pragma endscop
}
