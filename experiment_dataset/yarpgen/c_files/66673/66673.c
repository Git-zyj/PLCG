/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= -5877508705994152171;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [19] [i_0] = var_12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [0] [i_1] [6] [i_0] = (max(((var_5 ? ((var_0 & (arr_7 [i_0] [i_0]))) : (arr_0 [i_0] [i_2]))), (((var_1 ? (arr_2 [i_0]) : 9223372036854775807)))));
                        var_17 = (((arr_10 [i_0] [i_0]) || ((!(arr_2 [i_0])))));
                        var_18 += (min((max(3458764513820540928, -7647196804118968197)), 7599));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
        arr_14 [i_0] = (((var_15 || (arr_8 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 |= ((-((var_2 ? ((max(var_14, 1))) : ((241 ? -1 : 7647196804118968222))))));
                                var_20 ^= ((!((min(8662, 5189989290230248915)))));
                                arr_27 [i_0] = (-111 & 15);
                            }
                        }
                    }
                    var_21 = (min((max(((1303270660 ? (arr_10 [i_0] [i_0]) : (arr_15 [i_0] [i_4] [i_0]))), (arr_17 [i_0] [i_0] [12]))), (((var_13 ? var_13 : (arr_21 [i_0] [i_4] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
