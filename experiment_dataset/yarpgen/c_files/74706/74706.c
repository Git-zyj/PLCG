/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (2124619680 - 24576);
        arr_3 [i_0] [i_0] = (~3330168361934751143);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = ((((((1 * var_5) ? var_0 : 0))) ? var_7 : ((((((1 ? (arr_6 [i_1] [i_1]) : var_3)) >= (arr_6 [i_1 - 1] [i_1 - 3])))))));
        arr_8 [i_1] = ((min((0 >= var_7), var_3)));
        var_12 = (((max((arr_4 [i_1 + 1]), var_3)) & -var_9));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_13 = (min(((((arr_9 [i_2 + 1] [i_2 + 2]) ? (arr_9 [i_2 + 3] [i_2 - 1]) : (arr_9 [i_2 - 1] [i_2 + 2])))), (min((min((arr_10 [i_2]), 7)), (((var_7 ? -27 : (arr_10 [i_2]))))))));
        var_14 = (max(var_14, 2120714765));

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_15 *= ((-((-68 - (arr_12 [i_3 - 1] [8])))));
            var_16 *= -669945324;
        }
        var_17 = ((arr_12 [i_2] [18]) ? (-5 * 22) : ((var_4 % (arr_12 [i_2 + 3] [14]))));
        var_18 = ((32767 > (arr_9 [i_2] [i_2])));
    }
    var_19 &= ((((~(var_7 || 17014104205910335938))) < -4980));
    #pragma endscop
}
