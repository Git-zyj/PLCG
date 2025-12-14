/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [13] = (((max(var_12, (((arr_2 [i_0 - 1]) ? var_0 : var_2)))) <= var_1));
                var_17 = (min(var_17, (((-11446 ? 11455 : 13132)))));
                var_18 = (min(var_18, var_5));
                var_19 += ((var_7 < (((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : var_7))));
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
