/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_4, var_6));
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (min(((~(arr_7 [i_0] [i_2]))), ((min(1, (arr_2 [i_1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_2] = (((arr_4 [i_0 - 1]) ? (arr_10 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_2]) : (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 + 1]) : (arr_10 [i_0] [i_1] [i_2] [11])))));
                        var_18 = (((((1020 >= (arr_4 [i_0])))) + (arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1])));
                        arr_12 [i_0] [i_1] [i_2] [i_2 - 2] [4] = arr_5 [i_0] [i_1] [0];
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] = ((((!(arr_2 [i_2]))) ? -12506 : (arr_2 [i_0])));
                        arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_2] = ((((((arr_15 [i_1 + 1] [i_2] [i_4] [i_4] [i_4] [i_4]) ? (arr_15 [i_1 + 1] [i_2] [i_2 - 1] [i_1 + 1] [i_2] [i_4]) : (arr_5 [i_0 - 1] [i_1 + 1] [i_2])))) ? ((((max(55, (arr_1 [i_0])))) | ((max((arr_13 [1] [i_2] [1] [i_2]), (arr_7 [i_1] [i_2])))))) : (arr_10 [i_1 - 1] [13] [i_1 - 1] [i_1])));
                        var_19 = (((var_13 + (arr_2 [i_2 - 1]))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_21 [i_0] [i_2] [i_5] [i_5] = (((arr_6 [i_0 + 1] [i_2 + 1] [i_2] [i_5]) ? (((arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_5] [i_5]) ? (arr_16 [i_0] [i_1 + 1] [i_1] [i_2 - 1] [i_2 - 1] [1]) : 1015)) : ((max((arr_16 [i_2 - 2] [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2] [i_2]), (arr_10 [i_2 + 1] [i_1] [i_0 - 1] [i_5]))))));
                        var_20 |= ((arr_15 [i_0 - 1] [10] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) == (max((arr_7 [i_1] [1]), ((max(32767, (arr_7 [i_0] [8])))))));
                        var_21 = (arr_3 [i_0 + 2]);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_22 ^= (((arr_25 [i_0 + 1]) ? ((min(var_5, (arr_25 [i_0 - 1])))) : (arr_25 [i_0 - 1])));
                        arr_26 [i_2] = (((((12508 ? ((min((arr_0 [i_0] [i_1 + 1]), var_2))) : (max(18014123631575040, (arr_2 [i_0 + 1])))))) ? ((var_0 ? (((var_15 ? (arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0]) : var_13))) : (-9223372036854775807 - 1))) : (((max(var_9, (arr_1 [1])))))));
                    }
                    arr_27 [i_0 + 1] [i_2] = (arr_4 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
