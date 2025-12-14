/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_13 |= (min((!11), (max(0, 0))));
                arr_5 [i_1 - 2] [i_0] [i_0] = ((~((var_6 / (-9223372036854775807 - 1)))));
                var_14 = (max((min(0, (~16616))), (((((max(49437, 0))) ? -9165 : 48926)))));
                var_15 = (((min(126100789566373888, (((1 ? 16610 : 20))))) <= (0 - 16609)));
            }
        }
    }
    var_16 = (min(var_16, var_2));
    #pragma endscop
}
