/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 14223;
    var_16 -= (~0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_12;
                arr_6 [i_1] = ((~((((arr_0 [i_0]) != 65519)))));
                var_17 -= var_1;

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_18 = (max(var_18, (((-(((((22737 ? 3697137401121073843 : var_14))) ? 36230 : -var_10)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 += -14222;
                                arr_15 [i_0] = ((var_11 ? -36230 : (arr_3 [10] [i_2])));
                            }
                        }
                    }
                    var_20 = ((((((arr_12 [i_1] [10] [i_2 + 1] [4]) ? 51 : var_12))) && ((((~-14224) ? var_14 : (((arr_1 [i_0]) & 6874)))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_18 [i_0] [i_5] = (arr_13 [i_0] [i_0]);
                    var_21 = ((-((((max(6755399441055744, (arr_9 [13])))) ? (((arr_9 [5]) ? 3 : var_3)) : (~91)))));
                    arr_19 [i_5] [2] [i_5] [i_5] = var_9;
                    arr_20 [10] [i_1] &= (arr_17 [i_0] [10] [i_5]);
                    var_22 = (~33963);
                }
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
