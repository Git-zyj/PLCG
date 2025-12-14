/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_3;
    var_13 = var_4;
    var_14 = (!2412275887);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = var_2;
                    var_16 = ((~((23380 ? -23377 : -6636))));
                    arr_9 [i_2 + 2] [i_1] [i_0] = (((((511981622 ? -1 : 1742097047))) ? (((!((max(var_8, var_5)))))) : var_6));
                }
            }
        }
    }
    var_17 = (min(var_17, var_1));
    #pragma endscop
}
