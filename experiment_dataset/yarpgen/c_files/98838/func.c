/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98838
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 -= max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)14));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_21 += ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (short)(-32767 - 1)))))) / (var_10))));
                    var_22 += ((/* implicit */unsigned char) arr_5 [i_0] [(signed char)8] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0U))));
                                var_24 -= ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) min((arr_3 [i_3 + 2] [i_3 + 2]), (arr_3 [i_3 - 1] [i_4])))) : (((/* implicit */int) min(((unsigned short)53818), (((/* implicit */unsigned short) (short)-30867)))))));
                                arr_12 [i_0] [i_0] [(short)14] [(short)18] [i_4] [i_0] = ((/* implicit */signed char) (short)-30884);
                                arr_13 [i_0] [(unsigned char)14] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_17 [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_25 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_18))));
                        var_26 = ((14724211965784871031ULL) - (((/* implicit */unsigned long long int) (-2147483647 - 1))));
                        arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_27 += (-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-68)) + (71))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */int) (+(((1611780193U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_27 [i_0] [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) (+(4294967295U)));
                            var_29 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_0] [i_7]);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_5])) << (((-534191395) + (534191422)))))) ? (var_17) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_8 + 2]))) : (((((/* implicit */_Bool) (short)-4855)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
                            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_8 - 2] [(unsigned short)17])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_33 -= ((/* implicit */unsigned char) ((unsigned short) arr_31 [i_5] [i_9]));
                            arr_33 [i_0] [i_0] [(short)3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((signed char) var_6)));
                            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (unsigned char)162)))) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_5])))))) : (((/* implicit */int) arr_16 [i_0] [1ULL] [i_5] [i_9]))));
                        }
                        for (unsigned int i_10 = 4; i_10 < 20; i_10 += 4) 
                        {
                            var_35 = ((/* implicit */short) (signed char)-77);
                            arr_37 [i_0] [i_1] [i_5] [i_0] [(short)3] [i_10] [i_10 - 3] = ((/* implicit */short) ((unsigned char) (short)32767));
                            arr_38 [i_0] [i_1] [i_0] [i_6] [i_10] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) -488456714288741410LL))));
                            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)8))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)36)) | (((/* implicit */int) (_Bool)1)))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (short i_11 = 2; i_11 < 20; i_11 += 4) 
                    {
                        arr_43 [i_0] [5U] [i_1] [i_0] = ((/* implicit */_Bool) var_16);
                        var_38 -= ((/* implicit */unsigned short) arr_0 [i_5]);
                        arr_44 [i_0] [i_0] [i_5] [i_11] = ((/* implicit */_Bool) max((min((((/* implicit */int) (_Bool)1)), (-534191395))), (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_39 += ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5313183835806245126ULL)) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1582928142U))))) : ((~(((/* implicit */int) (unsigned char)238))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)4883)))) ? ((~(13133560237903306489ULL))) : (((/* implicit */unsigned long long int) min((472728404), (((/* implicit */int) (signed char)77)))))))));
                        arr_49 [i_0] [i_12] = ((/* implicit */unsigned short) ((signed char) ((unsigned char) (signed char)52)));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 2; i_14 < 20; i_14 += 2) 
                        {
                            arr_56 [i_14 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_42 [i_0] [i_13 - 1] [i_14 - 1] [i_14 - 1]);
                            arr_57 [i_0] [i_1] [(_Bool)0] [i_13] [i_14 + 1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-472728404), (((/* implicit */int) arr_24 [i_13 + 2] [i_14 + 1])))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((unsigned char) (unsigned char)68)))));
                            arr_61 [i_1] [i_1] [i_13] [i_0] = ((/* implicit */signed char) var_14);
                        }
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            arr_64 [i_0] [i_1] [(short)13] [i_13 + 1] [(unsigned short)17] = ((/* implicit */signed char) ((unsigned char) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned char)18)))))));
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3258671834U)) + (10246691331969376593ULL)));
                        }
                        arr_66 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */int) arr_18 [i_13] [i_5] [i_1] [i_0])) - (((/* implicit */int) arr_21 [10LL] [i_1])))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_0] [i_0] [(short)1] [i_1] [i_5] [i_13])))))))));
                    }
                    var_41 = arr_4 [i_0] [(short)18];
                }
            }
        } 
    } 
    var_42 = ((/* implicit */_Bool) ((((13133560237903306490ULL) / (14922347423734896704ULL))) / (((max((((/* implicit */unsigned long long int) 832281979)), (577422131618632064ULL))) / (((/* implicit */unsigned long long int) var_17))))));
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (short)30867))));
}
