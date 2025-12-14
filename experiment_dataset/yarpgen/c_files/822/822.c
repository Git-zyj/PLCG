/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_13;
    var_15 |= var_9;
    var_16 += var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 -= (~10441);
        var_18 ^= ((((arr_0 [12]) ? var_7 : 1)));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_19 += var_7;
        arr_4 [1] [i_1 + 4] &= (max((((!(arr_3 [i_1 + 1] [5])))), (max(5809345476026684729, (arr_3 [i_1 + 1] [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 *= (((1 << 0) ? var_12 : var_11));
                    var_21 *= (arr_8 [i_2] [i_3]);
                }
            }
        }
        arr_11 [i_1 + 3] [1] |= -1;
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_22 *= ((((((arr_13 [i_4 - 1]) && (arr_13 [i_4 + 3])))) > ((var_8 ? (arr_13 [i_4 + 3]) : (arr_13 [i_4 + 1])))));
        var_23 -= (((max((arr_12 [i_4 + 1]), var_3)) ^ (arr_13 [i_4])));
        var_24 = (max(var_24, ((min((((((arr_13 [i_4 - 1]) || (arr_12 [i_4]))) ? ((1 ? var_0 : 1)) : (arr_12 [i_4 - 3]))), (11 || 1))))));
    }
    #pragma endscop
}
