/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!((((var_1 << var_3) + (var_8 && var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 *= (((arr_0 [i_1] [i_0]) < ((~(arr_2 [i_0])))));
                    var_12 &= ((~(arr_0 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = (((532676608 * 18446744073709551615) ? (((arr_2 [i_0]) / (arr_11 [i_1] [i_1] [i_3] [i_4]))) : (((arr_2 [i_0]) / (arr_11 [i_3] [i_1] [i_3] [i_3])))));
                                arr_16 [i_1] = (((arr_4 [i_4] [i_2]) ? (arr_10 [i_0] [i_0] [i_1] [i_0]) : (arr_13 [i_4])));
                                var_13 = (((-var_5 | var_6) && (((-(((arr_3 [i_1]) - var_6)))))));
                                arr_17 [i_1] [8] = ((!(~65535)));
                                var_14 = (arr_8 [i_1]);
                            }
                        }
                    }
                    var_15 ^= (!(arr_11 [i_0] [i_0] [i_0] [i_0]));
                }
            }
        }
    }
    var_16 = var_7;
    var_17 ^= var_8;
    #pragma endscop
}
