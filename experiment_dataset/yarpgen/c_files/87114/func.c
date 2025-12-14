/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87114
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */int) (signed char)107)) % (((/* implicit */int) (short)-28287))));
            arr_5 [i_1] [21U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-28287))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_12)) : (72342298)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_14 [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_0] [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_15 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (short)9)) - (((/* implicit */int) arr_3 [i_4] [i_2] [i_2]))));
                    var_14 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0] [8] [i_3] [i_3] [(unsigned char)11]))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)13] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (short)14340))));
                        var_16 *= (~(((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_7))))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) ((long long int) arr_11 [i_0] [i_0]));
                        arr_22 [i_0] [i_0] [19ULL] [19ULL] [i_6] [i_6] = (unsigned short)28632;
                        arr_23 [i_3] [i_3] = ((/* implicit */signed char) ((-565238759486033734LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))));
                    }
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) & (arr_2 [i_0])));
                    /* LoopSeq 2 */
                    for (short i_7 = 4; i_7 < 21; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (1187409999))))));
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_25 [19] [i_5] [i_3] [i_2] [i_0]);
                        arr_27 [i_0] = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-107)) <= (((/* implicit */int) (signed char)64))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        var_20 |= ((/* implicit */signed char) arr_16 [i_0] [(_Bool)1] [i_3] [i_0] [i_8] [i_0]);
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (arr_18 [(signed char)14] [(signed char)14])));
                    }
                }
                arr_31 [i_0] [18ULL] [i_3] |= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_3])) < (((/* implicit */int) (unsigned short)18460))));
            }
            for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_0] [i_0] [i_0] [i_0] [11]))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1792)) : (var_4))))));
                    arr_37 [i_0] [i_0] [7LL] [i_0] = (short)-28310;
                    var_23 *= ((/* implicit */short) ((long long int) (short)28325));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    var_24 -= ((/* implicit */signed char) var_1);
                    arr_40 [i_0] [15U] [(_Bool)1] [12U] = ((/* implicit */_Bool) 85483676);
                }
                arr_41 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_2] [(unsigned short)2]));
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_0] [i_0] [i_0] [i_9] [i_12] [i_12] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))));
                    arr_46 [i_0] [(_Bool)1] [(short)14] [i_9] [i_9] [i_12] |= ((/* implicit */long long int) var_4);
                    var_25 = ((/* implicit */short) var_6);
                    /* LoopSeq 3 */
                    for (short i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        arr_49 [i_9] [2LL] [i_9] [i_9] [i_9 - 1] |= ((/* implicit */unsigned short) 4398046511103LL);
                        var_26 *= ((/* implicit */_Bool) (signed char)109);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_27 -= var_10;
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_25 [i_0] [(unsigned short)11] [i_9] [18U] [18U]))));
                    }
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_29 -= ((/* implicit */short) var_10);
                        var_30 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)43587)) != (((/* implicit */int) (short)-24319))));
                        arr_55 [i_0] [6ULL] [i_9] [3U] [i_15] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_25 [i_15] [10LL] [i_0] [10LL] [i_0])) | (((((/* implicit */_Bool) -7459349490732903823LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3352826804U)))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((unsigned short) var_1))))))));
                    }
                    arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)-116))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) (unsigned short)0)))));
                }
                for (int i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    arr_60 [i_0] [i_2] [i_9] [i_16] |= ((/* implicit */signed char) 942140488U);
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (short)3603)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
                    var_33 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18446744073709551615ULL));
                }
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_34 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_17] [i_18]))));
                            arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((_Bool) ((unsigned long long int) arr_8 [i_0] [i_0]));
                            arr_67 [i_0] [i_0] [i_2] [i_9] [i_17] [i_18] = ((/* implicit */short) (-(((int) var_9))));
                        }
                    } 
                } 
            }
            arr_68 [i_0] [i_0] |= ((/* implicit */unsigned short) ((unsigned char) var_7));
            arr_69 [(short)0] [i_2] = ((/* implicit */long long int) (signed char)-81);
            arr_70 [i_2] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)64592))));
        }
        /* LoopSeq 1 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (int i_21 = 1; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_35 = ((/* implicit */short) var_3);
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((unsigned long long int) (_Bool)1)) > (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (arr_47 [i_0] [20] [i_20] [i_20] [i_21]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) : ((~(var_6))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 3) 
            {
                arr_82 [i_0] [i_0] [i_22] [(unsigned char)18] = ((/* implicit */signed char) 25);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 4) 
                    {
                        {
                            arr_89 [i_0] [i_19] [i_22] [i_23] [7ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                            arr_90 [i_19] [i_19] [(signed char)1] [i_23] [i_24] = ((/* implicit */long long int) var_3);
                            arr_91 [10] [(unsigned short)10] [i_24] [i_23] [i_24] = ((/* implicit */short) arr_53 [i_0] [i_0] [i_22] [i_22] [i_24]);
                            arr_92 [i_0] [i_0] [i_19] [i_0] [i_23] [i_19] [i_24] = max(((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)30))))))), (((/* implicit */int) (unsigned char)19)));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (unsigned short)9))));
                        }
                    } 
                } 
                arr_93 [i_19] &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_71 [i_0] [i_0])) >> (((arr_73 [i_0] [i_0] [i_22]) - (1829094290))))) ^ (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (_Bool)1)))))));
                arr_94 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) -128210442)) || ((_Bool)0)))) == (((/* implicit */int) ((((/* implicit */unsigned int) var_4)) > (arr_54 [i_0] [i_0] [i_0]))))));
            }
            var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_8)))))) ? (((max((850593965), (var_3))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) >= (6883266323204010163LL)))))) : (((/* implicit */int) ((short) (signed char)-127)))));
            var_39 -= ((/* implicit */unsigned short) min(((~(arr_57 [i_0]))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (short)22657)))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)29057)) > (((/* implicit */int) (unsigned short)0))))))))));
        }
        arr_95 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) var_3)) - ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (short)-22668)) : (((/* implicit */int) var_10))))))) + (((/* implicit */long long int) ((/* implicit */int) max((((_Bool) arr_79 [i_0])), ((!(((/* implicit */_Bool) var_11))))))))));
    }
    var_40 |= var_11;
}
