/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? var_6 : (((((909344084 ? 16437 : 16439)) != ((min(16432, var_7))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 += (min((arr_2 [i_0]), (((arr_2 [i_0]) * (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = -16412;
                    var_21 = ((var_4 ? (((max(16430, (arr_2 [i_0]))))) : var_16));
                    arr_8 [i_0] [i_1] [i_2] = (max(((((((((arr_5 [i_0] [i_1] [i_2]) + 2147483647)) << (64 - 64))) / -16439))), (((((44547 ? (arr_6 [i_0] [i_0] [i_2 + 2] [i_0]) : var_10))) ? (((min(var_4, (arr_2 [i_0]))))) : ((4294967290 ? var_8 : var_10))))));
                    arr_9 [i_2 - 2] [i_1] [i_0] = (((((((~(arr_5 [i_0] [i_1] [i_2 + 2]))) - (max((arr_5 [i_0] [i_1] [i_2]), var_11))))) * (arr_4 [i_0] [i_1] [i_2])));
                }
            }
        }
        var_22 = (max(var_22, (((((-16440 ? var_14 : (arr_2 [i_0]))) ^ (((min((arr_2 [i_0]), (arr_2 [i_0]))))))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_23 = (min(var_23, (((16433 % (min(var_1, (arr_10 [i_4]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 = (((-((var_6 ? (arr_17 [i_3]) : (arr_20 [14] [14]))))));
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = (min((arr_10 [11]), (~var_3)));
                            }
                        }
                    }
                    var_25 = (arr_16 [i_3] [i_4] [i_5]);
                    var_26 = var_12;
                    arr_23 [i_3] [15] [i_3] [i_3] = 14910;
                }
            }
        }
        var_27 = (min((((var_15 - (!var_4)))), (max((arr_11 [i_3] [i_3]), (min(-16439, var_9))))));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        arr_27 [i_8] = ((!(arr_18 [i_8 + 1] [i_8 - 3])));
        var_28 = (max(var_28, ((((16437 - var_11) / -var_16)))));
    }
    #pragma endscop
}
