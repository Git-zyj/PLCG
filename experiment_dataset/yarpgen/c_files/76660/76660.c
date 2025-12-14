/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = ((((((192 ? var_15 : var_1))) ? ((min(var_13, var_7))) : 104)));
                    arr_6 [i_2] [i_1] = (((((min((max(var_6, (arr_4 [1] [i_1]))), var_5)))) + (min((arr_4 [i_0] [19]), (max(var_15, var_0))))));
                }
            }
        }
    }
    var_21 = ((var_18 ? var_3 : ((((((var_1 ? var_17 : var_5))) && ((min(var_2, var_15))))))));
    var_22 = ((((min(0, -19404))) / (63 || 77)));
    #pragma endscop
}
