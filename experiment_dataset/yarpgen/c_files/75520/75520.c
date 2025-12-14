/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = (((min(var_5, ((3968 ? var_10 : -1955755567)))) > (max(var_10, (((-32767 - 1) ? -3969 : 255))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [8] [i_1 - 3] [i_0] = ((((min(240, ((1495267125 / (arr_2 [i_0] [i_0] [i_0])))))) ? ((var_6 ? (arr_3 [i_1 - 4]) : var_6)) : (var_16 | var_13)));
                var_20 = (min(var_20, ((max((min((arr_0 [i_0]), (((arr_0 [i_1]) ? var_8 : var_15)))), ((var_14 ? var_6 : var_17)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_2] = (((((var_0 ? var_3 : var_1))) ? (((max(9, -3969)))) : (min(var_4, (arr_0 [i_2 + 1])))));
                var_21 = (((((((min(var_14, var_2))) ? (arr_1 [i_2 + 1]) : (arr_8 [i_2])))) / (min(7113975219197641917, var_12))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_22 = (10821041591467296185 ? (min(((255 ? -15950 : var_4)), ((max(107, var_2))))) : (min(var_14, (arr_3 [12]))));
                            var_23 = (min(((((arr_19 [i_6 - 1] [i_6 - 1] [i_4] [i_6]) ? 31770 : (arr_19 [i_6 - 2] [13] [i_4] [i_6])))), (max(var_17, var_14))));
                            arr_22 [i_6] [i_4] = ((((arr_2 [i_5 - 1] [i_5 + 1] [i_6 + 3]) ? (arr_2 [i_5 + 1] [i_6] [i_6 + 1]) : (arr_2 [i_5 - 1] [i_5 - 1] [i_6 + 2]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_31 [i_4] [i_4] [i_8] = ((((max(-107, (arr_30 [i_9 - 3] [i_5 - 1])))) ? (((-32767 - 1) ? var_4 : var_17)) : (((arr_30 [i_9 - 2] [i_5 + 1]) ? 10681999266907953188 : var_10))));
                            var_24 = (max(var_24, ((min(((max(-901068728, -119))), ((-2002 ? var_15 : -7285974231898678363)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_25 ^= max((((min(var_0, var_16)) & var_8)), ((((min(var_12, var_1))) ? (arr_3 [i_10 - 1]) : ((((arr_32 [i_12] [i_12] [i_12] [i_12]) ? var_5 : (arr_34 [i_11] [i_11] [20])))))));
                                var_26 = (min(var_26, (((((14 ? 58 : var_14))) ? (((-68 && (arr_35 [14] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])))) : (min((arr_26 [i_11]), ((var_4 ? -31760 : 21))))))));
                            }
                        }
                    }
                }
                var_27 |= (((((-20 ? var_1 : var_9))) ? (1 | var_10) : (arr_18 [8])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            arr_46 [i_4] [i_5 + 1] [i_5 - 1] [i_5] = ((((((min(244, var_15))) ? var_0 : (var_13 % var_17)))) ? (((arr_21 [i_4 + 1] [i_5 + 1] [i_5]) ? -23024 : (((var_13 ? var_3 : var_2))))) : (min(7764744806801598422, (arr_34 [i_4] [i_5 + 1] [i_5 + 1]))));
                            var_28 = ((((min(((var_7 ? 586051003613520095 : 1)), 1152920405095219200))) ? ((min(var_5, (arr_21 [i_5 + 1] [i_5 - 1] [i_13])))) : (var_5 > var_5)));
                            arr_47 [i_4 + 1] [i_4] [i_4] [i_4 + 1] = ((((min((arr_23 [i_4] [i_5 + 1] [i_14]), 2899367013))) ? (min(var_16, var_11)) : (arr_23 [i_4 - 1] [i_4] [i_4 - 4])));
                            var_29 = (min((max(((-27124 ? (arr_0 [i_4 + 1]) : 25)), var_0)), ((((((min(var_0, 30376)))) != (min((arr_16 [i_5] [i_13]), (arr_23 [i_4] [6] [i_14]))))))));
                            arr_48 [i_4 - 1] [i_4 - 1] [i_4] [18] = (((arr_26 [i_4]) ? (max((arr_26 [i_4]), 36028797017915392)) : (((max(-32748, 29833))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
