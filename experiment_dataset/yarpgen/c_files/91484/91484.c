/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 -= (max((((var_13 ^ (var_14 < 131)))), 9223372036854775807));
                var_16 += (((((-9223372036854775792 ? (arr_2 [i_1 + 1] [i_1 - 1]) : (arr_2 [i_1 - 1] [i_1 + 2])))) ? (max((9223372036854775792 ^ var_3), (min(9223372036854775792, 65535)))) : (((min((arr_0 [5]), (!var_14)))))));
            }
        }
    }
    var_17 &= var_8;
    var_18 = var_10;
    #pragma endscop
}
