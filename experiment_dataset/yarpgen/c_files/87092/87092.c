/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((!(~4112199142730381491)));
                var_11 = (max(((((~(arr_3 [i_0] [i_0]))))), ((60497 ? (!var_8) : var_4))));
            }
        }
    }
    var_12 = (min(var_12, ((min(((min(var_1, ((0 ? 2603493311 : var_1))))), (((~4112199142730381514) / (16018 & 562429477))))))));
    var_13 = ((max(((var_8 ? var_2 : var_6), (!var_7)))));
    var_14 -= -2313077524;
    var_15 = (var_4 ^ var_8);
    #pragma endscop
}
