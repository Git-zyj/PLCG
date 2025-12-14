/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70432
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_3 [5] [i_1] [i_0]))))));
                    var_21 = ((/* implicit */signed char) (-(arr_6 [i_0] [i_1] [i_1] [i_1])));
                }
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned char)11] [i_0] [i_0]))));
                var_23 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (signed char)0)))));
                /* LoopSeq 4 */
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    var_24 = (((((+(((((/* implicit */_Bool) var_3)) ? (-5759552113912902289LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) max((var_18), (((/* implicit */unsigned int) arr_4 [i_3]))))) ^ (((8384512LL) & (arr_8 [i_3] [i_3] [i_1] [i_0]))))) - (2025801258LL))));
                    var_25 = ((/* implicit */unsigned short) ((var_18) + (((((/* implicit */_Bool) (signed char)-1)) ? (max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])), (2239943600U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [(unsigned char)10] [i_3 - 1])) ? (((/* implicit */int) arr_0 [5LL] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])))))))));
                    arr_10 [i_0] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8384512LL)) ? (((/* implicit */int) arr_4 [i_1])) : (arr_6 [i_0] [i_0] [i_0] [i_3]))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)45906))))), (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_26 |= ((/* implicit */int) arr_17 [i_0] [i_1] [(signed char)12] [8ULL] [i_6] [i_0] [(short)2]);
                                var_27 = (~(((((/* implicit */_Bool) (unsigned char)182)) ? (-5742952483595559891LL) : (5759552113912902276LL))));
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_6 + 2])) % (((/* implicit */int) arr_4 [i_6 + 1]))));
                                arr_19 [i_0] [i_5] [i_0] [i_0] [(signed char)7] = ((/* implicit */signed char) ((int) (_Bool)1));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) (+(arr_6 [i_0] [i_0] [i_0] [i_0])));
                    var_30 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        arr_23 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 33856749)) && (((/* implicit */_Bool) ((8384506LL) / (5759552113912902276LL))))));
                        var_31 = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_7] [12ULL] [i_4] [i_1] [i_0]))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_20 [i_0] [i_4] [i_1] [i_0]) - (arr_20 [(unsigned short)5] [(_Bool)1] [i_1] [(unsigned short)5])))) ? (((unsigned long long int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_7])))));
                        arr_24 [i_0] [i_1] [i_1] [i_0] [i_1] [i_7] |= ((/* implicit */long long int) var_3);
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            arr_31 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_4])) && (((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0]))));
                            var_33 = ((/* implicit */long long int) (((((_Bool)0) || (((/* implicit */_Bool) arr_20 [(_Bool)1] [i_9] [i_4] [(unsigned char)2])))) ? ((+(var_4))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)120)))))));
                            var_34 = ((/* implicit */int) arr_13 [i_8] [i_0] [i_1] [i_0]);
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_1))));
                        }
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)17)))))));
                            var_37 = ((((/* implicit */_Bool) -394915559)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)11201)));
                            arr_36 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (signed char)-1)))) ? (3616812558U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4473122232479158157LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-113)))))));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            arr_40 [i_11] [i_11] [i_1] [i_8] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_11] [i_8] [i_8] [i_11])) | (((/* implicit */int) arr_37 [i_8] [i_8] [(_Bool)1] [6] [i_0] [i_0]))))) ? (((5759552113912902276LL) << (((11404551778782009063ULL) - (11404551778782009063ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((-3557172260330541125LL) >= (8384520LL)))))));
                            arr_41 [i_11] [i_4] [i_1] = var_16;
                            var_38 -= (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-8993597502939426878LL)))));
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_4] [i_1] [i_4] [i_8] [i_12]))));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-11))))) : (((((/* implicit */_Bool) var_19)) ? (var_10) : (((/* implicit */unsigned long long int) var_17))))));
                        }
                        for (short i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
                        {
                            arr_48 [i_0] [i_4] [i_8] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_4] [i_8] [i_13] [i_13])) ? (arr_8 [i_0] [i_1] [i_13] [i_4]) : (((/* implicit */long long int) var_5))));
                            var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (1514910016U))) - (2780057283U)));
                        }
                        for (short i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
                        {
                            arr_51 [i_0] [i_1] [i_4] [i_8] [i_14] = ((/* implicit */_Bool) arr_1 [i_0]);
                            var_41 = ((/* implicit */short) (!(((((/* implicit */int) arr_43 [i_0] [i_8] [i_4] [i_0] [i_0])) < (((/* implicit */int) (signed char)-21))))));
                            arr_52 [i_14] [(unsigned char)4] [i_0] [i_4] [i_1] [5LL] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_14] [i_4] [i_1])) > (((((/* implicit */int) (unsigned short)4095)) >> (((((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_8] [(unsigned short)0] [i_4])) - (153)))))));
                        }
                        var_42 = ((/* implicit */unsigned short) (-(-593678733)));
                        var_43 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8993597502939426862LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((arr_27 [(unsigned short)11] [i_1]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(signed char)12] [i_0] [i_0] [i_0])))))));
                    }
                    for (short i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */int) (signed char)93)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)21))));
                        var_45 = ((/* implicit */unsigned short) (+(arr_47 [i_0] [i_0] [i_0] [(unsigned short)14] [(unsigned short)14] [(unsigned short)14])));
                        var_46 = ((/* implicit */long long int) min((var_46), (arr_9 [i_0])));
                    }
                }
                for (signed char i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                {
                    var_47 = ((/* implicit */long long int) ((short) min((3367474965U), (((/* implicit */unsigned int) (signed char)12)))));
                    var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_1] [i_1] [i_16] [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [13LL] [13LL] [i_16] [13LL])) >= (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_49 [i_0] [i_0] [i_1] [i_16] [i_16] [i_0] [i_16])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2701757319U)) - (-7800502961459495253LL)))) > (min((5668841235305216448ULL), (((/* implicit */unsigned long long int) arr_14 [i_16] [i_0] [i_0] [i_0]))))))))))));
                }
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    var_49 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_1] [7] [i_0])))) ? (((/* implicit */unsigned int) min((arr_54 [i_1] [i_1] [i_0]), (arr_54 [i_0] [i_0] [i_0])))) : (arr_12 [(unsigned short)12] [i_1] [i_0])));
                    var_50 = ((/* implicit */unsigned short) min((-8993597502939426878LL), (((/* implicit */long long int) (short)5478))));
                }
                var_51 -= ((((unsigned long long int) arr_35 [i_1] [i_1] [i_0] [i_0] [i_1] [(signed char)4])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 8107093307084679768LL)))));
            }
        } 
    } 
    var_52 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))))) : (var_15)));
}
