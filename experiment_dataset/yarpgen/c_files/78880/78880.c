/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((((23494 ? var_2 : var_5))), (max(116, var_7)))) < (((var_2 ? (max(var_5, var_6)) : var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = ((((max(-758936718, (arr_3 [i_1] [i_2])))) ? (!255) : (max((arr_1 [i_2]), (arr_1 [i_2])))));
                    arr_9 [i_0] [i_2] = (((((65166 ? -4337 : 2578))) ? (max(((var_6 ? var_9 : (arr_1 [i_0]))), (arr_3 [i_0] [i_1]))) : (((11 ? 4096 : 65166)))));
                }
            }
        }
    }
    var_11 = var_2;
    var_12 = -7045550644359814178;
    #pragma endscop
}
