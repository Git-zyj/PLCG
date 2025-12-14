/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 28580;
    var_19 *= var_6;
    var_20 = var_12;
    var_21 = (min(var_4, 28556));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] |= (((arr_0 [i_0 - 1]) | (arr_0 [i_0 - 2])));
                var_22 -= (((((arr_1 [5]) + 2147483647)) >> (123 - 117)));
                var_23 -= (((+((122 ? (arr_5 [i_0 - 1] [i_0]) : (arr_4 [i_1] [i_0 - 2] [i_0]))))));
                var_24 = arr_1 [i_1];
            }
        }
    }
    #pragma endscop
}
