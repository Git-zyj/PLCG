/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_4);
    var_15 ^= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 ^= -var_0;
                    arr_9 [i_0] [i_1] [i_2 + 1] = ((-56 ? ((var_2 ? (arr_0 [i_0]) : (((((arr_0 [i_0]) != 176)))))) : (((((var_5 ? (arr_0 [i_1]) : 144115188075724800))) ? ((((var_9 && (arr_4 [i_2] [i_2 - 1]))))) : (arr_4 [i_0] [19])))));
                }
            }
        }
    }
    #pragma endscop
}
