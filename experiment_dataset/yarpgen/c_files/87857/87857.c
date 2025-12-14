/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 2] [i_2] [i_2] = ((arr_5 [i_2 + 1] [i_2] [i_0] [i_0]) ? (arr_5 [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_5 [i_2 + 1] [10] [i_2] [i_2]));
                    var_14 -= (((arr_1 [i_0]) ^ 3330233556));
                }
            }
        }
        var_15 &= (((arr_0 [i_0 - 1] [i_0 - 1]) <= (arr_0 [i_0 - 1] [i_0 + 1])));
        arr_8 [i_0] [i_0] = (!var_11);
        arr_9 [i_0 + 1] = ((3330233556 ? 255 : 0));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_16 = (arr_11 [i_0 - 1]);
                    var_17 = ((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : var_9);
                    var_18 ^= (((arr_6 [i_0] [3] [i_0] [i_0 + 1]) ? (arr_6 [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : (arr_2 [i_0])));
                }
            }
        }
    }
    var_19 = (max(var_19, var_13));
    #pragma endscop
}
