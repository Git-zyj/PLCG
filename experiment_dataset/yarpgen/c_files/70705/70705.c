/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(((var_6 ? var_1 : var_9)), (15072 == var_9))) > ((((var_5 <= (min(var_5, 1))))))));
    var_11 = var_3;
    var_12 = -1226987433;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_4] = (((arr_12 [i_2]) ? 1 : (((min((arr_2 [i_3 + 1]), var_3))))));
                                var_13 &= arr_3 [i_1];
                                var_14 = (((min(var_6, (max(var_9, var_4)))) == (var_6 + var_2)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] &= (arr_1 [i_1]);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_15 = ((var_6 + (arr_10 [i_0] [i_0] [i_5] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_16 = var_8;
                                var_17 = (((((var_8 ? (arr_16 [i_0] [i_1] [i_0] [i_7]) : var_2))) ? var_5 : 1));
                                arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] |= -7508569071380396938;
                                var_18 = (var_9 ? var_1 : (arr_21 [i_6 - 1]));
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] = (--52049);
                            }
                        }
                    }
                    var_19 ^= (10066 - -1);
                }
            }
        }
    }
    var_20 = (((((var_7 | (min(var_5, var_2))))) ? var_9 : ((((!(10488 & 0)))))));
    #pragma endscop
}
