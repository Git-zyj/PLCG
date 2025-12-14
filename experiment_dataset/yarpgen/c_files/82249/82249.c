/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 68));
    var_14 ^= ((((min(var_8, (var_9 % var_7)))) ? ((~((~(-2147483647 - 1))))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = ((29159 ? 53207 : 5));
                var_16 = ((!(arr_0 [i_0] [i_1])));
                var_17 &= (max(var_1, 27545841));
                var_18 &= ((((max((min(53222, 1193809588814963952)), var_2))) ? ((min((arr_5 [i_1] [i_1] [i_0]), -1))) : (!22280)));
            }
        }
    }
    #pragma endscop
}
