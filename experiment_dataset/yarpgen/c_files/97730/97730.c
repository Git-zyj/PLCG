/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_10));
                var_15 = (min((arr_2 [i_1] [i_1 + 2]), (((var_11 || (arr_2 [i_1 - 2] [i_1 + 2]))))));
                arr_6 [i_1] = (var_8 - var_10);
            }
        }
    }
    #pragma endscop
}
