/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1 < 18446744073709551615);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [0] = ((var_1 ? ((18446744073709551615 ? 73 : 26701)) : ((-(arr_0 [i_0] [4])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_4;
                    arr_11 [i_0] = max((((-(arr_5 [i_2 - 2] [i_2 + 2] [i_2 + 1])))), ((20764 ? 78 : (min(0, 0)))));
                }
            }
        }
        arr_12 [14] [14] |= (((arr_9 [i_0] [8] [i_0]) ? 18446744073709551615 : var_12));
        arr_13 [i_0] = (arr_1 [i_0] [6]);
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_16 [i_3] = ((-(~12)));
        arr_17 [i_3] = ((var_8 ? (arr_14 [i_3]) : ((((((min((arr_15 [i_3]), var_9))) || (!-591043593930259509)))))));
        arr_18 [i_3] [i_3] = 9;
    }
    #pragma endscop
}
