/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -5986312223527309140));
    var_14 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 3] [i_0] [i_0 + 3] [i_3] [i_3 + 1] [i_4] = 68719476480;
                                arr_16 [i_1] [i_0] [i_3] = var_8;
                                var_15 = (((!5986312223527309143) ^ 288119408));
                                arr_17 [i_0] [i_0] [i_0] [i_3 - 2] = (max((((arr_2 [i_0] [i_1]) | (arr_2 [i_1] [i_3]))), ((((((5299571003063797032 ? var_2 : var_5))) ? -var_6 : -19326)))));
                                var_16 = ((~(var_1 | 1)));
                            }
                        }
                    }
                }
                arr_18 [6] [i_1] [i_0] = min((max((!3), (min(var_7, 188)))), (3437808647 && 15));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_24 [i_6] [i_0] = ((var_3 ? ((min((var_11 || var_4), (arr_13 [i_6])))) : ((max(var_3, 0)))));
                            var_17 |= ((var_2 && (((var_0 ? (arr_0 [i_6]) : ((~(arr_5 [i_6]))))))));
                            var_18 -= (max((min((arr_1 [i_6]), (arr_23 [i_1]))), (((arr_10 [i_0 + 3] [i_0]) + (-2147483647 - 1)))));
                            arr_25 [i_0] [i_0] [5] [4] = (min((((!(arr_14 [i_0] [i_1] [i_1] [i_1] [i_5] [6] [i_6])))), var_7));
                            var_19 = ((min((((!(arr_23 [i_0])))), 49310)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
