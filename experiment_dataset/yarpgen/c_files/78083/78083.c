/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 -= ((((((-1 * -1) + (arr_2 [10] [10] [10])))) ? ((((((arr_2 [i_0] [7] [i_1]) ? var_8 : 17380286591950492297))) ? ((-80934391 ? (arr_1 [14]) : -1537525529)) : -665252672)) : (((((var_1 ? var_9 : -1))) ? (!190460804) : (arr_2 [i_0] [i_1] [1])))));
                arr_4 [i_1] = (((arr_1 [i_0]) ? (-1367703227 & 54085111) : (((arr_1 [i_1]) ? 1676216812 : (arr_1 [i_0 + 1])))));
            }
        }
    }
    var_16 = (min(var_16, ((((var_4 / -190460804) * (((-2147483647 - 1) / -3)))))));
    #pragma endscop
}
