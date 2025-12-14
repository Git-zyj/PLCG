/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_12 ? var_14 : var_11))) ? var_3 : (var_3 / 41682)))) || var_9));
    var_16 = ((var_11 || (((~((var_0 >> (23853 - 23822))))))));
    var_17 = ((-(((var_13 < (var_13 / var_3))))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [2] [i_0] [i_1] = 23854;
                arr_5 [i_0] [i_0] [i_0] = var_0;
            }
        }
    }
    #pragma endscop
}
