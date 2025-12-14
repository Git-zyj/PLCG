/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_12;
                arr_6 [i_0] [i_1] = (arr_4 [i_0]);
                var_19 = ((~((6296 ? 1873354303 : 65534))));
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
