/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((-6801240 * 0) + ((17364281945938017205 ? var_7 : 3575105075))))) / (var_6 + var_2)));
    var_14 = (0 > 719862221);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 += ((var_1 * (~22969)));
                var_16 = ((((min((~var_8), var_8))) > var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                var_17 = (max(var_17, (((-3575105074 & ((31 - (min(var_11, 3459621506554892048)))))))));
                var_18 = var_4;
                arr_13 [i_2] [i_3 - 1] = ((+((var_1 ? (var_1 > var_12) : (var_7 - 0)))));
            }
        }
    }
    #pragma endscop
}
