/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_13;
    var_15 = var_3;
    var_16 = (min(var_16, var_11));
    var_17 = (min(var_17, ((((-1 + (!-6310048420866610257)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_1 + 3] = var_3;
                var_18 = (var_8 ? ((((((arr_1 [i_0 + 1] [i_0]) ? (arr_7 [i_0] [i_0 - 2]) : var_6)) < (arr_3 [i_1 + 2] [i_1])))) : ((((arr_4 [i_0] [i_0]) != (!var_3)))));
                var_19 = ((+(((arr_5 [14] [14]) ? 1736953279 : (arr_6 [i_0] [1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
