/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70770
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_10 = min(((-(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))))), (((/* implicit */int) arr_4 [i_2 - 1] [7U] [i_3 - 2])));
                                var_11 = ((/* implicit */unsigned short) arr_10 [i_0] [i_2 - 1]);
                                arr_16 [i_4] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned short)9924);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 1]))) + (((((/* implicit */long long int) 1698582245U)) / (var_6)))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) (unsigned char)255);
                }
                for (signed char i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_10 [i_0] [i_1])), (var_2))) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2])))))) ? (((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 2])) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [i_1] [i_5] [i_5] [i_5])) == (((/* implicit */int) arr_8 [i_0]))))))) : (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_5)), (arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_22 [i_0]))));
                                arr_27 [1] [i_6] [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)165)) << (((((/* implicit */int) (short)-1998)) + (2000)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_7 + 3]))) & (var_6)))));
                                var_15 = ((/* implicit */_Bool) (unsigned char)39);
                                arr_28 [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                                var_16 = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_21 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_1))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0]))) / (((((/* implicit */_Bool) var_6)) ? (arr_23 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)25898)))))))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (int i_10 = 3; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) ((signed char) (((_Bool)1) && (((/* implicit */_Bool) arr_36 [i_10 - 2] [i_10 - 2] [i_10] [i_10] [i_10 - 1])))));
                                arr_39 [i_0] [i_8] [i_8] [i_9] [i_10 + 1] [i_9] [i_8] = ((/* implicit */short) ((int) arr_24 [i_0] [i_10 - 3] [i_8] [i_8] [i_9] [i_10] [i_10]));
                                arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned long long int) arr_35 [4] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_21 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_10 [i_1] [i_13])), (arr_35 [i_0] [i_1] [i_1] [i_1] [i_13] [i_1])))), (((((((/* implicit */unsigned long long int) -30)) & (6243294045842623238ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_0] [i_1] [i_11] [i_12] [i_12] [i_13] [i_13]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0])), (max((((/* implicit */int) arr_12 [i_0] [(unsigned char)1] [i_11] [i_0] [i_0])), (((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [16U] [16U])) : (((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_0] [i_1]))))))));
                    var_23 += ((/* implicit */short) var_3);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)29)) > (-948115599)));
                    arr_48 [i_0] [i_0] [(signed char)6] = ((/* implicit */int) min(((((_Bool)1) ? (arr_19 [i_11] [i_11] [i_11]) : (arr_19 [i_0] [i_1] [i_11]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_11])) && (((/* implicit */_Bool) 0U)))))));
                }
                for (short i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    arr_52 [i_14] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0]))) & (var_7)))));
                    arr_53 [i_14] [i_0] [i_14] = ((/* implicit */int) max((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-10LL))), (((/* implicit */long long int) ((short) var_7)))));
                    /* LoopSeq 2 */
                    for (short i_15 = 3; i_15 < 17; i_15 += 4) /* same iter space */
                    {
                        var_25 &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) < (min((var_7), (((/* implicit */unsigned int) arr_36 [i_15 + 1] [i_15 + 1] [(_Bool)1] [i_15 + 1] [i_15])))));
                        arr_57 [i_1] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 13449687522001493143ULL);
                    }
                    for (short i_16 = 3; i_16 < 17; i_16 += 4) /* same iter space */
                    {
                        arr_61 [i_14] [i_16 - 1] = ((/* implicit */short) 2227875942U);
                        arr_62 [(_Bool)1] [i_16 - 3] [i_14] [i_14] = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_2 [(short)13])) << (((/* implicit */int) arr_49 [5] [i_14])))) ^ (((/* implicit */int) max((((/* implicit */short) var_1)), (var_5))))))));
                    }
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_30 [i_0] [i_1] [0LL] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1482226949U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0]))))))) : (arr_22 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_1] [i_1] [i_0])))));
                }
                for (long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    arr_67 [i_17] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((4294967275U) << (((var_4) - (1297168373)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_71 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)8192))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        arr_75 [i_0] [i_1] = ((/* implicit */short) 1991221619U);
                        arr_76 [i_0] [i_0] [i_1] [i_19] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)4096)), (arr_41 [i_19])))) ? (((/* implicit */int) arr_41 [i_1])) : (((/* implicit */int) arr_7 [i_0] [15] [i_17] [i_19])));
                        var_28 = ((/* implicit */signed char) ((_Bool) arr_66 [i_1] [i_19] [i_1]));
                        var_29 = ((/* implicit */signed char) min(((~((+(2408476299U))))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_19] [i_19] [i_19] [i_19] [i_19]))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28545)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_19])))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        for (short i_21 = 4; i_21 < 17; i_21 += 4) 
                        {
                            {
                                var_31 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)219)) != (((/* implicit */int) (signed char)(-127 - 1)))));
                                var_32 = ((/* implicit */_Bool) (unsigned char)92);
                                var_33 = ((/* implicit */signed char) min((arr_30 [i_0] [i_1] [i_17] [i_20]), ((~(((((/* implicit */int) arr_4 [i_1] [i_20] [i_21 - 4])) | (((/* implicit */int) (unsigned char)157))))))));
                                var_34 = ((/* implicit */unsigned short) (-((((+(-9000267070669500852LL))) | (max((arr_80 [i_21 - 4]), (arr_47 [i_21] [i_20] [i_17] [i_17] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                }
                for (int i_22 = 3; i_22 < 16; i_22 += 1) 
                {
                    arr_86 [i_22] [i_1] [i_22 + 1] [i_1] = ((/* implicit */unsigned long long int) ((arr_66 [i_1] [i_22 + 2] [i_22 + 2]) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                    arr_87 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_42 [i_0] [i_1] [i_22])) | (max((arr_72 [i_1] [(signed char)17]), (3))))));
                    arr_88 [i_22 + 2] [i_22] [i_0] = ((/* implicit */unsigned char) 136363239U);
                    /* LoopNest 2 */
                    for (short i_23 = 1; i_23 < 17; i_23 += 4) 
                    {
                        for (int i_24 = 0; i_24 < 18; i_24 += 1) 
                        {
                            {
                                arr_94 [i_22] = ((/* implicit */_Bool) arr_50 [i_22]);
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_0] [i_23 - 1])) ? (((unsigned int) arr_60 [i_22 - 2] [i_24])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_23] [(_Bool)1])))));
                            }
                        } 
                    } 
                    var_36 &= ((/* implicit */int) var_7);
                }
                var_37 = ((/* implicit */unsigned char) (-((~(131056)))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
}
