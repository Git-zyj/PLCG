/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (min(0, 609085963157394318));
                    arr_7 [i_0] [1] [i_0] = (min(609085963157394318, ((~((609085963157394318 << (var_9 - 250)))))));
                }
            }
        }
    }
    var_15 = max(609085963157394318, (-609085963157394318 / -609085963157394332));
    var_16 = (((((!var_7) ? 1 : var_12)) != ((((!((min(var_10, var_1)))))))));
    #pragma endscop
}
