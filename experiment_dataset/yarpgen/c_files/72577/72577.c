/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((var_6 ? var_8 : (!var_10))) + (!var_1)));
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (var_1 ? (((((min(6102800992060912499, -6102800992060912500))) ? (var_10 || 25156) : 2147483647))) : (max(var_10, 4294967295)));
                    arr_7 [i_1] [i_1] [i_0] = ((((((arr_5 [i_0] [14] [i_1] [i_2]) ? 6102800992060912499 : 2147483647))) ? (!-19226) : (~var_3)));
                    var_14 = (!var_0);
                }
            }
        }
    }
    #pragma endscop
}
