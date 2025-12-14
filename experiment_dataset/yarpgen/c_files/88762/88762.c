/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((min(var_8, (arr_3 [i_0] [i_1 + 1]))), (max(var_6, var_11))));
                var_14 = (min(var_14, (((((max(var_12, ((var_10 * (arr_1 [0] [0])))))) ? (((arr_0 [4]) / (arr_0 [14]))) : (arr_3 [1] [i_1]))))));
            }
        }
    }
    var_15 = (!-var_0);
    var_16 = ((((0 == ((min(var_7, var_10)))))));
    #pragma endscop
}
