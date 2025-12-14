/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] = ((-1 ? ((var_6 ? (arr_1 [20]) : var_7)) : (((((arr_14 [7] [i_1] [i_1] [i_1] [i_1] [i_1] [22]) || 3))))));
                                arr_17 [i_0] [4] [i_0] [i_0] [i_0] = (~4736604128918794520);
                            }

                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                var_17 &= (var_12 - (var_8 >= var_6));
                                var_18 = (((((-4736604128918794521 - (arr_11 [i_0] [i_0] [18] [i_0])))) ? ((27790 ? (arr_0 [i_0] [i_0]) : var_1)) : (arr_18 [i_0] [i_0] [i_0] [5] [20])));
                                arr_20 [14] [i_0] [i_2] [i_2] [i_2] = (((arr_18 [4] [19] [i_5 + 1] [i_5 + 1] [i_5 - 1]) > (arr_18 [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                            }
                            for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                var_19 = ((-1392480149 ? -27789 : 7919799707590013536));
                                var_20 = (max(var_20, (((-((((((var_6 ? -52 : (arr_14 [17] [1] [i_2] [i_2] [i_2] [i_2] [i_2]))) + 2147483647)) << (6294609683189842310 - 6294609683189842310))))))));
                            }
                        }
                    }
                }
                var_21 = ((!((max(var_9, var_8)))));
            }
        }
    }
    var_22 = (max((-var_7 != var_0), (48550 || var_12)));
    var_23 = ((var_13 >= (((min(235, 11479996273370669397)) + (((var_6 ? 24576 : var_3)))))));
    #pragma endscop
}
