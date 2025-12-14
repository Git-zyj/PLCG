/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = ((!((((4664994880067159809 < 54580) ? ((var_3 >> (var_6 - 41866))) : var_9)))));
    var_16 = (min((var_9 | var_8), var_4));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [17] = ((~1) ? var_8 : -6212453054919583135);

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] = ((((((var_7 + 9223372036854775807) >> (((arr_0 [i_0 - 1] [i_1 + 3]) + 4980))))) ? ((-1759711862754101200 ? 2278359459346237468 : 65171871)) : ((min(var_1, var_10)))));
            arr_8 [11] = 65171861;
            arr_9 [16] = var_7;
            arr_10 [i_0] = (arr_2 [i_1] [18]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_17 [5] [i_2] [i_3] = var_0;

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_22 [15] [i_3] [i_4] = (arr_12 [19]);
                    arr_23 [18] [3] [i_2] [i_3] [9] = (arr_14 [i_0] [i_0] [i_4] [i_4]);

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_27 [i_0] [1] [i_3] [i_4] [i_4] [i_5] = (~-65171871);
                        arr_28 [i_2] = ((4664994880067159809 < ((((min(var_3, var_11)))))));
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_32 [7] [i_6] [9] [i_6] [21] = (min(1, (arr_1 [i_6])));
                    arr_33 [i_0] [i_2] [i_2] [i_2] [i_3] [i_6] = var_12;
                    arr_34 [i_0] = max(0, -518229339);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_37 [i_0] [i_0] [i_7] = (((min(6525490339708632737, var_10)) < ((((arr_19 [i_0]) << (((arr_19 [i_3]) - 2326)))))));
                    arr_38 [i_3] [22] [1] [i_2] [6] [i_7] = ((~((var_9 ? ((7558974055745657761 ? var_12 : var_8)) : 208))));
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    arr_41 [i_0] [i_8] [i_2] [i_0] [1] = (arr_36 [i_8 - 2] [i_8] [i_8] [i_0 - 3] [i_8] [i_0]);

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_44 [i_0] [i_8] [i_8] [i_0] [i_9] [i_2] = var_2;
                        arr_45 [i_0] [i_2] [i_0] [i_8] [i_8] = (((!(arr_36 [i_9] [i_8] [i_0] [i_0] [i_8] [i_0]))));
                    }
                    arr_46 [i_2] [16] [i_3] = ((!((((arr_39 [i_8 - 2]) ? var_5 : (arr_39 [i_3]))))));
                }
                arr_47 [1] [1] = ((~((var_8 ? (arr_11 [i_2] [i_2]) : (max(8715652, 65535))))));
                arr_48 [i_0] [i_2] [3] = ((var_8 ? (arr_4 [i_0 - 2] [17] [i_3]) : ((((min(var_2, var_4))) ? var_11 : var_1))));
            }
            arr_49 [4] [i_0] = (((((2778524 ? -250236442 : (arr_43 [i_2] [i_2] [1] [i_2] [i_0 + 2] [i_2]))))));
        }
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            arr_52 [i_10] = (arr_16 [i_10] [6] [2]);
            arr_53 [i_0] [i_0] [i_10] = (((var_3 ? ((193 ? var_6 : var_9)) : (65171871 / var_13))) >> (((arr_26 [i_0] [9] [i_0] [14] [i_0 + 2] [i_10 - 1]) + 55)));
            arr_54 [i_0] [i_0] [i_10] = (min((min((arr_18 [i_10] [i_10 - 1] [14] [21]), ((var_2 ? var_13 : (arr_31 [i_10] [i_0]))))), 2147483629));
        }
    }
    #pragma endscop
}
