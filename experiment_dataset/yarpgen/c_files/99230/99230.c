/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (!-969080140);
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [6] [i_1] &= ((((((arr_6 [6]) ? 9264 : var_1))) ? (min(var_8, (arr_6 [10]))) : (arr_6 [0])));
                    arr_8 [i_0] [12] [12] |= ((-2865390568253390027 ? var_10 : (1434398349 & -2865390568253390016)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                arr_16 [i_4] [6] = (!var_13);
                arr_17 [4] = (((var_3 + var_14) * (arr_0 [12])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_23 [6] = (((!(arr_0 [12]))));
                            arr_24 [i_6] [12] [12] [i_3] = (min(((((((48 == (arr_15 [i_3] [1]))))) / (min(var_11, 2865390568253390026)))), (((((((arr_0 [2]) ? var_3 : var_9))) ? (!var_2) : (var_1 && var_11))))));
                            arr_25 [i_3] [i_3] [i_3] [16] [i_3 - 2] = ((~(arr_15 [i_3 - 1] [0])));
                            arr_26 [14] [i_4 - 2] [14] = ((max((arr_18 [14] [14] [i_5 - 1]), (arr_18 [14] [14] [i_5 + 1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
