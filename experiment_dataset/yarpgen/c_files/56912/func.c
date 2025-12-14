/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56912
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned char)2] [i_0] = ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)48))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        arr_10 [i_0 + 1] [i_3 + 2] [i_0 + 1] [i_3] [i_0] = var_17;
                        arr_11 [(unsigned char)1] [i_1 + 2] [(unsigned char)0] [(unsigned char)0] [i_3 + 2] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_0 [i_0 - 1]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_15 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_1))));
                        arr_16 [(unsigned char)3] [i_0 + 2] [i_0 + 2] [i_0 + 2] = arr_3 [i_0] [i_0 + 2] [i_0 - 1];
                        arr_17 [i_4] [(unsigned char)4] [i_4] [(unsigned char)13] [(unsigned char)7] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
                    }
                }
            } 
        } 
        arr_18 [i_0] = var_13;
        arr_19 [i_0] = var_7;
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (unsigned char i_7 = 4; i_7 < 22; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_38 [i_5] [(unsigned char)13] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_34 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 3] [i_7 - 4]))), (((((/* implicit */int) min((var_14), (var_9)))) * (((/* implicit */int) arr_34 [i_6] [i_7] [i_7 + 1] [i_7 + 1] [i_7]))))));
                                arr_39 [i_6] [i_8 - 2] [i_7] [i_6] = min(((unsigned char)255), ((unsigned char)252));
                                arr_40 [i_5] [i_6] [i_5] [i_8 + 1] [i_9] [i_7] [i_6] = min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)139)))) > (((/* implicit */int) var_6))))), (((unsigned char) var_0)));
                            }
                        } 
                    } 
                    arr_41 [i_6] [i_6] [i_6] [i_6] = arr_22 [i_7 - 1] [i_6];
                    arr_42 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
        arr_43 [i_5] [i_5] = arr_27 [i_5] [(unsigned char)10];
        /* LoopNest 2 */
        for (unsigned char i_10 = 3; i_10 < 21; i_10 += 2) 
        {
            for (unsigned char i_11 = 3; i_11 < 22; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 2; i_12 < 20; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 22; i_13 += 1) 
                        {
                            {
                                arr_56 [i_5] [(unsigned char)2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)146)) << (((((/* implicit */int) (unsigned char)55)) - (38))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) arr_27 [i_5] [(unsigned char)14])))))));
                                arr_57 [(unsigned char)12] [i_11] [i_11] [(unsigned char)10] [i_11] [i_11] |= arr_33 [i_11 + 1] [i_11 + 1];
                                arr_58 [i_5] [i_10] [i_10] [i_12] [i_13 - 1] = var_7;
                                arr_59 [i_12] [i_10] [i_11] [i_11] [i_10] [i_13] [i_13] = arr_36 [i_5] [(unsigned char)1] [(unsigned char)9] [i_5] [i_13 - 1];
                                arr_60 [i_5] [i_10] [i_5] [i_5] [i_5] [i_5] [i_12] = var_5;
                            }
                        } 
                    } 
                    arr_61 [i_5] [i_5] [i_11 - 3] [i_10 + 1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_34 [(unsigned char)16] [i_10 - 2] [(unsigned char)16] [i_10 - 1] [i_11])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) & (((/* implicit */int) var_14)))) / (((/* implicit */int) (unsigned char)29))));
                    arr_62 [i_10] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)142)) == (((/* implicit */int) (unsigned char)143)))) ? (min((((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)143)))), (((/* implicit */int) max(((unsigned char)141), ((unsigned char)151)))))) : (((((/* implicit */int) (unsigned char)115)) << (((((/* implicit */int) arr_37 [i_11] [i_11] [i_11 - 3] [i_11] [(unsigned char)19] [i_11 - 3] [i_11 - 1])) - (96)))))));
                    arr_63 [i_5] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (arr_21 [i_5])))) << (((((/* implicit */int) arr_36 [i_11 - 2] [i_11 - 3] [i_11 - 1] [i_11 + 1] [i_11 - 1])) - (165)))))) || (((/* implicit */_Bool) var_6))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
        {
            arr_66 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [(unsigned char)9])) == (((((/* implicit */int) (unsigned char)97)) + (((/* implicit */int) var_1))))))) : (((/* implicit */int) var_8))));
            arr_67 [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned char)101))))) - (((/* implicit */int) ((unsigned char) arr_50 [i_5] [(unsigned char)20] [i_5] [i_14] [i_14]))))), (((((/* implicit */int) max((var_4), (var_11)))) % (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_10))))))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 20; i_15 += 3) 
            {
                for (unsigned char i_16 = 3; i_16 < 20; i_16 += 1) 
                {
                    {
                        arr_72 [i_15 + 2] [i_15] [(unsigned char)12] [i_15] = var_4;
                        arr_73 [i_16] [i_14] = var_1;
                        arr_74 [i_5] [i_14] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_6)) % (((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned char) var_10)))));
                        arr_75 [i_15] [(unsigned char)1] [i_15] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_35 [i_16] [i_15 + 1] [i_5] [i_14] [i_5])), (((((/* implicit */int) arr_30 [i_15] [i_15 + 2] [i_15 + 3] [i_16 - 2])) + (((/* implicit */int) arr_30 [i_5] [i_15 - 1] [i_15 + 1] [i_16 + 1]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                for (unsigned char i_19 = 1; i_19 < 22; i_19 += 1) 
                {
                    {
                        arr_83 [i_19 - 1] [i_18] [i_17] [i_5] [i_5] = var_3;
                        arr_84 [i_19 - 1] [i_18] [i_18] [i_17] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19] [i_19] [i_19])) < (((/* implicit */int) (unsigned char)230))));
                        arr_85 [i_5] [(unsigned char)3] [i_18] [(unsigned char)3] [i_19 + 1] = var_5;
                        arr_86 [i_5] [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [(unsigned char)7] [i_19] [i_19 - 1] [i_5] [i_5])) >= (((/* implicit */int) arr_50 [i_19] [i_19] [i_19 - 1] [i_19] [i_18]))));
                    }
                } 
            } 
            arr_87 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)221)) ^ (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned char)19)))))));
            arr_88 [i_5] [i_5] = (unsigned char)106;
            /* LoopNest 2 */
            for (unsigned char i_20 = 4; i_20 < 22; i_20 += 3) 
            {
                for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    {
                        arr_93 [i_17] [i_21] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)155)))) << (((((/* implicit */int) (unsigned char)61)) - (51)))));
                        arr_94 [i_21] [i_21] [i_21] [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) arr_36 [i_5] [i_5] [i_17] [i_20] [i_21]))))) && (((((/* implicit */int) arr_21 [i_5])) >= (((/* implicit */int) (unsigned char)143))))));
                        arr_95 [i_17] [i_21] [i_20 - 4] = (unsigned char)64;
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 3; i_22 < 22; i_22 += 1) 
                        {
                            arr_100 [i_5] [i_5] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned char) (unsigned char)146))) : (((/* implicit */int) arr_47 [(unsigned char)4] [i_20 - 1] [(unsigned char)6]))));
                            arr_101 [i_17] [i_21] [i_20 - 1] [i_17] [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_22 - 3]))));
                            arr_102 [i_22 - 2] [i_5] [i_21] [i_21] [i_5] [(unsigned char)4] = (unsigned char)248;
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_23 = 0; i_23 < 23; i_23 += 4) /* same iter space */
        {
            arr_106 [(unsigned char)19] = ((unsigned char) ((((/* implicit */int) arr_27 [i_5] [i_23])) <= (((((/* implicit */int) (unsigned char)118)) ^ (((/* implicit */int) (unsigned char)255))))));
            arr_107 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))));
        }
        arr_108 [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)23)) / (((/* implicit */int) (unsigned char)14))));
    }
    for (unsigned char i_24 = 2; i_24 < 20; i_24 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 23; i_25 += 2) 
        {
            for (unsigned char i_26 = 0; i_26 < 23; i_26 += 4) 
            {
                {
                    arr_117 [i_25] [i_26] = (unsigned char)104;
                    arr_118 [i_24 + 3] [(unsigned char)13] = ((unsigned char) (unsigned char)4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_27 = 2; i_27 < 21; i_27 += 4) 
                    {
                        arr_122 [(unsigned char)6] [(unsigned char)6] [(unsigned char)3] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_24 + 1] [i_24] [i_27 + 1])) ^ (((/* implicit */int) arr_26 [i_24 - 2] [i_25] [i_27 + 1]))));
                        arr_123 [(unsigned char)22] [i_26] [(unsigned char)10] [i_24] = var_10;
                    }
                }
            } 
        } 
        arr_124 [i_24] [i_24] = (unsigned char)93;
    }
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) var_4))) ^ (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))))) <= (((((((/* implicit */int) (unsigned char)20)) > (((/* implicit */int) (unsigned char)18)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (unsigned char)10))))) : ((-(((/* implicit */int) var_8))))))));
}
