/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_0 + 1]) ? (min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))) : (min((arr_3 [i_0 + 2]), (arr_3 [i_0 + 3])))));
                arr_6 [2] [i_1] = (arr_4 [i_0] [i_0]);
            }
        }
    }
    var_17 = (max(var_17, (((var_5 ? var_8 : ((var_11 ? var_7 : 18164006090226692184)))))));
    #pragma endscop
}
