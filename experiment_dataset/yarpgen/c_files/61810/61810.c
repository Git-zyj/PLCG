/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((min(31588, (!0))))) > (((1747700903 ? 1747700903 : var_12)))));
    var_20 = (max(-511, -90));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [1] [i_1] [i_1] = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] = (max(var_4, var_5));
                                var_21 = (min(2293898391552254520, 19));
                                var_22 ^= ((!(((var_2 ? (arr_9 [6] [i_2] [i_4]) : (!var_10))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_23 = (max(var_23, ((max(var_17, var_1)))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_29 [i_5 - 2] [i_6] [i_7] [1] [i_7] [1] = (max((((~(arr_22 [i_8 - 2] [i_5])))), (((-(arr_18 [18] [i_6]))))));
                                var_24 = (~var_1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
