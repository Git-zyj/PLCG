/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((arr_4 [i_0] [i_0 + 2]) - (max(-32764, 869802523))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_8 [i_0 + 2] [i_1] [i_0 + 2] = ((((min(24761, (arr_3 [i_0 - 1] [i_1])))) && (arr_1 [i_0] [i_1])));
                    arr_9 [i_0] = (arr_5 [16] [i_1] [i_1] [i_1]);
                    var_17 = ((((((arr_6 [i_2 + 1] [i_1] [i_2 + 1]) - ((-1899142438 ? 1 : var_7))))) ? (((var_2 == 10868) + (((arr_5 [i_0] [22] [i_0] [i_2]) & (arr_6 [i_0] [i_0] [i_0]))))) : (((((((arr_4 [1] [i_2]) / (arr_6 [i_0 - 2] [i_1] [i_2])))) ? var_8 : 50096)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] = ((((((((arr_13 [i_4 + 1] [i_5 - 2] [i_6]) ? (arr_11 [i_3 + 2]) : var_3)) < (((min(var_0, var_3))))))) >= ((min(60966, var_6)))));
                        arr_22 [i_3] [i_3] [15] [i_6 + 2] = (max((((arr_16 [i_3] [i_3] [i_4 + 1]) ^ var_7)), (max(var_1, (arr_16 [i_4] [i_4] [i_4 + 1])))));
                        arr_23 [i_3] [17] [9] [i_5] [i_6] = (max((((arr_20 [23] [i_6] [i_6 + 2] [i_5 + 3] [i_4 + 2] [i_3 + 2]) & (arr_15 [i_6 + 4]))), (min(((min(var_14, -1))), (min(var_10, 32765))))));
                        var_18 += var_12;
                        var_19 += (max(((min(var_2, var_5))), (~1)));
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_20 = (((((max((arr_18 [i_3] [i_4] [3] [i_7 - 1]), (arr_25 [i_4] [i_5 + 2] [i_4] [i_4] [i_3])))) ? var_2 : var_3)));
                        var_21 = (max(var_9, ((var_3 ? (min((arr_24 [i_7 + 2] [i_4]), -1084283542)) : (arr_25 [i_7] [13] [i_5] [i_3] [i_3])))));
                    }
                    arr_26 [i_3] [12] [i_5 + 1] &= (max((arr_20 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1]), (max((arr_20 [i_3 + 1] [i_3 + 1] [i_4] [i_4 - 1] [i_3 + 1] [i_5 - 2]), (max((arr_16 [i_3] [20] [i_5 + 3]), (arr_10 [i_4] [i_5])))))));
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_22 -= ((-31317 ? 1 : 34611));
                        arr_31 [i_3] [i_3] [i_8] [i_9 + 4] = (((arr_18 [i_3] [i_3 + 1] [i_4 + 1] [i_9 + 3]) >= (arr_18 [i_4] [i_4 - 1] [i_4 + 1] [i_9 + 3])));
                    }
                    arr_32 [9] [i_4] [11] = (((((((arr_16 [i_8] [i_4] [i_3 - 1]) && (arr_16 [i_4] [i_4] [i_3 + 1]))))) > (((((1 ? (arr_10 [i_3] [i_4]) : var_7))) ? (arr_10 [i_8 + 1] [i_8]) : ((((1 > (arr_15 [i_8])))))))));
                    var_23 = ((((max(((var_5 ? -288846686 : (arr_10 [i_3] [i_4 - 1]))), ((((arr_24 [i_3] [i_3]) - -3)))))) ? (((((arr_13 [i_3 + 1] [i_4 + 1] [i_8 + 1]) >= ((min(var_5, var_6))))))) : ((((((arr_13 [i_3] [i_4] [i_8 + 1]) ? (arr_11 [i_8 - 1]) : (arr_24 [i_4] [i_8 - 1])))) ? var_3 : (arr_15 [i_3])))));
                }
                var_24 += ((((var_0 ? (min(1019311162514984706, (arr_14 [i_4]))) : (arr_16 [1] [i_4 - 1] [i_3]))) <= (((var_9 ? var_5 : ((((arr_30 [i_4] [i_4] [i_3 + 1] [i_3 + 1] [i_3 - 1]) << (-2406 + 2413)))))))));
            }
        }
    }
    #pragma endscop
}
