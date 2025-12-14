/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((+((var_2 ? (((arr_1 [1]) & (arr_3 [i_1]))) : 104)))))));
                var_14 = (!var_10);
                arr_7 [i_0] = ((-(((arr_2 [i_0]) * 1))));
            }
        }
    }
    var_15 = ((var_6 ? var_8 : var_0));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_16 = (max(var_16, -var_7));
        arr_10 [4] [4] |= (((((arr_8 [i_2]) ? (arr_1 [10]) : 799492418)) & ((max((arr_8 [i_2]), ((0 ? 4 : (arr_5 [2]))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_2] = (((arr_0 [i_2]) ? ((1 ? var_3 : (arr_1 [i_2]))) : (((arr_1 [i_2]) / (arr_11 [i_3] [i_3] [5])))));
            var_17 = (((arr_6 [3] [i_3] [i_2]) ? (((arr_6 [i_2] [i_2] [i_2]) ? 0 : var_2)) : ((-5 ? -799492405 : -1))));
            var_18 |= (arr_1 [18]);
        }
        var_19 = 1;
        arr_15 [1] |= -6277211643664609456;
    }
    var_20 = (((-1 + 9223372036854775807) >> (var_7 - 50043)));
    #pragma endscop
}
