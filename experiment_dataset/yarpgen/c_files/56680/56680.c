/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = 1331844095;
                var_17 = max(var_8, (arr_4 [i_0]));
                arr_6 [0] [i_1 - 1] = -78;
                arr_7 [i_1] [i_0] [i_0] = var_10;
            }
        }
    }
    var_18 = (max(0, (max((var_8 % var_15), (var_16 != 1000541359)))));
    var_19 = (min(var_11, ((min(-78, var_13)))));
    #pragma endscop
}
