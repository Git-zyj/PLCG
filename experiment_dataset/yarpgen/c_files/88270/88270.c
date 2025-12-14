/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_1) ^ ((~(30387 ^ -1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = var_10;
                arr_4 [i_0] [i_1] = 6057747882754805165;
            }
        }
    }
    var_15 = ((((max((max(18446744073709551607, var_5)), var_8))) ? ((-(var_11 / 1))) : 2273372052));
    var_16 = ((!var_3) && var_5);
    var_17 = (-27 * var_3);
    #pragma endscop
}
