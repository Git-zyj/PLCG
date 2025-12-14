/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (min((((((max(var_10, var_6))) ? var_5 : ((((arr_5 [1] [1] [1]) > var_1)))))), var_9));
                    var_12 = (max(-5, 21));
                    var_13 = (min(var_13, (((min(var_10, var_9))))));
                    var_14 = var_2;
                }
            }
        }
    }
    var_15 = 39262;
    var_16 = (max(222, 0));
    #pragma endscop
}
