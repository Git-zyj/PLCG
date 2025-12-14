/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((min(var_12, var_2))) ? (((var_13 ? ((max(var_8, var_10))) : var_13))) : (var_4 / var_5)));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 &= ((!(((-(arr_6 [i_0 - 3]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = ((-(min((arr_6 [i_0]), ((min((arr_12 [i_0] [i_0 - 1] [i_1] [i_0] [i_3] [i_4] [i_4]), var_11)))))));
                            arr_15 [i_0] [i_1] = var_1;
                        }
                    }
                }
            }
        }
        var_17 &= (min(((-((max(var_7, var_8))))), (arr_12 [i_0] [i_0] [8] [16] [i_0] [8] [8])));
    }
    #pragma endscop
}
