/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((~(max(var_6, (170 & var_9)))));
        var_16 -= ((arr_0 [i_0] [i_0]) ? (max((arr_0 [i_0] [i_0]), -1)) : (~-66));
        var_17 = ((+((((arr_1 [i_0]) || 24400)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 ^= (((((2074299676143756000 ? 1 : 2074299676143756000))) ? 511 : (arr_2 [i_0] [12])));
            var_19 = 2074299676143755991;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (min(((min((arr_3 [i_2 + 1] [i_0]), (arr_3 [i_2] [i_0])))), (((arr_3 [9] [i_2]) ? (arr_5 [i_0]) : (arr_5 [i_2 + 1])))));
            var_20 = (min(var_20, 5475434179885243763));
            var_21 = arr_1 [i_0];
            var_22 = 24414;
            var_23 = ((((((min(var_1, var_5))) ? 1023 : (~82)))) ? 41136 : ((((((arr_6 [i_0]) + var_8))) ? (((var_9 ? 112 : var_14))) : (max(var_9, var_14)))));
        }
        var_24 = ((~(min((16372444397565795615 / 1023358065180754318), (((!(arr_5 [i_0]))))))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((((((max(var_1, (arr_10 [i_3] [i_3]))) * var_3))) ? (!var_11) : ((var_0 ? (arr_10 [i_3 + 3] [i_3 + 3]) : var_11))));
        var_25 &= ((1 ? 4095 : ((min(-1, -1543200422)))));
        var_26 = (max(var_26, ((((!24401) ? (((((!(arr_9 [i_3]))) && (((65535 | (arr_10 [i_3 + 2] [i_3 + 2]))))))) : (((-57 < ((4225857147790599493 ? (arr_9 [i_3]) : (arr_9 [i_3])))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_3] [i_5] [i_3] = (((~(~var_10))));
                    arr_21 [i_3] [i_3] [15] = (((~var_4) == ((((arr_18 [10] [i_3] [i_3]) < (arr_18 [i_3] [i_3] [11]))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_27 = ((var_9 ? (arr_12 [i_3] [i_3 + 1] [i_3 - 1]) : (arr_23 [10] [i_6] [10] [10])));
                            var_28 = (((arr_24 [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 3]) ? (arr_24 [i_3 - 1] [i_3] [i_3 + 3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2]) : var_12));
                        }
                        var_29 = ((~((var_11 ? 185 : (arr_24 [i_3] [i_3] [i_3] [i_5] [i_5] [i_3] [i_6])))));
                        var_30 *= (((!1) ? (arr_13 [i_3 + 3] [i_3 + 1]) : (arr_12 [i_5] [i_3 + 1] [i_5])));
                        var_31 = var_10;
                    }
                    arr_26 [i_5] [i_3] [i_3] [i_3] = 1;
                    var_32 = (min(var_32, (((((var_12 ? (arr_16 [i_5] [i_3 + 3] [i_5]) : (arr_16 [i_5] [i_3 + 3] [i_4])))) || (((10377 ? (arr_12 [i_5] [i_3 - 1] [i_5]) : 153)))))));
                }
            }
        }
        var_33 = ((((((17423386008528797298 ? -14332 : -273551843663111183)))) && (arr_18 [i_3] [i_3] [i_3 + 3])));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_34 = (~1176260574);
        var_35 = (((var_2 ? var_9 : var_6)));
    }
    var_36 -= ((!((((2047 ^ var_10) / (((255 ? -24580376 : var_1))))))));
    var_37 = (min(var_37, var_8));
    #pragma endscop
}
