/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (max(((((var_7 ? var_0 : var_5)))), (((min(var_10, (arr_3 [i_1]))) & (((min((arr_0 [i_1]), var_1))))))));
                var_13 = (min(var_13, (((((max((((arr_2 [i_1] [i_1] [i_0]) ? var_9 : (arr_2 [i_0] [i_0] [i_0]))), var_9))) ? ((((arr_2 [i_0] [i_1] [i_0]) ? (arr_0 [i_1]) : (arr_2 [i_0] [i_1] [i_0])))) : (((min(var_8, (arr_0 [i_1]))) * (((var_7 ? (arr_0 [i_0]) : var_11))))))))));
            }
        }
    }
    var_14 = (((((var_9 / var_0) ? (!4770890766745229894) : (min(var_4, var_4)))) + ((((var_2 + var_5) ? (var_5 / var_5) : var_9)))));
    var_15 = (min(var_15, ((min(var_11, ((var_2 ? var_10 : var_2)))))));
    #pragma endscop
}
