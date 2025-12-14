/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((var_0 ? var_8 : var_7))), var_5));
    var_19 = 2838165606;
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = (+-4294967295);
                    arr_9 [i_0] [i_0] [i_2] = (max(973699918, 973699918));
                    arr_10 [i_2 - 1] [i_1] [i_0] = 0;
                }
            }
        }
    }
    #pragma endscop
}
