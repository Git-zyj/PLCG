/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = (((~((~(arr_3 [11] [12] [12]))))) << (((~1) + 10)));
                            arr_11 [i_3] [10] [12] [14] = ((var_13 ? (arr_1 [2]) : (arr_7 [11] [1] [1])));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_17 = ((arr_7 [i_0 - 1] [11] [18]) ? (((!(arr_7 [i_0 - 1] [23] [17])))) : ((min((arr_7 [i_0 - 1] [2] [18]), (arr_7 [i_0 + 1] [22] [1])))));
                                var_18 = (-(25333 >> 1));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 23;i_5 += 1)
                            {
                                var_19 = (((var_1 && var_10) <= 39845));
                                var_20 = (min(var_20, ((((((25691 ? -29 : 28))) ? (arr_14 [6] [3] [i_0 + 1] [i_5 - 2]) : 1)))));
                                var_21 = var_9;
                                var_22 = (min(var_22, (arr_16 [i_0 + 1] [i_2])));
                            }
                        }
                    }
                }
                var_23 *= ((max(((min((arr_4 [19]), var_9))), (((arr_8 [17] [1] [19] [14]) % (arr_3 [7] [1] [4]))))));
            }
        }
    }
    var_24 = ((var_0 ? (((!(((var_15 ? var_7 : (-2147483647 - 1))))))) : (!-583522868746004358)));
    #pragma endscop
}
