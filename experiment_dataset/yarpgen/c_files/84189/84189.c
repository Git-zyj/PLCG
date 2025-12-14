/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (var_8 && 0);
                arr_5 [i_1] [i_1 - 3] = var_10;
                arr_6 [1] [i_1] [1] &= (max(18376144108783753791, (((((max(0, 536870908))) ? -65 : 1)))));
                arr_7 [i_1] = (max(((((max(233, var_9))) ? (6908219291008480444 == 10812180527738022192) : (max(984579559, var_3)))), (((-1 ? 1 : ((max(13406, var_8))))))));
            }
        }
    }
    var_13 = (min(var_13, ((max(((((max(1, 590733911))) ? 4351318288547930830 : (max(1, 3119100810975822008)))), (((((1 ? 1 : 1)) > 1))))))));
    #pragma endscop
}
