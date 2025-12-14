/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_3 ? (((var_13 ? var_19 : 1))) : 733499306))) ? (((var_6 ? var_4 : var_11))) : var_14));
    var_21 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((!((var_6 < (arr_0 [i_1]))))))));
                    var_23 = (!1);
                }
            }
        }
    }
    #pragma endscop
}
