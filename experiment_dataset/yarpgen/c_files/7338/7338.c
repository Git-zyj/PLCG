/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = 9510;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_2 + 3] [i_0] = (max((((((max(1, -20)))) | (max(1, 144115153716117504)))), (arr_1 [i_2 + 3] [i_1 + 2])));
                            var_16 = ((-(max((!1), 1))));
                            arr_12 [1] [i_0] [i_2 + 2] [i_3] [i_0] = (max(-32750, ((var_0 - (arr_9 [i_0] [i_0])))));

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                arr_16 [i_0] [i_4] = 32767;
                                arr_17 [i_0] [i_0] [i_2 + 3] [i_3] [15] [11] [i_2] = (((32741 % 31744) * var_9));
                                arr_18 [i_0] = (arr_10 [i_4]);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_17 *= (max((max(1, (min(var_12, var_5)))), (((((-8854 + 2147483647) << (((-13640 + 13650) - 10))))))));
                                var_18 = 32753;
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((+((max((0 > 268419072), (32749 == 0))))));
                                var_19 = (max(var_19, (((~(arr_23 [i_1] [i_1] [i_2] [i_3] [i_6] [i_1 + 1] [i_2 + 2]))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((max(var_2, 268419067))) / (max((((arr_9 [i_0] [i_6]) * 1)), var_4)));
                                arr_28 [i_0] [i_1] [i_2 + 3] [i_0] [i_6] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= ((var_0 ? ((max(1, (max(28120, -32743))))) : ((min((max(var_10, var_0)), 32749)))));
    var_21 = 1;
    #pragma endscop
}
