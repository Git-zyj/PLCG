/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = ((((max((arr_4 [i_0]), var_5))) ? -58166 : ((min(0, 1)))));
                var_11 = (min(4516194274416956974, ((max(((max(var_8, var_3))), (arr_5 [i_0]))))));
            }
        }
    }
    var_12 = (min((((((var_4 ? -996883134 : var_6))) ? (((0 ? var_8 : var_0))) : ((var_4 ? var_0 : -519940087719881266)))), var_7));
    var_13 = ((35419 == ((-((var_9 ? var_1 : 35419))))));
    var_14 = (var_8 ? (!var_8) : var_5);
    var_15 = (((var_9 && -519940087719881257) ? (min(var_3, -1)) : (((var_7 ? 0 : ((2966803020359726694 ? 0 : 3847299488)))))));
    #pragma endscop
}
