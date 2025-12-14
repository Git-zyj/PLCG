/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_17;
    var_20 = -32762;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] |= ((((((235 & 235) ? -6235419238386678126 : (((1 ? (arr_2 [i_1]) : 11597)))))) ? (min(((65533 ? var_0 : var_1)), (arr_7 [i_0]))) : (((((min(22, -39))) ? (arr_7 [i_0]) : ((min(var_9, (arr_5 [i_0])))))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] = (~0);
                        var_21 &= (min(40614, 0));
                        var_22 = (min(var_22, (!1023)));
                        var_23 *= (((((-((-(arr_3 [i_0] [i_0] [i_0])))))) ? (((arr_11 [i_0] [i_1] [10] [i_1]) ? 24897 : (arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]))) : (((!(((arr_1 [i_3]) <= 4404)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
