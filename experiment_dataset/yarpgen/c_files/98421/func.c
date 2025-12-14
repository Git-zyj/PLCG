/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98421
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
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [(unsigned short)4] = ((/* implicit */long long int) 3774653193948651835ULL);
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_9))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
            {
                arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (signed char)6);
                arr_15 [i_3] [i_2] [3LL] [i_3] = ((/* implicit */unsigned int) min((arr_9 [i_3]), (((((((/* implicit */int) (short)-22812)) - (((/* implicit */int) (unsigned char)218)))) != (arr_13 [1] [1] [i_1] [i_1])))));
            }
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
            {
                arr_19 [5LL] [i_2] = var_8;
                arr_20 [i_1] = ((/* implicit */long long int) (~(max((arr_16 [i_1] [i_2] [i_2]), (((/* implicit */int) (unsigned short)65504))))));
                var_20 -= ((/* implicit */unsigned char) var_12);
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_23 [i_1] [8U] [(unsigned short)1] [i_5] [i_5] [i_4] = ((/* implicit */signed char) var_6);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_6 = 2; i_6 < 7; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_13 [i_2] [i_4] [i_2] [i_6])) : (arr_10 [i_1] [i_4] [i_6])));
                        var_22 = ((/* implicit */unsigned long long int) -1359359291142276801LL);
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) var_2);
                        var_24 = ((/* implicit */unsigned long long int) var_10);
                    }
                    arr_28 [i_1] [i_2] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_5] [i_5])))), (((/* implicit */int) ((signed char) var_3)))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64017))) : (var_10))))))))));
                }
            }
            arr_29 [2LL] [i_1] = ((/* implicit */long long int) arr_24 [i_1] [i_1] [i_1] [i_2]);
        }
        arr_30 [i_1] &= ((/* implicit */int) max((((var_10) / (((/* implicit */long long int) arr_7 [i_1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1])))))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned short)64017)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((unsigned char) 2644379314U))) : ((-(((/* implicit */int) var_12)))))) : (((arr_31 [i_8]) / (((((/* implicit */_Bool) var_14)) ? (arr_31 [i_8]) : (((/* implicit */int) (_Bool)1))))))));
        var_26 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)73)) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_32 [i_8]))) : (arr_32 [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_31 [i_8])) ^ ((~(2695689836U))))))));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((847098195) == (arr_31 [i_8]))))) : (((((/* implicit */_Bool) var_8)) ? (arr_32 [i_8]) : (var_16)))))) ? (((/* implicit */unsigned long long int) (~(((long long int) (unsigned short)18679))))) : ((+(arr_32 [i_8]))));
        /* LoopSeq 4 */
        for (int i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            arr_36 [4U] [i_8] = ((/* implicit */int) var_2);
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_8] [i_8] [i_8] [i_8]))))))))) <= (((((/* implicit */_Bool) ((signed char) (unsigned char)0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1951051196)) ? (((/* implicit */int) (unsigned char)144)) : (-1232290490)))) : (var_13)))));
                arr_39 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_32 [i_9]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-47)))))))) ? ((-(var_6))) : (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-23)), (2070454032))))));
            }
            for (unsigned char i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                arr_44 [i_11 - 1] [i_9 - 1] [i_8] = ((/* implicit */unsigned int) min((((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)64011)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6))))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((((/* implicit */int) arr_43 [i_8] [(unsigned char)8] [i_9] [i_11 - 1])) - (90)))))));
                var_29 |= ((/* implicit */unsigned char) arr_37 [(unsigned short)15] [i_11] [i_8] [i_9]);
            }
        }
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            arr_47 [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_12])) ? (10121203796237930006ULL) : (arr_46 [i_8] [i_12]))) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)46856)) - (-2070454035)))))));
            /* LoopSeq 2 */
            for (long long int i_13 = 1; i_13 < 15; i_13 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_32 [(signed char)6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(unsigned short)5] [5] [i_13]))))), (((/* implicit */unsigned long long int) var_14))))) ? (var_3) : (max((arr_31 [i_8]), (((/* implicit */int) arr_40 [(unsigned char)5] [i_12] [i_13 - 1])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_14 = 2; i_14 < 15; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 14; i_15 += 2) 
                    {
                        arr_56 [i_12] [i_12] = ((/* implicit */int) ((var_10) + (((/* implicit */long long int) arr_54 [i_14] [i_13 - 1] [i_13] [(unsigned char)5] [i_13] [i_13]))));
                        var_31 = ((/* implicit */unsigned short) (unsigned char)70);
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((2147483628) | (((/* implicit */int) arr_38 [i_8] [i_12] [i_13] [i_13]))));
                    arr_57 [i_8] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_12])) ? (((/* implicit */int) (unsigned short)48579)) : (((/* implicit */int) arr_41 [15U] [i_14 + 1] [i_13 + 1] [i_14]))));
                }
                var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_13 + 1] [i_8])) ? (-1045703832926234188LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))))) ? (((((/* implicit */_Bool) arr_49 [(unsigned char)0] [i_8] [i_13 + 1] [i_8])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_12] [i_12] [i_13 + 1] [i_8])))));
            }
            /* vectorizable */
            for (long long int i_16 = 1; i_16 < 15; i_16 += 2) /* same iter space */
            {
                var_34 += ((/* implicit */unsigned short) var_4);
                arr_60 [i_8] [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(68719476728LL)));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35683)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65023)))));
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_16] [i_16 + 1] [i_16] [i_16] [i_16 - 1] [i_16 - 1])) ? (((((/* implicit */_Bool) arr_32 [5U])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [10LL] [i_12] [i_8])))));
            }
            arr_61 [i_12] = ((/* implicit */short) arr_50 [i_8] [i_8] [10U] [i_12]);
            var_37 = ((/* implicit */short) ((unsigned short) ((max((((/* implicit */unsigned long long int) arr_48 [i_8] [i_8] [i_12])), (var_7))) << (((((/* implicit */int) arr_34 [i_8] [i_8] [i_12])) - (53855))))));
            var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) arr_48 [i_8] [i_8] [i_12]))))) ? (((/* implicit */int) var_14)) : (arr_48 [(unsigned char)6] [i_12] [(unsigned char)6])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_16) : (((/* implicit */unsigned long long int) 847098195))))) ? (((((/* implicit */_Bool) arr_34 [i_8] [i_12] [i_12])) ? (var_0) : (var_15))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))));
        }
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            var_39 = ((((/* implicit */_Bool) ((long long int) (unsigned char)204))) || (((/* implicit */_Bool) var_13)));
            arr_64 [i_8] [i_8] = ((/* implicit */unsigned int) max(((-(var_9))), (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)239)) / (((/* implicit */int) arr_49 [i_8] [i_8] [i_17] [i_8])))))))));
            /* LoopNest 3 */
            for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        {
                            var_40 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((long long int) var_6)))))));
                            arr_72 [i_19] [i_19] [6U] [i_19] [i_19] [i_19] [(unsigned char)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)48579)), (arr_31 [i_20])))) ? (max((arr_51 [i_8] [i_17] [i_8] [i_19] [(unsigned short)2] [(unsigned short)2]), (arr_51 [(unsigned char)11] [i_17] [i_17] [i_19] [(unsigned char)11] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) >= (arr_51 [(unsigned char)9] [(signed char)3] [(signed char)3] [i_19] [i_19] [i_20])))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_21 = 3; i_21 < 15; i_21 += 2) 
        {
            arr_75 [i_21] [14ULL] = ((/* implicit */int) arr_65 [i_8] [7ULL]);
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (1232290496) : (((arr_37 [i_21] [i_21] [i_8] [i_8]) / (var_3)))));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 16; i_23 += 2) 
                {
                    {
                        arr_81 [i_21] [i_21] [i_21] [i_21] [i_21 - 3] = ((/* implicit */int) min((((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (min((1502661097U), (((/* implicit */unsigned int) arr_80 [i_8] [11U] [i_21] [i_21] [i_22] [i_23])))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (max((var_16), (((/* implicit */unsigned long long int) 2147483647)))))))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_8] [i_8] [(unsigned short)11])) ? (((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */int) ((unsigned char) arr_70 [i_8] [i_8] [11ULL] [11ULL] [4U] [i_8] [i_23]))) : ((~(((/* implicit */int) arr_79 [i_8])))))) : (((/* implicit */int) arr_71 [i_23] [i_22] [i_22] [i_21 - 2] [(unsigned char)8]))));
                        arr_82 [i_21] [11ULL] [i_22] = ((/* implicit */unsigned long long int) var_4);
                        var_43 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2342810654U)) - (((((/* implicit */_Bool) arr_51 [i_21 - 2] [i_21] [i_21 - 1] [i_21 - 3] [(unsigned short)10] [i_21 - 1])) ? (991896921688907115ULL) : (((/* implicit */unsigned long long int) arr_51 [i_21 - 3] [i_21] [i_21] [i_21 - 2] [i_21] [i_21 + 1]))))));
                    }
                } 
            } 
            var_44 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_8] [i_21 - 1] [1U] [i_21 + 1] [i_8]))) : (var_4))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_50 [i_8] [i_21] [i_8] [(unsigned char)7])) ? (((/* implicit */int) var_5)) : (var_3))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -1232290490))))))))));
            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_8] [i_8] [i_21 + 1] [i_21])) ? (2070454035) : (((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_21 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_21 + 1] [i_8] [i_21 + 1]))) : (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))))))), (((((/* implicit */_Bool) 13407154763602959948ULL)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_80 [(_Bool)1] [i_21] [i_8] [i_8] [i_8] [11ULL])), (arr_35 [i_8] [i_8] [i_21])))) : (min((((/* implicit */unsigned int) (unsigned short)18679)), (var_15))))))))));
        }
    }
}
