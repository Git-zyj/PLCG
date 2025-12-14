/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_0;
    var_21 *= (var_2 ? (min(var_6, (~var_18))) : var_2);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_22 = (arr_4 [i_0]);
            arr_6 [i_0] [i_0] = 11;
            var_23 *= ((~(6857 <= -1)));
            var_24 = (min((((arr_4 [i_0]) <= 80)), (((arr_2 [i_0] [i_1]) == 11))));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_25 = ((((min(-var_9, 726358592))) ? ((7 ? -1 : 207)) : (arr_2 [i_2] [i_2])));
            arr_10 [i_0] = (arr_8 [i_0] [i_2] [i_2]);
            var_26 ^= ((!(arr_8 [0] [i_2 - 1] [0])));
        }
        var_27 = (max(var_27, 110));
        arr_11 [i_0] = ((~(((~1) ? ((41928 ? 205 : 1)) : (arr_5 [1] [i_0])))));
        arr_12 [4] [4] &= ((!((max((arr_0 [4]), 6857)))));
        arr_13 [i_0] = ((((((arr_4 [i_0]) == (arr_1 [i_0] [i_0]))) ? (arr_3 [i_0]) : -726358593)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_28 = (((((var_2 ? 577599787 : var_9))) ? (arr_14 [i_3]) : (arr_15 [17])));
        var_29 = var_19;
        var_30 = 467077927;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_31 = (max(var_31, ((((((2366445666 & ((14325127406698250809 & (arr_5 [i_4] [i_4])))))) ? ((-(~-3217))) : (arr_7 [14]))))));
        arr_21 [i_4] |= (((arr_17 [i_4] [i_4]) != 1184517475));
        var_32 &= (183 | (arr_3 [i_4]));
    }
    var_33 = (~1);
    #pragma endscop
}
