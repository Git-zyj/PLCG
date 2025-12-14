/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 22;
    var_14 = var_10;
    var_15 = ((var_5 ? (!22) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = 15;
                var_17 = (min(var_17, (arr_5 [i_0])));
            }
        }
    }
    var_18 = (min((~-var_5), (min((!var_8), ((1 ? var_6 : var_10))))));
    #pragma endscop
}
