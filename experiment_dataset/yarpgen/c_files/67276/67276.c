/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [16] [6] [i_2] |= ((((min((max(var_3, (arr_8 [i_0] [i_0] [i_0] [0]))), 57490))) ? (~var_19) : ((((((8046 ? (arr_9 [14] [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_0] [i_0])))) ? ((~(arr_8 [20] [20] [i_1] [i_2]))) : ((~(arr_2 [1]))))))));
                    arr_12 [i_0] [i_0] [12] [i_0] = ((-(((32 || 223) ? ((var_15 ? (arr_5 [i_1] [i_1]) : (arr_6 [i_0] [14] [i_0]))) : (((((arr_5 [11] [i_0]) != (arr_1 [i_0])))))))));
                }
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
