/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_7 < ((((min(var_1, var_8))) ? 34 : (min(var_8, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((((max(var_0, (arr_0 [i_1]))) * (((max(var_7, var_3))))))) ? 24731 : ((((min(0, 51899))) ? (arr_3 [i_0] [0] [i_1]) : (arr_3 [i_0] [i_1] [4]))))))));
                var_13 = (min(var_7, var_6));
                arr_4 [i_1] [i_1] [i_1] = ((((max(((((arr_3 [i_0] [11] [i_1]) != 20755))), (arr_1 [i_1])))) ? var_8 : ((var_10 / (min((arr_1 [i_1]), -247725855585125778))))));
                var_14 = (max(var_14, (arr_3 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_15 = (((((((1 ? var_5 : 255))) ? ((var_4 ? var_6 : var_3)) : ((var_7 ? var_4 : -141407577))))) ? (-9223372036854775807 - 1) : (min(((var_10 ? var_2 : var_5)), ((var_0 ? var_2 : var_9)))));
    #pragma endscop
}
