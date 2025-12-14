/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2] [0] |= (((-8460576953207716573 ? 0 : 1237622462)));
                    arr_9 [i_2] [i_1 - 1] [i_1 + 2] [i_2] = ((((1237622462 ? ((var_2 ? (arr_3 [i_0] [i_1]) : (arr_6 [i_0]))) : (min((arr_5 [i_0]), var_2)))) + (((-((min((arr_0 [i_0]), (arr_3 [i_1] [i_2])))))))));
                }
            }
        }
    }
    var_10 = ((min(var_5, var_3)) >= ((((1237622462 == 1237622484) ? ((12 ? var_4 : var_1)) : var_1))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_11 = (arr_6 [i_3]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_5] = (((var_4 % 92) ? (((-92 ? var_7 : (arr_7 [i_4] [i_4] [i_5] [i_6])))) : ((((((arr_4 [i_3] [i_4]) ? -223967601 : (arr_5 [i_3]))))))));
                            var_12 |= ((var_5 ? -1056410637 : var_0));
                        }
                    }
                }
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
