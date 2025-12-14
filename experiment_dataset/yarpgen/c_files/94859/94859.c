/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((var_12 ? (arr_13 [i_3 - 1] [i_1] [i_3 - 1] [i_1] [14]) : ((min(1, -110))))))));
                                var_17 = (((min(var_2, var_14)) < (((-(arr_6 [i_0] [i_1] [i_0]))))));
                                var_18 = (max(32118, (~1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 = ((1 ? 1073741824 : 1));
                                var_20 += (arr_20 [8] [8] [i_2] [i_5 - 1] [i_6] [i_2] [i_2]);
                                var_21 += ((-110 ? 1 : 32118));
                                arr_22 [i_0] [i_1] [11] [i_5] [i_0] = var_9;
                                var_22 -= ((((((var_11 ? var_0 : var_3))) || (arr_9 [i_0] [i_1] [i_0] [i_5] [i_5]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((((var_9 + 37) ^ (min(2155875879, -115))))) ? ((var_3 ? var_9 : (32118 <= -8340019015541287660))) : var_15));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_34 [i_7] [i_10] [i_8] [i_7] = ((var_2 && (((((((arr_25 [1] [i_9]) ? var_9 : (arr_33 [i_8 + 1] [17] [i_10 + 3] [i_10] [i_10] [8])))) ? (((min(var_5, var_10)))) : 0)))));
                            var_24 = (((arr_28 [i_7]) ? (max((arr_25 [i_7 - 1] [i_7 - 1]), (49253 ^ 0))) : (arr_26 [i_7])));
                            var_25 = ((1 ? -8340019015541287660 : (-1 <= 0)));
                        }
                    }
                }
                var_26 = (min(var_26, ((((((((var_5 ? var_13 : -38))) ? (((var_1 ? var_10 : var_12))) : (arr_27 [i_7 - 1] [i_7 - 1]))) / (((-((-13779 ? -21044 : 3691289984))))))))));
                var_27 -= 0;
            }
        }
    }
    var_28 -= (((((((var_13 ? 13740 : var_5))) ? (var_6 < 7787411188891652917) : (!-120)))) ? ((((var_8 ? var_6 : var_1)) * (var_12 % var_15))) : ((((var_6 / var_12) * 14068))));
    #pragma endscop
}
