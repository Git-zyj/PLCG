/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = var_11;
    var_19 = (-12251 ^ 838083886);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = 1789083650;
                var_20 = (!6831);
            }
        }
    }
    var_21 *= var_13;
    #pragma endscop
}
