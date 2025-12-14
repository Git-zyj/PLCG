/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((max(var_2, var_6)), (arr_5 [i_0] [i_0] [i_1])));
                var_13 = ((max((max(var_0, var_11)), var_4)));
                var_14 ^= (max((((-125 ? (!0) : 19605))), ((61755 ? 1 : (arr_4 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_15 -= var_5;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_4] [i_5] [i_4] [i_3] [i_4] [9] = (arr_5 [i_6] [i_6] [i_6]);
                                arr_22 [1] [i_2 + 1] [i_2] [i_4] [i_4] = (arr_2 [i_2]);
                            }
                        }
                    }
                }
                var_16 = ((((min(((min(-7449576033790948258, 54569))), 458260573056484953))) ? ((((arr_20 [i_3] [i_3 + 1] [i_2] [0] [i_2]) ? ((var_1 / (arr_11 [i_3]))) : (arr_16 [i_2] [i_2] [i_3] [10] [1])))) : ((var_2 ? -458260573056484973 : (var_1 << 1)))));
            }
        }
    }
    #pragma endscop
}
