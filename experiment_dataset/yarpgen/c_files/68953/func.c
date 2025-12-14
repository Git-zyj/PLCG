/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68953
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
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (((unsigned short) (unsigned short)4095)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) < (3775085382888769286ULL))))) + (min((((/* implicit */unsigned long long int) var_12)), (var_8))))));
    var_18 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_10)) ? (8921538964744897240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (14671658690820782330ULL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
        var_20 = ((/* implicit */unsigned short) var_2);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (signed char)-111))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_22 -= ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)15288)) - (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (short)-15514))))))), (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) : (((/* implicit */int) var_12))))));
            arr_5 [i_0] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), ((+(3775085382888769286ULL)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_23 = ((/* implicit */int) ((unsigned int) arr_4 [i_0 - 1]));
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) 14671658690820782329ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21967)));
                        var_24 = ((/* implicit */short) min((var_24), (((short) arr_6 [i_0] [i_0] [i_4 + 2]))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_25 &= ((/* implicit */short) ((((1073741568U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3775085382888769308ULL)) ? (((/* implicit */int) (short)-18958)) : (((/* implicit */int) (unsigned short)0)))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (var_9)));
                        var_27 ^= ((unsigned short) arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_5]);
                        var_28 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)20))));
                    }
                    for (short i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1])) : (((/* implicit */int) var_14))));
                        var_30 *= ((/* implicit */signed char) 3775085382888769286ULL);
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_4))));
                    }
                    var_32 = ((/* implicit */unsigned long long int) (+(arr_9 [i_2 + 2] [i_1] [i_0 - 1] [i_1 + 2])));
                }
                var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((16777215ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14062)))))) <= (((/* implicit */int) var_13))));
                arr_19 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1] [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_11 [i_1] [14] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (3419868944240596294ULL)));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1073741568U)), (18446744073692774401ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [1U] [i_0 - 2] [i_0 - 2])), (((short) arr_21 [i_1] [i_7] [i_1] [i_1])))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (14671658690820782329ULL))), (((/* implicit */unsigned long long int) min((arr_20 [i_9] [i_7] [i_9]), (((/* implicit */short) (_Bool)1))))))))))));
                            arr_27 [i_9] [i_1] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) < (14671658690820782329ULL)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_8] [i_9])) : (((/* implicit */int) arr_4 [i_9]))))))));
                        }
                    } 
                } 
                arr_28 [(signed char)16] [(signed char)16] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1]))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_13)))))));
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        var_36 -= ((/* implicit */long long int) (+(3245986522U)));
                        var_37 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) arr_18 [i_0 + 1] [i_1] [i_1] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0 - 1] [i_0] [i_0 - 1] [14ULL]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_8)))));
                    }
                    arr_36 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_1 + 2])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_1 + 2])) : (((/* implicit */int) (short)19450))));
                    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_7))));
                }
                for (int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (unsigned char)0))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (5754295410905705334LL)));
                    }
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                        var_43 = ((/* implicit */unsigned short) ((18446744073692774425ULL) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_10 [i_15] [i_13] [i_1 + 2] [i_10] [i_1 + 2] [1])))));
                        var_44 -= ((/* implicit */unsigned short) ((signed char) (signed char)-21));
                        arr_44 [i_1] [(unsigned short)0] [i_10] [(signed char)8] = ((/* implicit */_Bool) ((unsigned short) 1844504207U));
                    }
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_45 = ((/* implicit */signed char) min((var_45), (var_2)));
                        arr_48 [i_0] [i_1 + 2] [i_10] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)32313)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_1 + 1] [i_0] [i_10] [i_10])) : (((((/* implicit */_Bool) arr_33 [i_0] [i_16])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))));
                        var_46 = ((/* implicit */unsigned short) (short)-2);
                    }
                    arr_49 [i_1] [i_1] [i_10] [(short)5] [i_10] [i_1] = ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))));
                }
                for (short i_17 = 4; i_17 < 21; i_17 += 2) 
                {
                    var_47 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2001992050906705943ULL));
                    var_48 |= var_2;
                }
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        {
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_18] [i_1] [i_1 - 1] [i_1] [i_1 + 2])) % (((/* implicit */int) var_2)))))));
                            var_50 = ((/* implicit */unsigned short) 3221225727U);
                        }
                    } 
                } 
                arr_58 [2U] [i_0] [i_10] [2U] |= ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0 + 1] [i_1 + 2]));
                arr_59 [16ULL] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */unsigned long long int) var_13);
            }
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 2; i_21 < 19; i_21 += 4) 
                {
                    for (signed char i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        {
                            var_51 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13922)) : (((/* implicit */int) (unsigned short)9675)))))));
                            var_52 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 255LL))))) == (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                /* LoopNest 2 */
                for (unsigned int i_23 = 3; i_23 < 21; i_23 += 3) 
                {
                    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        {
                            arr_71 [i_0 - 1] [i_1] [i_20] [i_23] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
                            var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)245)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) arr_63 [i_20] [i_20] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((short) (signed char)43))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_25 = 2; i_25 < 20; i_25 += 4) 
                {
                    for (unsigned short i_26 = 3; i_26 < 20; i_26 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */signed char) (+(var_10)));
                            var_56 = ((/* implicit */short) ((((/* implicit */_Bool) arr_62 [i_1] [i_26] [i_26 + 1] [i_26 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)15)))) : (((((/* implicit */_Bool) (short)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_0 + 1] [i_1] [i_0 + 1] [i_26] [i_26] [i_0 + 1]))) : (var_9)))));
                            var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_56 [i_0] [i_1 - 1] [i_1 - 1] [i_20] [i_25] [i_26 + 1])))))));
                        }
                    } 
                } 
                arr_76 [i_0] [i_0] [i_1] [i_20] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)20)) <= (((/* implicit */int) (signed char)-20)))))));
            }
            var_58 &= ((/* implicit */unsigned int) (_Bool)1);
        }
    }
    for (unsigned short i_27 = 2; i_27 < 21; i_27 += 2) /* same iter space */
    {
        arr_79 [i_27] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_72 [(unsigned short)4] [i_27] [i_27])))));
        var_59 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [(signed char)5] [i_27] [i_27 + 1] [(signed char)5] [i_27])) ? (((/* implicit */int) (unsigned short)48410)) : (((/* implicit */int) var_7))))) ? (max((((/* implicit */unsigned long long int) arr_64 [i_27] [i_27])), (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)224))))))) ^ (max((2001992050906705943ULL), (((/* implicit */unsigned long long int) (signed char)109))))));
        arr_80 [i_27] = ((/* implicit */unsigned short) ((unsigned char) ((((5248936939499980536LL) | (((/* implicit */long long int) 792410380)))) - (((/* implicit */long long int) ((/* implicit */int) var_14))))));
    }
}
