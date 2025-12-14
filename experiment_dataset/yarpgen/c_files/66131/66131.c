/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-(var_8 ^ 36021298)))) ? var_10 : (var_0 < var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [10] [i_1] [i_1] [i_0] &= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_1)) > (arr_2 [10]))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_18 = (arr_10 [i_1] [i_1] [i_3] [i_4]);
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [1] = ((14485 || (arr_4 [i_2 - 1] [i_1] [i_2 + 1])));
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [5] [i_0] = (arr_4 [i_2 - 3] [i_1] [i_2 - 3]);
                            var_19 = var_5;
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_2 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_3] [11] [i_1] [0] [i_1] = (i_1 % 2 == zero) ? ((((((arr_9 [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 3]) >> (((arr_9 [i_2 - 2] [i_1] [i_2 - 1] [i_2 - 3] [i_2 - 1]) - 9208)))) % (~14485)))) : ((((((arr_9 [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 3]) >> (((((arr_9 [i_2 - 2] [i_1] [i_2 - 1] [i_2 - 3] [i_2 - 1]) - 9208)) - 2985)))) % (~14485))));
                            arr_21 [i_1] = ((+(((arr_13 [i_1] [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 2]) % (~var_7)))));
                        }
                        var_20 = (min(var_20, var_2));
                    }
                    var_21 = ((min(38685, ((6436683887719076279 ? var_10 : var_5)))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_22 = (arr_25 [i_6] [i_7] [i_7]);
            var_23 = (((((!(arr_25 [i_6] [i_6] [i_7])))) <= 51050));
        }
        var_24 = (-((~(arr_22 [i_6] [i_6]))));
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        arr_29 [i_8] = (81 || -4258945997);
        arr_30 [i_8] = (((+((min((arr_28 [i_8]), var_3))))));
        var_25 = ((((var_2 ^ ((max((arr_1 [i_8]), (arr_28 [i_8])))))) >> (var_8 - 3982704861)));
    }
    #pragma endscop
}
