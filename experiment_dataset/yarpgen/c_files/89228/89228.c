/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = ((var_2 ? var_5 : 161));
                    var_11 = (((((((arr_3 [i_1]) ? var_9 : var_3)))) ? (min((min(4269837643, var_3)), ((max((arr_1 [i_0] [i_1 - 2]), 512))))) : (((((28 + (arr_5 [i_0] [i_1] [i_0] [i_2 - 1]))))))));
                }
            }
        }
    }
    var_12 = (!var_3);
    var_13 &= (!12);
    #pragma endscop
}
