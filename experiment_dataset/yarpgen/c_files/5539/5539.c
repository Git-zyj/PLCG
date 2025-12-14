/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 += (max((((min((arr_3 [i_0] [i_0]), (arr_0 [i_2]))) ^ ((max(var_10, (arr_5 [i_2] [i_2] [2] [i_0])))))), (var_11 * var_13)));
                    arr_7 [i_2] [i_1] [0] = (arr_4 [i_2]);
                    var_17 ^= ((((((arr_2 [i_0]) ^ (~var_3)))) >= (min((((!(arr_3 [i_0] [i_1])))), (((arr_0 [i_0]) & (arr_1 [i_1] [8])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] [i_3] = max(((((arr_3 [i_0] [i_0]) == ((min((arr_2 [i_0]), (arr_1 [i_3] [5]))))))), (max(var_15, (max(var_2, (arr_9 [i_0] [2] [i_0] [i_3] [i_4]))))));
                                var_18 = (((~var_5) / ((min(var_1, var_15)))));
                                var_19 |= (((arr_9 [i_0] [6] [0] [i_0] [0]) & (((((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_3] [i_0])))) - var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_14;
    var_21 = ((var_7 + (max(var_6, (var_14 * var_12)))));
    #pragma endscop
}
