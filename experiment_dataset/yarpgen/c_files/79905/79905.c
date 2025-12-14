/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (arr_0 [i_0]);
                            arr_10 [8] [i_3] [16] = ((((arr_3 [i_0] [i_0] [i_2]) ? ((min(104, 1))) : 25435)));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (arr_1 [i_1]);
                arr_12 [i_0] [i_0] [i_0] |= ((((((-(arr_8 [1] [i_1] [i_0] [i_1] [8] [i_1]))) * (arr_3 [i_0] [i_0] [i_1]))) - (((arr_8 [i_0] [i_1] [i_0] [i_0] [18] [i_1]) - var_3))));
                var_17 = (((arr_1 [i_1]) ? var_13 : ((~(arr_2 [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_18 = (max(4538980602039410871, -var_3));
    #pragma endscop
}
