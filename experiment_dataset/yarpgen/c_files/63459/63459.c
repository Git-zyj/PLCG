/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((34068 ? (arr_5 [i_0] [i_0 + 1] [i_0 + 3]) : (((min(1, 43390))))));
                var_16 = (((((1 ? ((max(1, 1))) : -var_11))) ^ (((43411 * var_2) ? ((((arr_5 [i_1] [5] [i_1]) ? (arr_2 [i_1]) : var_6))) : 8313117731576804892))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] [i_2] = ((((((arr_5 [i_3] [i_3] [i_3]) * (arr_4 [i_3] [i_3] [i_3]))))) | 1);
                var_17 = (((arr_4 [i_3] [i_3] [12]) % ((((arr_2 [i_3]) && -8791811804393580375)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = (max(((max((arr_16 [i_5] [3] [i_5] [i_5 + 1]), (max((arr_9 [i_5] [i_4] [i_2]), -1))))), (max((arr_15 [i_5] [1]), ((((arr_6 [i_2] [i_2]) / var_12)))))));
                            var_19 = 43416;
                            var_20 = (min(var_20, (arr_8 [i_4])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
