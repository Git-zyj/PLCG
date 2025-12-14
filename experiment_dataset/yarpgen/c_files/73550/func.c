/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73550
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */int) ((1501220337U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))) - (((/* implicit */int) ((((/* implicit */long long int) 1501220337U)) != (-5993629497475578992LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned short) ((arr_5 [i_4] [i_0 + 1] [i_4] [i_1 + 1]) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1501220336U)) ? (2793746960U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))))))))))));
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)2)) || (((/* implicit */_Bool) arr_10 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) arr_10 [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) arr_10 [i_3])))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((max((((/* implicit */long long int) (short)-23286)), (-8939608517035974011LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) arr_7 [i_4] [i_4]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_24 += ((/* implicit */short) var_18);
                        var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)-23286)) % (2091935961)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 3; i_9 < 18; i_9 += 4) /* same iter space */
                        {
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [i_6])) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) arr_11 [i_5] [i_6] [i_7 - 1] [i_8] [i_9 - 3]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_5])) / (((/* implicit */int) var_13))))) + (max((arr_1 [i_5] [i_7 + 1]), (((/* implicit */unsigned int) var_1))))))) : (((long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_9 + 1])))));
                            var_27 += ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1022646655)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23296))) : (65535LL))), (1048575LL)))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_8)))))))));
                        }
                        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */int) max(((short)25289), ((short)(-32767 - 1))))) < (((/* implicit */int) arr_20 [i_5] [i_6]))));
                            var_29 = arr_26 [i_5] [i_6];
                            var_30 = ((/* implicit */unsigned long long int) min((2411708861U), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((var_11), (1501220310U)))) > (((var_8) * (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_7 + 2] [i_8]))))))))));
                        }
                        /* vectorizable */
                        for (short i_11 = 2; i_11 < 21; i_11 += 4) 
                        {
                            var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_8])) ? (arr_15 [i_11 + 1] [i_6]) : (arr_15 [i_5] [i_7 - 1])));
                            arr_29 [i_5] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_21 [i_11 - 1] [i_8] [i_8] [i_7 + 1] [i_6] [i_6] [i_5]))));
                            arr_30 [i_5] [i_7] [i_5] [i_8] [i_11 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22752))) * (arr_15 [i_11 + 1] [i_7 + 2])));
                        }
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_32 -= ((/* implicit */short) ((((max((arr_27 [i_12] [i_5] [i_7 + 1] [i_6] [i_5] [i_7 + 2]), (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)11)), (2091935961)))))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) max((arr_6 [i_5] [i_6] [i_5] [i_12] [i_7 + 2]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                        var_33 -= ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)1524)))) : (arr_14 [i_5] [i_5])))) || (((/* implicit */_Bool) ((unsigned char) ((short) (_Bool)1)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            arr_38 [i_7] [i_6] [i_5] [i_12] [i_12] = ((/* implicit */unsigned char) arr_34 [i_7] [i_6] [i_7 + 1] [i_12] [i_13]);
                            var_34 ^= ((/* implicit */int) 4294967295U);
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            arr_43 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_6] |= ((/* implicit */unsigned char) ((((var_2) != (((/* implicit */long long int) ((/* implicit */int) ((6431005258058959110LL) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-8161)) % (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)22961)) * (((/* implicit */int) (short)18574))))) : (var_9))))));
                            arr_44 [i_6] [i_14 - 1] [i_6] [i_12] [i_14 - 1] [i_6] [i_7] = ((/* implicit */short) max((2091935930), (((((/* implicit */int) arr_36 [i_6] [i_7 + 2] [i_7 + 2] [i_14 - 1] [i_14 - 1])) % (((/* implicit */int) arr_36 [i_6] [i_7 + 2] [i_7 - 1] [i_14 - 1] [i_14 - 1]))))));
                            var_35 |= ((/* implicit */long long int) ((((/* implicit */long long int) -2091935978)) >= (arr_0 [i_14 - 1])));
                            var_36 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) arr_5 [i_7 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]))), (max((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_7 - 1] [i_7 + 2] [i_14 - 1] [i_14 - 1])))));
                            arr_45 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_7] [i_14 - 1] = ((/* implicit */unsigned short) ((unsigned char) arr_35 [i_12] [i_6] [i_7 + 1]));
                        }
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            var_37 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-6))));
                            var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                        }
                    }
                    arr_49 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_5] [i_6] [i_7 - 1] [i_7] [i_5] [i_6] [i_5])) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_5]))) : (arr_40 [i_6])))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-96)))) : (((/* implicit */int) var_18))))));
                    var_39 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-18575)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)253))));
                }
            } 
        } 
    } 
}
