/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    var_20 = var_18;
    var_21 = ((-((((min(0, 18446744073709551615)) >= (var_10 && 18446744073709551615))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = 0;
                var_22 |= (max(((((min(-101, 0))) ? var_2 : var_16)), (max(-6873472749645805046, ((max((arr_2 [i_1] [i_0] [i_0]), var_8)))))));
            }
        }
    }
    #pragma endscop
}
