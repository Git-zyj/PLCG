/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] = 126;
                    arr_8 [i_1] [i_1] [i_0] [i_1] = (((((+(((arr_3 [i_0] [i_1] [i_0]) ? -2116182775 : (arr_0 [i_2])))))) || (!var_6)));
                }
            }
        }
    }
    var_18 = ((var_10 ? var_8 : ((((var_15 ? 149588438873293787 : 7666)) ^ 7674))));
    #pragma endscop
}
