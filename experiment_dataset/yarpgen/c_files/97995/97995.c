/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((max(((var_1 ? var_8 : var_4)), var_13))) && var_3))));
    var_15 = 198;
    var_16 |= 96;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = -183;
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? var_3 : (~-86)));
        var_18 = ((var_3 ? var_9 : 32767));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((4512 ? 18446744073709551615 : 1))) ? (arr_4 [i_1]) : (min(var_2, 1))));
        arr_7 [i_1] = ((min(var_2, ((0 ? 1 : 1)))) & (arr_4 [i_1]));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_19 = (min(((~((-15523 ? var_8 : 116)))), ((((min(4228918822, 35088069))) ? var_11 : (max(1, 252))))));
        arr_11 [i_2] [i_2] = (max(56764, (-9223372036854775807 - 1)));
        var_20 = ((+(min((-2147483647 - 1), var_4))));
        arr_12 [i_2] [i_2] = -8102652215415975620;
        arr_13 [i_2] = ((max(var_0, (arr_10 [i_2]))));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        arr_17 [i_3] &= ((0 ? (-var_11 / var_10) : ((-65 * (arr_16 [i_3 - 1])))));
        var_21 = (max(var_21, ((max((max((139 & var_1), (arr_16 [i_3 + 1]))), ((-(arr_16 [i_3 - 1]))))))));
    }
    #pragma endscop
}
