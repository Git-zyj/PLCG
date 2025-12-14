/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(var_11 / var_0)));
    var_14 ^= min(((15436379261936907757 ? -9223372036854775787 : 400838024384254378)), var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = var_9;
                var_16 &= var_9;
                var_17 = (min(((min((arr_1 [i_0]), (arr_4 [i_0])))), (max(1116970338, (~var_9)))));
            }
        }
    }
    var_18 |= var_2;
    #pragma endscop
}
