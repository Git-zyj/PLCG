/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 38946;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = ((max(-972880181, 214)));
                            var_16 *= (((38504 ? (arr_5 [i_0]) : var_4)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_17 = (max(3922448026, 17663044907620293335));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((min(783699166089258281, var_13)), ((((arr_15 [i_0] [i_4] [i_5] [i_6 - 3]) ? var_10 : var_10)))))) ? (((max(59, (min((arr_2 [i_0] [i_0]), 21212)))))) : (max((arr_4 [i_5]), (max(var_2, -8975))))));
                                var_18 = (((((var_5 ? var_5 : 67108848)))));
                                var_19 = ((((((arr_3 [i_0]) ? (min(var_14, (arr_9 [i_0] [i_1] [i_5] [i_0]))) : var_13))) ? ((((min((arr_20 [5] [5] [i_4] [i_5] [i_5]), var_10))) ? (((max(34, 46736)))) : (arr_9 [i_1] [i_1 - 2] [8] [i_6 - 3]))) : var_7));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_8] = (arr_21 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]);
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_8] = (arr_8 [i_8 + 1] [i_8] [i_8 + 1]);
                                arr_35 [i_8] [i_7] [i_8] = (min((min(((max(var_0, -4310))), (max((arr_2 [i_0] [i_0]), var_9)))), var_8));
                                var_20 = (max(var_4, (max(((var_3 ? (arr_20 [i_9] [i_8] [i_7 + 3] [i_1] [i_0]) : var_11)), ((max(var_7, -1659410959)))))));
                            }
                        }
                    }
                }
                var_21 &= (((~214) ? -1 : 17449));
            }
        }
    }
    var_22 |= (((max(((214 ? var_11 : 30857)), var_1))) ? (min(((min(65518, var_6))), var_3)) : ((min(var_6, ((max(var_6, var_4)))))));
    #pragma endscop
}
