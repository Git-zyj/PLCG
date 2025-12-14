/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 += var_4;
                var_17 = (((max((~1), (arr_4 [i_1] [i_0] [i_0])))) ? ((((((arr_3 [i_0] [i_1]) ? var_14 : 134217712)) < 13))) : var_6);

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (arr_3 [i_1] [i_2])));
                    var_19 = (min((arr_4 [1] [i_1] [i_2]), (((15341303058317992913 + var_15) ? 1 : (((arr_0 [i_0]) ? 127 : var_12))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((309281599 ? 18397 : -1));
                                var_21 *= ((~((~(arr_5 [i_1])))));
                                var_22 &= var_0;
                                arr_14 [i_2] = (((arr_7 [i_0] [i_2] [i_3] [i_4]) ? var_8 : (arr_0 [i_0])));
                                var_23 = ((+(((var_6 / var_2) ? 3 : 880275907))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (((-(((var_13 ? 309281599 : var_8))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_25 = ((0 ? (((!309281594) | var_6)) : (1 << 1)));
                                var_26 = var_13;
                                arr_24 [i_0] [i_1] [i_5] [i_6] [i_6] = (min(533889387, ((-787239125 ? -3143 : 5980))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_8] [i_0] = (((18988 ? 1842850808 : (arr_4 [i_1] [i_1] [3]))));
                                var_27 = (-((-((var_5 ? 1 : var_7)))));
                                var_28 = (1311447410179958244 | 1215264600);
                                var_29 = (10 ? (((3148 ? 3088947254 : 1))) : var_13);
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (787239125 ? (min(var_3, (max(-787239125, 6326666189582543298)))) : 3082929402);
    #pragma endscop
}
