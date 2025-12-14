/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [4] [i_1] [i_0] = (10 && 1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [0] [i_0] = (16769 ^ 4294967295);
                                arr_15 [22] [i_1] [i_1] [1] [i_1] [i_3] [i_4] = ((((-119 ? 4294967290 : 0)) - (((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        }
                    }
                    var_16 = (~18);
                }
            }
        }
    }
    var_17 = (var_2 + var_0);
    var_18 = ((var_7 ^ ((~(!var_1)))));
    #pragma endscop
}
