/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [16] = 17657326037386719578;
                arr_7 [i_0] = ((((max(546541732, 4001044256))) ? -32759 : (((-7633 + 2147483647) >> (((arr_1 [i_0]) - 1675142004171464766))))));
            }
        }
    }
    var_18 = var_10;
    var_19 = var_6;
    var_20 = (((((789418036322832038 - 0) ? 4294967283 : (((var_3 ? var_5 : var_6))))) == (((var_17 ? 0 : var_5)))));
    #pragma endscop
}
