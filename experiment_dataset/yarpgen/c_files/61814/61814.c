/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((0 << (var_7 + 104)))))));
    var_13 = (min(((-(~var_6))), 0));
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((!(arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (~-1851617476);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((~(((arr_3 [i_1] [i_1 - 1]) ^ (arr_3 [i_1] [i_1 - 1])))));
        var_16 ^= (!9223372036854775807);
        var_17 = ((min((((arr_4 [i_1 - 1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (min((arr_3 [i_1] [i_1]), -258750694)))));
        arr_6 [i_1] [i_1] = (arr_4 [i_1] [i_1 - 1]);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2 - 1] = min((min(((0 * (arr_3 [i_2] [i_2]))), (arr_3 [i_2] [i_2 - 1]))), (min((arr_7 [i_2 - 1]), (max(951732812, 97)))));
        var_18 = (max(var_18, (arr_8 [i_2 - 1])));
        arr_11 [i_2] [i_2] = -3934081668;
        var_19 = ((((0 ? 255 : 97)) <= ((-(arr_3 [i_2 - 1] [i_2 - 1])))));
    }
    #pragma endscop
}
