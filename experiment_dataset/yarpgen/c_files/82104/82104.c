/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (!var_9);
                    arr_7 [i_0] [i_0] [i_0] = var_7;
                }
            }
        }
    }
    var_17 = (min(((!((max(2012331436, var_13))))), ((!(!var_12)))));
    #pragma endscop
}
