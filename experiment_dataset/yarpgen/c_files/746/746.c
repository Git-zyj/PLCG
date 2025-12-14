/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max((min(var_0, var_0)), (46740 && 18795))) >= var_4));
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = var_6;
                arr_8 [6] = var_3;
                arr_9 [i_0] [i_1] = (max(var_8, (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [3] |= max((~55846), var_1);
                            arr_17 [i_3] [i_2] [17] [i_1] [i_0] = ((~(min(((var_7 ? 0 : (arr_14 [i_0] [i_1] [i_1] [i_3]))), 114))));
                            arr_18 [i_3] [i_1] = ((~((((arr_1 [i_1]) > (arr_1 [i_0]))))));
                            arr_19 [i_0] [i_1] [i_0] [i_1] = ((!(((max(46733, var_2))))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_3] [11] = 1497098718;
                                arr_23 [i_0] [i_0] [i_2] [i_2] [16] = (max((max(((var_9 >> (var_7 - 91))), ((18795 >> (var_8 - 1751688290))))), var_6));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_2] [i_2] [12] [i_5] = (((max((var_1 || var_9), (var_10 || var_7))) || var_6));
                                arr_27 [i_0] [19] [i_2] [i_3] [i_5] = ((var_7 ? (!4028668012) : (~var_6)));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0] = (((var_7 * var_7) ^ ((46735 ? (arr_11 [i_0] [i_0]) : var_5))));
                                arr_29 [i_1] [7] [i_0] [i_1] [i_0] = 57886;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                arr_32 [i_0] [i_1] [i_2] [i_0] [i_6] = var_8;
                                arr_33 [i_6] [i_3] = 4028668013;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
