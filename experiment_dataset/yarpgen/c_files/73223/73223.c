/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (min((max(21676, var_11)), var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -13612;
        arr_3 [i_0] = -13629;
    }
    var_15 += (~var_8);
    var_16 += min(var_1, var_0);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                var_17 = ((max((max(var_10, (arr_7 [i_1] [i_2 - 1]))), (((1 || (arr_4 [i_1])))))));

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    arr_10 [i_1] [i_1] [i_3] = var_1;
                    arr_11 [i_1] [13] [i_1] = (var_8 <= var_4);
                    var_18 = (-var_9 < 65535);
                    var_19 = (max(var_19, (((((var_0 < (arr_9 [i_2 - 1]))) ? (1 < 0) : (((((11 ? (arr_6 [i_1] [i_2] [i_2]) : 1)) <= (!65519)))))))));
                    var_20 *= (max((arr_4 [i_1]), -65535));
                }
            }
        }
    }
    #pragma endscop
}
