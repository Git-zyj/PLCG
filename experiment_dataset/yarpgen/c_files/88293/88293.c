/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 = arr_1 [11];
        var_20 = 0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = -28287;
        arr_5 [i_1] [i_1] = 4217787078;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = (((-7177766189993942685 + 9223372036854775807) << (((var_9 + 24587) - 13))));
        arr_10 [i_2] [i_2] = ((!((var_8 && (((var_18 ? 103 : 111)))))));
        arr_11 [i_2] = ((-(arr_7 [i_2])));
    }
    var_22 = min((((!((max(-1, 31)))))), var_15);
    #pragma endscop
}
