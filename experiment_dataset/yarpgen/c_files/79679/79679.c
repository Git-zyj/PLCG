/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (var_0 <= var_10)));
    var_14 += (((((((477111955796172602 ? 893576749 : 10392))) % var_9))) ? (var_12 >= var_9) : (min(var_10, var_10)));
    var_15 = (((((min(var_8, var_1)))) ? (((((var_4 ? var_7 : 1747911165))) ? -2788105890878072132 : var_6)) : (~-var_7)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (((((((10643552720976169834 ? 13955 : 16264))) ? 2413637474 : (arr_3 [i_0]))) != (((~(arr_5 [i_1 + 2] [i_1 + 4] [i_0] [i_0 - 1]))))));
                    arr_7 [i_0] [i_0] [i_0] = var_9;
                    arr_8 [i_0] [i_1] [i_0] = (max(((var_8 ? (arr_1 [i_1 - 2] [i_0]) : ((~(arr_1 [i_0] [i_0]))))), var_2));
                }
            }
        }
    }
    var_17 = (264272988 <= var_7);
    #pragma endscop
}
