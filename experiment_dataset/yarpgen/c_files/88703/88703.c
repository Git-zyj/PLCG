/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0]) > var_11));
        arr_2 [i_0] = (var_16 != -1);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (max(var_22, ((((((1 ? var_19 : -1))) == 4705073219142525095)))));
        arr_7 [1] = (arr_3 [i_1] [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_1] = -var_19;
            var_23 ^= ((-(((!(arr_4 [i_1]))))));
            var_24 = 10;
            arr_11 [i_1] [i_1] [i_1] = 1;
        }
        arr_12 [6] = (((20 ? 1341137230 : 1)));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_25 |= 18446744073709551601;
        arr_15 [i_3] = var_12;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_26 = ((5 << (((~var_15) - 87))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_27 = (((arr_19 [i_4] [i_5]) ? (((arr_17 [i_4]) * -1341137251)) : 96));
            arr_22 [i_5] = -7;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_28 = ((-8442485667702986930 ? (var_19 == 1) : (arr_4 [i_4])));
            arr_25 [i_6] = (arr_3 [i_4] [i_4]);
            var_29 = (arr_13 [i_4]);
            var_30 = ((-9 * (!var_19)));
        }
        var_31 = (((arr_3 [i_4] [i_4]) ? (arr_3 [i_4] [i_4]) : var_18));
        arr_26 [i_4] = ((((8562954548429137416 ? -23 : -1341137223))) ? -4705073219142525090 : (((((arr_21 [i_4]) < var_12)))));

        for (int i_7 = 4; i_7 < 8;i_7 += 1)
        {
            var_32 = arr_3 [i_4] [i_7];
            arr_29 [6] = (arr_3 [i_7 + 2] [i_7 + 2]);
            var_33 = -7;
        }
    }
    var_34 &= (((((var_11 / ((7 ? -1 : 1))))) || ((((var_3 - -9) ? ((1341137238 ? 1 : var_3)) : (~var_3))))));
    #pragma endscop
}
