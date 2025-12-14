/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 &= ((-1413245669 ? (arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : ((((arr_2 [i_0 + 2] [i_0 - 1] [i_0]) | 1162926153)))));
                var_19 = (min(var_19, -1413245673));
                var_20 = (max(var_20, (62599 | -92)));
            }
        }
    }
    var_21 = var_8;
    var_22 ^= var_16;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_23 = (max(((min(((115 ? 3796 : var_5)), var_11))), (((((arr_5 [5]) ? var_16 : var_7)) | var_16))));
                var_24 += (max((((14 | 2531423634) | ((((!(arr_7 [i_2] [i_2] [7]))))))), 3956192046479177810));
                var_25 = 1763543674;
                arr_10 [i_2] [i_2] = (((((arr_2 [5] [i_3] [i_2 - 3]) ? (arr_9 [i_2 - 1] [i_3] [i_3]) : (arr_2 [i_2 + 2] [i_2 + 2] [i_2]))) | (arr_2 [i_3] [i_3] [i_2 - 1])));
            }
        }
    }
    #pragma endscop
}
