/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((var_13 / (arr_1 [1]))));
                var_18 = (max(((((!0) - ((67 ? (arr_0 [i_0]) : -67))))), (max(((-68 ? var_7 : (arr_4 [i_1] [i_1]))), ((((arr_2 [i_0] [i_0] [i_1]) - var_15)))))));
                var_19 = (var_6 / ((-(var_10 * 50))));
            }
        }
    }
    var_20 = (((((~238) == var_15)) ? (((((0 ? 252 : 8502482004874832852)) < (var_7 & 43784)))) : 21751));
    #pragma endscop
}
