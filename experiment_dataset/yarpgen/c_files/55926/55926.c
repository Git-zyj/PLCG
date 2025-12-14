/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((((var_17 ? var_17 : var_10)))) ? (((((var_13 ? var_7 : var_14))) ? var_14 : var_11)) : (((((var_15 & var_8) != (!var_2)))))));
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((-((var_16 ? var_9 : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (min((arr_0 [i_1]), 1));
                    var_23 -= ((((((arr_2 [i_0]) >> (((arr_2 [i_0]) - 7733576063131089325))))) ? (((var_1 && ((((arr_1 [i_2]) ? (arr_5 [i_0] [i_0]) : var_5)))))) : (!-113)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] [i_3] &= (((18446744073709551615 <= 65535) ? (((arr_3 [i_3]) ? (arr_3 [i_3]) : var_13)) : (arr_3 [i_3])));
        arr_12 [3] = (((((0 ? 651746884 : 56))) ? (((arr_6 [i_3] [i_3] [i_3]) ? (arr_6 [i_3] [i_3] [i_3]) : var_4)) : (((arr_0 [i_3]) ? (arr_0 [i_3]) : var_1))));
        var_24 = ((((((min((arr_6 [i_3] [i_3] [i_3]), var_7))) > (min((arr_8 [i_3] [i_3]), var_11)))) && (((!56) && (arr_7 [i_3] [i_3] [i_3])))));
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_25 = (((((((max(var_13, var_8))) ? (arr_13 [1]) : (var_6 & var_14)))) ? (((~(arr_9 [i_4 - 1] [i_4 + 1])))) : -var_15));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_26 = ((~(min(-9486, (~var_12)))));
            arr_19 [i_4] [i_4] = (((-(arr_10 [i_4]))));
        }
    }
    var_27 &= ((+(((~var_0) ? var_16 : 80))));
    var_28 -= ((~((~((var_2 ? var_17 : var_18))))));
    #pragma endscop
}
