/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((243814039 ? -var_5 : (min(var_5, var_4))))) ? (((((31894 ? var_6 : 243814039))) / ((var_8 ? var_1 : var_9)))) : ((min(var_3, (var_7 / -7264879879337213696))))));
    var_11 = ((((~((var_5 ? -1117143660 : var_2)))) + -21));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 += (max((min((arr_0 [i_0] [i_1]), (((4051153256 ? (arr_2 [i_1]) : (arr_3 [i_0 + 2])))))), ((~(max(var_0, 20))))));
                arr_4 [i_1] [i_0] [5] = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> 10));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
