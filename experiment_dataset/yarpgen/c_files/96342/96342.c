/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 += (max((max(var_6, (min(-8944, var_5)))), (max(0, var_3))));
    var_13 = min(var_6, (!4));
    var_14 &= (max((max(((0 ? var_10 : var_1)), ((-71 ? var_3 : var_2)))), 1962903456));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 -= (arr_0 [i_0]);
        arr_2 [i_0] = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (((arr_1 [i_0] [16]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))), 11878));
        var_16 = ((((((((-274488700 ? (arr_0 [i_0]) : 3614))) ? (~89) : (arr_0 [20])))) ? var_6 : (min(((min(var_5, (arr_0 [i_0])))), (arr_1 [i_0] [i_0])))));
        var_17 = (((min(322085432, -18458)) / (((arr_0 [10]) * (min((arr_1 [i_0] [1]), (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_1] [1] = (arr_6 [i_2] [i_1] [i_1]);
            var_18 = ((((min((arr_5 [i_1] [i_2]), (arr_1 [i_2] [i_1])))) ? ((((!(arr_4 [i_1]))))) : (max((((-(arr_7 [i_2] [i_1])))), (max((arr_4 [1]), (arr_5 [i_1] [i_2])))))));
        }
        var_19 = (max((((16198003154044658523 ? 1 : 0))), (arr_4 [i_1])));
    }
    #pragma endscop
}
