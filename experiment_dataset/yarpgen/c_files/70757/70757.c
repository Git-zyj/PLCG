/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min((min((min(18223931565387984394, 2)), 9223372036854775807)), 222812508321567221)))));
                arr_7 [i_0] [i_0] [i_0] = (--var_1);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 += (((arr_8 [i_1] [i_2] [i_2]) ? (((arr_4 [i_2] [i_1] [i_0]) ? (arr_4 [i_2] [i_1] [i_0]) : var_14)) : (((arr_8 [i_0] [i_1] [i_2]) & var_1))));
                    arr_12 [i_0] [i_0] [i_1] [19] &= var_5;
                    var_19 = (min(var_19, ((((((((arr_6 [i_0] [i_1]) * (arr_11 [i_0] [i_1] [i_0]))) - (arr_11 [i_0] [i_0] [i_0]))) * (((max(var_7, var_6)))))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_20 = ((((((var_1 - -47650069) - (arr_14 [i_0] [i_1] [16] [i_3])))) ? (((arr_1 [i_0]) ? (arr_3 [i_0]) : var_13)) : (arr_10 [i_0])));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 = (arr_0 [i_0]);
                        arr_18 [19] [i_0] [i_1] [i_0] = ((((6180128108220126429 ? (arr_5 [i_3] [i_1] [14]) : (arr_5 [i_4] [i_4] [i_4])))) ? (!var_13) : ((min((arr_3 [i_4]), (arr_3 [i_0])))));
                        arr_19 [1] [1] [i_4] [i_4] [1] = 18223931565387984416;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_24 [i_1] [i_1] = ((((205 ? (min(var_10, (arr_13 [i_0] [i_0] [10]))) : (var_1 && 222812508321567209)))) ? (arr_2 [i_5]) : (((arr_9 [21] [i_3] [i_3]) ? (arr_9 [i_0] [i_1] [i_3]) : (arr_9 [i_0] [i_1] [i_3]))));
                        var_22 = ((((1 ? ((1 << (143 - 131))) : ((((arr_4 [i_5] [i_5] [i_5]) || 226))))) << (-6984648212298844361 + 6984648212298844369)));
                        arr_25 [i_0] [i_0] [i_3] = ((!((max(var_9, ((var_1 ? var_6 : 18223931565387984394)))))));
                        var_23 = ((~((~((~(arr_3 [i_0])))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_24 &= var_7;
                            arr_32 [i_0] [11] [i_0] [i_0] = (arr_22 [9] [4] [4] [4]);
                        }
                        var_25 = (max(192, ((((arr_23 [i_0] [8] [i_3] [i_6] [i_6] [i_1]) + (arr_23 [i_0] [i_0] [i_0] [17] [i_0] [16]))))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_26 &= (~238);
                    var_27 &= ((((((arr_23 [i_8] [i_8] [i_8] [i_1] [i_0] [i_0]) << (var_12 + 1715242745487830311)))) ? -var_1 : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [18])));
                    var_28 = (((arr_20 [i_0]) ? (arr_20 [1]) : var_8));
                    var_29 = -var_1;
                }
                arr_35 [i_0] [i_0] &= min(51, 769779891);
            }
        }
    }

    for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
    {
        arr_38 [i_9 - 2] = ((((((max(var_11, var_5))) ? ((var_2 ? var_1 : 127)) : (arr_8 [11] [i_9] [i_9]))) / var_1));
        var_30 = ((!((min(var_0, ((3918306217672151023 ? 1873353286 : 889122619)))))));
    }
    for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_44 [i_11] = (var_9 / var_6);
            arr_45 [i_10] = (((((5617927952830145572 ? var_4 : var_6))) ? (arr_33 [i_10 - 1] [i_10 - 3] [1] [i_10]) : var_2));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_48 [i_12] [i_12] [i_10] = var_12;
            arr_49 [i_10] [i_10] = ((!(((151 ? var_7 : var_7)))));
            arr_50 [i_10] [i_12] = var_0;
            var_31 = (max(var_31, ((((-2021863455 + var_11) ? var_11 : 1)))));
        }
        var_32 += (max(((~(min(18223931565387984425, (arr_28 [i_10] [9] [i_10 - 3] [i_10 - 3]))))), ((max(1, -6420993971181238028)))));
        var_33 = 16320;
    }
    #pragma endscop
}
