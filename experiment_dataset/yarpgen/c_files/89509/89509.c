/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((867726947 ^ var_8) ? var_13 : (-19 || var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_20 = (min(var_20, (((-(arr_4 [15] [15] [i_2]))))));
                    var_21 &= min((min((arr_6 [i_0] [i_1] [i_2 - 2]), (arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]))), (((arr_6 [i_0] [i_0] [i_2 + 1]) * 1)));
                }
                var_22 = (arr_6 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = (((19 ^ 1711546466) & (((arr_0 [i_5 + 2]) ^ (arr_4 [i_5 + 4] [i_5 - 1] [i_5 + 4])))));
                                arr_17 [i_0] [i_0] [i_1] [i_4] [i_5] = (min(((max(-14, 110))), ((-(arr_2 [i_5 + 4])))));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_1] [i_5] = (min((((arr_5 [i_0] [i_1] [i_4]) / (arr_14 [i_1] [i_4] [i_5 + 1] [i_5 + 4] [i_5]))), (((min((arr_12 [i_5] [i_1] [i_1] [i_0]), 13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
