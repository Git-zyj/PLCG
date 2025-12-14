/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(15090, var_14));
    var_21 *= var_14;
    var_22 = (min(var_22, ((min(1915955951, var_9)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] |= ((min(-1915955950, (((arr_0 [i_2]) ? var_0 : 2017612633061982208)))));
                        var_23 = (max(var_23, ((((((2017612633061982208 ? (arr_12 [i_2] [i_2 + 1] [i_2] [i_2 - 1]) : (arr_12 [i_2 - 1] [i_2] [7] [i_2 + 1])))) ? (arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (((((var_17 << (2017612633061982208 - 2017612633061982179)))) ? (((((arr_3 [i_2 - 1]) && 16429131440647569407)))) : (max(1915955951, var_13)))))))));
                    }
                }
            }
        }
        var_24 = (arr_7 [i_0]);
    }
    #pragma endscop
}
