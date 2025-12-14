/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((max(var_5, 1)) ? var_3 : (var_5 > 35938)))) ? 12897879409171855829 : var_1)))));
        arr_3 [i_0] [i_0] = (~1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (min(0, 1984));
                    var_17 -= min(-11266, (min(24716, 0)));
                }
            }
        }
    }
    #pragma endscop
}
