/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_16 = (((((~(arr_0 [i_0])))) <= (-16196 < var_13)));
        arr_2 [i_0] = ((!((((arr_0 [i_0]) ? var_1 : (arr_0 [i_0]))))));
        arr_3 [i_0] = (((16 ? 16196 : 4232168511386378422)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((-(arr_5 [i_1 + 4])));
        arr_7 [i_1] = ((7736675371708330137 - (arr_5 [i_1 - 2])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((-524288 & ((var_4 ? -20232 : (arr_8 [i_2])))));
        arr_12 [i_2] = ((~((~(-2147483647 - 1)))));
        var_17 = ((-(var_4 ^ var_9)));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3 + 3] [i_3 + 3] = ((3167089555 ? (arr_4 [i_3 - 2] [i_3 + 2]) : 1));
        var_18 = (min(var_18, (((((((arr_14 [i_3]) ? (arr_9 [i_3]) : var_0))) ? (((-1939489524836056626 + 9223372036854775807) << (1 - 1))) : (var_6 % -7736675371708330139))))));
    }
    var_19 = ((!var_11) ? 1183924767386932145 : -1079769617);
    var_20 = var_6;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = (arr_16 [i_4]);
        arr_19 [i_4] = 54135;
        var_22 = (((arr_10 [i_4] [i_4]) - 1127877722));
        arr_20 [i_4] [i_4] = (((((var_3 + 2147483647) << (6 - 6))) >> (((arr_9 [i_4]) - 30))));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_23 = (((var_4 - 63154) + (((arr_22 [i_5 - 2] [i_5 - 2]) ? var_13 : (arr_17 [i_5 - 3] [i_5])))));
        arr_23 [i_5] = 1280378470341642941;
        var_24 *= ((-((min(26905, 40)))));
        var_25 = (min(var_5, -7456817674686430348));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_26 = (max(var_26, 3946950796621869345));
        arr_27 [i_6] [i_6] = ((((((arr_13 [i_6]) * 7736675371708330109))) ? var_9 : (min(1127877740, (((-(arr_10 [11] [i_6]))))))));
        var_27 = (1 ^ 0);
    }
    var_28 = (min(var_28, ((max((!var_9), (((15619 % 4294967281) * (((max(var_3, var_15)))))))))));
    #pragma endscop
}
