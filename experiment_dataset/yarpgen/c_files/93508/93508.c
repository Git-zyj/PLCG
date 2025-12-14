/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (((((arr_8 [i_2 - 1] [i_3 + 2] [9]) ? (arr_8 [i_2 + 2] [i_3 - 1] [i_3 - 2]) : (arr_8 [i_2 + 2] [i_3 + 1] [i_2]))) > -115));
                            var_18 = (max((arr_1 [i_3]), (((arr_5 [i_0] [i_1] [i_2] [i_3 + 2]) ? (!-1711742263674590897) : -2))));
                        }
                    }
                }
                var_19 = ((-(arr_3 [i_0] [i_1])));
                arr_11 [i_0] [i_0] [i_0] = ((-((-2038074677517051203 | (arr_6 [i_0] [i_1] [i_1] [i_1])))));
            }
        }
    }
    var_20 ^= var_9;
    #pragma endscop
}
