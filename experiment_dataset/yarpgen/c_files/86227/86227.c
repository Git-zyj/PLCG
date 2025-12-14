/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = var_4;
                arr_5 [i_0] = min((((462355362647540685 > var_3) ? (462355362647540707 * 17984388711062010899) : var_5)), (max(var_1, var_2)));
                arr_6 [i_0] [18] [i_1] = 17984388711062010916;
                arr_7 [i_0] [i_1 - 2] [i_1] = var_4;
            }
        }
    }
    var_15 = (~var_7);
    var_16 = ((var_5 ? (!var_3) : var_5));
    #pragma endscop
}
