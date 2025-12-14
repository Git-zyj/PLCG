/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((7279410384515592917 == var_5) == ((32767 ? -32767 : var_4))))), var_5));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 &= ((max((arr_0 [i_0] [i_0]), (~65535))));
        var_14 -= (max(1, 32767));
        var_15 ^= (max(((((((arr_2 [11]) < 24904))) & -24904)), ((((arr_1 [i_0] [i_0]) < ((((arr_0 [i_0] [i_0]) + 0))))))));
        var_16 |= ((16 ? ((var_1 ? 12321 : (arr_1 [i_0] [i_0]))) : ((((((arr_1 [i_0] [i_0]) | -6936363399798404119))) ? 16 : (arr_1 [i_0] [1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((-(((arr_3 [i_1]) - var_8))));
        var_17 = (arr_5 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = (211 + 7587);
        var_18 |= (((arr_3 [14]) == var_11));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((((-6936363399798404119 + (arr_8 [i_2]))) + 6936363399798404118));
        arr_11 [i_2] = (((arr_9 [i_2]) < (arr_9 [i_2])));
        arr_12 [i_2] = arr_9 [i_2];
        var_19 = 63878;
        var_20 = (!-73);
    }
    #pragma endscop
}
