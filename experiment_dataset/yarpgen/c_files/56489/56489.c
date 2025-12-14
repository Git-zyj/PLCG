/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? (var_2 * var_12) : ((1 ? 36857 : 137438953471))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = 1;
                    var_15 = (min(var_15, ((((((arr_6 [i_0] [i_1 + 1] [12]) ? (arr_3 [i_1 + 1]) : 2473689293)) << (!90))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            {
                arr_12 [i_3] = ((((((48434 - 1) ? (var_6 - var_8) : (((-496975944392596577 ? 11111 : var_12)))))) || (var_2 + 127)));
                var_16 = ((+(((!6204426473103796578) ? ((12 ? 91 : (arr_8 [i_4] [i_4]))) : var_6))));
                arr_13 [i_4] = ((((min((var_9 + 11), (((!(arr_8 [i_3] [i_4 + 1]))))))) ? (((-(arr_11 [i_3] [i_4 - 2] [i_4])))) : ((31 ? (((arr_8 [i_3] [i_4 - 3]) ? var_5 : 1)) : (arr_9 [i_3])))));
                arr_14 [i_4 + 1] [21] [i_3] = 4095;
            }
        }
    }
    var_17 = (max(var_17, var_9));
    var_18 = (min(((((((var_11 ? var_11 : var_4))) ? ((var_5 ? var_2 : var_8)) : var_2))), (-8406755833779623589 | -24)));
    #pragma endscop
}
