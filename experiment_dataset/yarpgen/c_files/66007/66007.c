/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((max((((2510157065 ? var_6 : (arr_1 [i_0])))), ((139306262498627116 ? var_5 : (arr_1 [i_1]))))));
                var_19 = ((((max(-3667188321627092054, 11677)) % (max((arr_0 [i_1] [i_0 + 2]), (arr_2 [i_0] [i_0]))))));
            }
        }
    }
    var_20 |= (((((((min(var_2, var_14))) ? var_4 : var_5))) ? var_8 : (min(var_13, 492455468))));
    #pragma endscop
}
