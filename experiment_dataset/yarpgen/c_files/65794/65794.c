/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = min(((max(var_14, var_14))), (((arr_1 [i_0]) ? ((var_9 ? var_16 : 17)) : 550187273)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (max((max((((arr_6 [i_0] [i_3]) * var_18)), 1662438725)), 0));
                        var_22 |= (((var_19 ? var_6 : (arr_8 [8] [i_2]))));
                    }
                    var_23 = ((~((var_11 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))));
                }
            }
        }
        var_24 = ((!(((~((min((arr_5 [1] [i_0] [i_0]), 57050))))))));

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_13 [14] [i_4 - 2] &= (((((0 ? ((var_18 ? 1662438719 : var_3)) : (((0 ? var_8 : -17376)))))) ? (((min(var_7, 1503909726)))) : (arr_11 [12] [12])));
            arr_14 [i_0] = ((-var_6 ? ((((min(var_0, var_12))) ? (((((arr_6 [i_0] [i_0 - 1]) > var_10)))) : (arr_6 [i_4 + 2] [i_0 - 1]))) : (max(var_19, (arr_4 [i_0])))));
            var_25 = arr_8 [i_0] [15];
            var_26 = ((((((var_7 ? (arr_2 [i_0] [i_0 + 1]) : (arr_2 [i_0] [i_0 + 1]))) + 2147483647)) << (((((~var_1) ? (max((arr_2 [i_0] [14]), var_7)) : (!3298293459))) - 34232))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_0] = (~var_12);
            var_27 = (arr_4 [i_0]);
            var_28 *= (min(((max(883960498, var_4))), ((var_10 ? var_16 : 1152921504606846912))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_29 -= (max((!var_16), (max(((0 >> (255 - 241))), ((136216768 ? (arr_12 [i_0 + 1] [1]) : var_19))))));
                var_30 = ((((!(arr_20 [i_0] [i_0 + 1]))) ? (arr_18 [i_0 - 1] [7] [i_5] [i_6]) : (min((!1), (arr_20 [i_5] [3])))));

                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    var_31 = var_10;
                    arr_26 [i_0 + 1] [i_5] [i_6] [i_6] [i_0 + 1] [i_0] = var_14;
                }
            }
            arr_27 [i_0] = (min((((238 == var_18) * (((arr_6 [i_0] [i_5]) + var_3)))), ((max(((min((arr_5 [i_5] [i_0 + 1] [i_0 + 1]), 0))), var_18)))));
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_32 = (((max(1, var_4))) ? (var_2 >= var_16) : (((((var_15 ? (arr_30 [i_8]) : -1583319901))) ? (~1) : var_1)));
        var_33 = (min(var_33, ((((((-(arr_30 [i_8])))) > ((1589462253 ? (var_3 != var_8) : ((var_1 ? var_9 : 34359738367)))))))));
        var_34 &= 58648;
        var_35 = ((-(((var_0 | var_19) ? ((max(var_10, 127))) : 1503909712))));
        var_36 = ((var_12 ? var_0 : (arr_28 [i_8])));
    }
    var_37 = ((((max(var_3, -var_6))) ? (((max(1, var_2)))) : ((var_14 ? (!var_13) : var_15))));
    #pragma endscop
}
