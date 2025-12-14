/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (-9223372036854775806 + 9223372036854775805);
                                var_20 = (((((((arr_13 [i_0] [i_3]) >= var_17)))) & ((((((arr_5 [i_0]) | (arr_7 [11] [11] [i_3])))) & ((~(arr_14 [7] [i_1] [i_0] [i_1])))))));
                                var_21 = (max(var_21, (((((!((max(var_11, (arr_6 [i_2] [i_1])))))) && ((((arr_14 [i_2 + 1] [i_2] [i_2] [i_2]) ? (arr_6 [i_2] [i_2 - 2]) : (arr_6 [i_2] [i_2 + 4])))))))));
                                arr_17 [8] [i_2] [i_2 + 1] [i_0] [i_4] [i_3] [1] |= (((arr_2 [i_2]) ? (((((((arr_9 [i_4] [11] [i_2 - 1] [i_1]) > (arr_6 [i_2] [i_1])))) != (((var_12 || (arr_4 [i_2] [i_2 + 3] [i_2]))))))) : var_8));
                                arr_18 [i_0] [8] [i_0] [8] [8] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((((~((max(var_16, (arr_13 [13] [i_4])))))) + 2147483647)) << ((((((((((arr_3 [i_0] [i_0]) & (arr_3 [13] [i_0])))) ^ ((var_12 ? var_6 : var_14)))) + 1399200478)) - 4))))) : (((((((~((max(var_16, (arr_13 [13] [i_4])))))) + 2147483647)) << ((((((((((((arr_3 [i_0] [i_0]) & (arr_3 [13] [i_0])))) ^ ((var_12 ? var_6 : var_14)))) + 1399200478)) - 4)) - 489444086)))));
                            }
                        }
                    }
                    arr_19 [i_2] [i_1] |= var_9;
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (((((-((var_14 ? (arr_14 [i_2] [i_0] [i_0] [i_0]) : var_0))))) ? (arr_14 [14] [5] [i_0] [i_0]) : var_0));
                }
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
