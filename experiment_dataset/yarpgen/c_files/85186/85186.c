/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] &= (((arr_5 [i_1 + 3] [i_1 + 3]) > -78));
            var_11 = (max(var_11, ((((var_3 | -8034) ^ (~var_8))))));
            var_12 = (var_8 << (var_4 - 6919690760571513362));
            var_13 = (min(var_13, (arr_2 [i_0])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_0] = ((var_4 > ((15241745626621701822 ? 8773632351594143838 : 2))));
            var_14 = ((~var_4) || 1);
            arr_12 [2] [2] = 1;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = var_0;
            arr_17 [i_0] [i_0] [i_3] = (149 & var_0);
            arr_18 [11] [i_0] [i_3] = 8142733935737001983;
            var_15 |= (((var_7 != var_4) - (((arr_5 [i_0] [i_3]) ? (arr_9 [1]) : (arr_2 [i_0])))));
            var_16 ^= ((var_1 ? (((var_3 ^ (arr_1 [i_0])))) : 11140106433554721907));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_22 [i_4] = 1833;
            var_17 *= ((var_0 ? (var_6 && 1071062786578097981) : 61902));
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_18 = (((arr_19 [i_0] [i_5] [i_5]) >= (arr_19 [i_5] [i_6] [i_7])));
                        var_19 = 1;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_33 [i_8] [i_8] = ((max((arr_31 [i_8]), 149)));
        arr_34 [3] [i_8] = (((~(arr_31 [i_8]))));
        var_20 = (min(var_20, -5));
    }
    var_21 = ((((!0) ? (((0 ? -32758 : 47))) : var_5)));

    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_37 [i_9] = (3787466448143778570 ? 32757 : 11972);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        var_22 = (max(var_22, ((max((((0 ^ 52275) ? var_2 : var_4)), (-18081 || var_8))))));
                        var_23 = ((+((var_9 ^ ((min((arr_46 [i_9] [i_10] [i_11] [i_12]), 149)))))));
                        var_24 = (max(var_24, ((((0 && (-9223372036854775807 - 1)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
