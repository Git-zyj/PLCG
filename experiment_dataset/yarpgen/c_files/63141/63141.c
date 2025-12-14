/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 ^= (((((arr_0 [2]) ? (arr_0 [0]) : var_10)) + 10639));
        arr_3 [1] |= (min(-10639, 1));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 |= (((!var_2) ? (1 % 127) : (var_3 != 1)));
        arr_7 [i_1] [5] = ((((min((arr_1 [20] [i_1]), (arr_6 [i_1])))) % ((642829352 ? -10639 : 129))));
        var_14 |= 40;
        var_15 = (max(((~((1 ? var_10 : -36)))), (((!(((var_0 ? 203 : var_0))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_3] = ((((max((min((arr_4 [i_2]), var_4)), (1 > 20783)))) ? (max(((min(var_1, 61))), (var_9 - 19784))) : var_5));
                    var_16 = (max(var_16, (arr_0 [i_2])));
                    var_17 = (min(55, 0));
                    arr_14 [i_3] [7] [i_3 - 3] = ((((arr_9 [i_3 - 2] [i_3 + 1] [i_3 - 2]) - (arr_9 [i_3 - 3] [i_3 - 2] [i_3 + 1]))) >= (((arr_11 [i_3]) ? ((255 ? var_9 : 42013)) : ((var_5 ? (arr_10 [i_1]) : var_6)))));
                }
            }
        }
    }
    var_18 = ((!(((var_1 ? ((0 ? var_6 : var_1)) : ((max(0, var_4))))))));
    var_19 = ((((-var_7 ? ((max(var_4, var_11))) : ((max(-63, var_8))))) + ((-var_1 ? var_7 : (!var_0)))));
    #pragma endscop
}
