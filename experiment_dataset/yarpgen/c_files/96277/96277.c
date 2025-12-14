/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = (max((min(((min(-12889, var_9))), ((-1174813928 ? var_14 : (arr_5 [i_0] [i_0] [i_0] [i_0]))))), 5391));
                    var_20 = var_3;
                    arr_8 [i_0] [1] [i_0] = -var_10;
                }
            }
        }
    }
    var_21 &= (min((((min(var_10, var_17)) / ((156191253 ? 4294967295 : 1042362871)))), var_5));
    var_22 -= var_11;
    #pragma endscop
}
