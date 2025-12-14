/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -246970573;
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_12 += (((max((arr_3 [4]), 33285996544)) | ((((!(arr_0 [i_0] [i_1 + 2]))) ? (arr_2 [i_0]) : -2271428144276019200))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_13 = (((arr_4 [i_0 + 1] [i_1 - 3]) ? (arr_4 [i_0 + 2] [i_1 - 2]) : (arr_4 [i_0 + 2] [i_1 + 2])));
                    var_14 = (((arr_7 [i_0]) != (arr_2 [i_0 - 1])));
                }
                for (int i_3 = 3; i_3 < 7;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] = (((((arr_4 [i_1 - 2] [5]) << (((arr_0 [i_0] [i_1]) - 2050119525)))) >= (((((((arr_9 [i_3] [i_0] [i_0 - 1]) + 8394201326254267078))) ? (arr_1 [i_0]) : (!16544703823450815542))))));
                    arr_13 [8] [i_1 + 1] [i_0 + 1] [8] &= 455871570;
                }
                arr_14 [i_0] [i_0] [i_0] = (((((46678 | 33554416) ? 63410 : ((3729302209107263536 & (arr_11 [i_0] [6] [i_0] [i_0]))))) != ((((((!(arr_6 [i_1] [i_0] [i_0])))) & (-4096 + 140))))));
            }
        }
    }
    #pragma endscop
}
