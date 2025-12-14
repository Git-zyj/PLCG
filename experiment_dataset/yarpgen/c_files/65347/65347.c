/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((min(0, (arr_3 [i_0] [i_0])))) && (arr_3 [i_0] [i_1]))) ? ((((min(var_8, (arr_0 [i_0] [i_1 - 2])))) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (arr_3 [i_1 - 1] [i_1 - 2]))) : ((((min(8206638419902000931, 0))) ? (((var_3 ? var_10 : (arr_0 [i_0] [i_1])))) : (17246226100088518422 + var_3)))));
                var_19 = ((((((arr_0 [i_0] [i_0]) < var_16))) < 37413));
            }
        }
    }
    var_20 = ((var_8 + (max((~var_12), var_5))));
    var_21 = (~(((((var_14 ? var_3 : var_3))) ? (!var_9) : ((var_4 ? var_16 : 1)))));
    #pragma endscop
}
