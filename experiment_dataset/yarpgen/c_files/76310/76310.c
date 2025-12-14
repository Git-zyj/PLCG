/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_0 + 3]);
                arr_5 [i_1 + 1] [i_0] [i_0] = (((arr_3 [i_0 - 1]) * 17063407251585769566));
                arr_6 [i_0] = var_7;
                var_15 = ((123 ? 17063407251585769578 : 72057592964186112));
            }
        }
    }
    var_16 -= (((((((1383336822123782049 ? -50 : 14024283030154338346))))) >= 1383630214));
    #pragma endscop
}
