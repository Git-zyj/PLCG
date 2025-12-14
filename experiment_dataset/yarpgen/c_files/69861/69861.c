/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1] = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [9] [i_1] [i_2] [i_1] = (((~-56) ? (~var_3) : (((((arr_0 [i_3]) ? 3921049327 : 598271616))))));
                                arr_16 [12] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = (((max(var_6, (arr_13 [i_4] [i_3] [i_2 - 2] [i_2 - 1] [i_2]))) ^ ((min((arr_8 [i_0] [i_1] [i_2 + 1]), (arr_8 [i_3] [i_1] [i_2 - 1]))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] = (max(9, 13));
                }
            }
        }
    }
    var_10 = var_0;
    #pragma endscop
}
