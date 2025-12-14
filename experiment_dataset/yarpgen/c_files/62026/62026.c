/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 ^= var_6;
                var_12 = ((1 & (min((1463100185 <= 1), (arr_5 [i_1] [i_0])))));
            }
        }
    }
    var_13 *= max((((~-1870925133) ? (((var_9 ? var_3 : var_6))) : (min(var_10, var_7)))), (((!((min(var_0, -1870925133)))))));
    #pragma endscop
}
