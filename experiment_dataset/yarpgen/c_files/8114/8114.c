/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((-9223372036854775803 * (!32740))), (var_11 >= var_8)));
    var_21 = ((15237 ? 32740 : 65515));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] = (arr_3 [i_3] [i_1 + 1]);
                                var_22 = ((-32741 >= (-9223372036854775807 - 1)));
                                var_23 = (((((max(var_12, (!1001))))) == (9223372036854775804 - 32743)));
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_2] = ((((((-32740 ? -32755 : -6615843218514740139)) + 9223372036854775807)) << ((((max(0, (arr_6 [i_0] [i_2 - 2] [i_4])))) - 62716))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_2] [14] [14] [i_6] = (-(((arr_11 [i_2 - 1]) % (arr_11 [i_2 - 2]))));
                                arr_26 [i_6] [i_6] [i_2] [i_5] [i_2] [i_1] [i_0] = (max(((-((var_4 ? (arr_1 [i_6]) : (arr_17 [i_0] [i_1]))))), var_8));
                                arr_27 [i_2] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [11] [i_0] = (((((((max(1, 4762))) && var_19))) - (((((min((arr_17 [i_1] [i_1]), var_8))) > ((min(var_18, -122))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_35 [i_7] [i_7] [i_9] = ((((((arr_30 [i_7]) << (var_14 - 69)))) >= var_16));
                    var_24 = ((-((-(!-1)))));
                    arr_36 [i_7] [i_7] [i_7] = (min(var_14, -var_19));
                }
            }
        }
    }
    var_25 &= ((var_0 ? var_13 : var_15));
    #pragma endscop
}
