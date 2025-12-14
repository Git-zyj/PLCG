/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((~var_5) ? (max(var_2, var_1)) : var_12))) ? (((var_2 + var_13) ? ((var_17 ? var_18 : var_12)) : var_2)) : -var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [6] [13] |= ((-(arr_1 [i_0])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] = (~var_12);
                    var_21 = (((((arr_6 [i_0] [i_1] [i_2]) > (arr_3 [i_2]))) ? ((max(var_13, (arr_3 [i_0])))) : ((((max((arr_5 [i_0] [i_1] [i_2]), var_10))) ? (min(-99158451, 18)) : (-99158448 - var_0)))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_22 = (max(var_22, ((((arr_6 [i_0] [i_1] [i_3]) ? var_16 : 578)))));
                    var_23 |= ((~(!-26716)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((max(-2834185391, var_14)))));
                                var_25 = 591926116562679097;
                                var_26 = (arr_12 [i_0] [i_1] [i_0]);
                                arr_15 [12] [7] [12] [12] [1] [i_5] [i_5] = (min(((var_11 & (arr_3 [i_0]))), 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_27 ^= 4187329475;
                                var_28 *= ((((var_12 ? (arr_0 [i_0]) : 32763)) > (((arr_0 [i_7]) ? var_7 : (arr_0 [i_0])))));
                            }
                        }
                    }
                }
                var_29 -= (arr_14 [i_0] [i_0] [i_0] [i_0]);
                var_30 = ((!((!(arr_9 [i_0] [i_0] [i_0] [i_1])))));
                arr_22 [i_0] [i_0] [i_0] = (arr_2 [i_1]);
            }
        }
    }
    var_31 = (((18446744073709551613 >= 4187329483) ? var_8 : ((((!(((var_18 ? -32766 : var_0)))))))));
    var_32 ^= var_4;
    #pragma endscop
}
