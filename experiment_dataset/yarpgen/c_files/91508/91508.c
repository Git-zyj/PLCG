/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [14] = ((((min(((min(10151, var_7))), var_6))) ? (min((!var_8), (((arr_3 [i_0] [4] [12]) + var_1)))) : var_3));
                arr_5 [i_0] = var_11;
                arr_6 [i_0] [i_0] = var_8;
            }
        }
    }
    var_13 |= var_4;
    #pragma endscop
}
