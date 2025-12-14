/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [5] [3] [3] = (((arr_1 [i_2 - 1] [i_1 - 2]) ? (-32767 - 1) : (min((-32767 - 1), (arr_7 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_5 [10] [i_0]) ? (arr_14 [i_2 - 2] [i_1] [i_1] [i_1 - 2] [i_1 - 2]) : (arr_9 [i_3 - 2] [i_2 - 1] [11] [i_2 - 1] [i_1 - 2])));
                                var_12 = ((((min((arr_9 [i_1 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]), var_6))) || (((((12013 ? var_5 : var_6))) || (arr_15 [i_1 - 2] [i_3] [i_3 - 1])))));
                                var_13 ^= (max(32750, (((arr_15 [i_1 - 1] [i_2] [i_2 + 2]) ? (arr_15 [i_1 - 2] [i_2] [i_2 + 3]) : (arr_14 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-var_5 ? (((((var_4 ? var_7 : (-32767 - 1))) >= var_2))) : (min(var_9, var_10))));
    #pragma endscop
}
