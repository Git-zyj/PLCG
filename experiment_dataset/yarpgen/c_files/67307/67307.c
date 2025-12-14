/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (max(((min(((var_3 <= (arr_2 [i_0] [i_1]))), (var_11 || 27)))), -var_2));
                    arr_9 [i_1] [i_2] = (max(((min(5, -3320654618))), (((~252) ? 1 : (-2682525950304342209 ^ 161)))));
                    arr_10 [i_0] [i_0] [i_1] [i_0] &= ((!(((arr_7 [i_2]) < (arr_4 [i_0] [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [3] [i_0] [i_1] [i_0] = ((!((((min(var_2, -5127686666718038264)) / var_10)))));
                                arr_19 [i_1] = ((((56340 + (arr_16 [i_0] [i_1] [i_4 - 1] [i_4 - 1] [i_4]))) <= (arr_16 [i_0] [i_1] [i_4 - 1] [9] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= (var_11 * var_15);
    #pragma endscop
}
