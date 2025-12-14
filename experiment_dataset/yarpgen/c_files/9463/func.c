/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9463
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
    var_16 += ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = (~(arr_0 [i_1]));
            var_17 = ((/* implicit */long long int) ((var_11) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) arr_2 [i_1] [i_0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned short)65535))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((1315880383010540398LL) < (((/* implicit */long long int) arr_0 [i_0]))))) + (((/* implicit */int) ((((/* implicit */_Bool) 5381505431952277775LL)) || (((/* implicit */_Bool) var_12)))))));
            }
        }
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((_Bool) var_8))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)-9171))))))), (max((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), ((-(arr_6 [i_0] [i_0] [i_0 - 2])))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (-(arr_9 [i_3])));
            var_22 = ((/* implicit */signed char) ((unsigned int) arr_9 [i_3 + 1]));
        }
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        arr_21 [i_3] [(short)6] [i_6] [(short)6] = arr_18 [i_3] [i_5] [i_3 - 2];
                        var_23 -= ((/* implicit */unsigned int) ((int) var_1));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_8 = 4; i_8 < 22; i_8 += 4) 
            {
                arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_14 [i_3] [i_5] [24U])) || (((/* implicit */_Bool) 5590882814660174196LL))))));
                arr_26 [i_8] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)103)) ? (arr_13 [i_3 + 1] [i_3] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3])))));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_29 [i_9] [i_8] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53885)) && (((/* implicit */_Bool) var_5))));
                    var_24 = (~(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3 + 1] [i_3]))) : (arr_15 [(unsigned char)21] [i_8 + 3] [i_5] [i_3]))));
                    var_25 = var_6;
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (+(arr_27 [i_3 - 1] [i_3 - 2] [i_8 - 2])));
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_12 [i_3 + 1]))));
                        var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8520))))) ? (((((/* implicit */_Bool) arr_16 [i_10] [i_8] [i_5] [i_3])) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!((_Bool)0))))));
                    }
                }
                for (long long int i_11 = 1; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_8 + 3] [i_11] [i_12])) ? (((/* implicit */int) arr_32 [i_3] [i_5] [i_11] [i_11] [i_12] [i_3] [i_3])) : (((/* implicit */int) var_1))))) / (arr_9 [i_8 - 2])));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5] [i_3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_3] [i_5] [i_11] [i_11] [20ULL] [i_11 + 1] [i_12]))))) : (((var_4) << (((((/* implicit */int) (unsigned char)145)) - (120)))))));
                    }
                    var_31 = ((/* implicit */short) ((arr_20 [i_3] [i_5] [i_8] [i_11]) > (((/* implicit */int) arr_16 [i_8] [i_8] [i_8 + 1] [i_8 + 1]))));
                }
                for (long long int i_13 = 1; i_13 < 24; i_13 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) arr_9 [(_Bool)1]);
                    arr_41 [i_3] [i_5] [i_8] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_13 - 1] [i_3 - 1] [i_5] [i_8 + 1])) || (((/* implicit */_Bool) arr_40 [i_13 - 1] [i_3 - 1] [i_13 - 1]))));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) (signed char)28)) + (((/* implicit */int) (unsigned char)140)))))));
                    var_34 = ((/* implicit */unsigned char) arr_27 [i_13 + 1] [i_8 + 1] [i_5]);
                }
            }
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                var_35 |= ((/* implicit */unsigned int) arr_20 [i_14] [i_5] [i_5] [i_14]);
                var_36 = ((/* implicit */long long int) (signed char)-28);
            }
            for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                arr_48 [(_Bool)1] [(_Bool)1] [i_5] [i_15] = ((/* implicit */int) ((_Bool) (unsigned char)146));
                var_37 = arr_27 [i_3 - 2] [i_3 - 2] [i_3 - 1];
            }
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 4; i_17 < 24; i_17 += 4) 
                {
                    for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            arr_58 [i_3] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-5381505431952277773LL) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3])))))) ? (((long long int) (short)-21953)) : (((/* implicit */long long int) 735566470))));
                            arr_59 [20U] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42001)) ? (arr_45 [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_38 += ((/* implicit */unsigned long long int) (-(arr_22 [i_18] [i_17] [i_5] [i_3])));
                            arr_60 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6144)) ? (var_2) : (((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [i_17 - 3] [11ULL]))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_51 [i_3] [i_3] [18LL] [i_3] [i_3 + 1])) : (((/* implicit */int) var_12)))))));
                            arr_61 [i_18] [i_17] [i_18] [i_16] [i_18] [i_3 - 1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_5] [i_3 - 2])) ? ((~(((/* implicit */int) var_1)))) : (-735566459)));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_9))));
            }
            var_40 = ((/* implicit */short) ((var_11) ? (((/* implicit */int) arr_37 [i_3 + 1] [i_3] [i_3] [i_3 - 2] [i_3 - 1])) : (((((/* implicit */int) arr_19 [i_5])) ^ (((/* implicit */int) var_8))))));
        }
        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)31)) ? (arr_9 [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 735566470)) ? (((unsigned long long int) 1269716475)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3]))))))));
        /* LoopSeq 2 */
        for (signed char i_19 = 3; i_19 < 24; i_19 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                var_43 -= ((/* implicit */unsigned char) ((var_15) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)155)))))));
                var_44 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)72)))))));
                arr_67 [i_20] [i_19] [i_19] [i_3] = (-(((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_3] [i_19] [i_19] [i_20] [i_20] [i_20]))))));
                arr_68 [(signed char)6] [i_19] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3] [i_19] [i_19] [i_19] [i_20] [i_20])))))));
            }
            for (signed char i_21 = 2; i_21 < 24; i_21 += 1) 
            {
                arr_72 [i_19] = ((/* implicit */short) (_Bool)1);
                var_45 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_11)))));
            }
            for (unsigned int i_22 = 0; i_22 < 25; i_22 += 1) 
            {
                arr_77 [i_3] [i_19] [i_22] = ((/* implicit */unsigned char) arr_39 [(_Bool)1]);
                var_46 = ((/* implicit */_Bool) (+(arr_43 [i_3 + 1] [i_19 - 2])));
            }
            arr_78 [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_19 - 2])) : (((/* implicit */int) arr_17 [i_3 - 1] [i_19 + 1]))));
        }
        for (unsigned char i_23 = 0; i_23 < 25; i_23 += 3) 
        {
            arr_82 [10ULL] [i_23] = ((/* implicit */unsigned int) var_12);
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-17)) & (((/* implicit */int) (short)21932))));
            var_48 = arr_45 [i_3];
            var_49 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)21947)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))))));
            arr_83 [i_3] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_3] [i_3 + 1] [i_3] [i_23])) | (((/* implicit */int) var_8))));
        }
    }
    var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) var_9))));
    var_51 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))));
}
