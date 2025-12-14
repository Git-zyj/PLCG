/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!((max(var_9, var_10)))))) >> ((((2548054703 ? -875785879 : 2548054709)) - 3419181395))));
    var_13 = (!1746912587);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = var_6;
                var_15 = ((!(arr_4 [i_1 - 1])));
                var_16 = (((arr_2 [i_0]) / (((4830028524017869568 >> (var_4 - 37226))))));
            }
        }
    }
    var_17 = ((((((((var_8 ? (-9223372036854775807 - 1) : var_0)) + 9223372036854775807)) + 9223372036854775807)) >> (var_5 - 578)));
    #pragma endscop
}
