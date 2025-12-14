/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_7));
    var_19 = (min(var_19, (((+(((!var_15) ^ (var_7 | 1))))))));
    var_20 |= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (arr_1 [i_1 - 4]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = ((((2113058524 & (((var_15 >> (2113058524 - 2113058503)))))) <= (arr_4 [i_0] [i_2] [i_4])));
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] = (min(2017693587, var_3));
                                var_23 = ((~((var_11 ? (((~(arr_2 [i_0] [i_1])))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
