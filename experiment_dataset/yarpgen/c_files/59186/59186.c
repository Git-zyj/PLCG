/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_8 | ((-750727844 ? var_14 : -111)))) != 996901647));
    var_16 = var_0;
    var_17 = var_5;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] |= (arr_0 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [6] [i_2] &= (((((1 ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_0 [i_3])))) ? (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (~32767)));

                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            arr_15 [i_0 - 1] [i_0] [4] [2] [i_3] [i_0 - 1] [2] |= (-(arr_10 [i_0 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 2]));
                            arr_16 [4] [i_1] [i_1] [i_1] [i_1] [i_1] [4] |= ((var_4 ? 2426586863 : (arr_4 [i_0] [i_0] [i_0])));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_3] = (~(arr_12 [i_0] [i_0] [7] [7] [i_1] [i_0] [i_3]));
                    }
                }
            }
            arr_18 [i_0] [i_0] = (+((((arr_4 [i_0] [i_0] [i_0]) >= 1))));
            arr_19 [i_0] = (((arr_14 [i_0 - 1]) >= (arr_14 [i_0 + 1])));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_23 [i_0] = ((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) - (arr_9 [i_0 + 1] [i_0 + 1] [3] [i_0]));
            arr_24 [i_0] [i_0] = 0;
        }
        arr_25 [i_0] = ((((var_2 ? (arr_14 [i_0]) : var_8))) ? -119 : var_1);
    }
    var_18 = (!-1077515718367490050);
    #pragma endscop
}
