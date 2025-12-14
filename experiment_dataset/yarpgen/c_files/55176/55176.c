/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((((max((((!(arr_2 [i_0] [i_0] [i_0])))), (arr_0 [i_0 - 1] [i_0 + 1])))) >= ((min(var_15, (max(var_7, var_19)))))));
                var_21 = (((((var_16 ? (((var_2 * (arr_3 [i_1])))) : -var_16))) ? (((min((arr_3 [i_0 + 3]), var_15)))) : (((arr_2 [i_0] [i_1] [i_1]) ? var_16 : (((var_6 % (arr_3 [i_0 - 1]))))))));
                var_22 = (max(var_22, (((~(((((var_17 ? var_4 : (arr_2 [i_1] [i_0] [i_0])))) ? (var_11 <= var_14) : (max(var_7, var_9)))))))));
            }
        }
    }
    var_23 = var_3;
    var_24 = var_16;
    #pragma endscop
}
