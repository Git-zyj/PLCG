/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (((-1 * var_11) * ((((!(arr_1 [i_0] [i_1])))))));
                var_13 = (max((arr_0 [i_1 - 1]), ((32767 ? 1 : (arr_0 [i_0])))));
            }
        }
    }
    var_14 = (min(var_14, -4194304));
    var_15 = var_0;
    var_16 = min(((-((var_7 ? var_7 : -32767)))), var_10);
    var_17 = (max(var_17, var_7));
    #pragma endscop
}
