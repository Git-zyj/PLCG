/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83136
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (var_2)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-29266))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 6; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((4294950912U) - (((/* implicit */unsigned int) 809935180)))) + (((/* implicit */unsigned int) (((_Bool)1) ? (809935180) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) + (max((arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2]), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                        var_14 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-809935181)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_3);
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_4] [i_4] [i_0] [i_0 + 1] = min(((-(((((/* implicit */_Bool) 12088660190518420789ULL)) ? (16384U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29266))))))), (((/* implicit */unsigned int) var_9)));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) min((arr_9 [i_0 - 1] [i_6] [i_0 - 2]), (arr_6 [i_0] [(short)3] [7ULL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)134)))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3314893311U))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)12424))))))));
                        }
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (short)12424))));
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((385790180U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    arr_22 [i_4] [i_0 - 1] = (+(((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5])))));
                }
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */int) (unsigned char)15)) << (((((/* implicit */int) (short)-12424)) + (12430))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_4))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29258)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2])) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (short)3546)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) < (((/* implicit */int) (short)(-32767 - 1))))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20; i_8 += 3) 
    {
        var_20 = ((/* implicit */_Bool) arr_25 [i_8 + 1]);
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_4)))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)727)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) 4590462899070689304ULL);
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_40 [i_8] [2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)99))));
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32744))))) > (2572594494U)));
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_9])) ? (var_2) : (((/* implicit */unsigned long long int) arr_26 [i_8]))));
                        }
                        for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((-2037190594) + (2037190618)))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1692859799U)))) ? (((arr_43 [i_8] [i_9] [i_8] [i_11 + 2] [i_9]) | (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)19052)))))));
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) var_1);
                            var_29 = ((/* implicit */_Bool) ((var_4) >> (((/* implicit */int) (!(arr_38 [13] [i_8] [13] [i_11 - 1] [3]))))));
                        }
                        for (long long int i_15 = 1; i_15 < 20; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */short) (~(((/* implicit */int) (short)29257))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (var_5)));
                            arr_52 [i_15] [i_8] [i_10 - 1] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) arr_44 [21]);
                            arr_53 [i_11] [i_11] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-7343010734662397822LL))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            arr_57 [i_11] [(_Bool)1] [i_10] [i_8] [10] [2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)29257)) | (((/* implicit */int) (short)29266))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) | (((unsigned long long int) var_3))));
                            var_33 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        }
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-99)) : (560264175)))) ? (((((/* implicit */_Bool) arr_5 [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned int) arr_5 [i_17 - 1] [1] [i_17 - 1])) : (arr_13 [i_17 + 1] [i_18]))) : (((/* implicit */unsigned int) ((int) var_8))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 1) 
                {
                    for (short i_20 = 2; i_20 < 9; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_32 [i_18] [i_19 + 1] [i_21])))))));
                                arr_72 [i_17] [i_17] [5LL] [i_17 - 1] [3] [7U] [i_17] = min(((short)-32767), ((short)32767));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_22 = 1; i_22 < 20; i_22 += 2) 
    {
        var_36 += ((/* implicit */short) min((((((/* implicit */int) arr_73 [i_22 + 3])) >> (((((/* implicit */int) var_1)) + (14157))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_75 [(unsigned char)4])))) ? ((~(((/* implicit */int) arr_73 [i_22])))) : (((((/* implicit */_Bool) arr_75 [i_22])) ? (var_6) : (((/* implicit */int) var_0))))))));
        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (~((+((-(((/* implicit */int) (signed char)99)))))))))));
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((12552830890895113579ULL) != ((((_Bool)1) ? (5893913182814438024ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_22 + 2] [15])) ? (((/* implicit */int) (signed char)-99)) : (1994333426)))))))))));
        /* LoopNest 3 */
        for (long long int i_23 = 2; i_23 < 22; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (short i_25 = 3; i_25 < 22; i_25 += 2) 
                {
                    {
                        var_39 = max((max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (signed char)-99)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) -332285420454934322LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (8378787114158782207ULL))));
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1635387502) != (((/* implicit */int) (_Bool)1)))))) / (((12552830890895113593ULL) << (((((/* implicit */int) var_7)) - (129)))))))) ? (min((((/* implicit */unsigned long long int) (signed char)99)), (12552830890895113592ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) arr_79 [18ULL] [18ULL] [i_24] [i_23]))))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_26 = 0; i_26 < 22; i_26 += 3) 
    {
        arr_86 [i_26] [i_26] |= ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (signed char)21))))));
        var_41 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_28 [i_26])));
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((var_8) - (307605748U)))));
    }
}
