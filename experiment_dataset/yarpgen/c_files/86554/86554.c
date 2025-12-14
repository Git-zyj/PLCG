/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max(((min(((min(1, var_0))), (min(var_7, var_1))))), (max((arr_0 [i_0] [i_0]), var_14))));
                arr_7 [i_1] = (max((!2731), (min((max(var_11, (arr_0 [i_0] [i_1 + 1]))), ((max(1, 1)))))));
            }
        }
    }
    var_19 = (max((max((2731 % var_10), ((min(var_10, var_11))))), ((-((min(1, var_17)))))));
    var_20 = (((max((var_12 + 1), var_17)) - (min((var_12 + 1), var_7))));
    #pragma endscop
}
