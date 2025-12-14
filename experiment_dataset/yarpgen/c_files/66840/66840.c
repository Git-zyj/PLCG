/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((~(max((((31757 * (arr_3 [i_0] [i_1] [i_1 - 2])))), -8813887496971000456))));
                var_21 ^= ((8813887496971000455 + ((((((arr_2 [0] [i_0] [i_0]) ? (arr_1 [6] [6]) : var_15))) ? ((8813887496971000456 ? (arr_1 [i_0] [1]) : (arr_1 [1] [i_1]))) : 65536))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] = ((-8813887496971000458 ? ((~(arr_1 [i_0] [i_1]))) : ((((arr_2 [i_0] [i_1] [i_2]) ? var_7 : var_5)))));
                    arr_8 [i_0] [i_1] = ((~(arr_3 [i_1 - 1] [i_1] [i_1 + 1])));
                    var_22 = (((((((arr_0 [i_0] [i_0]) < (arr_1 [i_0] [i_1]))))) != ((1 ? var_16 : var_18))));
                    arr_9 [i_1] [3] [3] [3] = (arr_6 [i_0] [i_1] [i_2] [i_1]);
                    arr_10 [i_0] [i_1] [i_0] = (arr_6 [i_1] [i_1] [i_0] [i_1]);
                }
                arr_11 [i_1] [17] [i_1] = (((max(-var_5, var_5)) * (((!(arr_0 [i_1 - 2] [i_1 - 2]))))));
                arr_12 [i_0] [i_0] [i_0] |= var_6;
            }
        }
    }
    var_23 = var_13;
    var_24 = (~-322366564455705359);
    #pragma endscop
}
