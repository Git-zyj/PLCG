/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4] [i_0] &= ((((min((((var_2 / (arr_9 [i_1])))), (max((arr_5 [i_4]), (arr_5 [i_2])))))) ? (max(((((arr_6 [i_0] [i_1] [i_1] [i_3]) != var_4))), ((~(arr_4 [i_2]))))) : ((max((max((arr_3 [i_0 - 2] [i_1]), (arr_5 [i_2 - 1]))), (arr_4 [i_3]))))));
                                var_13 = max(((((((arr_9 [i_0]) + (arr_5 [i_0 - 1])))) ? (((arr_6 [i_0] [i_0] [i_1] [i_3 - 1]) ? (arr_8 [i_3]) : (arr_5 [i_0]))) : (arr_5 [i_3 + 2]))), var_6);
                            }
                        }
                    }
                }
                var_14 = (((((arr_3 [i_0 + 1] [i_1]) + var_8)) * 511536810));
                var_15 = (min(var_15, (((100 || ((((((var_4 / (arr_9 [i_1])))) ? ((min(var_4, -90))) : (((arr_8 [i_0 + 1]) * (arr_3 [i_1] [i_0])))))))))));
                var_16 = var_2;
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
