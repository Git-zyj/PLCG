/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = ((!((max(3, var_1)))));
                    arr_9 [i_0] [i_1] [i_2] = var_0;
                }
                var_20 &= ((-5693792838244885909 ? ((var_2 ? ((130 ? -20500 : 7)) : 1)) : (-127 - 1)));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [4] [i_3] [i_4] [8] [i_5] = ((~((~(arr_1 [i_0 - 2])))));
                                arr_19 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] &= ((!(((((((arr_15 [i_0] [8] [i_5] [i_5] [i_5]) * (arr_12 [i_5] [i_5] [i_5] [i_5])))) ? ((max(var_11, (arr_10 [i_0] [i_3] [i_0])))) : 12288)))));
                                var_21 = (min((min((((13421816929450418668 ? var_15 : 31))), (arr_1 [i_0]))), (((((max(var_9, (arr_4 [15] [1])))) ? var_12 : (((-7819363598580897089 == (arr_13 [i_0] [i_3] [i_0] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
