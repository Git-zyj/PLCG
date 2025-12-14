/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((min(((max(var_14, var_7))), ((var_18 ? 32767 : var_7))))) + var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = -8358988847468216681;
                var_20 = ((~(((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : var_16))));
                arr_6 [i_0] [i_0] = (max((((arr_2 [i_0] [13]) / ((var_13 ? var_13 : -8358988847468216681)))), ((((arr_4 [5] [i_1] [i_1]) ? ((24401 ? 4294967269 : (arr_2 [i_0] [12]))) : 32)))));
                arr_7 [i_1] [i_1] [i_0] = max((arr_0 [i_0]), ((var_10 ? var_3 : (((arr_1 [i_1]) + 2239525308)))));
            }
        }
    }
    var_21 = (max(var_21, (var_0 / var_16)));
    var_22 = var_1;
    #pragma endscop
}
