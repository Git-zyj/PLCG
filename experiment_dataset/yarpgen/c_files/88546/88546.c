/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_3;
        arr_3 [4] &= (max((((arr_0 [i_0 - 1]) / 239)), ((((!var_15) << (((min(-696689440, (arr_1 [4]))) + 696689447)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = ((((((arr_1 [i_1]) != 240))) != (255 & var_6)));
        var_18 += ((((arr_4 [i_1]) / var_0)) << (((1 ^ 43432) - 43407)));
        arr_7 [i_1] = ((253 ^ (arr_1 [i_1])));
    }
    var_19 = ((-(((((321899182 ? var_13 : var_13))) ? ((var_0 ? -1699517669786443430 : 1)) : (max(var_16, var_11))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = (min(((!(arr_8 [i_3 + 1]))), (!1)));
                var_20 *= (max(((min(79, (arr_5 [i_3] [i_3 + 2])))), (min((arr_11 [i_3] [i_3 + 2] [i_3 - 1]), (arr_5 [i_3] [i_3 + 2])))));
                arr_13 [i_2] [i_3] [i_2] = ((!(((var_9 & (arr_10 [i_2] [i_3 - 1] [i_2]))))));
                var_21 ^= ((~(0 & 10133)));
                arr_14 [i_3] [i_2] [i_2] = (min((((2193717414550812289 > (arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 1])))), ((var_10 ? var_16 : (arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
            }
        }
    }
    var_22 = ((((max((1320433188 / var_8), ((var_2 ? var_7 : var_13))))) ? var_6 : var_15));
    #pragma endscop
}
