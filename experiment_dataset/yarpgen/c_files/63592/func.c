/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63592
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
    var_15 |= ((/* implicit */unsigned char) var_7);
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) 4611123068473966592LL))));
    var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */long long int) 3934113023U)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))) / (var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned int) (-(((3824297653008112571ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)22125), (((/* implicit */short) (signed char)-100))))))))));
                            var_19 = max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2 + 2] [i_3 - 2] [i_3 - 3] [i_3 - 2]))))), (min((((/* implicit */unsigned int) (unsigned char)245)), (2800158386U))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15485344608736062684ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_4] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_0] [i_1] [i_4] [i_4]), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_4])))))) : ((+(281146003U)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((2701069072U) >> (((866078709528835327ULL) - (866078709528835312ULL)))))) : ((~(-8367159868214984168LL)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                                var_22 |= ((/* implicit */unsigned int) ((unsigned char) arr_17 [i_1] [i_4] [i_5] [i_6]));
                            }
                        } 
                    } 
                    arr_22 [i_4] [i_1] [i_1] [i_0] = min((min((arr_14 [i_0] [i_1]), (arr_14 [i_0] [i_1]))), (((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_0] [i_0])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_4] [i_7] [i_7])) * (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_31 [i_1] [i_1] [i_4] [i_1] [i_8] = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_4] [i_7] [i_8]);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 557919395U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (arr_6 [i_4] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_14)))))))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_13))) <= (((/* implicit */int) arr_21 [i_9 + 1] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                            var_24 = ((/* implicit */unsigned long long int) ((576460752303423488LL) >> (((/* implicit */int) arr_27 [i_0] [i_4] [i_4] [i_7] [i_9] [i_0]))));
                        }
                        arr_35 [i_7] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_4]))) : (10519961846398058035ULL))) + ((+(14617622306480794603ULL)))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */short) (+(((((((/* implicit */int) var_14)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_10])) - (15231)))))));
                        var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(4294967295U)))), (arr_7 [i_0])));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((arr_18 [i_0] [i_1] [i_4] [i_4] [i_11]), (arr_38 [i_0] [i_1] [i_4] [i_11] [i_11] [i_11])));
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_3 [i_0])), ((+(var_10)))))));
                            arr_45 [i_12] [i_1] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_11] [i_12])), (max((((/* implicit */long long int) (unsigned short)16207)), (var_2))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_0] [i_11] [i_4] [i_12] [i_0] [i_1]))))) & (3658333580U))))));
                            var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) min((arr_3 [i_11]), (arr_3 [i_0])))) : (((/* implicit */int) arr_3 [i_0]))));
                        }
                        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            arr_48 [i_0] [i_0] [i_1] [i_1] [i_4] [i_11] [i_13] = ((/* implicit */unsigned char) (~(-1)));
                            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_13] [i_11] [i_4] [i_1] [i_0])) ? (((((/* implicit */_Bool) -5858173950363662755LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_1] [i_4] [i_11] [i_13]))) : (max((14167227199413495515ULL), (14444686350995868096ULL))))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (arr_6 [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_4])))))));
                            var_31 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_13] [i_4] [i_11])) ? (arr_8 [i_13] [i_11] [i_1] [i_0]) : (arr_5 [i_1])))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)-23743)))))));
                        }
                        arr_49 [i_11] [i_4] [i_0] = ((/* implicit */unsigned char) (~(2534559917U)));
                        var_32 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_12)) + (-1))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-10085)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_11] [i_0])), (1197430926U)))) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11] [i_4] [i_1] [i_1] [i_0]))))))));
                    }
                    arr_50 [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                }
                for (unsigned char i_14 = 2; i_14 < 8; i_14 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 3; i_15 < 9; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                arr_60 [i_15] [i_1] [i_15] = ((((/* implicit */_Bool) (-(arr_10 [i_14 - 2] [i_14 + 1] [i_15 - 2] [i_15] [i_15 - 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(var_2)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26155)) + (var_13))))))) : ((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)22950)))))));
                                arr_61 [i_15] [i_15] [i_0] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_58 [i_0] [i_15] [i_14] [i_15])) ? (arr_51 [i_0] [i_1] [i_15] [i_16]) : (((/* implicit */unsigned long long int) 2037136891139459506LL)))), (((/* implicit */unsigned long long int) ((int) 423220604))))), (((((unsigned long long int) arr_24 [i_16] [i_15] [i_14] [i_15] [i_16])) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_14 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */int) arr_33 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 2] [i_18] [i_18]);
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (arr_15 [i_1])))) >> (((max((var_10), (((/* implicit */unsigned long long int) arr_36 [i_0] [i_1] [i_14] [i_14] [i_17] [i_18])))) - (18446744073709524669ULL)))))) && ((!(((/* implicit */_Bool) arr_52 [i_14 + 2] [i_14 + 2] [i_14 + 2]))))));
                                arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
                                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((long long int) (~(arr_41 [i_14]))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
