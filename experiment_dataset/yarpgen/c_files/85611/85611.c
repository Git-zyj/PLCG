/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 += ((16 ? ((min(1, (arr_4 [i_0] [i_0])))) : ((var_5 + (!var_10)))));
                var_20 = (min(var_17, 179427980));
                arr_6 [i_0] [i_0] [i_0] = (min((((((var_12 ? -74 : var_9))) ? var_13 : (29229 != 1))), ((min(var_16, (arr_0 [i_0] [i_1]))))));
                var_21 += (max(var_12, (27073 >= -32003)));
            }
        }
    }
    var_22 = (min(var_22, (((var_4 ? var_6 : (((var_5 <= (~28243)))))))));
    var_23 += (min(var_13, (!18204414466573147382)));
    #pragma endscop
}
