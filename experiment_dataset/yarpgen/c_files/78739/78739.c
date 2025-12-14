/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_18));
    var_20 -= var_4;
    var_21 -= 11850618181730496169;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = var_4;
                var_23 -= (!var_16);
            }
        }
    }
    var_24 = (min(var_4, ((var_14 << (var_11 - 4729935380754991538)))));
    #pragma endscop
}
