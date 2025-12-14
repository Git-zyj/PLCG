/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_8 [i_0 - 1] [i_0] [i_1] [i_2] [i_2] [i_3] = (73 < var_1);
                        arr_9 [i_3] [i_1] [i_0] [i_3] = (((((var_9 ? (arr_5 [i_2] [i_3]) : 844424930131968))) ? (191153274448427036 || -2576328386760625559) : var_1));
                    }
                }
            }
        }
        var_12 = ((var_2 ? (arr_3 [7] [i_0] [i_0]) : (arr_1 [i_0 - 1] [i_0 + 1])));
    }
    var_13 += var_8;
    var_14 = var_8;
    #pragma endscop
}
