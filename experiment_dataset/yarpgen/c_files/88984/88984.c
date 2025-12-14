/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_0 * var_3) || ((((var_10 && var_3) ? (var_13 >= var_4) : 46251)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = ((var_10 * ((6090715361734251687 ? 0 : 6090715361734251691))));
                                arr_15 [i_1] [i_4] = (max(((max(var_5, (!var_5)))), ((~(min((arr_13 [i_1]), var_11))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_1] = var_14;
                    var_16 = (max(var_16, (arr_2 [i_0] [i_2 - 1] [i_2 - 2])));
                }
            }
        }
    }
    var_17 |= var_1;
    #pragma endscop
}
