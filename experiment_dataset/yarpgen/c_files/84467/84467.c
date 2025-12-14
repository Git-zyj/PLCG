/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [1] [i_0 - 1] = (((((((min((arr_2 [i_0]), (arr_0 [i_0])))) ? ((var_6 ? 60033 : 16841)) : ((var_10 >> (58689 - 58673)))))) ? (max(5498, ((min(46383, (arr_0 [19])))))) : ((((arr_0 [i_0]) || (arr_1 [i_0] [i_0]))))));
        var_17 = var_6;
        var_18 += ((var_12 % (max(((max(18915, var_16))), (((arr_2 [5]) & -102))))));
        arr_4 [i_0] = (((((arr_1 [i_0 - 1] [i_0 + 1]) ? (max((arr_2 [i_0 - 1]), var_7)) : var_15))) ? ((((((var_6 | (arr_0 [i_0])))) ? ((var_3 >> (var_8 - 3083538160071379609))) : ((max(var_10, (arr_1 [i_0] [i_0]))))))) : (((((var_12 ? 42458 : var_16))) ? ((((arr_1 [i_0] [i_0]) >> (17567 - 17562)))) : (max(17563, (-9223372036854775807 - 1))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] &= arr_5 [i_1];
        var_19 = (((((var_6 >> ((((1123700883587072 ? (arr_1 [5] [i_1]) : 0)) - 57591))))) ? ((max((max(var_15, var_13)), (!var_3)))) : (((arr_0 [i_1]) & (arr_0 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_13 [i_3] [3] [i_1] [i_1] = (+(max(((((arr_10 [i_1] [i_2] [i_3]) ? -17567 : (arr_11 [i_3] [i_2] [i_2] [i_1])))), ((var_8 + (arr_1 [1] [i_2 + 1]))))));
                    arr_14 [i_2 + 1] [i_1] = (max(((var_16 & (arr_8 [5] [i_2] [i_2]))), var_10));
                }
            }
        }
    }
    var_20 = (min(var_20, 30));
    var_21 = ((var_7 ? ((var_7 * (((3790817684 ? 1 : 1920))))) : (((((min(var_1, var_0))) + 18146)))));
    #pragma endscop
}
