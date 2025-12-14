/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [17] [i_1 - 1] [i_0 + 4] = -1366001920;
                var_17 *= (max((min(((min(32767, (arr_3 [i_0] [i_0] [i_0 + 1])))), ((var_13 ? var_0 : var_8)))), ((var_14 ? (300276545509077527 > var_1) : (((arr_4 [i_0 + 4] [i_1]) ? (arr_2 [5] [1]) : var_5))))));
                var_18 = ((((((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 + 2] [i_1 - 2]) : (arr_4 [i_1 - 2] [i_1 - 1])))) ? (((arr_4 [i_1 - 2] [i_1 - 2]) - (arr_4 [i_1 - 2] [i_1 - 1]))) : (arr_4 [i_1 - 2] [i_1 + 1])));
            }
        }
    }
    var_19 = (4323455642275676160 || -1628);
    #pragma endscop
}
