/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = var_2;
                    var_14 = (min(var_14, 5133433872539319074));
                    arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((!((((arr_5 [i_0 - 1] [i_1 + 1]) % (arr_0 [i_0 + 1]))))));
                    var_15 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = ((3840984046 <= (((1278022578 ? ((var_0 - (-32767 - 1))) : 1)))));
                                var_17 = (arr_10 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0]);
                                arr_12 [11] [i_1] [i_2] [21] [i_2] |= (arr_11 [i_1] [i_1 - 2] [i_0] [i_0 - 1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 1;
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                {
                    var_19 = 2136445585;
                    arr_21 [i_5] [i_7] = (arr_0 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
