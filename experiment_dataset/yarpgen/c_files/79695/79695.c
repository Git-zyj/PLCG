/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (3 >= 2147483647);
        var_16 &= (-32767 - 1);
        arr_2 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0]) : 118);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (min(var_8, 13917));
        var_17 -= (((max(4294967295, ((min(var_3, -1149781714))))) | (((max((((-1149781714 >= (arr_5 [12] [i_1])))), -1149781724))))));
    }
    var_18 = (((max((!10132), (max(var_1, 21)))) | (1591287344 * 1)));
    var_19 = var_5;
    var_20 = ((var_14 ? ((221 ? (var_10 * 0) : (min(var_11, 0)))) : var_14));
    #pragma endscop
}
