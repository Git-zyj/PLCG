/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((-((~(var_6 >= var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (~(arr_2 [i_3 + 1] [i_2 + 2] [i_1 - 4]));
                        arr_10 [i_2] [i_3] [i_3 - 1] [i_3 + 2] = 0;
                        var_14 = (var_4 ^ 2146);
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        var_15 = ((8126464 % (8126464 && var_3)));
                        var_16 = (max(var_16, (((12895410976064312784 ? 0 : 6)))));
                        var_17 = (min(var_17, var_4));
                        arr_13 [i_2] = (((((arr_7 [i_4 - 1] [i_2] [i_0] [i_0]) ? 1 : (arr_8 [i_0] [9] [9] [i_0])))) ? (((arr_11 [i_0] [i_2 + 2] [i_2]) ? var_11 : 247)) : ((((arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 2]) < var_1))));
                        var_18 *= (((arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_4 - 4]) < 18446744073709551615));
                    }
                    arr_14 [i_0] [i_0] [i_2] = max(((253 ? (arr_12 [3] [i_1 - 3] [3] [i_1 - 3]) : 1)), ((min((arr_6 [i_2] [i_0] [i_0] [i_2]), (arr_6 [i_2] [i_1 - 4] [i_2 + 1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
