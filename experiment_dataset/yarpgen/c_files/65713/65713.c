/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max(var_4, var_8));
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= ((((162 * (162 == 61900))) / ((~((~(arr_0 [10])))))));
                arr_6 [i_0] [i_0] [i_0] = (((arr_0 [i_0]) ? ((max(((61872 ? 2431968578 : 1862998700)), -37086))) : (min(-0, 1))));
            }
        }
    }
    #pragma endscop
}
