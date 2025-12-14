/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70213
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
    var_14 = var_5;
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */signed char) max((var_16), (var_7)));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 11034095983496819367ULL))) >> ((((~(var_5))) + (1262847434)))))) ? (((/* implicit */int) var_6)) : (var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 - 1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) var_8);
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_2] [i_4 + 2] = ((/* implicit */_Bool) var_7);
                                arr_16 [i_2] = (((((+(((/* implicit */int) min((((/* implicit */signed char) var_13)), (arr_5 [i_2] [i_2])))))) + (2147483647))) >> (((((((/* implicit */_Bool) ((arr_0 [i_0]) | (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) - (79))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned short) ((unsigned long long int) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_9)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) (~(arr_21 [i_0] [i_1] [i_0] [i_0] [i_6])));
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_1] [13] [13] [i_1]))));
                            arr_22 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [i_6] [i_6] [i_5] [i_2 - 1] [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_21 [i_0] [i_0] [i_2] [i_5] [i_6])))) ? (((/* implicit */int) arr_5 [i_0] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 2] [i_1]))));
                            var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) var_6);
                            arr_27 [i_7] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) var_6);
                        }
                        arr_28 [i_2] [i_1] [(unsigned char)8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 + 2] [i_2 - 1])) & (((/* implicit */int) var_6))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((var_13) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-9)), (2147483647)))) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (arr_18 [i_0] [i_0] [i_1] [i_2 - 1] [i_8]))))) : (min((arr_21 [i_0] [i_0] [i_2 - 1] [i_2] [i_0]), (var_11))))));
                        var_24 = max((((/* implicit */int) (signed char)-15)), (((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (arr_1 [i_2 + 2] [i_2 + 2]) : (arr_1 [i_2 + 2] [i_2 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_0] [i_2 + 2] [i_2 + 2]))))) + (((((/* implicit */_Bool) (unsigned short)18486)) ? (var_10) : (arr_31 [(unsigned char)15] [i_1] [1] [(unsigned char)15] [i_9 + 1]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                            arr_34 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0]))) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))))))) ? (((/* implicit */int) arr_5 [i_0] [i_8])) : ((~(((/* implicit */int) var_3))))));
                            var_26 = ((/* implicit */unsigned short) (((-(((((/* implicit */int) (signed char)-13)) * (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_9 + 1])))))) / ((+((+(var_4)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */int) 11034095983496819380ULL);
                            var_28 = var_2;
                            var_29 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1] [i_2 + 2]))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            arr_41 [i_0] [i_2] [i_0] [i_0] [i_0] [2] = ((/* implicit */unsigned long long int) (+(((arr_13 [i_0] [i_1] [i_2] [i_8] [i_11] [i_2 - 1] [i_0]) >> ((+(((/* implicit */int) var_3))))))));
                            arr_42 [i_0] [i_2] [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((_Bool) arr_19 [i_0] [i_1] [i_2 + 1] [i_8] [i_11] [i_0])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-1))))) : (((/* implicit */int) min((var_0), (var_3))))));
                        }
                    }
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        arr_46 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0]))))) & (var_9))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_20 [i_12] [i_12 + 2] [i_1]))))));
                        var_30 *= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_12]);
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (-(arr_45 [i_12] [i_12] [i_12 - 1] [i_12])))))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_12])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? ((-(((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_13)))))) : ((~(((/* implicit */int) arr_40 [i_2 - 1] [i_12 + 1] [i_2]))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            arr_52 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((arr_3 [i_0] [i_14]) ? (((18280706668291630290ULL) >> (((var_9) - (1679805100U))))) : (((/* implicit */unsigned long long int) (-(arr_0 [i_14]))))));
                        }
                        for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            var_34 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_4)))) > (((unsigned long long int) var_6))));
                            arr_55 [(unsigned char)8] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_2 - 1] [i_13])) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_2))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_26 [i_1] [i_1]))));
                            arr_56 [(signed char)12] [(signed char)12] [i_2] [i_13] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)14))));
                        }
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_2] [i_2] [i_13])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_54 [i_0] [i_0] [i_1] [i_2] [i_2 + 2] [i_13])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_6)))))));
                        arr_57 [i_13] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (arr_17 [i_0] [i_1] [i_2] [i_1])));
                    }
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ^ ((-(var_9)))));
                }
            } 
        } 
    } 
}
