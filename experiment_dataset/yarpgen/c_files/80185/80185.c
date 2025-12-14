/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (!var_10);
    var_21 = (16858088999122486721 ? var_10 : var_7);
    var_22 &= (!20909);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_23 |= (((-3402 / 16858088999122486718) ? 216 : (((!(arr_3 [10]))))));
                var_24 = 9115893948200208396;
                var_25 = (min(var_25, (((var_10 == (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    var_26 ^= (17895906650927471447 & 576460752169205760);
    #pragma endscop
}
