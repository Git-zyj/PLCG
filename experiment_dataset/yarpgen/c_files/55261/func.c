/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55261
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [8] [8ULL] = ((/* implicit */_Bool) min((max((min((var_4), (((/* implicit */unsigned int) var_0)))), (var_4))), (var_4)));
        arr_4 [(_Bool)1] = ((((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_9)))) : (((max((((/* implicit */unsigned long long int) 511U)), (13874880419860975995ULL))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_8)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */int) var_9);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                arr_14 [i_1] [4] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_3] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_21 [i_4] [i_2] [(unsigned short)1] [i_2] [i_4] = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_4)) : (var_8)))));
                    arr_26 [i_6] [(unsigned short)1] [1ULL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_29 [i_1] [i_1] [i_6] [i_3] [i_6] [(signed char)10] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        arr_30 [i_1] [i_6] [i_3] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) var_7);
                        arr_31 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        arr_32 [i_7] [(_Bool)1] [i_6] [12ULL] [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) var_5));
                        arr_33 [i_1] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_36 [i_3] [i_2] [3ULL] [i_8] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))));
                    arr_37 [i_8] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)));
                    arr_38 [i_1] [i_8 - 1] [i_3] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 2 */
                    for (signed char i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        arr_42 [i_1] [0] [6LL] [i_8] [1U] [1U] = ((/* implicit */signed char) ((var_7) & (((/* implicit */unsigned long long int) var_8))));
                        arr_43 [i_1] [i_1] [i_1] [i_1] [9ULL] = ((/* implicit */unsigned short) ((266338304U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13198)))));
                        arr_44 [i_8] [15ULL] [i_8] [i_8 - 1] [i_8 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        arr_45 [11ULL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                        arr_46 [i_2] [14] [14] [15] [7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) var_4))))) + (var_7)));
                    }
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_51 [i_1] [(short)10] [(short)10] [i_8] [i_10] = ((/* implicit */int) (+(var_8)));
                        arr_52 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_53 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)))) ? (((/* implicit */unsigned long long int) var_8)) : ((-(var_7)))));
                        arr_54 [1ULL] [i_1] [1ULL] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))));
                    }
                    arr_55 [i_1] [4] [i_3] [i_3] [3ULL] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_58 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) var_8);
                    arr_59 [i_2] [(unsigned char)2] [5LL] [12U] [i_3] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_6)))));
                    arr_60 [i_1] [(unsigned char)12] [i_2] [i_3] [i_11] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_64 [(signed char)5] [i_2] [i_3] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
                    arr_65 [i_1] [i_1] [i_3] [(unsigned short)16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
                    arr_66 [i_3] [10] [10] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)));
                }
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                arr_70 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)));
                arr_71 [i_1] = ((/* implicit */unsigned long long int) var_0);
            }
        }
        for (int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            arr_74 [i_1] = min((((((/* implicit */_Bool) (unsigned short)13198)) || (((/* implicit */_Bool) 18446744073709551615ULL)))), (((var_7) == (((/* implicit */unsigned long long int) var_9)))));
            arr_75 [i_1] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (max((var_3), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_5))))))));
            arr_76 [i_1] = ((/* implicit */_Bool) var_7);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_17 = 1; i_17 < 22; i_17 += 4) 
                {
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            {
                                arr_89 [i_15] [i_15] = ((/* implicit */unsigned long long int) var_5);
                                arr_90 [i_15] [i_15] [16ULL] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_4)) - (var_7))), (max((var_3), (((/* implicit */unsigned long long int) var_2))))))) ? (max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) var_2)), (var_9))))) : (((/* implicit */long long int) ((761614013U) + (((/* implicit */unsigned int) -496394804)))))));
                                arr_91 [i_15] [i_18] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) + (var_3))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                } 
                arr_92 [i_16] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_3)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_6)) << (((var_8) - (4842298078088028302LL)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
    {
        arr_95 [i_20] [i_20] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) max((496394803), (138827584)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7))))), (max((((/* implicit */unsigned long long int) var_8)), (max((var_7), (var_3)))))));
        arr_96 [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)102)) : (-496394804)));
        /* LoopSeq 1 */
        for (signed char i_21 = 0; i_21 < 19; i_21 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_102 [i_21] [i_21] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) var_6))));
                arr_103 [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                arr_104 [i_20] [i_21] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    for (unsigned char i_24 = 2; i_24 < 17; i_24 += 2) 
                    {
                        {
                            arr_111 [i_20] [i_20] [i_20] [i_21] [i_23] [i_24] = ((/* implicit */short) (-(var_7)));
                            arr_112 [i_21] [i_23] [i_22] [18ULL] [i_21] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            }
            for (int i_25 = 0; i_25 < 19; i_25 += 3) 
            {
                arr_117 [i_21] [i_21] [i_25] [i_25] = ((/* implicit */signed char) ((((var_7) & (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_7)))) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))))));
                arr_118 [i_20] [i_21] [i_21] [15] = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned short)16180), (((/* implicit */unsigned short) (signed char)87))))) + (((/* implicit */int) var_1)))) / (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_2)))))));
                arr_119 [i_25] [(unsigned char)10] [i_21] [i_25] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)154)), (-214718346)));
            }
            /* LoopNest 2 */
            for (unsigned char i_26 = 3; i_26 < 16; i_26 += 2) 
            {
                for (unsigned short i_27 = 0; i_27 < 19; i_27 += 3) 
                {
                    {
                        arr_125 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) max((max(((-(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))), (max((((/* implicit */unsigned long long int) var_6)), (var_3)))));
                        arr_126 [i_20] [i_20] [i_21] [i_20] [(_Bool)1] [i_20] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)102)) : (16383))) : (-496394804));
                        arr_127 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_1)), (var_4))) / ((-(var_4)))))) / (((((/* implicit */unsigned long long int) max((var_4), (var_4)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_3)))))));
                    }
                } 
            } 
            arr_128 [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) + (max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_5))))), (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) var_8))))))));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_28 = 0; i_28 < 20; i_28 += 4) 
    {
        arr_131 [i_28] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) <= (var_4)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
        arr_132 [i_28] [i_28] = ((/* implicit */_Bool) ((var_3) - (max((var_3), (var_3)))));
        arr_133 [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (var_2))))) : (min((((/* implicit */unsigned int) var_6)), (var_4)))));
        arr_134 [i_28] = ((/* implicit */unsigned long long int) var_1);
    }
}
