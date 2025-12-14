/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3802898312;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [12] [12] [i_0] [i_0] [12] &= ((~(arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                                arr_13 [i_2] [i_2] [i_1] [i_2] [i_2] = ((!(((2017937555 ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 2] [i_1 - 1]))))));
                                var_11 = (max(var_11, 67));
                                var_12 ^= (min((((arr_4 [i_1 + 1]) ? (((max((arr_8 [i_1] [i_1]), (arr_0 [17]))))) : ((~(arr_4 [i_4]))))), ((((arr_8 [i_1] [i_1 - 2]) && (((~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])))))))));
                            }
                        }
                    }
                    var_13 = (max(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [0] [i_0] [i_0]))), (((arr_1 [i_1 - 1]) ? var_6 : ((var_1 ^ (arr_9 [2] [i_0] [2] [i_0])))))));
                    var_14 = (max(var_14, (min((-3 + 9), -1))));
                }
            }
        }
    }
    #pragma endscop
}
