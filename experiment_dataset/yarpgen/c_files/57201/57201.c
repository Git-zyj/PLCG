/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [12] = var_1;
                var_16 = ((min(((max(65527, var_2))), ((~(arr_3 [i_1 - 1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_7 [7] [0] |= (((((65527 ? 512 : 228240118))) + -0));
        arr_8 [i_2] = (((((arr_6 [i_2]) % ((-(arr_5 [i_2]))))) >= ((-38 ? (arr_6 [i_2]) : ((var_9 ? (arr_5 [i_2]) : var_9))))));
        var_17 = (((min(1, ((2128488265421854053 ? (arr_5 [i_2]) : 10411)))) & (arr_6 [i_2])));
    }
    #pragma endscop
}
