/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (max((arr_2 [i_0]), ((((arr_5 [i_1 - 3] [i_1] [i_1] [i_1]) || (arr_5 [i_1 - 3] [i_1] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 += var_4;
                                var_18 = (((max((((46 ? (arr_4 [i_1] [i_4]) : (arr_9 [i_0] [i_0] [i_0] [i_0])))), 47)) & (arr_10 [i_3])));
                                var_19 -= ((~(arr_11 [i_0] [i_1] [i_2] [10] [i_4] [i_1 - 1] [i_3])));
                            }
                        }
                    }
                    var_20 = (max((arr_6 [i_0] [i_0] [i_1] [i_1]), (((arr_12 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 3]) ? 71 : (arr_12 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 3])))));
                }
            }
        }
    }
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                arr_18 [4] [i_6] |= (48747 && 208);
                arr_19 [i_5] [i_6 - 2] [i_6] = 227;
            }
        }
    }
    #pragma endscop
}
