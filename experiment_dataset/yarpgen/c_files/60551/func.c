/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60551
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
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_2 [i_1])))))) <= (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (15906903294958444688ULL) : (2539840778751106939ULL)))))), ((short)(-32767 - 1))));
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_9))));
            arr_6 [i_1 + 2] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_4 [i_2])), (var_4))) * (min((((/* implicit */unsigned int) var_3)), (var_4)))));
            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_0 [i_0]))))) ^ (((/* implicit */int) var_11)))) << (((max((-6104050957550422477LL), (((/* implicit */long long int) (signed char)35)))) - (22LL)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    var_14 = ((/* implicit */signed char) arr_16 [i_3] [i_3] [i_4] [i_5]);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_5 + 2]));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_5 - 1])) - (((/* implicit */int) arr_1 [i_5 + 1]))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [20LL] = ((long long int) 2144472444);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-8801241370635157706LL) + (9223372036854775807LL))) >> (((var_6) - (12251236742184479205ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967295U)));
                    }
                    var_17 &= ((/* implicit */unsigned long long int) (short)13520);
                }
                var_18 = ((/* implicit */short) ((long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18641))))));
                arr_25 [i_0] [i_3] [i_4] = ((/* implicit */long long int) max((((var_6) * (((/* implicit */unsigned long long int) (-(arr_21 [i_4] [i_4] [i_3] [(short)19] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_4]), (((/* implicit */short) arr_3 [i_0] [i_3] [i_4]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) max((var_0), (((/* implicit */signed char) arr_11 [i_3]))))))))));
                var_19 = max((((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_4])) ? (((/* implicit */long long int) var_4)) : (max((((/* implicit */long long int) var_7)), (var_9))))), (var_9));
                var_20 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0]);
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_21 = ((/* implicit */long long int) (signed char)-1);
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((_Bool) var_6)))));
                }
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_32 [(unsigned short)14] [(unsigned short)14] [i_7] [(short)16] [i_9] = ((/* implicit */int) ((long long int) 3692638014U));
                    arr_33 [i_9] [i_7] [i_3] [i_0] = ((/* implicit */unsigned long long int) 4956003374749152491LL);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(6104050957550422494LL))))));
                    arr_34 [i_0] [(short)1] [(signed char)17] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((-3821036975175099379LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))))) << (((((/* implicit */int) var_5)) - (26586)))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 1; i_11 < 18; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_8 [i_11 + 2] [i_11 - 1] [i_11 + 3])) : (((/* implicit */int) ((arr_17 [i_3]) && (((/* implicit */_Bool) arr_4 [i_3])))))));
                        var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_3] [i_7] [(short)6] [i_11] [i_7] [i_11 - 1]))));
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_11 + 3] [i_11 + 2]))));
                        var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2733213750727538779LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
                    }
                    for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_28 *= ((/* implicit */_Bool) -4469813461804580977LL);
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) var_2))));
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) ((signed char) arr_35 [i_0] [i_3] [i_3] [i_10]));
                        arr_43 [i_7] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_18 [i_0] [i_0] [i_0] [(_Bool)1])))));
                        var_31 = ((/* implicit */long long int) var_3);
                    }
                    var_32 = ((/* implicit */unsigned long long int) -8559695026515429695LL);
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_15 [i_10] [i_7] [i_0]))));
                }
                for (short i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((short) arr_37 [i_14 + 1] [i_14] [(short)4] [i_7] [i_3] [i_3] [i_0]));
                    arr_47 [i_0] [i_0] [i_0] [i_7] [i_0] [i_14 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5668370824990539279LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))) ? (((/* implicit */int) ((_Bool) arr_42 [i_0] [i_0] [i_3] [(signed char)3] [i_14] [17LL] [i_14]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_3] [i_7] [i_14])) && (((/* implicit */_Bool) (unsigned short)13624)))))));
                    var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-115)))) || (((/* implicit */_Bool) -1725829074))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) (unsigned short)41603);
                        var_38 = ((/* implicit */signed char) ((int) arr_31 [i_0] [(short)15] [i_7] [i_14] [i_15]));
                        var_39 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 16964418009264235647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (var_6))));
                    }
                    for (long long int i_16 = 2; i_16 < 19; i_16 += 2) 
                    {
                        arr_54 [11U] = (!(((/* implicit */_Bool) ((long long int) (short)4126))));
                        arr_55 [i_0] [(unsigned short)6] [1LL] [(unsigned short)6] [i_16] = ((/* implicit */short) (+(((((/* implicit */int) (signed char)-47)) * (((/* implicit */int) arr_14 [i_16] [i_14] [i_3] [(short)16]))))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_61 [i_0] [i_18] [i_0] [8ULL] [i_0] = ((/* implicit */_Bool) (signed char)-4);
                            arr_62 [i_3] [i_3] [i_18] [i_18] [i_0] = ((((arr_60 [i_0] [i_0] [15LL] [i_0] [i_18] [i_3] [9LL]) < (((/* implicit */long long int) arr_39 [i_3])))) ? (((/* implicit */int) (unsigned short)36572)) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_17])));
                            arr_63 [i_0] [i_3] [i_7] [i_17] [i_18] = ((/* implicit */unsigned short) ((short) (+(6658544087143920650LL))));
                            arr_64 [i_17] [i_17] [i_18] [i_17] [i_18] [i_17] = ((/* implicit */long long int) (signed char)-115);
                            var_40 = ((/* implicit */unsigned short) arr_21 [i_18] [i_17] [i_7] [i_0] [i_0]);
                        }
                    } 
                } 
            }
            arr_65 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_46 [(short)14] [i_3] [i_0] [i_0])) != (((((/* implicit */int) ((_Bool) 1169551069U))) * (((/* implicit */int) (short)-22801))))));
        }
        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 4) 
        {
            var_41 = ((/* implicit */short) max((max((-1704625409146004134LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0] [i_19 + 1]))))))), (((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [i_0])) ? (2340793189808556263LL) : (((/* implicit */long long int) min((((/* implicit */int) arr_17 [i_19])), (258049896))))))));
            var_42 ^= arr_36 [i_0] [20LL] [i_0];
            arr_70 [i_19] = ((/* implicit */unsigned int) max((15158801775755181304ULL), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -6104050957550422488LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0)))))))));
            /* LoopSeq 3 */
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                arr_75 [i_19] [i_19 + 1] [i_20] [i_0] = ((/* implicit */_Bool) (signed char)-102);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_21 = 3; i_21 < 19; i_21 += 3) 
                {
                    arr_80 [i_0] [i_19] [i_20] [i_21] = ((/* implicit */unsigned short) arr_69 [i_21] [i_21]);
                    var_43 = ((/* implicit */long long int) (-(((/* implicit */int) arr_57 [i_0] [i_19 - 1] [i_20 + 1] [i_21]))));
                    arr_81 [i_0] [i_19 + 1] [i_19] [12ULL] [i_21 + 1] [i_21 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_19 - 1]))));
                    var_44 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) var_4)) * (11158150781983099915ULL))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0]))));
                        arr_87 [i_23] [i_22] [i_20 + 1] [11LL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_20] [i_22] [i_23])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_73 [i_23]))))) ? (var_9) : (((long long int) arr_0 [i_0])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-5754535719353240840LL)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned short)12176)) * (((/* implicit */int) arr_50 [i_0] [i_19 - 1] [i_19 - 1] [(_Bool)1] [i_0])))))))));
                        var_46 *= ((/* implicit */_Bool) ((long long int) arr_11 [i_20 + 1]));
                        var_47 = (-(((/* implicit */int) (signed char)-96)));
                    }
                    var_48 = ((/* implicit */_Bool) var_8);
                    var_49 += ((/* implicit */long long int) ((var_1) || (((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)38874)) : (((/* implicit */int) (short)7445)))), (((/* implicit */int) (_Bool)1)))))));
                    var_50 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_20 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_19] [i_22])))))) : (((unsigned long long int) var_1))))) || ((!(((/* implicit */_Bool) (unsigned char)131))))));
                    var_51 = ((/* implicit */_Bool) ((((var_10) ? (((/* implicit */int) arr_41 [i_19] [i_19] [i_19 + 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [(short)6])) : (((/* implicit */int) arr_41 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1] [(short)15] [(unsigned short)8])))) << (((((/* implicit */int) var_3)) - (50)))));
                }
                /* vectorizable */
                for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    var_52 *= ((/* implicit */unsigned short) var_10);
                    arr_90 [i_0] = ((/* implicit */unsigned long long int) ((arr_51 [i_20] [i_20] [i_20] [i_20 + 1] [i_24]) ? (((/* implicit */int) ((short) arr_56 [i_0] [i_19 - 1] [i_19 - 1] [i_20] [i_24]))) : (((/* implicit */int) var_2))));
                    var_53 -= arr_45 [i_0] [i_0];
                }
                var_54 = ((((/* implicit */_Bool) ((short) arr_31 [i_19 - 1] [i_19 + 1] [i_19 + 1] [(signed char)10] [i_20 + 1]))) ? (((arr_31 [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_20 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (short)20190))))) : (((/* implicit */long long int) ((/* implicit */int) (short)7417))));
            }
            for (short i_25 = 0; i_25 < 22; i_25 += 3) 
            {
                arr_95 [i_0] [i_19 + 1] [i_25] = ((/* implicit */int) var_5);
                var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_21 [i_19] [i_19 + 1] [i_19 - 1] [i_19] [i_19 - 1]) << (((/* implicit */int) (_Bool)1))))) > (((unsigned long long int) 114958160))));
                arr_96 [i_25] [i_19] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15690)) && (((/* implicit */_Bool) min((arr_93 [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_19 + 1]), (arr_93 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_25]))))));
            }
            for (long long int i_26 = 3; i_26 < 21; i_26 += 4) 
            {
                arr_100 [i_0] [i_0] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */signed char) var_2)), ((signed char)-1)))), (var_8)))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)63)))) : ((+(((((/* implicit */_Bool) (unsigned short)53097)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (int i_27 = 4; i_27 < 19; i_27 += 4) 
                {
                    arr_103 [i_27] [i_0] = ((/* implicit */signed char) arr_41 [i_0] [(unsigned char)10] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((long long int) arr_88 [i_0] [i_19] [i_26] [i_27 - 1] [i_0] [18])))))))));
                }
            }
        }
        arr_104 [i_0] [i_0] = ((/* implicit */signed char) (short)-22593);
    }
    var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0ULL), (17988808592489216816ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-63)))) : (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_8))))))) : (((unsigned int) (-(((/* implicit */int) var_5)))))));
    var_58 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (short)29617)))));
}
