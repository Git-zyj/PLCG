/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = (((((-(arr_0 [i_0])))) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [14]))) : ((4294967290 & (arr_1 [i_0])))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? 1 : (9 == -1955569102)))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_11 = (min(((((arr_5 [7]) & (~111)))), var_4));
        var_12 = ((-18 ? ((var_9 & (arr_5 [i_1]))) : (((max((arr_4 [i_1]), var_2))))));
        arr_8 [i_1] [i_1] = ((max(var_6, (((3550425021 > (arr_7 [5])))))));
        arr_9 [i_1] = ((~(((~(arr_7 [i_1]))))));
    }
    var_13 = ((2147483647 ? var_7 : (((var_0 != ((var_1 ? var_3 : var_7)))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_23 [i_3] = (((((arr_13 [i_2 + 3]) && (arr_13 [i_2 + 1]))) ? ((((arr_13 [i_2 + 1]) ? (arr_13 [i_2 + 3]) : (arr_13 [i_2 - 1])))) : (min((arr_13 [i_2 + 2]), var_8))));
                            arr_24 [i_2] [i_2] [i_3] [i_4] [10] [i_5] = ((~((744542255 ? -100 : (arr_1 [i_2 + 2])))));
                        }
                    }
                }
                var_14 = (max(var_14, var_7));
                var_15 &= (min((!20446), (arr_11 [i_2 - 1] [i_2 + 1])));
                arr_25 [i_3] [i_3] = (min((arr_20 [i_2] [11] [i_3] [i_3]), (arr_10 [i_2 + 1])));
            }
        }
    }
    var_16 = (((((min(var_9, var_6)) ^ (~var_9)))) + (min((((3550425021 ? 744542275 : var_0))), (~var_4))));
    #pragma endscop
}
