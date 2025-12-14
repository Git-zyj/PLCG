/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 |= ((var_7 < ((((121 * 90) << (var_5 > var_3))))));
    var_19 &= (((0 | 37813) ? var_7 : (var_3 & 37823)));
    var_20 = -1734090120433754676;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 += 0;
        arr_3 [i_0] [i_0] = 1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_22 = 127;
            arr_6 [i_0] = ((~(((arr_0 [i_0]) & 27718))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = ((((arr_9 [i_0] [i_2] [1]) ? 27718 : 110)));
            var_23 = (!37813);
        }
        var_24 = (((-4792471252449236635 == 62) >= 37817));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [7] = 48;
        arr_14 [i_3] &= 18446744073709551615;
        var_25 = (min(var_25, 3304943467261022280));
        var_26 = (min(var_26, (arr_2 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_27 = 4792471252449236636;
        var_28 = 52779;
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_29 = 2147483647;
        var_30 -= (arr_9 [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
