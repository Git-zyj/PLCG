/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((-11526 && (((((max(93, 1))) | 15056)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_5 [17]);
                var_17 = (max(22838, ((min((arr_0 [i_0]), var_15)))));
                var_18 = (min(var_18, ((((arr_0 [i_0]) / (((~var_14) ? (33597 ^ var_1) : var_1)))))));
                arr_8 [i_0] [i_1] [6] = (~1612);
                var_19 = ((((min(79, (((var_2 && (arr_2 [i_0] [i_0]))))))) ? ((93 >> (-5430057645901085370 + 5430057645901085399))) : 11526));
            }
        }
    }
    var_20 = 0;
    var_21 = ((var_7 && ((!((min(11507, var_11)))))));
    #pragma endscop
}
