/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = var_13;
                    var_17 = (min(var_17, (((((((var_4 ? 1951976373 : 1868038058)))) ? (max(var_13, (((arr_4 [i_2] [i_2] [i_1] [i_0]) + (arr_7 [1] [i_1] [i_1]))))) : var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [9] = (((((arr_1 [i_3] [7]) ? (arr_0 [i_0 - 1]) : ((44503 ? -1 : 537024882)))) / ((var_13 ? var_7 : (arr_12 [10] [i_3] [10] [i_0] [i_0])))));
                                arr_15 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] [i_0] |= ((((((arr_2 [i_0 - 1] [i_2]) & var_1))) ? ((((((arr_3 [i_0] [i_0]) ? 1 : (arr_11 [i_1] [i_1] [i_1] [i_1] [3])))) ? (~var_0) : (var_0 & -25926))) : ((33553920 ? var_8 : 15872))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_9 || (((var_0 ? 1 : var_13)))));
    var_19 = (max(var_19, ((((((1 ? (var_6 != var_5) : var_15))) || ((((var_0 & 11) + -1812571860))))))));
    #pragma endscop
}
