/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max((max(18015511993325066173, 8)), var_9));
    var_18 -= var_6;
    var_19 = (min(var_19, ((((((max(3527617520, var_6)))) ? 4026531840 : ((1 ? 2665273152 : var_2)))))));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_4 [19] [i_0] [i_0]), var_6))) ? (arr_0 [i_1 + 2] [i_0]) : var_13));
                arr_7 [i_0] = ((!(((-(arr_3 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
