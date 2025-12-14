/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((((((5916703260886424152 & var_10) ? ((min(var_2, var_10))) : ((min(1, var_12)))))) ? ((var_11 ? -11 : var_9)) : -8983));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((-11 != (var_5 / var_2)));
                    arr_11 [i_0] [i_0] [i_2 + 1] = ((-21 ? ((var_1 ? ((255 ? var_3 : 10)) : var_9)) : (min(var_12, (max(-11, var_5))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_3] = (((7 ? var_1 : 1073741823)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_13 += (((((12 ? 1 : (min(var_5, 3))))) ? (!var_9) : var_2));
                                arr_24 [i_3] [i_3] [i_3] [i_3] = (((((0 && var_10) % -var_5)) >= ((((7 ^ var_10) ? 1 : ((min(5, -22410))))))));
                                var_14 = (~var_12);
                                var_15 = (max(var_15, ((((var_2 ^ var_0) ? (!var_6) : (((((19 ? var_5 : -30721))) ? var_8 : -7)))))));
                                var_16 = 30721;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_17 = (max(var_17, var_2));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_18 = var_10;
                            var_19 = (max(var_19, (((var_11 ? (13 + var_6) : var_7)))));
                            var_20 = (min(7, (((!(((932725025 ? 3 : -4))))))));
                            arr_36 [i_11] [i_10] [i_10] [i_8] [i_8] [i_8] = (((((99 ? (((var_9 << (var_4 + 440459216)))) : var_8))) ? (((~(~var_10)))) : var_3));
                        }
                    }
                }
                var_21 = (((var_12 * var_9) / ((-((12805 ? var_1 : 30721))))));
            }
        }
    }
    var_22 = (((max(var_10, var_1))));
    #pragma endscop
}
