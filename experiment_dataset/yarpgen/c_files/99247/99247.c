/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((((var_8 ? var_6 : var_10))), ((var_10 ? var_6 : 4294967295)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (((arr_0 [i_0]) >= (max((arr_3 [i_1]), (((arr_0 [4]) ? (arr_0 [i_1]) : (arr_2 [i_0])))))));
                arr_6 [i_1] [i_1] = 678329844;
            }
        }
    }
    var_14 = var_11;
    var_15 = (min(((((((var_7 << (var_12 - 296188015)))) != (min(-127, var_12))))), ((min(var_10, var_9)))));
    #pragma endscop
}
