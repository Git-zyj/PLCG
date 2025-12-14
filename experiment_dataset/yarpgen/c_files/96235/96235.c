/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((1 + (1 % 13)))));
    var_17 = 12;
    var_18 = (((((!(((1 ? var_12 : 1483858096)))))) >> (var_1 + 8329673715061995887)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~(arr_3 [i_0] [i_1])));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 |= (!0);
                                var_20 = (max(var_20, 2314824684040047495));
                                var_21 = (((255 ? 13510798882111488 : (arr_8 [i_2] [5] [i_2] [i_3]))));
                                var_22 -= (((!var_1) ? 14 : (arr_10 [i_1] [i_1])));
                            }
                        }
                    }
                    var_23 = -32;
                }
                for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (((1609793920 ? (arr_15 [i_5] [i_5] [i_5] [i_5]) : var_3)))));
                    var_25 = (~((2938847664015714960 / (min(var_13, (arr_0 [i_0]))))));
                    var_26 = (min(var_26, (((((~(arr_1 [i_5 + 3]))) <= ((((min(13, var_11))) ? (!var_0) : ((min((arr_9 [i_1] [i_1] [i_1] [i_1]), 15))))))))));
                    var_27 = ((((((~(arr_9 [i_1] [i_1] [8] [i_5]))))) ? (max(((var_8 ? -28 : 562413736)), (((1097553183 == (arr_12 [i_1])))))) : ((~(arr_7 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
