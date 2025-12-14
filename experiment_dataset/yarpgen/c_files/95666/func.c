/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95666
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
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) (unsigned char)15);
                                var_13 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)-93)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)-96))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_2] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((int) var_6))));
                                arr_22 [i_1] [i_1] [i_6] [i_2] [i_6] [i_5] [i_6] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) var_6)), (((16777214U) << (((((/* implicit */int) (signed char)121)) - (102)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) > (((((/* implicit */_Bool) var_0)) ? (3758096384U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_8)) : (255U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_25 [i_7] [i_1] = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) (+(4192256U)));
                        arr_30 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */signed char) ((int) var_2));
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_7] [i_7] [i_8]))))) == (var_5)));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_36 [i_1] [i_7] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 1]))));
                            arr_37 [i_10] [i_10] [i_9] [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_34 [i_0] [i_0]))))));
                            var_15 = ((/* implicit */unsigned long long int) var_7);
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-95))))) ? (((var_4) ? (var_5) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                            arr_38 [i_1] = ((((arr_27 [i_10] [i_7] [i_7] [i_10] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2340143718U)) | (3831798191805996381LL)))) : (var_9));
                        }
                        for (unsigned short i_11 = 3; i_11 < 8; i_11 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_34 [i_1] [i_1 + 1]))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0))));
                            arr_42 [i_1] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                            arr_43 [i_0] [i_1] [i_7] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) arr_12 [i_9] [i_1] [i_7 + 1] [i_9] [i_11 + 2])) - (119)))));
                        }
                        for (int i_12 = 4; i_12 < 10; i_12 += 3) 
                        {
                            arr_46 [i_0] [i_12] [i_7] [i_12] = ((var_10) / (((/* implicit */int) arr_16 [i_0] [i_1] [i_7] [i_9 - 1] [i_9] [i_12])));
                            arr_47 [i_12] [i_1] [i_7] [i_9] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                        }
                        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_0] [i_1 + 2]))));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)141))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_33 [i_0] [i_1] [i_7] [i_7] [i_13]), (var_0))))) ^ (2703099014453993053ULL));
                        arr_50 [i_13] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)90)), (var_7))))));
                    }
                    arr_51 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) var_5);
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 2; i_15 < 8; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 2; i_16 < 8; i_16 += 3) 
                        {
                            {
                                arr_61 [i_0] [i_14] = ((/* implicit */short) var_5);
                                var_22 = ((((/* implicit */_Bool) arr_55 [i_1] [i_16] [i_1] [i_16 - 2])) ? (arr_55 [i_0] [i_15] [i_14] [i_16 - 2]) : (((/* implicit */unsigned long long int) var_10)));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_9)));
                            }
                        } 
                    } 
                    var_24 = ((unsigned char) 29803423);
                    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))));
                    arr_62 [i_0] [i_1] [i_14] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) ^ (var_5)))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [i_1] [i_1] [i_14] [i_14])))))) & (((/* implicit */int) ((15743645059255558547ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_14]))))))));
                }
                for (unsigned char i_17 = 1; i_17 < 10; i_17 += 4) 
                {
                    arr_66 [i_1] [i_1] [i_17] = ((/* implicit */unsigned char) var_8);
                    arr_67 [i_0] = ((/* implicit */signed char) var_0);
                    arr_68 [i_0] [i_1] [i_17] [i_17] = ((/* implicit */_Bool) arr_49 [i_0] [i_1] [i_17] [i_1] [i_17] [i_17]);
                }
                var_27 = ((/* implicit */signed char) var_7);
                /* LoopSeq 3 */
                for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            {
                                arr_76 [i_0] [i_1] [i_18] [i_18] [i_19] [i_19] [i_20] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 - 2]))) : (arr_53 [i_18 + 1] [i_18 + 3] [i_18] [i_18])))));
                                var_28 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                                arr_77 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_22 = 2; i_22 < 10; i_22 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64)))))) : (2765575582U)));
                            var_30 = ((/* implicit */int) var_9);
                        }
                        var_31 = ((/* implicit */unsigned long long int) var_8);
                    }
                    /* vectorizable */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_24 = 2; i_24 < 9; i_24 += 2) 
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49625)) ? (4192238U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_0] [i_1] [i_23])) ? (((((/* implicit */_Bool) var_3)) ? (arr_79 [i_1] [i_18] [i_23] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
                        }
                        var_34 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54660))))) : (((/* implicit */int) var_2))));
                        var_35 = ((/* implicit */signed char) ((var_8) <= (((/* implicit */int) arr_13 [i_1 + 2] [i_1] [i_1] [i_1] [i_18 + 3] [i_23]))));
                        arr_90 [i_23] [i_18] [i_18] [i_1] [i_0] = ((/* implicit */unsigned short) ((4294967295U) << (((arr_72 [i_1 - 2] [i_1 - 1] [i_1 - 2]) + (652110566)))));
                    }
                    arr_91 [i_0] [i_18] [i_1] = var_5;
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_71 [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1]), (arr_71 [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1])))) ^ (((/* implicit */int) ((unsigned char) arr_87 [i_0] [i_1] [i_18] [i_1])))));
                }
                for (int i_25 = 1; i_25 < 10; i_25 += 1) 
                {
                    arr_95 [i_0] [i_1] [i_25] [i_25] = ((/* implicit */unsigned int) ((unsigned char) arr_86 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 + 1] [i_25]));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) ((((/* implicit */_Bool) ((int) 4475073371021543216LL))) && (((/* implicit */_Bool) var_1)))))));
                }
                for (short i_26 = 0; i_26 < 11; i_26 += 1) 
                {
                    var_38 = ((/* implicit */short) max(((-(var_9))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))) >= (((/* implicit */int) min((arr_7 [i_26]), (var_2)))))))));
                    var_39 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)7)));
                    var_40 = ((/* implicit */unsigned long long int) var_0);
                }
            }
        } 
    } 
    var_41 = (~(((/* implicit */int) (_Bool)1)));
}
