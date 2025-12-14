/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61757
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
    for (signed char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) max((1028542353372641558ULL), (((/* implicit */unsigned long long int) 1028505883U))));
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 6; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_2 [i_1]))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_3]);
                        var_22 = ((/* implicit */short) arr_0 [i_2]);
                        var_23 *= ((/* implicit */_Bool) min((((arr_8 [i_0 + 3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (arr_3 [i_0] [i_0] [i_2 - 4]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_2] [i_2 - 2])), ((-(arr_9 [i_0 + 3] [i_1] [i_0 + 3]))))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_24 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-26276)) : (((/* implicit */int) (_Bool)1))))) - (((arr_2 [i_0]) - (((/* implicit */unsigned long long int) 3266461428U)))))), (min((((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_0]))), (((arr_4 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                            var_25 = ((max((arr_11 [9U] [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) -2007653637)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) >= (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (10325652614368195626ULL))))))));
                            arr_15 [i_0] [i_0] [i_1] [(unsigned char)8] [i_0] [4ULL] [i_4] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_2 + 3] [i_3] [i_3] [i_4]);
                        }
                        for (short i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_5]))))), (max((262143ULL), (((/* implicit */unsigned long long int) arr_8 [i_0])))))), (max((((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [3U] [i_3] [i_5])) ? (arr_16 [i_0 + 2] [i_1] [i_1] [i_3] [i_5]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_3] [i_1]))))));
                            var_26 = ((/* implicit */short) min((max((-1), (((/* implicit */int) arr_5 [i_0 + 1] [i_5 - 1] [i_2 + 3])))), (((/* implicit */int) arr_5 [i_0 + 2] [i_5 + 2] [i_2 - 1]))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) & (arr_6 [i_0] [i_0 + 3] [i_0 + 3] [1LL]))), (max((((9170789180936750782ULL) * (((/* implicit */unsigned long long int) -4613662505574441063LL)))), (((/* implicit */unsigned long long int) max((arr_17 [i_0 - 1] [i_1] [(_Bool)1] [(_Bool)1]), (((/* implicit */short) (unsigned char)0))))))))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) ((404454612) << (((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_5 - 1])) - (29))))))), (max((-4613662505574441046LL), (((/* implicit */long long int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_2 + 1])))))))));
                            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_0 - 1] [i_1] [i_3] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3]))))) ? (((((/* implicit */int) arr_1 [i_3])) | (((/* implicit */int) (short)17857)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) <= (((/* implicit */int) arr_5 [i_5] [i_3] [i_1])))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_6 + 1]))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 3] [i_2])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) -3600924259478755159LL))))));
                            arr_22 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -2007653637))) ? (((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_11 [i_0] [i_1] [i_0] [i_3]))) / (((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] [i_6 + 1]), (arr_21 [i_2 + 2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2])) ? (((/* implicit */int) ((unsigned char) arr_21 [i_0]))) : (((/* implicit */int) max(((short)14340), (((/* implicit */short) arr_10 [i_6] [i_3] [i_2] [i_1] [i_1] [(short)1]))))))))));
                            var_31 &= ((/* implicit */unsigned char) arr_12 [i_0 + 3] [i_0 + 3] [i_2] [i_3] [i_6]);
                            var_32 = min((2041957417U), (((/* implicit */unsigned int) (~(arr_19 [i_0 + 1] [i_0 + 1] [7LL] [7LL] [i_3] [i_6 - 1])))));
                        }
                        arr_23 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (signed char)-86);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_7] [i_8])), (arr_24 [i_0 + 1] [i_0 + 1]))), (((/* implicit */int) min((arr_1 [i_7]), (((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_7] [i_8] [i_8])))))))) ? (max((((((/* implicit */_Bool) arr_9 [i_0 - 1] [(unsigned char)7] [i_2])) ? (arr_3 [2U] [(signed char)8] [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_7] [i_2 + 3] [i_1] [(unsigned char)7]))))), (arr_16 [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) 1211557094))));
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_10 [i_8] [i_7] [i_2] [i_1] [i_0 + 1] [i_0 + 1]))) == (((((/* implicit */int) (unsigned char)40)) % (((/* implicit */int) (short)-25178)))))))) : (max((arr_6 [i_1] [i_2 + 3] [i_1] [i_8]), (((9275954892772800834ULL) | (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_1] [i_1]))))))));
                                var_35 = ((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 3]);
                                arr_29 [i_0] [i_7] [i_2 - 3] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), (arr_20 [i_7] [i_7] [i_2 - 4] [i_1] [i_0 + 3] [i_0 + 1])))) ? (min((arr_9 [i_1] [i_1] [i_7]), (((/* implicit */int) arr_10 [i_0 + 1] [i_7] [i_2 - 2] [i_2] [i_1] [i_0 + 1])))) : (min((((/* implicit */int) arr_14 [i_0 + 3] [i_1] [i_2] [i_2] [i_8])), (1))))) + (2147483647))) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26276))) : (9196164052136440746ULL))))) + (26297)))));
                                arr_30 [i_0 + 1] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */unsigned char) ((1211557094) / (((/* implicit */int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max(((~(arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1]))), (max((arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3]), (arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                }
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    var_36 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((arr_19 [i_0] [i_0 + 2] [i_0] [i_0] [i_9 - 1] [i_9]) / (759032359)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_9 + 1] [i_1] [(_Bool)1] [i_1] [i_1] [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) arr_14 [i_0 + 1] [i_1] [i_9] [i_1] [i_0 + 1])), (arr_32 [i_0] [i_0])))))));
                    var_37 = ((/* implicit */unsigned char) arr_34 [i_0]);
                    arr_35 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0] [(unsigned char)4] [i_1] [(_Bool)1])) >= (((/* implicit */int) arr_14 [i_0] [i_0] [3ULL] [i_0] [i_0 - 1]))));
                }
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_45 [i_0] [i_0] [i_10 - 1] [i_11] [i_12] [i_12] = ((/* implicit */int) max((((arr_8 [i_10 + 1]) ? (9250580021573110887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_13 [i_0 + 1] [i_1] [i_10] [i_10] [i_11] [i_12] [i_12])), (arr_7 [i_0 + 1] [i_1]))))));
                                var_38 = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_6)))) : (((/* implicit */int) var_5))));
}
