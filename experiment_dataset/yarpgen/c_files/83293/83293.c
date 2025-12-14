/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((var_13 ? -8597494310535057019 : var_10)), 127))) ? (max(((-120 ? var_3 : 116)), ((-31675 ? var_8 : var_12)))) : 127));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 += (-17 <= 126);
        var_16 = var_6;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (max(var_17, (arr_3 [i_1] [4])));
        arr_6 [15] = (arr_0 [7]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = ((23 ? (((~-32756) >> ((1 ? 1 : 13308)))) : 13292));
        arr_9 [6] [i_2] = ((((((var_1 < var_10) & ((var_6 ? (arr_3 [i_2] [i_2]) : 18446744073709551603))))) ? (arr_7 [6] [i_2]) : (max(var_11, (((var_5 * (arr_0 [3]))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        arr_14 [4] [i_3 + 3] = var_2;
        var_19 = (max(var_19, ((((arr_3 [i_3 + 3] [i_3 + 2]) ? (arr_3 [i_3 - 1] [i_3 - 1]) : (arr_3 [i_3 - 1] [i_3 - 1]))))));
        arr_15 [i_3] = (((arr_7 [i_3 - 2] [i_3 - 2]) ^ (arr_7 [i_3 - 2] [i_3 + 1])));
        var_20 *= (((((var_6 ? (arr_7 [i_3] [i_3]) : (arr_5 [0])))) ? 32767 : (arr_3 [i_3 + 3] [i_3 + 2])));
        var_21 = (arr_3 [i_3 + 3] [i_3 + 3]);
    }
    #pragma endscop
}
