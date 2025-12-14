/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(14671, ((((65532 ? var_15 : 50864)) + -var_1))));
                var_17 = (arr_4 [i_0] [i_0]);
                var_18 = ((((max((arr_5 [i_0]), 50864))) ? (((arr_6 [i_0] [i_1 - 1] [i_1 - 1]) ? (arr_6 [i_0] [i_1 - 1] [i_0]) : (arr_6 [i_0] [i_1 - 1] [i_0]))) : ((-(((!(arr_0 [i_0] [i_0]))))))));
                arr_8 [i_0] = (min(((((arr_6 [i_1] [i_1 - 1] [i_0]) >= (arr_0 [i_1 - 1] [i_1 - 1])))), var_5));
            }
        }
    }
    var_19 = ((((((var_8 < var_13) ? (var_8 || var_1) : var_9))) ? ((var_6 ? var_13 : (max(var_1, var_12)))) : ((((var_13 == (min(var_4, var_1))))))));
    #pragma endscop
}
