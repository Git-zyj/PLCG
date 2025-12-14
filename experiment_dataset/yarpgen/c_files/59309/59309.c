/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((~var_8) & ((1 ? var_0 : var_8)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 += (min(3022, 15363));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_1] [i_2] = 0;
                var_15 = 4294967281;
            }
            var_16 |= ((((max(var_6, (arr_6 [i_1] [i_1] [i_1])))) ? (((((1 * 0) && ((min((arr_2 [i_0]), 1))))))) : ((3520545826 ? (min(var_1, 2903518131)) : (((1 ? -16878 : (arr_4 [i_1] [i_0]))))))));
            var_17 = var_12;
            var_18 = ((((1 >> (-12763 + 12770))) >> (((var_0 > (arr_4 [i_0] [i_1]))))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_0] [i_3] = ((var_10 == (((var_4 && 0) * ((min(1, var_7)))))));
            var_19 = (((arr_11 [1] [i_3]) << (((((max((arr_3 [i_0] [i_0] [i_0]), var_12))) && (((0 - (arr_2 [i_0])))))))));
            var_20 = (max(var_20, ((((min((arr_3 [i_3 - 1] [i_3 - 1] [i_0]), 1))) <= ((var_10 | (arr_10 [i_3 - 1] [i_3] [i_0])))))));
        }
        var_21 = (min(var_21, -9864));
        var_22 = 2610651022;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = (max(1, (((arr_4 [5] [1]) ? 57344 : var_7))));
            arr_16 [i_4] = (arr_8 [1] [1] [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
            {
                var_24 = (max(var_24, ((((arr_7 [10] [i_6] [i_5 + 3] [i_0]) && (((4294967295 - (arr_22 [i_0] [1] [i_0])))))))));
                var_25 ^= ((((0 % (arr_4 [i_5 - 2] [i_0])))) % (arr_1 [i_5 + 1]));
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
            {
                var_26 -= ((arr_5 [i_5 - 1]) != (arr_5 [i_0]));
                arr_27 [i_0] [i_0] = 1;
            }
            var_27 = ((arr_11 [i_5 + 3] [i_0]) && (arr_11 [i_5 + 2] [i_5]));
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_28 = ((9846 | (arr_29 [i_8])));
        var_29 = (min(var_29, ((((arr_28 [i_8]) ? ((min((arr_29 [i_8]), (arr_29 [5])))) : ((1108831801 ? (arr_29 [i_8]) : 0)))))));
        var_30 = (((((((arr_28 [i_8]) + 2147483647)) >> (((min(var_12, var_2)) - 1487067321))))) % (var_2 + var_7));
        var_31 = (~1);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_32 = (min(var_32, (!0)));
        arr_32 [i_9] |= arr_30 [i_9];
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_35 [2] [i_10] = var_8;
        arr_36 [i_10] [i_10] = (((2271494454 ? (((arr_8 [i_10] [i_10] [1]) ? 16128 : (arr_25 [i_10] [i_10] [i_10] [i_10]))) : (var_1 ^ -19746))) & (max(((min((arr_21 [i_10] [i_10]), 0))), var_5)));
    }
    var_33 = (!var_4);
    #pragma endscop
}
