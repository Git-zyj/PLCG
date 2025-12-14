/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((min(var_6, var_5))) ? (21072 > var_16) : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (min(0, ((15 ? 183730599 : -126))));
                var_22 = ((((min(((min((arr_1 [i_0 + 1] [i_1 - 2]), var_1))), (((arr_2 [i_0]) ? (arr_2 [i_0 + 2]) : var_6))))) ? 105 : ((var_11 + (arr_1 [i_1 - 1] [i_0 + 1])))));
                var_23 &= ((!(arr_2 [i_1])));
            }
        }
    }
    var_24 = var_18;

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_25 *= (((((arr_3 [i_2 - 1] [1] [1]) + 9223372036854775807)) << (((((((((var_0 ? (arr_0 [i_2 - 1]) : (arr_6 [2])))) ? (((~(arr_1 [i_2 + 1] [i_2 + 1])))) : 2326742248)) + 104)) - 40))));
        var_26 = (17179869183 || 1);
    }
    var_27 = (min(17179869166, var_5));
    #pragma endscop
}
