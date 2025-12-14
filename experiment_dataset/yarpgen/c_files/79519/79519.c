/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((((!var_10) % -var_1))) ? (min(-var_1, (var_10 ^ var_1))) : ((min((var_9 > var_7), -var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (((((1822373764911953946 >> (1822373764911953950 - 1822373764911953936)))) ? 0 : (max((min(63, (arr_7 [i_0] [i_0]))), ((min((arr_2 [i_2]), -124)))))));
                    arr_9 [i_2] [i_1] = 65473;
                    arr_10 [i_1] = (min((arr_2 [i_0]), (min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_2])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_14 = (max(var_14, ((max(((((min((arr_11 [i_3]), 65472)) ^ ((59 ? (arr_3 [19] [14]) : (arr_11 [i_3])))))), (min(var_3, (max((-9223372036854775807 - 1), (arr_7 [i_3] [i_3]))))))))));
        arr_13 [i_3] = ((-(min(var_1, 59))));
        arr_14 [i_3] [10] = (min(38580, 2198754820096));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (-32767 - 1);
        arr_19 [i_4] = (min((max((arr_12 [i_4] [i_4]), var_3)), (~28601)));
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_15 -= ((-9 >= (-9223372036854775807 - 1)));
        var_16 = (arr_21 [i_5]);
        var_17 = (max(var_17, (arr_20 [i_5] [i_5])));
        arr_23 [i_5] &= var_1;
    }
    #pragma endscop
}
