/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_5, var_7))) <= -18446744073709551615));
    var_11 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = ((((4611436101350389650 / (arr_0 [i_1] [i_0]))) / (((min((arr_4 [i_0] [i_1]), (arr_4 [i_0 - 1] [i_1])))))));
                var_13 ^= (!((min((arr_3 [2]), (((~(arr_2 [i_1]))))))));
                arr_5 [i_0] [i_1] = (max(((max(var_5, ((min((arr_3 [i_1]), (arr_4 [i_0 - 1] [i_0 + 1]))))))), (arr_0 [i_0 - 1] [i_0 - 1])));
                var_14 = (((!((((arr_3 [i_1]) >> (((arr_2 [i_0]) - 1860))))))));
                var_15 = (max(((~(arr_0 [i_0 - 1] [i_1]))), (((!(arr_2 [i_0]))))));
            }
        }
    }
    var_16 |= var_9;
    #pragma endscop
}
