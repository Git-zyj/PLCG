/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((min(var_14, var_11))) ? 4294967286 : (arr_1 [i_0]))), (((((arr_0 [11] [i_0]) ? var_15 : var_4)) + var_9))));
        arr_3 [i_0] = (((max(18446744073709551615, 30)) / (arr_0 [12] [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_8 [15] [i_1] [i_0] = (((((arr_5 [i_0] [i_0] [i_1]) | var_14))) ? (-124 >= 127) : (min(var_19, (var_9 + var_14))));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_12 [i_1] [i_1] [i_2] = (arr_0 [i_0] [i_1]);
                arr_13 [i_1] [i_1] [i_2] [i_1] = (((((-(((arr_9 [i_1] [i_1] [i_0]) * var_11))))) & var_16));
                arr_14 [i_1] [i_1] [i_1] = ((arr_4 [i_1] [i_1]) - var_12);
                arr_15 [i_0] [i_0] [i_1] [i_1] = ((var_4 % (((-(~var_3))))));
            }
            var_20 = (max(var_20, ((max(var_11, -32763)))));
            arr_16 [i_0] [i_1] [i_1] = -var_8;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_19 [i_0] [i_3] [i_0] = -0;
            arr_20 [i_0] [i_0] [i_3] = ((!(arr_11 [i_0] [i_3])));
            var_21 = (127 * -109);
            arr_21 [i_3] = -var_9;
        }
    }
    var_22 = (((~-1629617780403184747) ? (((((var_3 ^ var_13) >= var_11)))) : (((((25864 ? var_5 : var_13))) ? var_1 : var_5))));
    var_23 = (~var_11);
    var_24 = (max(var_14, ((-((var_2 ? var_14 : var_14))))));

    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_25 = (((((var_18 >= 255) ? (((arr_0 [i_4] [i_4]) ? var_8 : (arr_7 [14]))) : (~112))) == var_11));
        arr_25 [i_4] = ((((((var_15 ? 191 : 0)) >= 18)) || (arr_6 [10])));
        var_26 = (((max(var_9, (var_19 && var_10))) & var_9));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_27 |= ((-5 ? -4131498930668362197 : -0));
        var_28 = (((((-(arr_0 [i_5] [i_5])))) ? var_2 : ((min(-25865, var_11)))));
        arr_30 [i_5] [i_5] = var_13;
    }
    #pragma endscop
}
