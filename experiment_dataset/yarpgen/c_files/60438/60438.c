/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = ((((-var_4 | (~var_0))) << ((((((max(var_11, var_10))) ? var_7 : var_10)) - 87))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (arr_4 [i_0]);
                    var_14 += ((((((arr_4 [i_0]) ? var_3 : (arr_3 [i_0] [i_2])))) ? (arr_1 [i_0]) : (arr_4 [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = (((arr_4 [i_2]) ? ((((((arr_4 [6]) > (arr_1 [i_1])))) >> (((arr_2 [i_2] [i_2]) - 4814529352009285019)))) : (!10199083288323094429)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_15 ^= 2147483647;
                                arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] = (((!var_7) << (((arr_21 [i_5]) - 65))));
                                arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_4 [i_5]);
                                var_16 += ((((!(!var_11))) ? (var_8 / var_11) : (((var_8 / (((arr_23 [i_3] [i_5] [i_5] [i_7]) ? (arr_3 [i_6] [i_3]) : var_4)))))));
                            }
                        }
                    }
                    arr_27 [i_3] [i_4] [i_5] = (min(((!(arr_11 [i_3]))), (((arr_11 [i_3]) <= (arr_11 [i_5])))));
                    arr_28 [i_3] [i_4] = var_9;
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
