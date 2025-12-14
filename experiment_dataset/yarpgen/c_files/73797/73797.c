/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = var_9;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_16 = 2559367364248248032;
                            var_17 = (90 / 100663296);
                        }
                        var_18 *= ((((((max((arr_5 [12] [i_1] [10]), var_7)) * 476127197))) ? (min((arr_3 [i_2 + 1]), 3818840097)) : (((-(arr_6 [i_3 - 4] [i_0 - 1] [i_2 + 1] [i_2 + 1]))))));
                        var_19 = (((((var_6 == var_6) > (max((arr_1 [i_2]), (arr_5 [i_1] [i_1] [3]))))) ? (min(6897, 476127197)) : ((max((arr_10 [1] [i_1] [i_1] [i_2] [i_2 - 1] [i_2] [i_3 - 3]), (min(var_2, var_5)))))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (((arr_2 [i_0] [8] [i_0]) ? ((-(arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1]))) : (((((2725498417 ? (arr_10 [2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0] [4])))) ? (arr_8 [i_0] [i_0] [i_0] [10]) : ((max(832, 10)))))));
    }
    var_20 = var_8;
    var_21 = var_7;
    var_22 = ((((max((var_13 + var_8), (max(-2026171152, 112))))) ? var_11 : var_11));
    #pragma endscop
}
