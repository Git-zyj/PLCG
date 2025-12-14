/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89979
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
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (unsigned char)170))));
                var_20 = ((/* implicit */signed char) ((max(((!((_Bool)1))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) 2789012235U)))))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)5)) || (((/* implicit */_Bool) 564622802U)))))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_2 + 1]))) == (max((((/* implicit */unsigned int) (_Bool)1)), (64512U))))))));
                            var_22 = ((/* implicit */short) max((max(((unsigned short)3320), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_1] [i_0])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (683217448) : (((/* implicit */int) (unsigned char)89))))) && ((_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_13 [i_0] [(signed char)0] &= ((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 1])) - (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned char)187)) : (2147483634)))))));
                    arr_14 [i_0] [i_1 - 3] [i_4] = ((/* implicit */short) min(((-(((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1])))), (((int) ((unsigned char) arr_2 [i_0] [i_1 + 1])))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1703878718)) ? (0) : (((/* implicit */int) (unsigned char)74))))) ? (((/* implicit */long long int) min((-374210598), (((/* implicit */int) (_Bool)1))))) : (-1185604772779269753LL)))) || (((/* implicit */_Bool) 517303676)))))));
                        arr_18 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) arr_12 [i_0]);
                        arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned char)25))));
                        arr_20 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 3] [i_1 - 3])) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [i_1 - 3])) ? (arr_8 [i_1] [i_1 - 3] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))))) : (max((arr_8 [i_1] [i_1 - 1] [i_1 + 1]), (arr_8 [i_1] [i_1 - 3] [i_1 - 2])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 - 2]))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(arr_15 [i_0] [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1])));
                        var_24 = ((/* implicit */int) ((arr_6 [i_0] [i_0] [i_1 + 1] [i_1 - 2]) || (arr_6 [i_1] [i_0] [i_1 - 3] [i_1 + 1])));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_1 [i_1 + 1] [i_1 - 3]))));
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] |= ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1]);
                        arr_29 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1185604772779269729LL)) ? (((((/* implicit */_Bool) 206166023245010334ULL)) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)27054)))) : (max((arr_2 [i_0] [i_0]), (((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) ((_Bool) (_Bool)1)))));
                    }
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(((((((/* implicit */long long int) ((/* implicit */int) (signed char)-9))) > (-987484129021589364LL))) ? (4044976083736903585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)126), (((/* implicit */unsigned char) (_Bool)1)))))))))))));
                    var_27 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2999421094U)), (2305843009146585088ULL)))))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 4; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 7; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_40 [i_0] [i_8] [i_8] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)4))));
                                var_28 += ((/* implicit */int) (unsigned short)18340);
                            }
                        } 
                    } 
                    var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [i_1 - 2] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) : (((((/* implicit */_Bool) 281474439839744ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1]))) : (8378432585808346434ULL)))));
                    /* LoopSeq 4 */
                    for (int i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (short)9252))));
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_31 += ((/* implicit */unsigned long long int) ((arr_41 [i_12] [i_1] [i_8 - 3] [i_8 - 3] [i_8 - 3]) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_8 - 1] [i_11] [i_12])) : (((/* implicit */int) (signed char)-94))));
                            var_32 += ((/* implicit */_Bool) ((signed char) arr_22 [i_1] [i_1] [i_1 - 1] [i_8 - 4] [i_8 - 4] [i_12]));
                            arr_45 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_8] [i_11 - 1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_50 [i_0] [i_1] [i_0] [i_8 - 1] [i_8] [i_11] [i_0] = ((/* implicit */unsigned short) 9211756822124544822LL);
                            var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))));
                        }
                        var_34 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_38 [10LL] [i_8]) : (((/* implicit */int) (signed char)-67))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 2; i_14 < 9; i_14 += 3) 
                        {
                            arr_54 [i_0] [i_1 + 1] [i_1 + 1] [i_11] [i_11] [i_14 + 1] [i_14 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9211756822124544821LL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (_Bool)1))));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_14 - 2] = ((/* implicit */unsigned long long int) arr_51 [i_0] [i_1 + 1] [i_8] [i_11] [i_14]);
                            var_35 *= ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_27 [i_0] [i_8 - 1] [i_0] [i_8])));
                            arr_56 [i_1 + 2] [i_8] [i_0] [i_14 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)90))))) & (((/* implicit */int) arr_6 [i_1] [i_0] [i_11 - 1] [i_11]))));
                        }
                        var_36 = ((/* implicit */long long int) ((((/* implicit */int) (short)6852)) < (-374210593)));
                    }
                    for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_37 += ((/* implicit */signed char) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            arr_64 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)13318))));
                            var_38 |= ((/* implicit */int) ((_Bool) arr_6 [i_1 - 3] [i_15] [i_15] [i_1 - 3]));
                            var_39 += ((/* implicit */short) ((((/* implicit */_Bool) (~(3688195533U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3432))) : (8378432585808346434ULL)));
                            arr_65 [i_0] [i_0] [i_0] [i_8 + 1] [i_0] [i_15] [i_16] = ((/* implicit */signed char) arr_43 [i_16] [i_15] [i_0] [i_0] [i_1 - 3] [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            arr_68 [i_17] [i_15] [i_0] [i_8] [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_16 [i_15] [i_0] [i_0])) ? (((/* implicit */long long int) arr_59 [i_0] [i_0])) : (-643528443708955922LL)))));
                            arr_69 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_17] = arr_30 [i_0];
                            arr_70 [i_15] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_8 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)18140))) : (arr_48 [i_0] [i_0] [i_0] [i_1 + 1] [i_8 + 1] [i_8 - 3])));
                            arr_71 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63488)) ? (arr_47 [i_0] [i_0] [i_1] [i_0] [i_1 - 2] [i_1 + 1] [i_8 + 1]) : (((/* implicit */int) ((_Bool) (unsigned short)2065)))));
                        }
                    }
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        arr_74 [i_18] [i_18] &= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (signed char)-6)) : (-1146096900))) & (-374210598)));
                        var_40 += ((/* implicit */short) (((!(((/* implicit */_Bool) -213895802)))) ? (arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0]))));
                        arr_75 [i_0] [i_0] [i_8 - 2] [i_0] [i_0] [i_8] = (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_8 - 1] [i_18] [i_18])));
                        arr_76 [i_0] [i_1] [i_8 - 4] [i_18] [i_8 - 4] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [i_1 - 2])) ? (arr_66 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1]) : (((/* implicit */int) (unsigned char)106)));
                    }
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        arr_79 [i_0] [i_19] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_1] [i_8] [i_19])))) ? (((int) arr_53 [i_0] [i_1 + 2] [i_1 + 2] [i_19] [i_8 - 1] [i_19])) : (((/* implicit */int) arr_10 [i_1 - 2] [i_8 - 3]))));
                        var_41 = ((/* implicit */unsigned int) 4044976083736903584ULL);
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 3])) || (((/* implicit */_Bool) (signed char)13))));
                    }
                    arr_80 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_72 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 + 1]))));
                }
                for (unsigned char i_20 = 4; i_20 < 10; i_20 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1 + 1]);
                    arr_83 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_57 [i_1 - 2] [i_1] [i_1 - 2] [i_20 - 2]))) ? (((arr_53 [i_20 - 4] [i_20 - 2] [i_20] [i_20 - 4] [i_20 - 2] [i_20 - 1]) ? (arr_8 [i_20 - 3] [i_20] [i_20 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_20 - 1] [i_20 - 1] [i_20 - 2] [i_20 - 4] [i_20 - 3] [i_20]))))) : (((((/* implicit */_Bool) ((1969290131) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((-4661198483604923674LL), (((/* implicit */long long int) arr_66 [i_0] [i_0] [i_20 - 2] [i_0] [i_0]))))) : (((arr_58 [i_0] [i_1] [i_1] [i_0]) | (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_20]))))))));
                }
                /* vectorizable */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) -1LL))));
                    var_45 ^= ((/* implicit */unsigned int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (_Bool)0)))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        for (short i_23 = 1; i_23 < 8; i_23 += 4) 
                        {
                            {
                                var_46 ^= ((/* implicit */unsigned char) ((arr_7 [i_1 - 2] [i_21] [i_22] [i_1 - 2]) != (((/* implicit */long long int) arr_44 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))));
                                arr_91 [i_0] [i_0] [i_21] [i_22] [i_23] = ((/* implicit */_Bool) ((long long int) ((unsigned int) -374210587)));
                                arr_92 [i_0] [i_0] [i_0] [i_21] [i_22] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)0);
                                var_47 = ((/* implicit */unsigned short) (+(-6982680173527544171LL)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_48 |= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (562949819203584LL));
}
