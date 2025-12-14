/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_2] [i_2] [i_3] [i_4] = arr_3 [i_1] [i_4];
                                arr_13 [10] [i_1 + 1] [i_2] [15] [i_2] = ((((max((max(1, 12898327044273604287)), (min(var_9, (arr_4 [i_0])))))) ? ((((-24640 && (arr_1 [i_0]))))) : (arr_7 [i_0] [i_1 - 1] [i_1 - 2])));
                                var_21 ^= (arr_10 [i_0] [3] [i_1 - 1]);
                                var_22 = (min(((((-24640 ^ (arr_7 [i_0] [i_1] [i_2]))))), (((!(arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] = ((~(max(((((arr_2 [i_2]) || (arr_8 [i_0] [i_1 + 3] [i_2] [i_1] [i_2] [i_2])))), (((arr_4 [i_0]) ? 7231845449432783925 : var_10))))));
                }
            }
        }
    }
    var_23 = (max(var_15, var_19));
    var_24 = (min(-24625, var_4));
    #pragma endscop
}
