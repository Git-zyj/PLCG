/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = (min(((-((~(arr_0 [i_0]))))), (var_7 + var_12)));
                    arr_11 [i_2] [i_1] [i_2] = ((-var_3 + (min((arr_5 [i_0 - 3]), ((var_4 + (arr_1 [i_2])))))));
                    var_14 &= (min(((max((arr_9 [i_0] [9] [i_0] [i_2]), var_11))), var_7));
                    arr_12 [i_2] [i_0 + 2] [i_2] [i_2] = ((-(max((var_5 / var_0), ((-(arr_7 [i_0] [i_1 + 1] [i_0] [i_2])))))));
                }
            }
        }
    }
    var_15 = (var_11 ? (((var_4 ? (min(var_2, var_6)) : var_13))) : var_7);
    var_16 = (((((var_0 ? var_12 : var_1)) | (~var_1))) & var_1);
    var_17 = var_7;
    #pragma endscop
}
