/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((((max(var_10, var_14))) ? 56660 : (var_15 / 49606)))), (max(((4294967282 ? 4115291696 : -49)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (~-56);
                var_20 = (max(((36269 ? 12119 : -22116)), -15));
                var_21 = (((((arr_0 [i_1 - 2] [i_1 + 1]) & ((48 >> (((arr_1 [i_0]) - 557893109))))))) ? ((((min(1, 65519))))) : (((min((arr_1 [i_1]), (arr_5 [i_1 - 2] [i_1 - 2]))) << (arr_2 [i_1] [i_1 - 2]))));
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
