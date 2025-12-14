/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_3 ? var_11 : var_11)))) ? ((((var_12 > var_12) ? var_11 : ((min(var_16, var_12)))))) : ((127 ? (((var_11 ? -1892606367766848373 : 1208551240))) : var_7))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = ((var_5 || ((min(((max(var_16, var_8))), ((var_16 ? var_7 : var_14)))))));
        var_19 -= (arr_0 [i_0] [19]);
        var_20 = (min(var_20, 6782016652760952921));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_21 = (arr_4 [i_1]);
            arr_8 [i_1] [i_1] [i_1] = (((var_14 <= -122) ? (122 > -100) : -var_16));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [i_1] = ((15 / (var_3 / var_10)));
                        var_22 = ((-80 != (var_15 / var_2)));
                        var_23 -= var_6;
                    }
                }
            }
            var_24 = ((98 ? ((min(8605, 255))) : 312584806));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_1] [i_1] = ((-((max((arr_10 [i_1]), 85)))));
            var_25 -= (max(var_2, var_14));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_26 = (var_15 + var_2);
                            var_27 = ((((max(((2520939075182895666 / (arr_13 [i_1] [i_5] [i_6] [i_7] [i_8 + 1] [i_1]))), -106))) ? ((-(var_13 / var_2))) : (48 <= 7992161469776592555)));
                            arr_28 [i_1] [13] [i_1] [i_1] [i_1] = (arr_7 [i_5] [i_8]);
                        }
                    }
                }
            }
            var_28 = (max(var_28, -81));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            arr_31 [23] [i_9] [i_1] = (max(-var_3, ((-(arr_0 [i_1] [i_1])))));

            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                var_29 = (arr_5 [i_10]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_30 = (max(var_30, ((((var_4 ? (min(var_0, 127) : var_16)))))));
                            var_31 = (min(var_31, 127));
                        }
                    }
                }
                var_32 = (max((max((arr_35 [i_1] [i_9] [i_10] [i_1] [i_1]), ((min(var_4, 98))))), var_15));
                var_33 = min(-60, 1418926276);
            }
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_34 = (max(var_34, (((((max((18446744073709551615 <= -70), (max(1608039274006872731, -45))))) ? 32767 : ((~(((arr_23 [i_1] [i_9] [i_13 - 1] [17] [i_14]) ? 14017 : var_9)))))))));
                    var_35 = (max(((((arr_33 [i_1] [i_9] [4]) - 15))), ((min(46, 44)))));
                }
                for (int i_15 = 3; i_15 < 23;i_15 += 1)
                {
                    var_36 = 127;
                    var_37 = (min(var_37, ((min(var_0, (((arr_35 [22] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_9]) ? (arr_35 [4] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_9]) : var_12)))))));
                    var_38 = ((((min(127, 98))) ? ((88 ? 85 : 2147483647)) : ((-(~98)))));
                    var_39 = (((2147483647 ? (arr_27 [i_1] [i_9] [i_1] [i_15 - 3] [i_9] [i_13 + 1]) : var_0)));
                    var_40 = (max(var_40, (arr_39 [i_13] [i_13] [i_13 - 1] [i_13 + 1])));
                }
                for (int i_16 = 2; i_16 < 22;i_16 += 1)
                {
                    var_41 = var_5;
                    var_42 = ((87 ? -81 : 2941628292287233688));
                    var_43 = (arr_29 [i_13 + 1] [i_13 + 1] [i_13]);
                }
                arr_52 [i_1] [i_1] [i_1] [i_1] = ((max((((var_8 || (arr_5 [i_9])))), var_10)));
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
            {
                var_44 = var_2;
                var_45 = 1661390781252648987;
            }
            for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
            {
                var_46 -= (((-127 - 1) ? 23 : 121));
                var_47 = (min(var_47, ((((((arr_25 [i_1] [3] [i_18]) + var_9)) != ((18446744073709551615 ? 13 : 1224678450)))))));
                var_48 = (max(var_48, (~937869790)));
            }
            arr_59 [i_1] [i_1] = (((arr_2 [i_1] [11]) ? ((102 ? 81 : (min(-120, var_10)))) : ((min((max(3357097490, 3561186982)), ((var_0 ? var_5 : var_12)))))));
        }
        arr_60 [i_1] = (min((!var_0), (max((arr_36 [i_1] [14] [i_1] [i_1] [i_1]), var_14))));
        arr_61 [2] &= ((((max(-2147483633, 32740))) ? (((var_11 | var_8) & (((var_13 & (arr_7 [i_1] [5])))))) : (((min(-20341, (3883748643 > -109)))))));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
    {
        var_49 = (min(var_49, -11360));
        var_50 = (max(var_50, ((((((var_7 ? (120 <= var_0) : 4285501302))) ? (((2 < ((~(arr_10 [10])))))) : (-1196384433 > 135))))));
    }
    var_51 = var_12;
    #pragma endscop
}
