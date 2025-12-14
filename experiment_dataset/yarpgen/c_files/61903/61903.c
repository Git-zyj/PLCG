/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = (min(var_11, (((((((60458 < var_8) ? ((max(0, var_5))) : var_6))) ? -87 : ((var_3 ? (~var_8) : var_7)))))));
    var_12 = (min(-var_3, (!-86)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = (min((min(((-(arr_0 [i_2]))), (!var_3))), var_5));
                    arr_9 [i_2] = (((~-77) ? ((((max((arr_6 [i_2] [i_1] [i_2 + 2]), var_4))) ? var_4 : -127)) : (((((var_0 ? var_9 : (arr_0 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
