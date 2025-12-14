/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_7 ? var_5 : ((((min(var_8, var_3))) - ((max(2212, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = ((-(arr_1 [i_0 + 1])));
                            var_11 = (arr_2 [i_1]);
                        }
                    }
                }
                var_12 = (i_0 % 2 == zero) ? (((((((arr_3 [i_0]) ? (arr_0 [i_0]) : ((~(arr_6 [i_0] [i_0] [i_0]))))) + 2147483647)) << ((((((~((max((arr_7 [i_0] [i_0] [i_1 + 1]), (arr_11 [i_0] [15] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))) + 9)) - 7)))) : (((((((((arr_3 [i_0]) ? (arr_0 [i_0]) : ((~(arr_6 [i_0] [i_0] [i_0]))))) - 2147483647)) + 2147483647)) << ((((((~((max((arr_7 [i_0] [i_0] [i_1 + 1]), (arr_11 [i_0] [15] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))) + 9)) - 7))));
                var_13 = (min(var_13, ((((arr_8 [i_0] [i_0] [i_1 + 2]) < (min(((~(arr_10 [8] [16] [16] [2]))), ((((arr_10 [i_1] [1] [1] [i_0]) ? (arr_7 [0] [1] [0]) : (arr_5 [0] [i_1 + 1] [i_1] [i_1])))))))))));
                var_14 = ((~(arr_4 [i_0 + 1] [i_0] [i_1 - 1])));
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
