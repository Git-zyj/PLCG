/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (min(var_14, ((max(var_11, (((arr_2 [i_0 - 1]) + (min(var_4, var_0)))))))));
        var_15 *= (((max(((min(52947, -67))), var_1)) & (((((max(var_9, -35))) <= ((var_1 ? (arr_2 [1]) : -11)))))));
        var_16 -= ((-((-((-(arr_1 [i_0 + 1])))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_17 = (min(var_17, ((((((max((arr_4 [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 + 1]))))) > (min(var_10, (((var_8 ? var_11 : (arr_4 [i_1] [i_1 - 1])))))))))));
        var_18 = (~52947);

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_19 = var_5;
            var_20 = (arr_6 [i_1] [i_1] [i_2]);
        }
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_1] = ((!(!var_12)));
            var_21 = (min(var_21, var_12));

            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                var_22 = (min((arr_9 [i_1] [i_1]), ((((-96 ? var_2 : var_10)) | (min(var_6, var_5))))));
                arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [24] |= var_11;
                arr_16 [i_1 - 1] [i_1 - 1] [i_1] [i_1] = (arr_8 [i_1]);
                var_23 += -108;
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    var_24 = ((((~((var_6 ? var_4 : var_13)))) == (min((arr_20 [i_6] [i_1] [i_1] [i_1]), ((var_1 ? var_7 : var_7))))));
                    arr_21 [i_1] [19] [i_1] [i_1] [i_1] = arr_19 [i_6] [i_1] [i_5] [i_1] [i_1] [i_1];
                }
                arr_22 [i_1] [i_1] = var_10;
                var_25 = (((var_11 && var_4) ? var_13 : ((((var_11 && (var_13 || var_10)))))));
            }
            arr_23 [i_1] [i_3 + 1] [2] &= (min(var_9, var_7));
        }
    }
    for (int i_7 = 4; i_7 < 22;i_7 += 1)
    {
        var_26 = ((min((arr_14 [i_7] [i_7] [i_7 - 3]), (arr_6 [i_7] [i_7] [i_7 - 4]))));
        arr_27 [i_7 - 3] = (min((max((arr_7 [i_7 - 4] [6]), var_5)), (((var_12 ? var_0 : (arr_7 [i_7 - 2] [i_7]))))));
        var_27 = (max(var_27, ((min(12601, (!var_3))))));
        var_28 -= (((((((min(52937, (arr_10 [i_7] [i_7] [i_7]))))) + ((var_3 >> (var_3 - 12623482733047276760))))) + var_5));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            var_29 = var_5;

            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                arr_39 [i_8] [i_8] [i_8] [9] = (((arr_38 [5]) ? (((arr_29 [9] [9]) ^ (arr_26 [i_8]))) : var_8));
                var_30 = (min(var_30, var_6));
                arr_40 [1] [i_8] = arr_17 [i_8];
            }
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                var_31 = (min(var_31, var_9));
                arr_43 [i_8 + 1] [i_8] [i_11] = var_6;
                var_32 = ((var_0 ? (arr_26 [i_8 + 1]) : var_0));
                arr_44 [i_11] [i_9] [i_11] = ((-(((arr_34 [i_8] [16]) << (var_9 + 80)))));
            }
        }
        arr_45 [0] [17] = ((!(!95)));
    }
    var_33 = var_5;
    #pragma endscop
}
