/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 1136341698));
                    var_19 = 1418951209;
                    var_20 = ((((var_3 ? (((-(arr_4 [i_2])))) : var_8)) | (arr_4 [i_2])));
                    var_21 = 536870912;
                    var_22 = (arr_3 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
