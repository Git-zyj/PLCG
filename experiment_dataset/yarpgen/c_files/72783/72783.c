/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = ((3961367753088912607 | ((max(1448893478689781801, 3583146617)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_4] = (0 < -82);
                                arr_17 [i_0] [2] [i_2 - 2] = (max(3961367753088912626, ((var_4 & (arr_1 [i_0] [i_0 + 2])))));
                                var_14 = (((-(arr_14 [5] [22] [22] [i_4]))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_0] = (min((arr_7 [i_1] [i_0] [i_0]), (max((arr_0 [i_1]), (arr_3 [22] [i_0])))));
                var_15 &= (max(3961367753088912607, (arr_8 [i_0] [i_0] [i_1] [i_1])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((min(2015740656243859229, (arr_5 [i_0 - 3] [i_0 + 3])))))));
                                var_17 = (min(var_17, (((var_7 ? (((min((arr_22 [i_1] [i_5]), -32767)) >> (((~14485376320620639022) - 3961367753088912567)))) : (((3181601091 ? 2 : 242))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = (min((((var_4 | var_4) | (((min(70, var_3)))))), ((((var_1 - 6) && ((min(var_5, 249))))))));
    var_20 = var_6;

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_29 [i_8] = ((!(((((arr_25 [3]) - 198))))));
        var_21 = (((2147481600 - 1) ? ((max((arr_27 [i_8] [i_8]), (arr_27 [i_8] [i_8])))) : ((max((arr_27 [i_8] [i_8]), 1)))));
        var_22 = ((+(max(((((arr_15 [2] [16] [18] [i_8] [6]) <= (arr_6 [1])))), ((-17612 ? (arr_20 [i_8]) : (arr_13 [i_8])))))));
    }
    #pragma endscop
}
