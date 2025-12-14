/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (0 && 32767);
    var_14 = var_6;
    var_15 = (-var_12 - ((-((var_12 ? 202 : -833149201)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (~4294967280);
                var_17 = (max((min(var_5, (arr_3 [i_0]))), (arr_2 [i_0 - 1] [i_0 + 3])));
                var_18 = (arr_1 [i_0 - 1]);
            }
        }
    }
    var_19 = (!53);
    #pragma endscop
}
