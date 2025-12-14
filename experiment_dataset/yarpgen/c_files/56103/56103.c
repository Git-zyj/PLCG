/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0]), ((max(1, var_7)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_1] |= (((((arr_3 [i_1] [i_0] [i_0]) ? (arr_0 [i_1]) : var_11)) >> (((~3561529879) - 733437393))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] |= (arr_6 [i_0 + 1]);
                        var_12 = ((1 ? 1 : 2753239019));
                        var_13 = (max(var_13, var_4));
                        arr_11 [i_3 + 1] [i_0] [i_0] = 2147483647;
                    }
                }
            }
            arr_12 [i_0] = var_4;
        }
        arr_13 [8] [8] &= (max((((6328499845815439710 ? 0 : 13))), 14111106559001092620));
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_14 += ((((((-4808 ? 1695254435 : 10)) >> (((max(var_3, (arr_3 [i_4] [i_4] [i_4]))) - 13628933209351773675)))) >> (((((min((-9223372036854775807 - 1), (((-2730974228167921757 ? -6298 : 1))))) - -9223372036854775752)) + 80))));
        arr_16 [i_4] = (arr_7 [i_4]);
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_20 [0] &= (min(((((arr_17 [i_5]) ? (arr_4 [i_5] [i_5] [i_5]) : (arr_7 [1])))), (((((4294967295 ? var_7 : var_10))) ? -2251662374731776 : (min((arr_9 [i_5] [6] [6] [i_5]), var_5))))));
        arr_21 [i_5] = (max(((+(min((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), var_1)))), ((min((arr_17 [15]), (arr_0 [i_5]))))));
        arr_22 [i_5] = ((93 << (var_4 - 16475387924889273217)));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_28 [i_5] = (((((((((arr_24 [i_5] [i_7]) ? (arr_23 [i_5] [i_6] [i_5]) : var_11))) ? (max(var_6, var_4)) : (((var_8 ? 568629344 : var_6)))))) ? (((31109 ? 2099083195 : (0 > 1302924901)))) : (((min((arr_3 [i_5] [i_6] [i_7]), var_7)) * ((min((arr_27 [0]), (arr_24 [i_6] [i_5]))))))));
                    arr_29 [i_5] = 255;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_15 = (min(var_15, (min(((((min(-9223372036854775786, (arr_7 [i_9])))) ? (max(var_4, (arr_1 [i_9]))) : ((min(2, 1321283236))))), (((((1 ? 76640021 : 4181437826617558296))) ? (!1) : (arr_9 [i_5] [i_5] [i_9] [i_9])))))));
                                arr_36 [i_5] [i_5] [i_5] = (((~1) ^ var_10));
                                arr_37 [i_5] [i_6] [i_7] [i_5] [i_5] = (((arr_34 [i_8] [i_5] [6] [i_5]) <= (min(var_11, (~var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    arr_46 [i_10] [i_12] [i_10] [i_10] = var_11;
                    var_16 = min((((((!(arr_33 [i_11]))) ? var_0 : ((-32756 ? 4294967289 : 0))))), (max((((59688 ? 28672 : 67108864))), (min(var_1, var_9)))));
                }
            }
        }
        arr_47 [i_10] = ((+((((((arr_27 [i_10]) ? 0 : var_10))) ? (min(1, (arr_23 [i_10] [i_10] [i_10]))) : (((8201010881884943185 ? var_5 : (arr_34 [i_10] [i_10] [i_10] [i_10]))))))));
        var_17 = (max(var_17, (arr_4 [i_10] [i_10] [i_10])));
    }
    #pragma endscop
}
