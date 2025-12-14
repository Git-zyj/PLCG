/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_4 [i_1 + 1] [i_1 + 1]);
                arr_7 [i_0] [i_0] = (max((((~(arr_2 [i_0])))), (max((arr_2 [i_0]), ((295086289 >> (9223372036854775807 - 9223372036854775780)))))));
                arr_8 [i_0] [i_1] [i_1] = (min(((((arr_1 [i_1 + 1]) % (arr_1 [i_1 + 1])))), ((~(~9223372036854775804)))));
            }
        }
    }
    var_20 = (min(var_20, ((((var_14 + var_9) + ((var_9 | ((max(-672925841, var_16))))))))));
    var_21 ^= (max(((((-9223372036854775807 - 1) || var_17))), (((max(var_13, var_1)) << var_11))));
    #pragma endscop
}
