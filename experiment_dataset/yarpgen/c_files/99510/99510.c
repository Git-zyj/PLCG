/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((((((0 ? var_4 : var_1)) ^ ((min(var_1, var_0)))))) ? -var_10 : (var_3 ^ 2093056))))));
    var_15 = (min(var_15, ((((((var_6 ? (192 ^ var_5) : (min(var_6, var_13))))) ? (((var_5 || var_3) ? (var_7 ^ var_2) : var_12)) : var_2)))));
    var_16 = (min(var_16, ((max((~8388592), ((var_8 / (min(var_3, var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((192 == 4118082352) ? (!var_7) : (arr_4 [i_0]));
                arr_6 [i_0] = (((((((((arr_0 [i_0]) ? var_8 : var_3))) ? (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [6]))) : ((((var_5 + 2147483647) << (((-1120993802 + 1120993804) - 2)))))))) ? (arr_3 [i_0]) : ((max((arr_2 [i_0] [i_1]), var_10)))));
                var_17 = (arr_1 [1]);
            }
        }
    }
    #pragma endscop
}
