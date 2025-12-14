/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_10 = (max(var_10, (((((((((arr_6 [i_3] [i_3] [i_3] [i_0]) ? (arr_5 [i_3] [i_0] [i_0]) : (arr_1 [i_2 - 1]))) < (var_4 == 65535)))) & ((((((1 ? (arr_6 [i_0] [i_1] [i_3] [i_3]) : (arr_8 [i_0] [i_1] [i_0] [i_3])))) && 18446744073709551615))))))));
                            var_11 = ((((var_2 ^ (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) << (((((arr_6 [i_2 - 1] [i_2] [i_2] [i_1]) ? var_0 : (arr_7 [i_1 + 2] [i_1 - 1] [i_2] [i_2 - 1]))) + 7733383151619747998))));
                            var_12 = 11225969628514422257;
                            var_13 = (arr_3 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_14 = ((-(((arr_3 [i_1 - 1] [i_1] [i_1 + 2]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2])))));
                var_15 += (arr_8 [i_0] [i_1] [i_1] [i_1 - 1]);
            }
        }
    }

    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_16 = (((arr_10 [i_4 + 1] [i_4 + 2]) ? (arr_13 [i_4 + 1] [i_4 - 1]) : (arr_12 [i_4 + 2] [i_4 + 1])));
        var_17 = (min((((var_3 >= (arr_12 [i_4 - 1] [i_4 - 1])))), (((arr_11 [i_4 + 1] [i_4 + 2]) ? 1 : (((arr_13 [i_4 + 1] [i_4]) * 1))))));
        var_18 = (min(var_18, (arr_12 [i_4 + 1] [i_4 + 1])));
    }
    var_19 -= ((~(65533 > 262143)));
    #pragma endscop
}
