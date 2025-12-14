/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91141
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_14)))))) != ((+(((/* implicit */int) var_11))))));
    var_20 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) max((((/* implicit */short) var_14)), (var_0)))))), (((/* implicit */int) ((unsigned char) (short)5895)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_1] [i_2 - 1] [i_0] [i_0] [i_1] = arr_10 [(signed char)5] [i_3] [i_2] [i_3];
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned char) arr_12 [i_0] [i_2 - 2] [i_2] [i_2 - 2] [i_1])))));
                        arr_16 [i_1] [i_1] [(unsigned char)0] [i_2] [(signed char)5] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2])) + (2147483647))) >> (((/* implicit */int) ((short) (_Bool)0)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        arr_20 [(short)3] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2 + 1]);
                        var_22 &= ((/* implicit */_Bool) (short)-27796);
                        var_23 = ((/* implicit */_Bool) arr_5 [i_1]);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_23 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_18))))) ? (((/* implicit */int) min((((/* implicit */short) min(((_Bool)1), ((_Bool)1)))), (min((var_0), (arr_11 [i_5] [i_2] [i_1] [i_0])))))) : (((/* implicit */int) (signed char)116))));
                        arr_24 [i_1] [i_1] [i_2 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_0] [i_1])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_5 - 1] [i_5]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_0))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1])) / (((/* implicit */int) arr_18 [i_5] [i_1] [i_5] [(short)6]))));
                            arr_27 [i_5 - 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2 - 1])) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        arr_28 [i_1] [i_1] [(short)7] [i_1] = ((/* implicit */unsigned long long int) ((int) var_1));
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_33 [(short)2] [i_0] [i_1] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_2 - 1] [6] [i_7])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_2] [i_7] [(short)8])))) >= (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_7])) > (var_12))))));
                        var_26 = ((/* implicit */int) max((var_26), (var_3)));
                        var_27 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2] [i_0]);
                    }
                    arr_34 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_35 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_0]);
                }
                for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        arr_40 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_0])) >> (((/* implicit */int) arr_0 [i_0])))) & (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)113)), (arr_8 [(unsigned char)2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_0), (var_1))))))));
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_45 [i_0] [i_1] = min((((((/* implicit */_Bool) arr_19 [i_8] [i_1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_19 [i_8] [i_1] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_19 [(short)9] [i_1] [i_8 - 1] [i_8 - 1])))), (((/* implicit */int) arr_19 [(short)0] [i_1] [i_8 - 1] [i_8])));
                            arr_46 [i_0] [i_0] [i_1] [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_0] [i_1]))));
                            arr_47 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_14)))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_9 [i_0] [i_1]))) ? (((((/* implicit */_Bool) 137438949376ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18)))) : (arr_41 [i_8] [i_8] [i_8 + 2] [i_8] [i_8 + 2])))) ? (((/* implicit */int) ((short) arr_2 [i_0] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) min(((short)-32748), (((/* implicit */short) (signed char)116))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_8] [i_9])) : (((/* implicit */int) var_16))))))))))));
                        }
                        for (int i_11 = 2; i_11 < 7; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_42 [i_11 - 1] [i_1]))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((int) arr_11 [i_8 - 1] [i_8 + 1] [i_11 + 1] [i_11 + 2]))));
                            var_31 = ((/* implicit */unsigned char) 5591120482969439035ULL);
                        }
                        arr_50 [i_0] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) arr_8 [i_0] [(short)8] [i_9]);
                        arr_51 [i_0] [i_1] [i_8] [6] |= ((/* implicit */_Bool) arr_3 [i_9]);
                    }
                    arr_52 [i_8] [i_1] [i_8] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_2 [i_1] [i_1])))) & (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)126))))));
                }
                for (short i_12 = 4; i_12 < 9; i_12 += 1) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_44 [i_0] [i_12 + 1] [i_12])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (2654140012608640741ULL))))))));
                    arr_55 [(unsigned char)9] [(unsigned char)6] [i_1] = ((/* implicit */int) ((short) (((((_Bool)1) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) & (arr_49 [i_1] [i_0] [i_12 - 2] [i_12] [i_0]))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_0] [i_12] [i_12] [i_0] [i_0])) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) arr_0 [(short)5]))))))) && (((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-76)) - (((/* implicit */int) (signed char)-85)))), (((/* implicit */int) max(((short)56), (((/* implicit */short) (signed char)51))))))))));
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 4) 
                        {
                            {
                                arr_61 [i_0] [i_1] [2] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-23151)) : (((/* implicit */int) var_15))))) ? (arr_7 [i_1] [i_1] [i_14]) : (var_12)))));
                                var_34 = ((/* implicit */unsigned char) (signed char)71);
                            }
                        } 
                    } 
                }
                var_35 = ((/* implicit */unsigned char) (signed char)3);
                var_36 = var_16;
            }
        } 
    } 
    var_37 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), ((~(((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
}
