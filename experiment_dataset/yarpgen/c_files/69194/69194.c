/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 |= (min(((((((arr_4 [i_1]) ? (arr_1 [i_0]) : (arr_4 [i_2])))) ? ((-(arr_7 [i_0]))) : (((arr_8 [i_0] [i_0] [i_1] [i_2]) ? (arr_4 [i_2]) : (arr_6 [i_0]))))), (arr_5 [i_0] [i_1] [i_2])));
                    arr_10 [i_2] [i_2] [i_2] = ((16063106180698257250 ? 16063106180698257233 : 2383637893011294405));
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((arr_0 [i_0]) ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0])))))) ? ((((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? (arr_6 [i_0]) : (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0]))))) : ((((arr_1 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))))));
        var_14 = (arr_0 [i_0]);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (((arr_14 [i_3]) ? (arr_14 [i_3 - 1]) : (max((arr_14 [i_3 - 1]), (arr_14 [i_3 - 1])))));
        arr_17 [2] |= (min(((-(arr_13 [i_3] [i_3]))), (min((arr_13 [i_3] [i_3]), ((min((arr_14 [i_3]), (arr_12 [i_3]))))))));
        arr_18 [i_3] = ((arr_15 [i_3]) ? (max((arr_15 [i_3 - 1]), (arr_13 [i_3] [i_3]))) : ((((!(arr_14 [i_3 - 1]))))));
        var_15 = ((-(arr_13 [i_3 - 1] [i_3 - 1])));
        var_16 ^= (arr_12 [i_3 - 1]);
    }
    var_17 = var_11;
    #pragma endscop
}
