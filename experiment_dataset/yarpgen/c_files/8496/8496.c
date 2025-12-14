/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((!(arr_5 [i_0] [i_1 - 2] [i_2] [i_2]))))));
                    var_14 = ((-((-(arr_5 [i_0] [i_1] [i_0] [i_1])))));
                }
            }
        }
    }
    var_15 |= (!var_1);
    var_16 = (~var_4);
    var_17 = (min(var_17, var_5));
    #pragma endscop
}
