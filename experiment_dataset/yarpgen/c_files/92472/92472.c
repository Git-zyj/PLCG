/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((!var_8) ? (((var_11 != (max(3115565129, var_2))))) : ((((min(var_9, var_13))) ? (var_5 && 1479982662) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (((((((2045391265 ? (arr_3 [i_0]) : (arr_4 [i_0])))) < (min(0, 1)))) ? (((arr_9 [i_0] [i_1 - 1] [i_2 + 3] [i_3] [i_3 + 4]) ? (arr_9 [i_0] [i_1] [i_2 + 2] [i_3] [i_3 - 1]) : (arr_9 [i_0] [i_1] [i_2 + 3] [i_0] [i_3 + 1]))) : (max(((~(arr_9 [i_0] [i_1] [i_1] [i_1] [i_0]))), (arr_4 [i_2])))));
                            var_22 = (min(var_22, (((arr_4 [i_0]) ^ 1))));
                            arr_11 [i_0] [i_0] [i_3] = ((!(arr_1 [i_2 + 3] [i_0])));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_23 ^= (((6860752298188262412 && var_9) && (arr_1 [i_0] [i_1])));
                    arr_14 [10] [i_0] [i_1] [i_4] = (((((-127 - 1) ? var_7 : (arr_3 [i_0]))) & (arr_3 [i_0])));
                    arr_15 [i_0] [0] = (((arr_6 [i_1 - 1]) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 - 1])));
                }
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    var_24 = ((max((((0 > (arr_7 [i_0] [i_1] [i_5])))), (arr_9 [i_0] [6] [6] [i_0] [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_25 |= (((((arr_10 [i_0] [i_5 - 1] [i_5] [2]) ? 3 : (arr_10 [22] [i_5 - 1] [i_7] [i_7]))) != ((min(15, (arr_4 [i_1 + 2]))))));
                                arr_24 [i_0] [i_0] [i_0] = (min(((((((arr_6 [i_0]) * 18446744073709551613))) ? (arr_13 [i_7] [i_6] [i_5] [i_1]) : ((min(var_8, var_11))))), (((((min((arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_6]), 1))) ? (arr_21 [15]) : (arr_0 [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((var_15 ? (min(var_11, var_4)) : ((var_7 ? 1 : var_1)))));
    #pragma endscop
}
