/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [1] = -13614;
                var_19 = -1961764833;
                arr_7 [i_0] = var_10;
            }
        }
    }
    var_20 = var_9;
    var_21 = (min(((((((var_8 ? var_14 : 224))) ? var_16 : var_15))), var_0));
    #pragma endscop
}
