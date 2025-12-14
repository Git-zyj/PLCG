/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88663
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) >> (((var_14) - (3109380181454099996LL))))) < ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) == ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_12)))))) ? (((min((var_14), (((/* implicit */long long int) arr_0 [i_0])))) + (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_16 = (~(var_14));
                            var_17 ^= ((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_4] [i_4]);
                        }
                        var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_2] [i_1])) ? ((((((-(var_2))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)237)) || (((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 - 1])))));
                        var_19 = ((/* implicit */long long int) arr_6 [i_1]);
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_21 [i_6 + 1] [i_6] [i_6 + 1]))))) ? (((/* implicit */int) arr_16 [i_3 - 1] [i_2 - 1] [i_6 + 2] [i_4])) : (((/* implicit */int) arr_21 [i_6 + 1] [i_6] [i_6 + 2]))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_3))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [i_4] [i_1] [i_2 + 1] [i_1])) + (2147483647))) >> (((((max((((/* implicit */unsigned int) arr_17 [(short)10] [i_2] [(unsigned char)10] [i_3] [(short)10] [i_3])), (var_6))) << (((var_8) % (((/* implicit */int) var_5)))))) - (812012395U)))));
                            arr_27 [i_1] [i_1] [i_2] [i_2] [i_3 + 2] [i_4] [i_7] = ((((/* implicit */int) ((((/* implicit */int) (short)-26067)) != (((/* implicit */int) arr_11 [i_2 - 1] [i_3 + 1] [i_3]))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [1]))) >= (var_9)))));
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_4] [i_7])) | (((((/* implicit */int) (short)16384)) - (((/* implicit */int) arr_21 [i_1] [i_3 + 2] [i_2 - 1]))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            arr_30 [i_1] [i_1] [i_1] [17] [i_4] [17] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), ((~(min((((/* implicit */unsigned int) -315208221)), (4148667905U)))))));
                            var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_23 [i_8 + 3] [i_8] [i_8 - 1] [i_8 + 3] [i_3]))))));
                            arr_31 [i_3] &= ((((min((((/* implicit */unsigned long long int) var_3)), (11917586448039371234ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8 + 3] [i_8] [i_3 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) var_8)) < (var_1)))) >> ((((+(var_0))) + (660889293)))))));
                        }
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [i_1])))))), (var_9)))) || (((/* implicit */_Bool) ((((((((/* implicit */int) arr_5 [i_1] [i_3 - 1])) ^ (((/* implicit */int) arr_9 [i_1] [i_3 + 1] [i_4])))) + (2147483647))) << (((((var_12) + (3146409973518661214LL))) - (11LL))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */int) arr_12 [i_1] [i_3]);
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_2] [i_2 - 3] [i_2] [i_2 - 1])) ? (arr_34 [i_2] [i_2 - 3] [(signed char)15] [i_2]) : (arr_34 [i_2] [i_2 - 3] [i_2] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned char)0] [i_2])) ? (((/* implicit */unsigned int) ((630669038) % (((/* implicit */int) var_5))))) : ((-(var_1)))))));
                        arr_36 [i_1] [i_1] [i_1] [i_9] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */int) var_13)) * ((~(((/* implicit */int) var_5))))));
                        arr_37 [4LL] [i_2] [i_3] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((arr_34 [i_9] [i_3 - 1] [i_2 - 2] [i_1]), (((/* implicit */long long int) 4148667905U)))) / (max((var_14), (((/* implicit */long long int) (short)252))))))) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-124)), ((unsigned char)157))))));
                        arr_38 [i_9] [i_9] [i_3 + 1] [3LL] [i_1] [i_1] = ((/* implicit */long long int) max((var_6), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_3)))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((2046LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43635))))))));
                            var_28 *= ((/* implicit */unsigned char) (-(var_9)));
                        }
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (var_11)));
                            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) <= (2979865443U)))) << (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_23 [i_1] [i_2 - 3] [i_3 + 2] [i_10] [i_12])) + (2147483647))) << (((var_3) - (3096708248U)))))))))));
                        }
                        for (int i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) (short)-24583);
                            arr_47 [i_1] = ((/* implicit */short) ((arr_28 [i_2 - 3] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2 - 3] [(short)5] [i_3] [i_10] [i_2 - 3])))));
                            arr_48 [i_1] [i_2 - 1] [i_2 - 1] [14LL] [i_10] [(unsigned short)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_3 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_3 - 1])) != (((/* implicit */int) arr_5 [i_2 - 2] [i_3 - 1]))))) : (((((/* implicit */int) arr_5 [i_2 - 2] [i_3 - 1])) * (((/* implicit */int) arr_5 [i_2 - 2] [i_3 - 1]))))));
                            var_32 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2 - 2] [i_1] [i_1]))) ^ (arr_28 [i_1] [i_2 - 2]))) % (((((/* implicit */_Bool) arr_28 [i_1] [i_2 - 2])) ? (arr_28 [i_3 - 1] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-13658)))))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 14; i_14 += 1) 
                        {
                            var_33 = ((/* implicit */short) ((min((arr_18 [i_1] [i_2 - 1] [i_14 - 1] [i_10 + 1] [8LL] [15U]), (arr_49 [i_1] [i_2 - 1] [i_14 - 1] [i_1] [i_2 - 1] [i_2 + 1]))) / (max((arr_18 [i_1] [i_2] [i_14 - 1] [i_10 + 1] [i_14] [i_14]), (arr_18 [i_1] [i_2] [i_14 + 1] [i_10] [i_14 + 4] [(unsigned char)8])))));
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_13 [7U] [i_14] [i_14] [i_14]))));
                            var_35 = ((/* implicit */short) ((((6303640632160873270LL) - (8381551642771080684LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45943))) ^ (var_2))))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_44 [i_1] [i_1] [i_1])), (11917586448039371234ULL))))))));
                            var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)12906))));
                            var_37 -= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_10)) << (((arr_22 [i_3] [i_2]) - (16443266334380388595ULL))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_10])) : (((/* implicit */int) var_15)))))) < (((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_3] [i_10]))));
                        }
                        var_38 = ((/* implicit */unsigned char) var_6);
                    }
                    var_39 = ((/* implicit */int) (+(min((((/* implicit */long long int) arr_42 [i_1] [i_2 - 1] [i_2] [i_3] [i_3])), (((332459991317443980LL) % (((/* implicit */long long int) ((/* implicit */int) arr_16 [15LL] [i_2] [i_2] [i_2 + 1])))))))));
                    arr_57 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_34 [i_1] [i_2] [i_2] [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) > (((/* implicit */long long int) ((/* implicit */int) ((1315101843U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
                    var_40 += ((/* implicit */_Bool) (((+(((-1483847657086208880LL) - (((/* implicit */long long int) ((/* implicit */int) var_5))))))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_3 + 2] [i_3 + 2] [i_3 + 2])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                {
                    var_41 = ((((/* implicit */_Bool) arr_51 [i_16] [0U])) || (((/* implicit */_Bool) min((((((/* implicit */int) arr_61 [i_1])) * (((/* implicit */int) arr_14 [i_16])))), (((/* implicit */int) max((((/* implicit */short) arr_53 [i_1] [i_16] [i_16])), ((short)2044))))))));
                    var_42 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (((((/* implicit */_Bool) arr_54 [i_1] [i_1] [i_1] [i_16] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) 1729382256910270464LL)) : (6529157625670180367ULL))))) % (max((((/* implicit */unsigned long long int) arr_24 [i_1] [i_16] [i_16] [i_16] [i_17])), (6529157625670180352ULL))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_43 *= ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_3)))), (var_14))) << (((/* implicit */int) ((var_12) > (((/* implicit */long long int) arr_52 [i_18 - 1] [i_18] [i_18])))))));
            /* LoopNest 3 */
            for (long long int i_19 = 1; i_19 < 17; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    for (unsigned int i_21 = 4; i_21 < 16; i_21 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) arr_14 [i_18 - 1]);
                            var_45 = arr_51 [i_21 - 3] [i_18 - 1];
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_1])) << (((var_9) - (5950646952339663058ULL))))))));
        }
    }
    var_47 = ((/* implicit */unsigned int) var_0);
}
