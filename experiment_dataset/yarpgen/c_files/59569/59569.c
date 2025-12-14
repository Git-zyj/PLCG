/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max(var_6, var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = ((var_12 ? ((((arr_1 [i_0]) ? (arr_2 [i_0]) : -19284))) : (((~var_8) ? (~var_12) : (((arr_3 [i_0]) ? 2854725449025148060 : var_9))))));
        arr_4 [i_0] = (((((max(-16058, -126)))) ? ((max(1, ((!(arr_1 [i_0])))))) : var_4));
        arr_5 [i_0] [i_0] = ((~(((~var_12) ? (~var_6) : ((~(arr_2 [i_0])))))));
        var_15 = (max(var_15, (((-1690709632040445711 ? ((var_1 ? ((166 ? -1690709632040445714 : (arr_0 [i_0]))) : ((((!(arr_1 [i_0]))))))) : ((max(((70 ? (arr_2 [i_0]) : (arr_0 [i_0]))), (~66)))))))));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_16 = ((-((-(max(1690709632040445711, 4095))))));
        var_17 = (min(var_17, ((max(1690709632040445711, (arr_6 [i_1 - 1]))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_2] = ((max(var_12, (arr_11 [i_2] [i_2 - 1] [i_2]))));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_15 [i_2] [i_2] [i_4] = ((!(!var_4)));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = ((!((max(var_5, -126)))));
                    var_19 = ((((max((arr_13 [i_2] [i_4]), (arr_11 [i_2] [i_3] [i_2])))) ? ((5823 ? -1 : 1690709632040445714)) : ((max(((-1455652336 ? 1 : 107)), (arr_7 [i_3] [i_3]))))));
                    arr_18 [i_2] [0] [i_4] [i_2 + 1] [i_4] |= 1;
                    var_20 = (min(var_20, (((!(((var_1 ? var_0 : ((max(var_1, (arr_16 [i_5]))))))))))));
                    arr_19 [i_5] [i_4] |= (max((~var_11), (max(-1690709632040445711, (arr_9 [i_4] [i_4])))));
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_26 [13] [i_3] [i_4] [i_2] [i_6] = var_12;
                            var_21 *= (max((max(var_4, 1)), ((max(1, var_9)))));
                            arr_27 [i_2] = 60604;
                            var_22 ^= 61436;
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    var_23 = -124;
                    var_24 = (max(var_24, (arr_7 [i_2] [i_4])));
                    var_25 = ((+((1690709632040445722 ? (arr_20 [19] [19] [i_4] [i_8] [i_2] [i_2 + 2]) : (arr_16 [i_2])))));
                    arr_31 [i_2] = (((-(arr_23 [i_2] [i_3] [i_3] [i_4] [i_4] [i_4] [i_2]))));
                }
            }
            arr_32 [i_2 + 2] [i_2] = ((-((((!(arr_22 [i_3] [i_3])))))));
            var_26 = (-(max((((arr_25 [i_2] [i_2] [i_2] [i_2] [i_3]) ? 1 : (arr_30 [i_2] [i_2] [i_2 + 1] [7] [i_2 + 1] [i_3]))), ((max(4071, 151))))));
            var_27 = ((max(-61464, 361776758)));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_28 = (((!var_10) ? ((-(arr_11 [1] [i_2] [i_2]))) : 101));
            var_29 = (min(var_29, (!1)));
            var_30 = ((var_6 ? var_6 : (arr_20 [i_2 + 2] [i_2 - 1] [6] [i_9] [i_2] [i_2 - 1])));
            arr_35 [i_2] [i_2 - 1] [i_2] = 14312;
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            var_31 += (max((((!((max(var_7, (arr_16 [i_10]))))))), (max(27038, 143))));
            var_32 = (max(var_32, (((max((arr_22 [i_2] [i_10]), (((arr_8 [18]) ? (arr_25 [i_10] [2] [i_10] [2] [6]) : (arr_34 [4])))))))));
        }
        var_33 = ((-(~1)));

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_34 = (max(126, (~var_11)));
            var_35 = (-((+(((arr_7 [i_2] [i_11]) ? var_2 : var_8)))));
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            arr_43 [i_2 + 1] [i_12] [i_2] = (((((arr_37 [4] [i_12]) ? ((var_4 ? 1 : -6)) : -var_9))));
            var_36 = (max(var_36, (((-var_10 ? -28213 : ((-((1 ? var_9 : (arr_21 [i_2] [i_12] [9]))))))))));
            arr_44 [i_2] [i_12] = (((((~((max(4071, -6)))))) ? (((var_2 ? var_10 : (arr_9 [i_2] [i_2])))) : (((((var_10 ? var_2 : var_7))) ? (max(1690709632040445711, -124)) : (max(33554431, (arr_14 [i_2] [i_12] [i_2 + 2])))))));
        }
    }
    var_37 = (((max(var_8, var_9))));
    #pragma endscop
}
