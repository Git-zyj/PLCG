/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = var_10;
                    var_20 = ((((min(((var_8 ? 1 : var_15)), var_16))) ? (min((min(4888525758540549263, var_8)), var_19)) : (((110 ? -19782 : 19782)))));
                }
            }
        }
    }
    var_21 = (((var_6 / var_11) ? (max((((31796 ? var_6 : 15))), var_18)) : ((max((~22), ((29 ? var_3 : 49)))))));
    var_22 = var_9;
    #pragma endscop
}
