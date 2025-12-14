/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-109 ? var_0 : (max(var_9, var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -6280;
        arr_4 [i_0] = ((((max((!1), 97))) && (((-111 - ((-35 - (arr_2 [i_0] [10]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = 51;
                    arr_10 [i_2] [i_1] [1] [i_0] = (max((((-1282012712 + 2147483647) << (14989012548893796016 - 14989012548893796016))), -100));
                    arr_11 [i_0] [11] = ((~(arr_8 [i_1 - 1] [i_1 - 1] [10])));
                    var_12 = (~(!114));
                }
            }
        }
        arr_12 [i_0] = ((!((!(arr_1 [i_0])))));
        var_13 = 51;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_16 [11] = (!-114);
        var_14 += (((((var_9 ? -29113 : var_8))) ? ((111 ? 39 : (arr_13 [7]))) : (arr_15 [i_3 - 4] [i_3 - 1])));
    }
    #pragma endscop
}
