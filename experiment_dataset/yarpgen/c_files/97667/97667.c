/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_10 = (min(var_10, (min(((var_2 ? 0 : var_8)), (!-1567195900)))));
            var_11 = (((-10219 % 920818347) / var_6));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_12 |= 33554368;
            var_13 = (max(-6, 81));
            var_14 = -28648;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_4] [i_4] [i_0 + 1] [i_2] = ((((1 ? 3751845971941049269 : 1))) ? ((1 / (arr_15 [i_0] [i_2] [11] [i_4] [11] [i_0 - 1]))) : (((var_8 ? var_3 : var_2))));
                            var_15 = (((70 & var_5) | var_0));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] = ((((min((var_2 >= var_2), ((13516930200001511618 ? var_0 : var_0))))) - (-12589555113501316761 - -var_9)));
        }
        var_16 = (min(var_16, ((((13 - var_8) ? (var_0 + var_9) : -var_4)))));
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        arr_22 [i_6] = ((+(((arr_0 [i_6 + 1]) ? var_0 : 28))));
        var_17 = ((((max((arr_6 [i_6] [i_6] [9]), (arr_6 [0] [15] [i_6 - 2])))) & (((arr_4 [12] [i_6]) & (arr_4 [i_6 + 2] [i_6 + 1])))));
        var_18 += (((((var_1 + (max(var_9, 72057593501057024))))) ? ((((((arr_14 [i_6] [i_6]) + var_6))) + ((62087 ? 7 : 7334404833457989176)))) : (((-25714 - ((var_7 ? var_7 : var_4)))))));
        var_19 = (((((max(var_7, var_2)) ? -var_1 : var_1))));
    }
    var_20 -= var_4;
    var_21 = (max(var_2, ((((min(var_3, var_8))) << (4563313027191273540 - 4563313027191273532)))));
    #pragma endscop
}
