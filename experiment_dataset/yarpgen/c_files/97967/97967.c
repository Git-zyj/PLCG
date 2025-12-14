/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((var_10 + var_9), var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_13 = (252 == 252);
        var_14 = (arr_1 [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 += (arr_5 [10] [i_1 + 1] [i_1 - 1] [i_3 - 2]);
                        var_16 = (((arr_2 [i_1 - 2]) || (var_3 % var_4)));
                        var_17 &= (arr_7 [i_0] [i_1 + 1] [i_0]);
                        var_18 = (((((258 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : var_2))) ? (((((arr_8 [i_0] [i_0] [i_2]) == (arr_4 [i_0] [i_0] [i_2]))))) : var_4));
                    }
                }
            }
        }
        var_19 = (min(var_19, (!1431383522)));
        var_20 = ((-(((var_8 + 2147483647) >> (((arr_4 [i_0 - 1] [i_0] [4]) - 23))))));
    }
    #pragma endscop
}
