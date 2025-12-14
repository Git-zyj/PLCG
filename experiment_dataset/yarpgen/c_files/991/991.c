/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((var_0 >= (arr_4 [i_1 - 1] [i_1])))) ^ (~9149)));
                var_13 = (i_1 % 2 == zero) ? (((+(((((arr_4 [i_0] [i_1]) + 2147483647)) << (var_2 - 13669)))))) : (((+(((((((arr_4 [i_0] [i_1]) - 2147483647)) + 2147483647)) << (var_2 - 13669))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_14 = ((((~(arr_11 [i_3]))) & (((1574553197252679398 && (arr_12 [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_15 = ((~(((~537751029) ^ var_3))));
                                var_16 = ((~(169 | var_11)));
                                arr_20 [i_6 - 1] [i_2] [i_4] [i_2] [i_2] = ((arr_17 [i_4] [i_6 - 1] [i_6] [i_2] [i_6] [i_6 + 1]) / -2047);
                                var_17 = (((((((arr_16 [i_6 - 1] [i_2] [i_2] [i_2]) == -383510158)))) & (((arr_19 [i_2] [i_3] [i_4] [i_5] [i_4] [13]) >> (var_9 - 48174)))));
                                var_18 = ((~((-(~-383510143)))));
                            }
                        }
                    }
                    arr_21 [i_2] = (41 && 26681);
                    var_19 = ((!(((arr_12 [i_3] [i_2]) == (arr_12 [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
