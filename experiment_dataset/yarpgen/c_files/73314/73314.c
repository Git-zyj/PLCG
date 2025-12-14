/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!54);
    var_18 = (min(((((190 ? var_11 : var_7)))), ((((min(var_15, var_2))) ? var_14 : (var_1 / var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (min(((199 ? (-118 < -15237) : (28 || 196))), (min(((51 ? 80 : 61)), (arr_4 [i_1 - 1])))));
                var_20 = (((!-3) >> ((((max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 + 2])))) + 15017))));
            }
        }
    }
    var_21 = 39;
    #pragma endscop
}
