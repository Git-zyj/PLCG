/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = max(233, 252);
        var_12 = min((-30900 <= 252), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = (max(545357767376896, (((-(var_7 / 216))))));
            arr_11 [i_1] = (((arr_9 [i_2] [i_2] [i_2 - 3]) ? (arr_9 [i_2] [i_2] [i_2 - 2]) : (arr_9 [i_2] [i_2] [i_2 - 1])));
        }
        var_13 = ((((((max(34895685388583459, 545357767376892)) != 1))) | (arr_5 [i_1])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (((((-(arr_14 [i_3])))) ? (((!(arr_13 [i_3] [16])))) : ((min((arr_13 [i_3] [11]), (arr_13 [1] [2]))))));
        var_14 = (min(var_14, ((((((-(arr_14 [i_3])))) | (max(249, 4135060875818902289)))))));
        arr_16 [i_3] [i_3] = (max((max((var_5 != var_7), (max((arr_14 [i_3]), 18446198715942174707)))), (var_4 | var_10)));
        var_15 = -2197715568174058780;
        arr_17 [i_3] [i_3] = (arr_12 [i_3] [i_3]);
    }
    var_16 = 96;
    #pragma endscop
}
