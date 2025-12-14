/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 += 4095;
                var_19 -= ((!((((max(127, (arr_0 [i_0]))) >> (var_15 - 3215022254416503983))))));
                var_20 = (max(var_20, ((((((((arr_5 [i_1] [i_1]) && var_10)) ? (!147) : (var_0 && var_12))) + ((((min(var_10, var_2))) ? ((((arr_1 [i_0] [i_0]) || var_2))) : ((max(83, 1))))))))));
            }
        }
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
