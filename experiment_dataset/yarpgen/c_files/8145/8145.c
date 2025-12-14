/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((((min(var_3, var_4)) - var_0)) + (max((min(var_10, var_10)), (var_9 != var_4)))));
                arr_9 [i_0] [i_0] [i_0] = (min((((min(var_6, var_0)) > (var_6 == var_8))), var_1));
                arr_10 [i_0] [i_0] [i_0] = (var_3 ^ var_9);
                var_11 -= ((((min(var_4, var_5))) || ((((min(var_4, var_4)) * (var_7 > var_7))))));
            }
        }
    }
    var_12 = var_5;
    #pragma endscop
}
