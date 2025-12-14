/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [10] = (arr_1 [i_0]);
        var_15 = (max(var_15, ((max(((~(max((arr_0 [i_0] [i_0]), var_12)))), ((min(-1557631389, 0))))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_16 = ((((((!var_14) < var_11))) >> (((1685004974176431541 / 205) - 8219536459397225))));
            arr_9 [i_1] = var_9;
            arr_10 [i_2] = (max((min((4582868840909400236 | 23425), ((max(var_10, 231166392))))), (arr_4 [i_1 + 3])));
        }
        var_17 = (~-13486);
        arr_11 [i_1] = (((!(arr_4 [i_1 - 1]))));
        var_18 -= (max(var_11, 28627));
        var_19 ^= (max(((max(((max((arr_4 [i_1]), var_13))), -1557631389))), (max(var_11, (((arr_7 [i_1]) ? (arr_5 [i_1] [i_1]) : 3893796967))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = (arr_7 [i_3 - 1]);
        arr_14 [i_3] = (((arr_4 [i_3]) / 1046242080));

        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            arr_17 [1] = (arr_13 [i_3 - 1]);
            arr_18 [i_3] [0] = (((arr_8 [i_3] [i_4]) && (((-113 ? (arr_4 [i_4]) : 186)))));
        }
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_21 = (((arr_21 [i_3 - 1] [i_5 - 1] [i_5 + 2]) >> (var_6 - 4212739546242453734)));
            var_22 = ((!(arr_19 [i_5] [i_5])));
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_23 = (((arr_8 [i_3 - 1] [i_3]) | 228));
            arr_25 [i_3 - 1] [i_6] [i_6] = ((!(!6558127601837925674)));

            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                arr_30 [i_3] [i_6] [i_6] [i_7 - 1] = ((!(((var_6 ? var_12 : 4863362160396944498)))));
                arr_31 [i_6] = (arr_6 [i_6 + 2]);
                var_24 += (((arr_8 [i_3] [i_7]) ? (arr_23 [i_3 - 1]) : 44180));
            }
        }
        var_25 = (-121 >= var_7);
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (arr_26 [i_8 - 1] [i_8] [i_8] [14])));
        var_27 ^= (arr_5 [i_8 - 1] [i_8 - 1]);
        arr_36 [i_8] [6] = ((min((arr_19 [0] [i_8]), var_2)));
        var_28 = (min(var_28, ((((((((min((arr_35 [i_8]), 12170828479093096718))) && ((((arr_5 [i_8] [i_8]) >> (((arr_13 [i_8 - 1]) - 40752)))))))) < var_3)))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    arr_46 [i_10] [i_10] [i_10] [i_10] = (max((((((arr_43 [i_11] [i_10] [i_9]) + 2147483647)) >> (((arr_43 [i_9] [i_10] [i_11]) + 2158)))), var_0));
                    var_29 = 11533;
                    var_30 = (min(var_30, (arr_4 [i_9])));
                    arr_47 [i_10] [i_10] [i_11] = (max((min((arr_39 [i_10]), var_8)), var_13));
                }
            }
        }
    }
    var_31 = ((((max(var_11, var_11))) ? var_4 : ((((!(((var_11 ? 1415016880 : 11525)))))))));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] = (arr_6 [i_12]);
        var_32 = (max(var_32, (((arr_48 [i_12] [i_12]) && (((-29 ? 18550 : var_0)))))));
        arr_51 [i_12] = (((arr_7 [i_12]) / 2180349243052333523));
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_33 ^= ((min(var_6, var_9)));
        arr_54 [i_13] [i_13] = ((238 ? ((min(7662, (arr_4 [i_13])))) : ((max((arr_4 [i_13]), var_13)))));
        var_34 = ((min(var_6, ((max(117, -2087097723))))));
        arr_55 [i_13] = (((max(((2739694242 ? -8501 : 12169)), (arr_42 [i_13] [i_13]))) / (((((arr_4 [i_13]) && 186)) ? 7662 : (max(1557631388, -63))))));
    }
    for (int i_14 = 3; i_14 < 16;i_14 += 1)
    {
        var_35 = ((((arr_48 [i_14] [i_14]) ? (((min(-68, (arr_57 [i_14] [i_14]))))) : (arr_7 [i_14]))));
        arr_58 [i_14] = (max(((((arr_53 [i_14]) ? ((-(arr_52 [18] [18]))) : (arr_52 [i_14] [i_14])))), (max(((var_7 ? var_0 : 172277765)), (((var_11 >> (62688 - 62683))))))));
    }
    for (int i_15 = 1; i_15 < 7;i_15 += 1)
    {
        var_36 = var_3;

        for (int i_16 = 3; i_16 < 6;i_16 += 1)
        {
            var_37 = (max(((((var_1 ? var_5 : (arr_6 [i_15 + 3]))) | ((((!(arr_41 [14]))))))), (!12864162659135008178)));
            var_38 = (min(var_38, ((((((arr_23 [i_16]) >> (((arr_7 [i_15 + 3]) - 1148397010))))) ? (max(-16162, ((min(var_8, 31))))) : (((!(arr_13 [i_16]))))))));
        }
        for (int i_17 = 1; i_17 < 8;i_17 += 1)
        {
            var_39 = var_11;
            arr_69 [i_17] = (arr_57 [i_15] [i_15]);
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            arr_73 [i_18] = (var_5 | 979576356);
            var_40 = (max(((max((var_12 | -995312706), ((max((arr_35 [i_18]), var_7)))))), (!var_10)));
            arr_74 [i_18] = (((min((arr_39 [i_18]), (arr_39 [i_18]))) | (((((arr_39 [i_18]) && (arr_39 [i_18])))))));
            arr_75 [i_18] = (arr_2 [i_15] [i_18]);
            arr_76 [i_18] = -23186;
        }
    }
    var_41 ^= var_2;
    #pragma endscop
}
