/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min(((-(((0 > (arr_1 [i_0] [i_0])))))), ((var_8 ? var_0 : (arr_4 [i_0] [i_0]))))))));
                var_20 = ((~(!var_3)));
                arr_5 [i_1] [i_1] [i_1] = (min((1 & var_3), ((~((~(arr_2 [i_0])))))));
            }
        }
    }
    var_21 = (max(((((min(var_6, 0))) ? var_10 : var_12)), ((1 ? (!var_15) : var_12))));
    #pragma endscop
}
