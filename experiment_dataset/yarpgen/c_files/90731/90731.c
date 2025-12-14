/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 += var_13;
                var_19 &= (((min(241, var_16)) ^ (((-1641577092 & ((min(241, var_2))))))));
            }
        }
    }
    var_20 = (min(((var_14 ? var_9 : (((var_9 ? var_10 : 236))))), var_0));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_21 *= (arr_4 [9] [i_3]);
                    var_22 = -19;
                    var_23 = (min(var_23, ((((min((arr_4 [i_2] [i_2]), ((var_14 ? var_7 : (arr_3 [i_3] [i_4]))))) << ((((~((var_16 ? (arr_8 [i_2] [i_3] [i_2]) : var_1)))) - 4294967274)))))));
                }
            }
        }
    }
    var_24 &= (~31714);
    var_25 = (max(var_25, (((-(((min(var_13, var_10)))))))));
    #pragma endscop
}
