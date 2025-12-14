/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 ^= var_12;
                var_15 = -8865286095858933880;
                arr_4 [i_1] [i_0] = (((((-(arr_1 [i_0])))) ? 8865286095858933888 : var_2));
            }
        }
    }
    var_16 = (min(-8865286095858933887, var_12));
    var_17 = var_7;
    var_18 ^= 2131913877;
    #pragma endscop
}
