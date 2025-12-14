/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((var_10 ? 19834 : var_2));
                arr_4 [7] [5] [i_0] = (max((((max(32767, 14267428569553678783)) | var_15)), 74));
            }
        }
    }
    var_18 = ((((max(0, var_12)) < var_16)));
    #pragma endscop
}
