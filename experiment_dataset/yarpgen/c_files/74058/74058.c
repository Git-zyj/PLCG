/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 -= (3200424209 > var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] &= -var_1;
                                var_14 = (min(var_14, var_8));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1 + 1] [i_2] = var_5;
                }
                arr_16 [3] = (min((min(4226503782, (arr_8 [i_1 + 1] [8] [i_1 + 2] [i_1 + 2]))), (82 || 0)));
                var_15 = (arr_4 [i_0] [i_1] [i_1]);
                arr_17 [i_0] = 68463513;
            }
        }
    }
    #pragma endscop
}
