/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_0] [i_0] [2]);
                arr_4 [i_0] = (min((arr_1 [i_0]), ((-(min(var_5, (arr_2 [10] [i_0] [1])))))));
            }
        }
    }
    var_19 = ((720162619 << (-var_10 - 25557)));
    var_20 = var_2;
    var_21 = var_1;
    var_22 = (((((max(var_17, -5502825204088979550))))) + (min(var_1, (max(var_9, var_17)))));
    #pragma endscop
}
