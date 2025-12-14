/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((var_11 ? 1 : var_5)) ? -0 : var_17)))))));
                                var_19 = (max((-2147483638 / var_10), (max((var_4 * 1), (((-8902837060498450509 ? var_13 : var_10)))))));
                                var_20 ^= ((((((((0 ? 1318153926 : 1))) ^ 4137941465))) ? -var_15 : ((2147483630 ? (((157025833 ? 1 : var_12))) : (-2147483632 * 157025833)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_8));
                                var_22 = (((((1 + 1) ? var_8 : var_12)) / (~var_14)));
                            }
                        }
                    }
                }
                var_23 = (max(-var_11, (1433278292 - var_11)));
                arr_25 [i_0] = (((((var_3 ? var_2 : var_17))) ? (-2147483636 <= var_15) : (!7778)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_38 [i_8 + 3] [i_9 + 1] [i_10] = ((~((2251799813619712 - (((-18776 ? 1 : -900556895)))))));
                            var_24 = ((((var_3 ? 167 : var_3)) * (!var_14)));
                            var_25 = (min(var_25, var_8));
                        }
                    }
                }
                var_26 = var_3;
            }
        }
    }
    #pragma endscop
}
