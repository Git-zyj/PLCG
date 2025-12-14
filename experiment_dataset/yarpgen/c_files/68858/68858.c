/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] = (((arr_5 [i_3]) && ((max(25179, var_1)))));
                        var_10 = ((((((((arr_0 [i_0]) > (arr_4 [i_1] [i_2 - 3]))) ? (78 * 49286) : ((0 ? -77 : (arr_7 [21] [i_2] [i_2])))))) ? (((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 1]))) : ((-((2973619490 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_1 [i_3])))))));
                    }
                    var_11 = ((((((arr_2 [i_1]) ? (arr_2 [i_1]) : var_1)) != (((arr_6 [i_0] [i_1]) + (arr_5 [i_2]))))) ? (max((arr_3 [i_0] [i_1] [22]), 2844956918)) : -49);
                    var_12 = (max(var_12, ((((((arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 1]) ? (arr_7 [i_2 + 1] [i_2] [i_2 - 2]) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [1] [i_2 + 2]))) & (min((arr_9 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]), (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]))))))));
                    arr_11 [i_1] [11] [i_1] [i_2] = max((arr_4 [i_0] [i_0]), (arr_5 [10]));
                }
            }
        }
        var_13 += ((~(((arr_2 [i_0 - 1]) & 10593))));
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_14 = ((10 ? ((((max(2844956920, var_7))) ? (((max(var_1, (arr_2 [i_4]))))) : 1450010378)) : (((arr_5 [i_4 - 1]) ? (0 / 65524) : (((arr_13 [i_4]) - (arr_3 [i_4] [i_4] [i_4 + 1])))))));
        var_15 = (arr_5 [i_4 - 2]);
        var_16 = (min(var_16, ((max(((((arr_4 [i_4] [i_4 - 1]) != ((65514 ? var_2 : -119))))), (min((arr_6 [i_4 + 2] [6]), (arr_7 [i_4 + 1] [i_4] [i_4 - 1]))))))));
        arr_14 [i_4] = (arr_5 [i_4 + 2]);
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_17 = (max((min((arr_15 [i_5 - 1]), -43)), (((-(arr_5 [i_5 - 3]))))));
        arr_17 [i_5 - 1] = (((max((arr_15 [i_5 - 2]), (arr_15 [i_5 - 2]))) * (var_4 && 50)));
    }
    var_18 += ((((max(var_2, var_9))) ? var_6 : 127));
    var_19 = var_5;
    #pragma endscop
}
