/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 &= (arr_7 [9]);
                        arr_12 [i_0] [i_0] = (((-668424563 ? 124 : -1)));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_15 ^= (((arr_14 [2] [2]) << ((((-(arr_4 [1]))) + 1227367043))));
                        var_16 |= (arr_7 [i_0]);
                        var_17 = ((127 ? (arr_9 [i_2] [i_0] [i_2 - 1] [i_0] [i_2 - 1]) : (arr_9 [i_2] [i_0] [i_2 + 1] [i_2 + 1] [i_2])));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_4] [i_0] [i_1] [i_0] [i_0]);
                        var_18 = ((arr_2 [i_4 - 1] [i_0]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_1]));
                    }
                    var_19 = (min(var_19, (((+(min((arr_13 [4] [i_1] [i_1] [i_1]), (arr_13 [1] [i_2 - 1] [i_1] [1]))))))));
                    var_20 = (arr_2 [i_0] [i_0]);
                    var_21 = (((((!((((var_0 + 2147483647) >> (var_4 - 12116797927178314222))))))) << (((-668424563 % 67108864) - 42626))));
                    var_22 = (((((arr_9 [i_0] [i_0] [i_2 + 1] [i_0] [i_2 - 1]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_2 + 1]) : (arr_9 [i_0] [i_0] [i_2] [i_0] [i_2 - 1]))) ^ ((min((arr_9 [i_0] [i_0] [i_2 + 1] [i_2] [i_2 - 1]), (arr_9 [i_2] [i_0] [i_2] [i_2] [i_2 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
