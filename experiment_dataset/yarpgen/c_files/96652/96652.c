/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((540011264 ? (((var_10 ? var_11 : var_1))) : var_9))) ? 2594451948 : var_4));
    var_17 = min((max(((min(37, 23110))), (2594451929 * 29204))), var_15);
    var_18 = (max(var_18, (((var_2 ? (min(((-416770656 ? 1008 : var_0)), var_3)) : ((((((max(-27016, 1008)))) & ((var_0 ? var_7 : 27020))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = -7726512306814731981;
                    var_20 = 1;
                }
            }
        }
    }
    #pragma endscop
}
