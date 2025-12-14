/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_1] = 28;
                            var_17 = ((-((~(1 ^ 1)))));
                            arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_3] = (~(~1));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_18 = (((!454188497) ? (!0) : (!-1960503030)));
                                var_19 = (max(var_19, (!-1)));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_20 = 1;
                                var_21 = ((~(28759 / 1)));
                            }
                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                var_22 = ((1322581487 ? ((~(-1 / -6904))) : 1));
                                var_23 = (min(var_23, ((((409974529 != (~1))) ? 237 : ((~(-1 & -12)))))));
                                var_24 = (min(var_24, ((((~-2029092577) ^ ((-1 ? -18103326876375024869 : (-2147483647 - 1))))))));
                                var_25 = (((((1454489102 ? 0 : 32754))) && 4682727580807995796));
                            }
                            var_26 = 1;
                        }
                    }
                }
                arr_21 [i_1] [i_1] = (+-8);
            }
        }
    }
    var_27 = (((((!254) ? (!3269589727) : (!6891))) < var_14));
    var_28 *= (~-944000322);
    #pragma endscop
}
