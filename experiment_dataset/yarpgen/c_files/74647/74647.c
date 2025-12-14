/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (arr_3 [i_0 + 1]);
                    var_15 ^= (max(((((max((arr_3 [i_1]), (arr_1 [i_0] [i_0])))) ? (arr_4 [i_0]) : (((arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) ? (arr_2 [i_0] [i_2]) : 17)))), (arr_6 [i_0] [i_1] [i_0] [i_2])));
                    var_16 = (((((~(((arr_8 [i_0] [i_0 + 1] [i_1] [i_2]) ? (arr_7 [i_0] [i_0] [i_2] [i_2]) : (arr_1 [i_0] [i_1])))))) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
