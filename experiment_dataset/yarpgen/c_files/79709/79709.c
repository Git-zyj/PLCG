/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(var_11, var_4));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = (max((var_3 * -17201), (max((max(var_11, var_4)), -2048879606))));
            arr_7 [i_0] [i_1] = var_3;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = ((!(((17201 ? 327828600 : ((var_3 ? var_8 : 8357463730791733812)))))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_15 = ((~((~((-1610830666 ? (arr_13 [i_0] [i_2]) : 17201))))));
                arr_14 [i_0] [i_0] [i_2 + 2] [i_3] = (((((~((var_3 / (arr_1 [i_0] [i_0])))))) ? var_9 : 5172950463192276887));
                arr_15 [i_3] [i_0] [i_0] [i_0] = ((arr_13 [i_2 + 2] [i_2 + 2]) ? (57683 >= -82) : (max((arr_13 [i_2 + 1] [i_2 + 1]), var_0)));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_16 = (24128 & var_5);
                    arr_22 [i_0] [i_4] = ((var_9 + (~8357463730791733812)));
                    var_17 = var_13;

                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        arr_26 [i_0] [i_5] [i_4] [i_4] [i_2] [7] [i_0] = (((!var_11) / ((1 ? var_8 : -6749))));
                        arr_27 [i_0] [11] [i_0] [i_5] = var_3;
                    }
                    arr_28 [i_0] [8] [i_4] = (57 % 40080);
                }

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    arr_33 [i_0] [i_2] [i_2 - 1] [i_2] [i_2] = (!var_1);
                    var_18 = (~var_1);
                    var_19 = (!17208);
                }
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    arr_37 [i_0] [i_2] [i_0] [i_8] = ((~(~10089280342917817803)));
                    arr_38 [i_8] [i_0] [i_0] = (arr_31 [i_4] [i_2]);
                    arr_39 [i_0] [i_4] [i_2 + 2] [i_2] [i_0] = var_7;
                    var_20 = (!var_1);

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_0] = var_1;
                        var_21 = -var_2;
                        arr_43 [i_0] [i_0] [i_4] [i_8 - 2] [i_8 - 2] [9] = ((((139 ? 17196 : var_9)) | ((204 ? 16762 : -17201))));
                        var_22 = ((var_1 ^ (arr_41 [i_9] [i_8 - 2] [i_8 + 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_23 = (!var_14);
                        arr_46 [i_10] [i_0] = var_0;
                    }
                }
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_24 = (min((min(-5172950463192276887, var_9)), (((~(arr_13 [i_2 + 2] [i_11]))))));
                var_25 = (((((~(-23267 | 17223)))) ? -var_8 : ((((~(arr_1 [i_2] [i_11])))))));
                var_26 = ((~(arr_41 [i_11] [i_11] [14] [i_11] [i_11] [i_11] [i_11])));
            }
            arr_51 [i_0] = (!6722767591810399551);

            for (int i_12 = 2; i_12 < 14;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    var_27 = var_8;
                    arr_57 [i_0] [i_13] [i_13] [i_13] [i_13] [i_12] = -var_2;
                    arr_58 [i_0] = ((((max(var_11, (arr_29 [i_2 - 1] [i_12 - 2] [i_2] [i_13])))) ? (arr_4 [i_0]) : (max(6722767591810399551, (arr_24 [i_13 - 1] [i_0])))));
                    var_28 = (min(((max(-16762, (arr_8 [i_13 - 1] [i_12 - 2] [i_2 - 1])))), ((3151517484 ? var_12 : (arr_0 [i_12 - 1])))));
                }
                arr_59 [i_0] = ((min(6722767591810399551, 8750)));
            }
            for (int i_14 = 2; i_14 < 14;i_14 += 1) /* same iter space */
            {
                arr_62 [i_0] [i_0] [i_0] = (min(var_14, (arr_50 [i_14 - 2] [i_0] [i_14 - 2] [i_0])));
                arr_63 [i_2] [i_0] = (min((((max(var_9, 32532)))), (arr_20 [i_14] [i_14] [i_2] [i_0] [i_0] [i_0])));
            }
            for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
            {
                arr_68 [i_0] [i_0] = (min((((-((-11102 ? 30 : 65))))), var_10));
                var_29 = var_2;
                var_30 = (min(var_0, ((((min(var_6, -1927)) | (max(var_4, var_7)))))));
            }
            arr_69 [i_0] [i_0] = 170;
        }
        arr_70 [i_0] = -8680010937051925349;
    }
    var_31 = (max((((~((min(0, var_9)))))), var_6));
    var_32 = var_3;
    #pragma endscop
}
