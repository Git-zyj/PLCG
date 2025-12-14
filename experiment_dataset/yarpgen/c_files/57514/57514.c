/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(((var_0 ? var_11 : var_9)), ((min(var_8, var_15))))) < ((min((var_10 | var_2), ((min(var_15, var_6))))))));
    var_18 ^= (((((~((var_9 ? var_2 : var_7))))) ? var_9 : (((((var_5 ? var_3 : var_6))) ? (~var_13) : (~var_9)))));
    var_19 = ((var_6 ? var_5 : (~var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 -= (min(var_2, (min((min(var_6, var_9)), var_4))));
                var_21 = (min(var_15, ((var_6 ? var_5 : var_11))));
                arr_5 [10] [i_1] = var_7;
            }
        }
    }
    #pragma endscop
}
