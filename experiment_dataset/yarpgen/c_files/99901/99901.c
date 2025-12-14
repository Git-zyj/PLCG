/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~1439592383);
    var_16 = (min(var_9, 2075122668));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = ((arr_2 [i_1] [i_0] [i_0]) >> (((arr_0 [i_1]) - 1788643114023225242)));
            var_17 = (((arr_0 [i_1]) <= (arr_0 [i_1])));
        }
        arr_5 [i_0] &= ((((((arr_3 [i_0] [i_0]) < 0))) >= (arr_2 [8] [1] [8])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = (min(((((arr_2 [i_2] [i_2] [i_2]) <= (arr_2 [i_2] [i_2] [i_2])))), (max((arr_2 [i_2] [i_2] [i_2]), (arr_2 [i_2] [i_2] [i_2])))));
        arr_10 [1] [i_2] = 0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_13 [1] |= (((arr_9 [i_3] [i_3]) || (arr_2 [12] [i_3] [i_3])));
        var_19 = (((arr_11 [i_3]) - (((arr_7 [i_3]) ? 95 : 1))));
        arr_14 [i_3] [i_3] = (((arr_3 [i_3] [i_3]) >= (arr_2 [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_3] = (((arr_8 [i_3]) == (arr_8 [i_3])));
                    arr_20 [i_3] [i_4 + 2] [i_4 + 2] = (arr_2 [i_4 - 1] [i_5] [i_5]);
                    var_20 ^= (((arr_16 [i_4 + 1]) + ((((arr_12 [i_3] [4]) <= (arr_3 [i_3] [i_3]))))));

                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_24 [i_3] [i_3] [i_5 + 1] [i_6] [i_4] [1] = (((arr_9 [i_5 + 2] [i_6 + 1]) ? (arr_9 [i_5 + 2] [i_6 + 1]) : 36985));
                        arr_25 [i_3] [i_3] [i_5] [i_5] [i_3] = (arr_11 [i_3]);
                        arr_26 [i_3] [i_3] = (((6 && -3178) < (((7266074246408298439 > (arr_22 [i_3] [18]))))));
                    }
                }
            }
        }
        arr_27 [i_3] = ((0 + (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]) ? 6259313921627228975 : (arr_2 [i_3] [13] [10])))));
    }
    #pragma endscop
}
