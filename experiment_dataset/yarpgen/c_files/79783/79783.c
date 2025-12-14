/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((max(var_6, var_11))) ? ((62324 ? var_7 : var_9)) : (((7 ? 3211 : 8034665380677556305))))), (((~var_12) ^ ((var_11 ? var_14 : var_4))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [2] = ((var_11 ? ((-((max(3211, var_1))))) : (((var_0 < (min(var_13, (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = (min(61, (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_16 *= 3314173653;
            arr_7 [i_0] [i_1] = ((((max((arr_5 [i_0] [i_0] [i_1]), var_2))) ? ((3212 ? (arr_6 [i_0]) : var_12)) : ((max(var_12, (arr_6 [i_0]))))));
        }
        arr_8 [i_0] [i_0] = ((62325 ? ((var_7 ^ ((((!(arr_1 [i_0] [i_0]))))))) : (((max((min(var_6, 3211)), 3211))))));
    }
    var_17 = ((var_7 ? (min((((var_0 ? var_4 : 588531340))), (max(3164571870, var_4)))) : -588531340));
    #pragma endscop
}
