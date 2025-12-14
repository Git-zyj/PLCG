/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~-5074113939483324542) & ((min(((var_5 ? var_13 : var_3)), ((var_2 ? var_3 : var_8))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 1] [i_0]);
        var_16 += (((!var_8) - (((((((arr_0 [10]) ? var_12 : (arr_1 [i_0 - 2] [6])))) || (arr_1 [i_0] [16]))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((min(var_9, (arr_5 [i_1 - 1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_17 = (~18151713352361202598);
                    var_18 ^= -84;
                    var_19 = (max(var_19, (((((-(min(var_11, 4924150898590940106))))) ? var_7 : -50))));
                }
            }
        }
        var_20 = (max(var_1, (arr_10 [i_1 - 2])));
        arr_12 [i_1] = ((((min((arr_9 [i_1 + 3] [i_1 + 2]), (arr_9 [i_1 + 2] [i_1 + 1])))) ? (((min(65535, (arr_10 [14]))))) : (min(((var_13 ? 1117103813820416 : (arr_5 [16] [i_1]))), (((-(arr_3 [i_1]))))))));
    }
    var_21 = (max((min(var_6, (var_3 || var_14))), var_6));
    #pragma endscop
}
