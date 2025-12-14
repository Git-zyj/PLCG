/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((!(((var_11 ? var_0 : var_10)))))), var_1));
    var_15 = ((((max((~var_10), ((var_10 ? var_7 : var_9))))) ? var_3 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (arr_7 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [9] = ((((min((((arr_6 [i_2] [i_3] [i_4]) | (arr_10 [i_0] [i_2] [i_0] [i_0]))), var_1))) & (arr_11 [i_0] [i_1] [i_1] [i_3] [i_4])));
                                arr_16 [3] [i_1] [i_2] [i_3] [i_4] = ((~(arr_7 [9])));
                                var_16 ^= ((var_8 ? (min((arr_2 [1]), (min(var_8, (arr_0 [15]))))) : (min(-var_11, (((arr_5 [i_3] [i_4]) ? var_3 : (arr_8 [i_2] [i_3])))))));
                                var_17 = (!34846);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_18 = (arr_7 [i_5]);
                var_19 ^= ((~(max(34841, 9))));
                var_20 &= ((~((((min((arr_6 [i_5] [i_6] [i_5]), (arr_18 [i_5])))) ? (arr_3 [i_5] [i_5]) : var_0))));
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
