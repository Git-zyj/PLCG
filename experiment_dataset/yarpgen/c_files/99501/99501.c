/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max(((((-26444 < (arr_7 [i_2] [i_1] [i_0]))))), ((max(1, -32751)))));
                    var_10 &= var_3;
                    var_11 ^= ((var_0 + (((arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1]) - var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3 - 1] = ((-(min((32763 - var_0), (max(-32740, (arr_7 [i_1] [i_2 + 2] [i_4])))))));
                                var_12 = (max(var_12, (((max((arr_6 [i_4] [i_4] [i_4 + 1] [i_2 - 2]), -1505098329))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
