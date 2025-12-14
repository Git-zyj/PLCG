/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 >> (((!((((-127 - 1) * var_5))))))));
    var_15 &= var_6;
    var_16 = (-127 - 1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((max((var_3 & var_11), 13898659841955902930)) ^ (!var_4)));
        arr_3 [23] = ((((((arr_0 [i_0] [i_0]) & 15109924752597310691))) ? 4294967295 : (var_3 % 28010)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (((!4548084231753648685) == 64446));
                    arr_10 [i_0] [6] [i_2] = 13898659841955902930;
                }
            }
        }
        arr_11 [i_0] [i_0] = -7432779176203774155;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_14 [21] = ((((~(arr_8 [i_3] [i_3] [i_3]))) <= ((58443 >> (var_3 + 0)))));
        arr_15 [i_3] [i_3] = (((min(21, var_13))) + var_2);
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4] = (((arr_0 [i_4] [i_4 + 1]) ? 125 : 17538201453784600205));
        var_18 -= (32256 & -121);

        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            arr_23 [i_4] [i_4] = 5208431618626690445;
            arr_24 [i_4] = -1;
            arr_25 [i_4] [i_5] [i_5 - 1] = -4548084231753648692;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_19 += (((-27086 * (min(602533096, 0)))));
            arr_30 [i_4] [i_4] [i_4] = var_5;
            var_20 = 1492503332;
            arr_31 [i_4 + 1] [i_6] [i_6] |= 7432779176203774166;
            var_21 -= max((0 & 15360), ((~(255 | -95))));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            arr_34 [i_4] = (((((var_3 ? ((var_6 ? 16385 : var_0)) : var_7))) ? (((~(var_11 <= 7)))) : ((2802463964 ? ((min(625907353, -2010402611))) : 0))));
            arr_35 [i_4] [i_4] [i_4] = var_0;
            var_22 += ((((!(!0)))));
            arr_36 [i_4] [i_7] [i_7] = var_3;
            arr_37 [i_4] = -1599040520;
        }
        var_23 = -394640407078955528;
        arr_38 [8] |= var_4;
    }
    #pragma endscop
}
