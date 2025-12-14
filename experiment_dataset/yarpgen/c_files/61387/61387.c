/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_8, var_9));
    var_21 = var_18;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_22 = (1820529784 ? var_9 : (arr_0 [i_0]));
        var_23 = (((arr_0 [i_0]) ? var_4 : (((((((((arr_2 [i_0]) != -2286103491401028119)))) >= var_4))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_24 -= (((((~(((-127 - 1) ? var_0 : (arr_1 [i_0] [1])))))) ? 1820529774 : ((var_16 ? (max(var_10, var_18)) : (max((arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2]), (arr_0 [i_0 - 1])))))));
            var_25 -= var_14;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_26 = (max(((max((arr_6 [i_0 + 2] [i_1] [i_2] [i_3]), 1304320965129265118))), ((max((arr_7 [i_0] [i_0 + 1] [i_2]), (arr_7 [i_0] [i_0 - 1] [i_2]))))));
                        var_27 -= (((-((max(var_6, var_0))))));
                        var_28 = ((((max((((1680027751 != (arr_1 [i_2] [i_3])))), (max(var_11, 1))))) ? ((((var_12 & (arr_8 [i_0] [i_2] [i_0]))) / -2286103491401028107)) : var_1));
                        var_29 = (min(var_29, var_3));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_30 = (((((max(var_1, var_5)))) ? -var_6 : (~-678097818)));
                        var_31 = (max(var_31, (arr_3 [i_0 + 1])));
                        var_32 = (min(var_32, var_2));
                    }
                }
            }
            var_33 += ((((max((arr_11 [i_0 + 2] [i_0 - 1]), (arr_11 [i_0 + 2] [i_0 + 2])))) ? (max((arr_11 [i_0 + 1] [i_0 + 1]), var_16)) : ((var_1 & (arr_11 [i_0 + 1] [i_0 - 1])))));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_34 = (max(var_34, ((max(((-((var_11 ? (arr_9 [i_0] [i_8] [12] [i_8]) : (arr_15 [i_7] [i_6 + 2] [0]))))), ((((arr_7 [i_0] [i_0] [i_0]) ? (arr_3 [i_8]) : (arr_19 [i_7] [i_6] [i_0 + 2])))))))));
                        var_35 = (((~(var_4 == 4))));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_36 = ((+(max((arr_15 [i_0 - 1] [i_7 + 2] [i_9]), (((arr_18 [i_0] [i_6 + 1]) ? (arr_21 [16] [i_9] [i_7] [i_9]) : 9187))))));
                        var_37 = (min(((((max((arr_13 [i_9] [i_7] [i_6 + 1] [i_6] [i_0 - 1]), -3127246576042894914))) ? 795679272 : 1304320965129265106)), -var_6));
                    }
                    var_38 = ((var_10 ? (arr_3 [i_0 + 1]) : (--251686881)));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_39 = (min(var_39, (((!((max(((~(arr_29 [20] [i_10]))), (arr_29 [18] [18])))))))));
        var_40 = ((-(((arr_28 [i_10]) ? ((((arr_29 [i_10] [i_10]) + (arr_28 [i_10])))) : (max((arr_27 [i_10] [18]), var_17))))));
        var_41 += var_3;
    }
    #pragma endscop
}
