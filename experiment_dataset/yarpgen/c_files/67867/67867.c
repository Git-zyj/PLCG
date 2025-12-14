/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 ^= (max((arr_5 [i_0] [i_3]), (((-((min(96, (arr_1 [i_2])))))))));
                            arr_10 [i_3] [i_2] [i_2] [19] = ((((arr_2 [i_0 + 1]) ? (arr_4 [i_1 - 1] [i_0 - 2]) : -110)));
                        }
                    }
                }
                var_13 = (max(var_13, ((max(((-109 / ((-(arr_7 [i_0] [i_1] [i_1 + 1] [i_1 - 1]))))), -3)))));
                var_14 ^= (min(((((min(0, 109))) ^ ((-(arr_0 [i_0 - 2] [i_0]))))), (arr_0 [i_0] [i_1])));
                arr_11 [i_0 + 1] [i_0 - 1] [i_1] = (min((((arr_4 [i_0 - 2] [i_1 - 1]) + (arr_4 [i_0 - 2] [i_1 - 1]))), (((arr_4 [i_0 - 2] [i_1 - 1]) ? (arr_4 [i_0 - 2] [i_1 - 1]) : (arr_4 [i_0 - 2] [i_1 - 1])))));
                var_15 = ((-((var_7 >> (((arr_7 [i_1 - 1] [4] [i_0] [i_0 - 1]) - 5811657865548456875))))));
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
