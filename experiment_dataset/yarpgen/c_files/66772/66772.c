/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((3656024994 != var_10) ? var_3 : ((62923 ? var_7 : var_6))))));
    var_14 = -14445;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = 2611;
                arr_6 [i_0] [i_0 - 1] [i_0] = (~14445);
                var_16 = (max(var_16, (((-((-6 ? var_11 : -14446)))))));
            }
        }
    }
    #pragma endscop
}
