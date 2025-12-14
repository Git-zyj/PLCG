/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (!1254129968);
                arr_8 [i_0] [i_0] [i_1] = (arr_5 [i_1 + 1] [i_1 - 1]);
                arr_9 [1] [10] [21] = ((((min((arr_2 [i_1 - 1] [i_1 + 1]), 1445085703))) ? var_14 : var_6));
            }
        }
    }
    var_15 = ((((((-((var_6 ? var_5 : var_13)))) + 9223372036854775807)) >> (((((-3127730067673232601 ? var_1 : var_13))) + 19532))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    var_16 += var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_27 [i_2] [i_6] [12] [i_4] = ((((min((max(var_4, var_13)), var_4))) ? (((max(var_7, var_11)))) : ((~(~24076)))));
                                arr_28 [i_2] [1] [i_5] [i_4] = (min(var_8, ((((max(90, 175))) ? (min(var_0, 90)) : (arr_18 [i_2] [i_4] [i_5 - 2])))));
                                arr_29 [i_3] [4] [i_4] [6] [i_6] &= -24062;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min((min(var_0, (((216 ? 14075 : var_9))))), ((var_11 ^ (min(212, var_12))))));
    #pragma endscop
}
