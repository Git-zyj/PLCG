/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (2080045918 + var_9);
                arr_6 [i_0 + 4] [i_1] = (max((arr_4 [i_1]), 7968836814889940485));
            }
        }
    }
    var_15 = (max(1725, 4137897296));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_16 = (arr_9 [10] [8]);
        arr_10 [i_2] = 32754;
        arr_11 [i_2] = ((((arr_8 [i_2]) == (arr_8 [i_2 - 1]))));
        var_17 = (min(var_17, (arr_3 [i_2] [i_2 - 1] [i_2])));
        arr_12 [i_2] &= (((arr_9 [i_2 - 1] [i_2 - 1]) ? -1597946977 : (arr_7 [i_2 + 1])));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_18 = (max(var_18, (arr_13 [i_3])));
        arr_16 [i_3] = (arr_15 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_19 = (arr_14 [i_3]);
                    arr_23 [i_3 - 2] [i_3] [i_3] = -2147483641;
                    var_20 = ((+((((arr_18 [i_3] [i_5]) ? 36 : 5911350093939202687)))));
                    arr_24 [i_3] [i_3] [i_3] [i_3] = ((~(arr_18 [i_3] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
