/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 = ((((((var_4 ? var_7 : 189)))) * (((var_7 == (max((arr_1 [i_0]), var_7)))))));
            arr_6 [i_0] [i_1] = (((((((((arr_5 [i_1] [i_1] [i_1]) ? (arr_1 [i_0]) : 0))) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1] [i_0])))) ? var_0 : ((-826792277317927753 ? (((arr_2 [i_0]) >> (var_7 + 6198685890245447874))) : var_1))));
        }
        var_14 = (min((arr_1 [i_0]), (min(66, (arr_1 [i_0])))));
        arr_7 [i_0] = var_7;
        arr_8 [i_0] = (((!(arr_1 [i_0]))));
    }
    #pragma endscop
}
