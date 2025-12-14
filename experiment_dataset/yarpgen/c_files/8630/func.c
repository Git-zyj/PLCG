/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8630
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(signed char)6]))) + (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_13 = arr_1 [(_Bool)1] [i_0];
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53161)) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_10)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11057))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (min((var_9), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0] [(short)8]))))))));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_15 = var_4;
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */long long int) arr_3 [i_1])), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [(_Bool)1])), (var_2)))) ? (6528658277502799748LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))))))))));
    }
    for (long long int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 14996655227229051610ULL))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((13372897842460353869ULL), (((/* implicit */unsigned long long int) var_6)))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            arr_14 [i_4] = ((/* implicit */signed char) (_Bool)1);
            arr_15 [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_2]);
        }
        for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((((int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_2])))))), (((/* implicit */int) var_10))));
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_9 [i_2 - 1] [(signed char)3]);
            arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (4611686018427387903LL) : (6141306639943569590LL))))))) + (((/* implicit */int) max(((short)14361), (((/* implicit */short) arr_3 [i_2 + 1])))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_5 - 3])) : (((/* implicit */int) arr_3 [i_5 + 1])))) : ((~(((/* implicit */int) arr_3 [i_2 + 1])))))))));
        }
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (signed char)-11))));
        arr_21 [i_2 + 1] = ((/* implicit */signed char) arr_6 [i_2 + 1]);
        arr_22 [i_2 - 1] = ((/* implicit */unsigned char) arr_13 [i_2]);
    }
    for (unsigned int i_6 = 3; i_6 < 16; i_6 += 4) 
    {
        var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), ((-(arr_12 [i_6])))))) ? (((((/* implicit */_Bool) arr_12 [i_6])) ? (arr_12 [i_6 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned char)4]))))) : (((/* implicit */unsigned long long int) (~(6141306639943569590LL))))));
        var_22 ^= ((/* implicit */_Bool) arr_17 [(unsigned char)14]);
    }
    var_23 &= ((/* implicit */signed char) max((((/* implicit */int) var_6)), (var_8)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        var_24 = ((((((/* implicit */_Bool) var_11)) ? (arr_28 [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_27 [6LL])))) - (((/* implicit */unsigned long long int) (+(arr_27 [(unsigned char)19])))));
        arr_30 [(short)4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7])) ? (arr_29 [i_7 - 1]) : (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -4611686018427387903LL)) && (((/* implicit */_Bool) (signed char)-11)))))) : (0U)));
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            arr_35 [i_8] [i_8] = ((/* implicit */_Bool) (short)21408);
            var_25 = ((/* implicit */short) (~(arr_32 [i_8] [i_7 - 1])));
        }
        for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
        {
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7 + 1])) ? (((/* implicit */int) var_0)) : (var_3)))) | (arr_29 [i_7 + 1]))))));
            arr_40 [i_7] [i_9] [i_9 - 1] = ((/* implicit */unsigned long long int) -6141306639943569591LL);
        }
        arr_41 [i_7] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_33 [20ULL] [i_7])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_7 - 1] [i_7] [i_7 + 1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (unsigned short i_11 = 2; i_11 < 23; i_11 += 2) 
            {
                for (long long int i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) arr_33 [i_11] [i_10]);
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_49 [i_7] [i_10]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        var_29 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((max((arr_48 [i_13] [i_13] [i_13] [(signed char)18] [(signed char)18]), (arr_49 [i_13] [i_13]))), (1158918393)))), (((((/* implicit */_Bool) max((arr_52 [i_13]), (((/* implicit */short) arr_31 [i_13]))))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (1716502469300451092ULL) : (((/* implicit */unsigned long long int) arr_26 [i_13])))) : (((/* implicit */unsigned long long int) ((arr_45 [i_13] [i_13] [i_13]) + (((/* implicit */int) var_10)))))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22562))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_44 [i_13])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [0U] [i_13])) : (((/* implicit */int) arr_50 [i_13] [i_13] [i_13] [i_13] [i_13]))))))) : (arr_27 [i_13])));
        var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_13] [i_13])) ? (arr_42 [i_13] [i_13]) : (arr_28 [i_13] [(unsigned short)2]))) + (((/* implicit */unsigned long long int) arr_36 [(unsigned char)20] [i_13] [i_13]))))) ? (max((max((var_8), (((/* implicit */int) arr_46 [i_13] [i_13])))), ((-(((/* implicit */int) (signed char)76)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-11)), (1335620366)))))))));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            var_32 = ((/* implicit */unsigned char) arr_28 [i_13] [i_13]);
            arr_56 [i_14] [i_14] [i_14] &= ((/* implicit */unsigned long long int) -4611686018427387904LL);
            var_33 = (-(((((/* implicit */_Bool) (unsigned short)63)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)0)))));
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2862590588U)) ? (-6141306639943569591LL) : (((/* implicit */long long int) 2883262614U))));
        }
        for (long long int i_15 = 4; i_15 < 20; i_15 += 4) 
        {
            arr_59 [i_13] [i_13] = ((/* implicit */unsigned char) (+(((min((arr_37 [i_15]), (((/* implicit */unsigned long long int) arr_47 [i_13] [i_13])))) & (((arr_37 [i_15]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            arr_60 [i_13] [i_15] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)114)), (1488788661770147667ULL)));
            var_35 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_49 [14ULL] [i_13]), (((/* implicit */int) arr_57 [i_13] [(_Bool)1] [7LL]))))))) ? (((var_3) / (((/* implicit */int) arr_46 [i_13] [i_15 + 1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_53 [i_13] [i_13])), (0ULL)))) ? (-586026531) : (((/* implicit */int) arr_53 [i_13] [i_15 + 2]))))));
        }
    }
    for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        var_36 = ((max((((/* implicit */long long int) -1335620366)), (max((5837052325141188852LL), (((/* implicit */long long int) 3945920613U)))))) >= (((/* implicit */long long int) ((int) arr_61 [i_16] [(signed char)17]))));
        arr_64 [i_16] [6ULL] |= max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_46 [i_16] [(signed char)4])) > (arr_45 [i_16] [i_16] [i_16])))) > (((/* implicit */int) var_6))))));
        arr_65 [i_16] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_16] [i_16])) ? (((/* implicit */int) arr_39 [i_16] [i_16] [i_16])) : (((/* implicit */int) var_0))))) ? (max((arr_32 [i_16] [i_16]), (((/* implicit */unsigned int) arr_48 [i_16] [i_16] [(unsigned char)16] [(signed char)15] [i_16])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16])))))), (max((var_9), (((/* implicit */long long int) max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)0)))))))));
        var_37 = ((/* implicit */int) max((var_37), (max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (short)32759))))));
        var_38 = ((/* implicit */int) ((unsigned long long int) arr_33 [i_16] [i_16]));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 1; i_18 < 12; i_18 += 2) 
        {
            for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
            {
                {
                    arr_72 [6LL] [i_18] [i_19] [11LL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_52 [i_17])) ? (arr_32 [6U] [i_18 - 1]) : (var_1)))));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [(signed char)17] [i_17])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) var_6))))) : (7851115974764891714ULL))))));
                }
            } 
        } 
        var_40 = ((/* implicit */int) arr_55 [i_17] [i_17] [i_17]);
        arr_73 [i_17] = ((/* implicit */unsigned char) 3164994240733716434ULL);
    }
}
