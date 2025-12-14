/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = (((-127 - 1) ? (arr_1 [i_0] [1]) : 127));
                        var_14 = -119;
                        arr_12 [i_2] [i_2] [i_3] [i_3] [i_0] [i_0] = (arr_5 [12] [i_3]);
                        arr_13 [i_2] [i_2] [i_2] [i_3] = (((arr_0 [i_3] [i_0]) ? (arr_2 [i_2]) : (arr_2 [i_0])));
                    }
                    var_15 = (256614607 ? -114 : 107);
                }
                var_16 -= (max((((arr_3 [i_0] [i_0]) ? (arr_5 [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]))), (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_17 = 0;
    var_18 += 18446744073709551615;
    #pragma endscop
}
