/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, -323944970259960059));
                                arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_4] = -var_11;
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] = var_9;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_6 + 1] &= var_4;
                            var_13 = (((~(arr_0 [i_0 - 1] [i_0 - 1]))));
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (min(((~(arr_24 [i_0] [i_5] [i_6 - 1]))), (arr_24 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                        }
                    }
                }
                arr_28 [i_0] [i_0] [i_1] = ((-(((max(var_11, -323944970259960072)) + ((((arr_14 [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0 + 1] [i_0 + 1]) : 323944970259960054)))))));
                arr_29 [i_0] [i_0] = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_14 = var_9;
                var_15 ^= (max((arr_32 [i_7] [i_8]), (~323944970259960054)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            {
                arr_43 [i_9] = (((arr_8 [i_9]) != var_10));
                arr_44 [i_9] [i_10] = (((((var_5 + (arr_32 [i_9] [i_9])))) ? var_0 : (((arr_33 [i_9] [i_9]) / var_2))));
                var_16 = ((((arr_19 [i_9] [i_9]) ? (~var_7) : (8250845013488668554 ^ 323944970259960051))));
            }
        }
    }
    #pragma endscop
}
