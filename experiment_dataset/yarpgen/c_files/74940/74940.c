/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0] [i_1]);
                var_15 -= (((((-((((arr_2 [i_1]) <= var_10)))))) <= ((min(32758, 4373190082736813628)))));
                arr_6 [i_1] = (min(((-(((arr_3 [i_1] [i_1]) ? var_4 : (arr_4 [i_0] [i_0] [i_1]))))), ((min((arr_3 [i_1] [i_1]), var_3)))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_16 = (min(var_16, ((!(((~14821609409209348570) >= (arr_2 [i_2 - 2])))))));
        var_17 -= (arr_8 [i_2]);
        var_18 -= (((!var_1) * ((((arr_8 [i_2 - 2]) >= var_1)))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_19 -= (((arr_3 [i_3] [i_3]) + (arr_5 [i_3] [i_3])));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_15 [i_2] [i_4] [5] = (((min(((var_1 / (arr_2 [i_2]))), ((((arr_13 [i_2] [i_2] [i_2] [i_4 - 1]) >= (arr_9 [i_4] [i_3])))))) ^ (arr_4 [i_2] [i_2] [19])));
                arr_16 [i_4] [i_4] [i_4 - 1] = ((-((~(arr_8 [i_2 - 1])))));
            }
        }
    }
    #pragma endscop
}
