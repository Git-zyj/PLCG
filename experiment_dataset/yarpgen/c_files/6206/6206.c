/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = ((((((var_7 ? var_12 : var_11)))) ? (((var_6 <= (arr_7 [i_1 + 1] [i_4 - 1] [i_0])))) : (((!-1266695299809766374) ? (((!(arr_5 [i_0] [i_0])))) : (20482 || 161)))));
                                var_14 = ((!(((-(((arr_0 [i_1 + 1]) ? (arr_5 [i_3] [i_0]) : var_8)))))));
                                arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((~((-((45051 ? (arr_4 [i_0] [i_3] [i_4 - 1]) : var_7))))));
                                var_15 -= (min((max(((1 != (arr_11 [i_0] [i_3] [i_0]))), (((-2147483647 - 1) < -28877)))), ((((min(var_6, (arr_0 [i_2])))) == (arr_0 [i_3])))));
                            }
                        }
                    }
                }
                var_16 = ((+(max((~8459303695208833951), 1))));
                var_17 = (max(var_17, (((98 ? 1 : 28)))));
            }
        }
    }
    var_18 = ((!(((~(~-949571379))))));
    #pragma endscop
}
