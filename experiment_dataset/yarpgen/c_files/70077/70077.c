/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(~var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 |= ((!((max(var_1, 1411228644)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((((arr_0 [i_0]) ? var_2 : (arr_0 [i_4 + 1])))))));
                                var_14 = (1411228656 ? (((!((((arr_5 [i_0] [i_2] [i_0]) ? var_8 : 1411228634)))))) : var_2);
                                arr_10 [i_0] [13] [i_2] [i_1] [i_0] [i_2] [13] = 8888349634862268179;
                            }
                        }
                    }
                    var_15 = ((!(64510 / var_8)));
                }
            }
        }
    }
    var_16 = ((((min(var_10, var_3))) / ((~((var_0 ? -2533903428939773027 : var_9))))));
    #pragma endscop
}
