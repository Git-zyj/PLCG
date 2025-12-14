/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (min(67092480, (max((max(var_0, 67092480)), ((min(1670490841, -1670490841)))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_16 += 67092480;
                    var_17 = (~45781);
                    var_18 = var_15;
                    var_19 = -1670490840;
                }
                var_20 = (max(-9127800008735329939, ((min((var_13 < var_4), var_5)))));
                var_21 = (-1670490841 & -13);
            }
        }
    }
    var_22 |= (min(9318944064974221676, 45781));
    var_23 = (min(var_23, 19785));
    #pragma endscop
}
