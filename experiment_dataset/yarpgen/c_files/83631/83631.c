/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(-94, ((1533334930 ? var_7 : var_10)))) > var_0));
    var_15 = ((var_1 | ((((((var_4 ? 4008436267 : var_7))) ? ((min(var_10, var_12))) : ((min(0, -120))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((1660111648 ? (((((max(var_3, var_5))) ? ((10 ? -115 : (-2147483647 - 1))) : var_12))) : ((-((var_3 ? 2462000215 : 115))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [7] [i_1] = (max((~-112), (((arr_0 [i_2] [i_3]) ? var_8 : (((!(arr_7 [i_1] [i_1] [i_1]))))))));
                            var_17 = var_1;
                            var_18 = (min(var_18, (min(((~(arr_4 [i_0] [i_0]))), (22929 | 66)))));
                        }
                    }
                }
                arr_10 [i_1] = ((((min((arr_6 [i_0] [i_0] [i_0 + 1]), (arr_6 [i_0] [i_0] [i_0 + 3])))) ? -var_0 : (((var_7 / 22) ? ((var_5 ? 2646736260 : var_9)) : ((4294967295 ? 4294967277 : 15113))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_1] = var_6;
                            arr_19 [i_0] [i_1] [i_4 + 1] [i_1] = var_7;

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_22 [i_0] [i_4] [i_4] [15] [i_1] [i_6] [i_0] = ((!((((4 ? var_12 : 6048418014025754976)) != (~var_3)))));
                                var_19 ^= ((9794 / ((var_1 ? (((arr_11 [i_1] [i_4] [i_5]) * var_11)) : -110))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 100;
                                arr_24 [i_1] [i_5] [i_1] = ((!(~var_4)));
                                arr_25 [i_1] [i_4] [i_5] [i_1] = (((arr_20 [i_1] [i_4 + 1]) << (((19 + var_11) - 1275183048))));
                            }
                            var_20 ^= var_8;
                        }
                    }
                }
                var_21 = -20;
            }
        }
    }
    var_22 = (min(var_22, (((!var_11) || 270215977642229760))));
    #pragma endscop
}
