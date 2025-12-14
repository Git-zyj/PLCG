/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_1));
    var_11 = var_3;
    var_12 ^= 131056;
    var_13 = (max(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (~6562936474360622007);
                arr_8 [i_1] = (arr_4 [21] [21] [21]);
                var_14 = ((2802488092 ? 52904 : 1731375357264601907));
            }
        }
    }
    #pragma endscop
}
