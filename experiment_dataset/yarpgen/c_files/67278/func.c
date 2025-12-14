/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67278
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) max((((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 - 1]))));
                        var_21 = ((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [(_Bool)1] [i_0 - 1])))) : ((~(var_2))));
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) var_9);
                        var_23 = (((((~(((/* implicit */int) ((signed char) var_2))))) + (2147483647))) >> (((((/* implicit */int) var_7)) + (6))));
                        var_24 = ((/* implicit */signed char) min((((unsigned int) arr_3 [i_0 - 1])), (((/* implicit */unsigned int) ((var_1) + (((/* implicit */int) (short)0)))))));
                    }
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((long long int) (short)-1));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((short) ((long long int) var_8)));
                            var_27 = arr_13 [i_6 - 1] [i_0] [i_6 - 1] [i_6 - 1] [i_6 - 1];
                        }
                        var_28 = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-95))))));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_7] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) >> (((arr_2 [i_0 - 1]) - (281583402)))))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_15))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 3797827665U))))))));
                            var_30 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 1] [i_0])) ? (arr_8 [(unsigned char)9] [i_1] [i_2] [i_2]) : (arr_8 [i_1] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)-1)) ? (8126464) : (((/* implicit */int) var_15))))))));
                        }
                        var_31 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */int) arr_23 [i_0] [i_0] [(signed char)5]))))) ? (arr_12 [i_0 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)49387), (((/* implicit */unsigned short) var_14)))))))) + (9223372036854775807LL))) >> (((arr_9 [i_0 - 1] [i_0] [(_Bool)1] [i_0 - 1]) & ((+(0U)))))));
                        var_32 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11638141916367673204ULL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        for (short i_10 = 2; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max(((unsigned short)49387), (((/* implicit */unsigned short) arr_28 [(short)4] [i_0] [i_0] [i_0 - 1] [i_2] [i_10 + 2] [i_10]))))) : (((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))));
                                var_33 = max(((~(((/* implicit */int) arr_26 [i_0] [i_0] [i_0 - 1] [i_0])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-13617)))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((((((/* implicit */int) (short)-30826)) <= (((/* implicit */int) (short)6)))) ? (min((2830035161832965766ULL), (((/* implicit */unsigned long long int) 7143470857473161417LL)))) : (6808602157341878411ULL)))));
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_10 + 3] [i_10] [i_10 - 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [(short)2] [i_9] [i_10 + 1] [(unsigned char)13] [i_1])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [3]))) & (5166012726275140483LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1] [i_2]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((6808602157341878411ULL) >> (((var_2) - (3751468347051236602LL))))) - (((6808602157341878411ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_11] [i_12] [i_13])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) var_15))));
                        var_36 = ((((/* implicit */_Bool) ((int) max(((short)13617), (((/* implicit */short) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_27 [i_0] [i_11])))) >= (((((/* implicit */_Bool) 11638141916367673215ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_18 [i_13] [2U] [i_11] [i_0])))))) : (((/* implicit */int) arr_33 [i_13])));
                        var_37 = ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) min((var_1), (((/* implicit */int) (_Bool)1))))), (arr_41 [i_0 - 1] [i_12 - 1] [i_12 - 1] [i_13]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        for (long long int i_15 = 1; i_15 < 17; i_15 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_16 = 3; i_16 < 17; i_16 += 1) 
                {
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_50 [i_14] [i_15] [i_16 + 1] [2LL])) >> (((var_8) - (1352275180577253432ULL)))))) ? ((~(var_16))) : (((/* implicit */int) ((short) (~(((/* implicit */int) var_3))))))));
                            var_39 = ((((/* implicit */_Bool) var_16)) ? (var_16) : (((((/* implicit */int) arr_49 [i_14] [i_15 - 1] [i_16] [i_16 - 1])) - (((/* implicit */int) arr_49 [i_17] [i_15 + 1] [i_16] [i_16 - 3])))));
                            var_40 = ((/* implicit */signed char) ((1344020365739714039ULL) < (((/* implicit */unsigned long long int) 8126464))));
                            var_41 = ((/* implicit */int) (~(min(((~(var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_18 = 1; i_18 < 17; i_18 += 1) 
                            {
                                var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)0))));
                                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 6808602157341878411ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13592))) : (3464382015U)));
                                var_44 = ((/* implicit */int) arr_44 [i_14]);
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)65280)), (((long long int) (signed char)(-127 - 1)))));
                            /* LoopSeq 3 */
                            for (unsigned char i_21 = 0; i_21 < 19; i_21 += 3) /* same iter space */
                            {
                                var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (arr_56 [(unsigned char)4] [(unsigned char)4] [i_19] [i_20]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -5166012726275140483LL)) ? (((/* implicit */int) (unsigned short)65280)) : (((/* implicit */int) (unsigned short)255))))) : (max((max((((/* implicit */long long int) var_7)), (var_11))), (min((5166012726275140495LL), (arr_45 [i_14])))))));
                                var_47 = ((/* implicit */long long int) (-(((((((/* implicit */int) arr_58 [i_15 + 1] [i_15])) + (2147483647))) << (((((((/* implicit */int) arr_58 [i_15 - 1] [i_15 - 1])) + (91))) - (23)))))));
                            }
                            for (unsigned char i_22 = 0; i_22 < 19; i_22 += 3) /* same iter space */
                            {
                                var_48 = ((/* implicit */signed char) (+(((((/* implicit */long long int) arr_55 [i_15 + 2])) / ((+(-5166012726275140484LL)))))));
                                var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 193909628)) ? (((/* implicit */long long int) -1286697393)) : (3537615445554452715LL)));
                            }
                            for (int i_23 = 0; i_23 < 19; i_23 += 2) 
                            {
                                arr_69 [(_Bool)1] [i_15 + 2] [i_19] [i_20] = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (arr_51 [i_14] [i_15] [15LL] [i_20])))))), (((int) arr_67 [i_15 + 2] [i_15 + 1] [i_20] [i_15 + 1] [i_15 + 1]))));
                                var_50 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)71)) < (((/* implicit */int) (short)2702))));
                            }
                            /* LoopSeq 3 */
                            for (signed char i_24 = 1; i_24 < 17; i_24 += 1) 
                            {
                                var_51 = var_14;
                                var_52 = ((/* implicit */unsigned long long int) var_5);
                                var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_24 + 1] [(short)10] [i_20] [i_15 + 2] [(signed char)7])) ? (((/* implicit */int) arr_46 [i_24 + 1] [i_24 + 1])) : (((/* implicit */int) arr_46 [i_24 + 1] [i_15 + 1])))))));
                                var_54 = ((/* implicit */_Bool) arr_52 [i_14] [(unsigned short)11]);
                            }
                            for (short i_25 = 0; i_25 < 19; i_25 += 4) 
                            {
                                var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_20] [i_15 + 1] [i_15] [15] [i_15])) ? (((/* implicit */int) arr_68 [i_20] [i_15 + 2] [i_15] [i_15 + 2] [i_15])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) min((arr_68 [i_14] [i_15 + 2] [i_14] [i_14] [i_14]), (((/* implicit */unsigned char) var_4))))) : (((/* implicit */int) var_14))));
                                var_56 = ((/* implicit */_Bool) var_18);
                            }
                            /* vectorizable */
                            for (unsigned char i_26 = 0; i_26 < 19; i_26 += 4) 
                            {
                                var_57 = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */int) var_13)) : (122005066))));
                                var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3))));
                            }
                            var_59 = ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) arr_49 [i_14] [i_14] [i_14] [i_14])))) : (((/* implicit */int) var_14)));
                        }
                    } 
                } 
            }
        } 
    } 
}
