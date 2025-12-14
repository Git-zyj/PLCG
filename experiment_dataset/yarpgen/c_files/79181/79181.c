/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 4032;
        var_10 = (var_3 == 9223372036854775807);
        arr_3 [i_0] = -0;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_11 = ((((arr_4 [i_1]) / -25458)));
        var_12 ^= var_8;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_13 = (((((arr_0 [i_2 - 1] [i_2 - 1]) ? 1 : 1)) < (1 && 4017)));
        var_14 = 1;
        var_15 = (((((((arr_7 [i_2]) || ((((arr_7 [i_2]) ? var_1 : -124))))))) + (((arr_0 [i_2 + 2] [i_2 - 1]) + (arr_5 [i_2 + 2])))));
        var_16 = ((+((((arr_5 [i_2 + 1]) || (((25371 ? (arr_4 [1]) : 61528))))))));
        var_17 = ((-19398 + ((((1 ? 1 : 1)) << 1))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 &= (min(((max(1, 24303))), (((arr_6 [i_3]) - (arr_6 [i_3])))));
        var_19 = ((((min(3, 25354)) * (0 * 1))));
        var_20 = (max(((24294 ? 1730 : 1274225346)), (arr_1 [i_3])));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_21 = var_0;
        arr_14 [i_4] = -var_1;
        arr_15 [i_4] = ((-((25371 ? var_9 : (arr_1 [i_4 + 1])))));
    }
    #pragma endscop
}
