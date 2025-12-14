/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_10;
    var_13 &= 26369;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((!(~252)));
                    var_15 = 1;
                    var_16 = ((-((46 ? 255 : var_5))));
                }
            }
        }
    }
    var_17 += -12299;
    var_18 = (max(((((var_9 ? var_9 : var_5)) | ((min(-27420, var_1))))), 50251));
    #pragma endscop
}
