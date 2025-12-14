/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = arr_2 [i_0];
            arr_5 [i_0] [i_1] = -994014891;
            var_12 = (!var_1);
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_13 = 1622743445;
            arr_8 [i_0] [i_0] [i_2 + 1] = ((!((((arr_1 [i_2 - 2] [i_2 - 2]) ? var_7 : (arr_1 [i_2 + 2] [i_2 + 1]))))));
            arr_9 [i_2] = (~(~var_6));
        }
        arr_10 [i_0] = ((((~(~-1622743445)))) ? (((~var_4) ? ((-(arr_2 [i_0]))) : (arr_1 [i_0] [16]))) : (((arr_6 [i_0] [i_0]) ? var_6 : (arr_2 [i_0]))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_14 = (min(((-(arr_15 [i_4]))), (max((arr_2 [i_3]), (~-1622743445)))));
            var_15 = (var_11 ? (min(((~(arr_1 [i_3] [i_4]))), (((-1622743445 - (arr_0 [i_3] [i_4])))))) : 1622743445);
        }
        var_16 = (max((((!(arr_2 [i_3])))), (arr_2 [i_3])));
        var_17 = (((((!(~var_11))))) - (((~var_0) ? (~var_1) : (arr_15 [i_3]))));
        var_18 = max((2303611366436988038 != var_0), (arr_12 [i_3] [i_3]));
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_19 = arr_17 [i_5];

        for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                var_20 = -3248969;

                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    var_21 = (~var_3);
                    var_22 = (+(min((arr_25 [9] [i_7 + 1] [i_5] [i_6] [i_5 + 2]), (arr_19 [i_5] [15]))));
                }
            }
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                var_23 = max((!5090966938927087911), (arr_16 [0] [0]));
                var_24 = (-1622743465 ? var_7 : ((~((9870181893801725263 << (-1548968978 + 1548969003))))));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_25 += -342303298;
                var_26 = (~((~(arr_28 [i_5 - 1] [i_6] [i_6 - 1]))));
                var_27 = (arr_24 [i_5 - 1] [i_6] [i_5 - 1] [1]);
            }
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                var_28 = (1622743445 < -1);
                var_29 = (-1 ? var_4 : var_5);
                arr_35 [i_5 - 3] [i_5] [i_11] [i_11] = ((!(arr_6 [i_5] [i_6])));

                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    var_30 = (max((18006370600073701638 || var_9), (max((arr_30 [i_5] [i_5] [i_5 - 3] [i_5 - 3]), var_11))));
                    arr_39 [i_5 + 2] [i_6] [i_5] [i_12] [i_5 + 2] = (arr_26 [i_5 + 3] [i_5]);
                }
            }
            var_31 = -1622743446;
        }
        for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
        {
            arr_44 [i_5] [i_13] [i_5] = (((~16143132707272563566) < ((((!(arr_32 [i_5 + 2] [i_5] [i_5] [i_5])))))));
            var_32 = (max(var_32, 1622743437));
            var_33 = (min(var_33, -1622743465));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_34 -= (~var_4);
            var_35 = var_10;
            var_36 = (((arr_43 [14] [i_14]) ? (arr_43 [i_5 - 3] [i_14]) : 2147483647));
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    {
                        var_37 = arr_0 [i_14] [i_15];
                        var_38 = (max(var_38, var_2));
                        var_39 = (!var_0);
                    }
                }
            }
        }
        var_40 = ((((((~(arr_48 [i_5] [i_5])))) ? var_7 : 11278748175557425796)) / ((~(arr_21 [i_5]))));
        var_41 = (min(var_41, (((((var_0 ? var_4 : -2147483641)) < (min(var_4, 270582939648)))))));
    }
    var_42 |= ((!((((!var_0) ? (max(var_1, var_5)) : var_10)))));
    var_43 |= (((((((var_4 ? var_7 : var_3))) ? var_8 : (max(var_11, var_9)))) >= var_6));
    #pragma endscop
}
