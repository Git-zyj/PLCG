/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? (var_16 + var_10) : ((min(var_16, (512 || 501))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_0] = ((!(arr_5 [i_2 + 1] [i_1 + 1])));
                    arr_11 [1] [i_0] [i_1] [0] = (max((min(((min(69, 9223372036854775807))), 274861129728)), 9223372036854775803));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 *= ((!(arr_13 [13] [i_3])));
        arr_14 [i_3] [i_3] = (min(((~(arr_12 [i_3] [i_3]))), ((min((arr_13 [i_3] [i_3]), var_11)))));
        var_20 ^= (((((((10449 ? 28205 : 8188))) ? (((var_17 == (arr_13 [i_3] [i_3])))) : var_5)) & (arr_12 [i_3] [i_3])));
        arr_15 [11] |= ((max(var_1, (arr_13 [i_3] [i_3]))));
    }
    #pragma endscop
}
