/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((arr_1 [i_0]) <= ((min(0, (arr_0 [i_0 - 1]))))));
                var_14 = -var_6;
            }
        }
    }
    var_15 = var_6;
    var_16 = (min(var_5, var_0));
    #pragma endscop
}
