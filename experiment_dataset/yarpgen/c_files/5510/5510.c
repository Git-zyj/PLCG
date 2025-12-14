/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_11;
    var_21 = ((var_9 ? var_18 : (174494384427325833 ^ -2132643241)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [4] [4] = (((arr_2 [i_0] [i_0]) ? (min((arr_5 [i_2]), (~var_13))) : ((((((arr_8 [i_2] [i_2] [15] [i_0]) ? (arr_5 [i_0]) : (arr_2 [i_0] [i_0])))) ? ((var_0 ? (arr_8 [i_2] [i_1] [i_1] [i_2]) : var_4)) : var_11))));
                    var_22 += (((((-(((var_4 > (arr_1 [i_1 + 1]))))))) ? (arr_5 [i_1]) : ((((arr_7 [i_0] [i_0] [i_0]) >= ((~(arr_0 [i_1 + 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
