/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [6] [1] = ((var_8 ? -822599386 : (max((arr_0 [i_0]), ((((arr_2 [i_0]) == 1603880503)))))));
                arr_7 [i_1] [i_1] [i_1] = (!-1603880503);
                var_10 = (min(var_10, (((((max((arr_1 [i_0]), (arr_1 [i_0])))) <= ((((var_0 + (arr_2 [i_0]))) + -1603880504)))))));
            }
        }
    }
    var_11 ^= min(var_8, var_9);
    var_12 = var_5;
    #pragma endscop
}
