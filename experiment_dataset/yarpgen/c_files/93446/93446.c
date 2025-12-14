/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_7 ? var_3 : var_10))) % ((var_6 ? 1048575 : var_5)))) ^ var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((min((arr_3 [13] [i_0] [i_1]), 1048564))) ? var_16 : (((arr_0 [i_0]) ? var_18 : var_0))))) ? ((4161536 ? 1 : 12612321903894907854)) : ((((((31159 ? 5834422169814643762 : 1616291733))) ? (!var_1) : (((arr_0 [i_0]) ? 4290805760 : 4290805767)))))));
                var_20 = (min(var_20, ((max((4293918720 - 7060265323124192251), ((min(115, -128))))))));
                var_21 += ((((((((arr_3 [i_0] [i_1] [i_0]) + 9223372036854775807)) >> (-1342993221 + 1342993275))) ^ (!14254639094966095498))));
            }
        }
    }
    var_22 -= (min(((max(var_6, var_15))), (((((var_2 ? var_10 : var_8))) ? var_18 : var_11))));
    var_23 = (var_7 * 1);
    #pragma endscop
}
