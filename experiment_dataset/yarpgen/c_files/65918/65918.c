/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((max(var_10, (max((-9223372036854775807 - 1), var_1))))), (max((min(576460743713488896, 193845686288184780)), var_8))));
    var_13 = ((var_3 | 15469022932225201672) ? var_2 : (!3701));
    var_14 = ((var_3 == ((var_11 ? ((var_8 ? var_6 : -576460743713488896)) : (((min(6, 57344))))))));
    var_15 = (min(var_15, ((max(49152, 768)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = -20256;
                var_16 = ((576460743713488889 << ((((+(max((arr_2 [i_0]), (arr_3 [8] [i_1]))))) - 4118134616))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_17 = 576460743713488905;
                                var_18 ^= var_1;
                            }
                            for (int i_5 = 1; i_5 < 10;i_5 += 1)
                            {
                                arr_16 [i_5] [8] [i_2] [i_0] [i_0] = (arr_3 [i_5] [i_3]);
                                arr_17 [i_0 - 1] [6] [i_1] [9] [9] [i_5] [i_5] = arr_4 [i_0] [i_1 + 1];
                                var_19 = (max(var_19, 0));
                                arr_18 [i_0] [i_2] [i_3 - 2] [i_3 + 1] [i_3] = (((arr_12 [i_5] [i_3] [i_3] [i_2] [i_1] [i_0]) ? (arr_0 [i_0] [1]) : (4732722652906880704 | -4104556163050906589)));
                                var_20 = (min(var_20, var_7));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                var_21 = (((~61) ? (arr_15 [i_0 - 1]) : var_6));
                                arr_22 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((0 ? -4732722652906880698 : (arr_10 [i_6 + 1] [i_6 + 1] [i_3] [i_0 - 3] [i_0 - 3] [i_0 - 3])));
                            }
                            arr_23 [7] [i_3 + 1] [i_3 + 1] [i_3] [i_3] = (min(((~(min(1, (arr_0 [i_0] [i_2]))))), ((((((var_4 ? var_6 : var_7))) ? -255 : 298940282)))));
                            var_22 = (min(var_22, (((209 ? 43381 : (arr_9 [i_0] [1] [i_2] [1]))))));
                            arr_24 [0] [i_1 + 1] [i_2] [i_3] &= (arr_14 [i_3 - 2] [i_3] [i_2] [i_1] [i_0 - 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
