/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 &= max(-var_3, ((-3713138318183077606 ? var_5 : 2305842992033824768)));
                    var_15 |= var_1;
                }
            }
        }
    }
    #pragma endscop
}
