/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1] [13] [i_1] [i_1] = ((var_3 > (((arr_5 [i_1] [i_0] [i_2] [i_0]) % ((var_0 ? (arr_10 [i_1] [i_3]) : var_8))))));
                                var_12 = (min(var_12, (((((min(((448 ? 43 : 51)), ((55 << (208 - 194)))))) ? ((-(((arr_10 [i_4] [i_4]) ? (arr_3 [i_1] [i_3] [i_4]) : var_9)))) : ((~(arr_4 [i_2]))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = (((((((62 % (arr_7 [i_0] [i_1] [i_0] [0])))) ? (!var_11) : (((var_9 && (arr_2 [12] [1])))))) - ((var_4 | (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? 22513 : (arr_5 [i_1] [i_1] [i_2] [i_4])))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = var_4;
                                arr_14 [i_1] [i_1] [i_3] [i_1] [i_3] [i_4] [i_2] = (((((var_1 ? (arr_0 [i_4]) : var_0))) ? (arr_0 [i_0]) : (((!(arr_9 [i_1] [i_1]))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] = ((((((arr_1 [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0]))) : ((max((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))));
                var_13 ^= (((((var_11 ? (arr_9 [i_0] [i_0]) : var_10))) ? ((var_11 ? 65535 : 109)) : 4064));
                arr_16 [i_0] [i_1] [i_1] = (((((~(arr_0 [i_1])))) ? (arr_0 [i_1]) : (arr_0 [i_0])));
            }
        }
    }
    var_14 ^= min((((((min(var_8, var_1))) < ((var_5 ? 48 : var_5))))), var_9);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_27 [i_5] [i_6] [i_6] = ((((((arr_23 [i_5] [i_7]) ? (arr_21 [i_5] [i_7]) : (arr_21 [i_6] [i_6])))) ? ((219 ? (arr_21 [i_5] [i_6]) : 72)) : ((max((arr_23 [17] [17]), var_9)))));
                    arr_28 [i_7] [4] [i_5] = (((((var_3 ? (((arr_22 [i_7] [i_5]) ^ var_0)) : 19998))) ? 2047 : (((arr_26 [i_5] [2] [i_7]) ? (arr_25 [i_7] [i_5]) : var_11))));
                    var_15 ^= (!182);

                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_8] [i_7] [8] = (((((((max(var_10, var_2))) << (241 - 230)))) ? (((arr_30 [i_5] [i_8] [i_7] [6]) + (arr_30 [i_5] [i_8] [i_7] [i_5]))) : (max(((min(var_4, (arr_25 [i_7] [2])))), ((var_0 ? var_6 : var_7))))));
                        arr_34 [i_5] [i_8] [7] [i_5] = var_4;
                        var_16 = (((((min(201, 1792)))) | (((arr_30 [i_5] [i_8] [i_7] [i_8]) ? var_10 : ((23279 ? var_7 : var_6))))));
                        arr_35 [i_8] [i_6] [i_7] [17] = (((!896) << ((((((229 << (((arr_22 [i_5] [7]) - 4625)))) | ((min((arr_22 [13] [17]), var_8))))) - 240123961))));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            arr_38 [i_5] [i_5] [3] [i_8] [i_7] [i_8] [i_9] = var_9;
                            arr_39 [i_5] [i_8] [i_5] [i_5] [i_5] = ((116 < ((~((min((arr_37 [i_8]), (arr_19 [i_5] [3]))))))));
                            var_17 ^= 136;
                            arr_40 [14] [i_8] [i_6] [i_8] [3] [0] = ((~((~(~var_4)))));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_43 [16] [i_8] [i_8] [i_8] [i_8] = (arr_36 [i_5]);
                            arr_44 [15] [i_6] [i_6] [i_8] = 11299;
                        }
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, -140));
                        arr_48 [i_5] [i_11] = ((((132 ? ((32768 ? 4078 : 112)) : 127)) >> (((~217) ? ((57838 ? 24 : var_9)) : 52439))));
                        arr_49 [i_11] [0] [4] [i_7] [i_11] = (arr_45 [i_5] [i_5] [i_6] [5] [i_11] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_52 [17] [i_6] [i_7] [i_12] = (((arr_47 [i_5] [i_5] [i_5] [i_5]) || ((max(var_3, var_3)))));
                        var_19 = 37;
                    }
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    arr_55 [4] [i_6] = var_0;
                    arr_56 [6] [i_6] [i_13] [i_13] = 196;
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_61 [i_15] [i_14] [i_13] [i_6] [i_5] |= ((-((var_8 ? (var_10 + var_1) : (arr_41 [i_15] [i_5] [i_13] [i_5] [8])))));
                                arr_62 [i_15] [i_5] [i_15] [i_14] [4] [4] [i_5] = (min(49684, var_5));
                                arr_63 [i_5] [i_5] |= 11532;
                                var_20 ^= ((!(arr_37 [i_13])));
                            }
                        }
                    }
                    var_21 -= arr_22 [i_6] [i_13];
                    arr_64 [i_5] [i_5] [i_13] [i_13] = ((241 ? 15872 : 102));
                }

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    arr_69 [i_5] [i_6] [16] = var_4;
                    arr_70 [i_5] [i_6] [i_6] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
