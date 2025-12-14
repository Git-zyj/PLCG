/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((-(((!(((var_0 << (var_4 - 1384730087)))))))));
    var_19 = min(var_15, (!14929564767116268227));
    var_20 = (!var_11);

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_21 = ((-((((!(arr_2 [i_0]))) ? (((min(var_16, 1)))) : (arr_1 [i_0])))));
        var_22 = (-(((arr_2 [7]) << (var_6 - 3373370946649209368))));
        var_23 -= ((~(((((-(arr_1 [i_0])))) ? (arr_0 [i_0 - 1]) : 0))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_24 = min((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 2]))), (min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 1]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_7 [i_1] = ((((((arr_6 [i_1] [i_2]) / 357591428))) ? 1777231814971989609 : -30913));
            arr_8 [i_1] [i_1] = ((-(arr_3 [i_1 - 1])));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_25 = (((min(3937375862, (arr_9 [i_3])))) * ((((arr_11 [i_3] [i_3]) ? 1 : (arr_11 [i_3] [12])))));
        var_26 = (max(3937375853, (!854153162)));
        var_27 = var_14;
        arr_12 [i_3] = (((~9595) ? -10 : -17314));
        var_28 = -1777231814971989632;
    }
    #pragma endscop
}
