/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [7] [3] [i_1] [3] = 93;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_11 -= arr_9 [i_0];
                        arr_10 [i_0] [i_1] [12] [i_0] = (min(((-4565815979218426443 ? (arr_4 [i_1]) : 18446744073709551615)), ((((arr_4 [i_3]) | var_6)))));
                        var_12 = (arr_4 [11]);
                        var_13 = (max(((((var_10 ? 7962 : (arr_5 [13] [13] [i_0]))))), ((2147483647 ? (arr_8 [i_3] [i_1] [i_0]) : (arr_8 [i_2] [i_2] [i_1])))));
                    }
                    var_14 = (max(var_14, ((min(-19318, 1)))));
                }
            }
        }
    }
    var_15 = ((var_0 - (((var_2 ? var_0 : var_6)))));
    var_16 = var_3;
    #pragma endscop
}
