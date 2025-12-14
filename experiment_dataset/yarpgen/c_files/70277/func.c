/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70277
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [6LL] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [16LL])) << (((((((/* implicit */int) var_6)) + (12698))) - (4))))));
        var_14 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [(signed char)13] [i_1] = ((/* implicit */unsigned int) -1981013253);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (+(var_11)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_13 [i_2] [0ULL] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                    arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((unsigned long long int) arr_9 [i_1] [i_3])) : (((/* implicit */unsigned long long int) ((unsigned int) var_1)))))));
                    arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) (-(var_3)))) | (arr_11 [i_1] [i_2] [i_2] [i_3]))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_3 [8])) : (((/* implicit */int) arr_4 [3ULL]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_2))))))) & (((unsigned int) ((unsigned int) var_8)))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_0)) ? (arr_12 [(_Bool)1]) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) max((arr_1 [i_4] [i_4]), (((/* implicit */unsigned short) arr_3 [i_4]))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((arr_11 [i_4] [14ULL] [14ULL] [(short)0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((arr_12 [(_Bool)1]) | (((/* implicit */long long int) var_11)))))))))));
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_8)), (((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))) != (arr_11 [i_4] [i_4] [i_4] [i_4]))))));
        var_18 = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_22 [i_4] [i_5] = ((/* implicit */signed char) ((((((unsigned long long int) -1981013253)) * (((/* implicit */unsigned long long int) arr_12 [i_4])))) * (((/* implicit */unsigned long long int) arr_12 [i_4]))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_13))));
        }
        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                var_20 *= ((/* implicit */unsigned int) var_4);
                arr_28 [(_Bool)1] [i_6] [i_6] [(_Bool)1] &= ((/* implicit */long long int) min((((/* implicit */unsigned char) (((~(arr_21 [i_6] [i_6]))) == (((/* implicit */unsigned long long int) ((long long int) arr_21 [(short)12] [2ULL])))))), (arr_4 [0LL])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    var_21 ^= ((/* implicit */int) ((unsigned short) ((unsigned char) var_4)));
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_22 *= ((/* implicit */short) ((signed char) ((int) var_1)));
                        var_23 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_9 [i_4] [i_4])))));
                        arr_33 [i_4] [i_8] &= ((/* implicit */unsigned short) ((arr_31 [i_7 - 3] [i_9] [i_7 + 1] [i_7 - 2] [i_7 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8])))));
                    }
                    for (signed char i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        arr_36 [(signed char)9] [8] [i_4] [i_7] [i_7] [i_8] [i_10] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) arr_16 [i_4]))) : (((/* implicit */int) var_6)));
                        arr_37 [i_4] [i_4] [i_6] [i_4] [i_7] [i_8] [i_10] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) var_11)))));
                        arr_38 [i_4] [i_6] [i_7] [i_8] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1981013274)) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) arr_35 [i_10 - 1] [i_6] [i_8] [i_7 + 1] [i_6] [i_4 + 2] [i_4])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                        arr_39 [i_4] [(signed char)10] [i_8] [(short)10] [i_7] [i_6] [i_4] = ((/* implicit */short) var_4);
                    }
                    for (signed char i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_3 [i_11]))));
                        var_25 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_34 [(unsigned char)12] [i_11] [i_7 - 3])))) - (((unsigned int) var_8))));
                    }
                    for (signed char i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        arr_45 [i_12] [i_4] [8] [i_4] [i_4] = ((/* implicit */short) arr_26 [12LL] [i_6]);
                        arr_46 [i_4] [i_4] [i_7] [10] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_31 [i_4] [i_4] [i_4] [i_4] [(signed char)3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                    arr_47 [i_8] [i_8] [i_7] [i_8] [i_4] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [10ULL] [i_6 + 2] [(signed char)12] [i_6 - 2] [i_8]))) - (arr_9 [i_4 + 2] [i_4 + 1])));
                    arr_48 [i_4] [i_6] [i_6] [i_6] [(unsigned short)6] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) != (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) arr_40 [i_7 - 3] [i_7 - 2] [i_4] [i_7] [i_7 - 1]))));
                    var_26 *= ((/* implicit */unsigned char) ((int) arr_23 [i_4] [i_6 - 2] [i_7 - 3]));
                }
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                {
                    arr_51 [i_4] [(unsigned short)8] [i_7] [i_6 + 2] [i_4] [i_4] = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_8))))) - (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_4] [i_7 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) + (((((/* implicit */int) var_12)) + (((/* implicit */int) var_12)))))))));
                    var_27 = ((/* implicit */long long int) arr_26 [i_7 - 2] [i_13]);
                    arr_52 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_7]));
                    var_28 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (-1270970809) : ((+(arr_6 [i_13])))))) % ((+(arr_12 [i_4])))));
                }
            }
            arr_53 [i_4] [i_6 - 3] = ((/* implicit */unsigned short) 13557512196531291657ULL);
        }
    }
    for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) /* same iter space */
    {
        var_29 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_19 [i_14] [i_14 + 2])) - (((/* implicit */int) var_10)))));
        arr_57 [i_14] [i_14] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((8636960477905946553LL), (281474976710655LL)))) ? (var_5) : (min((arr_49 [i_14 - 1] [i_14] [i_14] [8U]), (((/* implicit */unsigned long long int) var_4))))))));
        arr_58 [i_14 + 3] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) arr_24 [6U])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            arr_61 [(unsigned short)0] = ((/* implicit */unsigned int) arr_26 [7U] [i_15]);
            arr_62 [i_14 + 2] [i_15] = ((/* implicit */long long int) ((unsigned short) ((long long int) var_2)));
            arr_63 [6U] [i_14] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
    {
        for (unsigned short i_17 = 1; i_17 < 21; i_17 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_30 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_68 [12] [i_17] [i_17])))) != ((-(4889231877178259959ULL))))));
                    arr_70 [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_67 [i_17] [i_17 + 1] [i_17 + 3])) / (((/* implicit */int) var_9)))));
                    arr_71 [i_16] [i_18] [i_18] = ((/* implicit */short) (-(((((unsigned long long int) var_7)) | (((((/* implicit */_Bool) arr_68 [i_16] [i_17] [i_18])) ? (((/* implicit */unsigned long long int) var_11)) : (var_5)))))));
                    var_31 *= (!(((/* implicit */_Bool) (~(((unsigned int) (signed char)110))))));
                }
                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_69 [i_16] [i_16] [i_17] [i_17])) ^ ((~(((/* implicit */int) arr_67 [(short)18] [i_17] [i_17 + 2]))))));
                arr_72 [(_Bool)1] = ((/* implicit */short) var_2);
                var_33 = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
}
