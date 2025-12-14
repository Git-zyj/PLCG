/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 *= (((((1530 ? (arr_1 [i_0]) : (~var_9)))) ? (max(-212668593536983397, (min(-29961, var_11)))) : (((((~1530) < (max(var_0, -1))))))));
        arr_2 [i_0] = ((var_0 ? (1528 ^ var_0) : (((~11759168574507790473) + 44414))));
    }
    var_19 |= (((((var_14 - ((1427931190 ? var_11 : var_11))))) ? var_4 : 28325));
    var_20 = (min(212668593536983405, var_16));
    var_21 = var_12;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_22 = (min(((((arr_4 [i_2] [i_3]) ? -1529 : var_2))), (((((arr_7 [i_2]) - 17318646231767018763)) + (arr_6 [i_2] [i_1])))));
                    var_23 = (min(var_23, var_9));
                }
            }
        }
    }
    #pragma endscop
}
