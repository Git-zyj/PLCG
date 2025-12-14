/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63055
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) 4294967295U);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) arr_2 [i_0])))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (4294967288U))))));
        arr_4 [(signed char)15] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_0]))))));
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (_Bool)0)))), ((_Bool)1)));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 463699134U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (1648046900U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_4] [i_4] [i_2] [i_4] [11] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 639145581U)))))) != (arr_15 [i_4] [i_2] [i_3] [i_3] [i_5 - 1] [i_1])));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58930))) / ((-(arr_15 [i_4] [i_2] [i_3] [i_2] [4ULL] [i_5 + 1])))));
                            arr_20 [i_5] [i_2] [i_4] [i_4] [i_2] [19LL] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_14)) : (var_9)))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_6 - 1])))) ? (((/* implicit */unsigned long long int) max((524287), (((/* implicit */int) arr_11 [(unsigned short)15] [i_6 + 1] [i_3]))))) : (((((/* implicit */_Bool) (unsigned short)9112)) ? (arr_5 [i_6 + 1]) : (((/* implicit */unsigned long long int) 141307059U))))));
                            var_22 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned short) arr_17 [i_1] [i_1] [i_3] [i_1] [i_1] [i_6] [i_4]))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_1] [i_2] [i_2] [i_1] [i_4])), (arr_22 [i_4])))) ? (max((((/* implicit */unsigned long long int) (signed char)108)), (arr_5 [i_6 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
                        }
                        var_24 = ((/* implicit */unsigned char) max((var_24), ((unsigned char)216)));
                    }
                } 
            } 
        } 
        var_25 |= ((/* implicit */unsigned long long int) max((arr_21 [i_1] [(signed char)16] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)62112), (((/* implicit */unsigned short) var_2)))))) > (max((((/* implicit */unsigned int) arr_18 [i_1] [6] [i_1] [i_1] [6LL] [7])), (3655821715U))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_26 -= ((/* implicit */signed char) ((var_7) > (((/* implicit */unsigned long long int) max(((~(463699134U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))))))));
        var_27 = ((/* implicit */int) var_13);
        var_28 = ((/* implicit */unsigned char) var_9);
        arr_26 [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_7 [9ULL]))))), (var_7)))) ? ((~(((((/* implicit */_Bool) arr_2 [i_7])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) arr_23 [i_7]))));
    }
    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            var_29 |= ((/* implicit */signed char) arr_9 [i_8] [0LL]);
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_9 + 2] [i_9] [i_9] [i_8])) ? (((arr_16 [i_8] [i_8] [i_9 + 2] [i_8] [(unsigned short)2]) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_1 [i_8])))) : (((/* implicit */int) arr_8 [i_8] [i_9 + 1]))));
            var_31 = ((/* implicit */unsigned short) ((arr_0 [i_8] [i_8]) ? (((/* implicit */int) arr_16 [i_8] [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 - 1])) : (((/* implicit */int) var_6))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 1; i_10 < 19; i_10 += 3) 
            {
                arr_35 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -7574250031111570424LL))));
                arr_36 [i_8] [(unsigned short)4] [14LL] [14LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32767))) : (((var_1) ? (((/* implicit */long long int) arr_28 [i_8])) : (arr_15 [18ULL] [i_9] [i_8] [i_10] [i_8] [i_10 + 1])))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_32 = ((/* implicit */long long int) (unsigned char)85);
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) arr_9 [(short)11] [i_8]);
                    var_34 = ((((/* implicit */_Bool) (-(639145581U)))) ? (((((/* implicit */_Bool) 14788313477928804703ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)693)))))));
                }
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(14729246310523926781ULL)))) ? (((long long int) arr_29 [i_8])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_8] [(unsigned short)6] [(_Bool)1] [i_8])) || (((/* implicit */_Bool) (unsigned char)162))))))));
                        arr_49 [i_8] [i_9] [i_13] [i_13] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) arr_16 [i_9] [i_9] [i_11] [i_13] [i_9 - 1]));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-28))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (3655821715U)));
                        arr_52 [i_11] [i_11] [i_11] [i_13] [i_8] = ((/* implicit */unsigned long long int) var_16);
                        var_38 = ((/* implicit */unsigned char) (((-(826949867U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)45)))))));
                    }
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((639145598U) << (((arr_46 [i_8] [i_9 + 1] [i_11] [2U] [(unsigned char)2] [i_9 - 1]) + (1775327172287987927LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (2530465304U))))));
                }
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                {
                    var_40 = (!(((/* implicit */_Bool) (signed char)-33)));
                    var_41 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_9 + 1] [i_9] [(_Bool)1] [i_16]))) >= (arr_14 [i_16] [i_9 + 2])));
                    var_42 = ((/* implicit */long long int) (_Bool)1);
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_17 = 2; i_17 < 19; i_17 += 3) 
        {
            arr_59 [i_8] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) - (62196))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (_Bool)1))))));
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (arr_47 [i_8] [i_17 - 1] [i_8] [i_8]))))) : (8420752015622880401LL)));
            var_44 = ((/* implicit */int) ((unsigned int) arr_8 [i_8] [i_17 + 1]));
            /* LoopNest 2 */
            for (signed char i_18 = 2; i_18 < 19; i_18 += 3) 
            {
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))))));
                        var_46 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)19))));
                    }
                } 
            } 
            arr_64 [i_8] [i_17] = ((/* implicit */unsigned long long int) ((arr_47 [i_17] [i_17 - 2] [i_8] [i_17 - 2]) ? (((/* implicit */int) arr_47 [i_8] [i_8] [i_8] [i_17 - 1])) : (((/* implicit */int) arr_47 [i_8] [i_17] [i_8] [i_17 - 1]))));
        }
        var_47 = ((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
        var_48 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_14 [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)22)), (2408745032U)))) : (((((/* implicit */_Bool) arr_14 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (1152921470247108608ULL)))));
    }
    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6643188854416225256LL)) ? (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (-2112857882465027616LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_50 = ((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)21004)) : (((/* implicit */int) var_15))))) >= (max((18034774221429876632ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
}
