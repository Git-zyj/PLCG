/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90958
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_1) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL))))))), (((((17905363382179814355ULL) / (var_0))) & (((/* implicit */unsigned long long int) var_11))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_4))) && (((/* implicit */_Bool) ((signed char) 17905363382179814355ULL)))))), (((max((((/* implicit */int) var_1)), (arr_1 [i_0]))) - (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)(-32767 - 1))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(var_6)))) ^ (-5277033592758478402LL)));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((4916636248791130305LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_16 = ((/* implicit */signed char) ((((long long int) var_8)) << (((16164063551462456271ULL) - (16164063551462456271ULL)))));
                        var_17 = ((/* implicit */unsigned char) ((arr_6 [(signed char)4] [i_1] [i_1]) > (-4916636248791130305LL)));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) : (4916636248791130305LL))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) 541380691529737252ULL);
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (4916636248791130304LL) : (arr_6 [i_1] [i_1] [i_0])))) && (((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_1] [i_1] [i_0] [i_0])))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 2282680522247095344ULL)))) && ((!((_Bool)1))))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_17 [(signed char)3] [i_6] [(signed char)3] [i_6] [i_6 - 1] [i_6 - 1] [i_6]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)21751)) != (((/* implicit */int) (signed char)-101))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_18 [i_0]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_4] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1804462435313832945LL)));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_8])) || (((/* implicit */_Bool) 541380691529737252ULL))));
                            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-81))));
                            var_30 = ((/* implicit */short) 2282680522247095345ULL);
                            var_31 = ((/* implicit */short) ((unsigned char) arr_19 [i_4]));
                            var_32 = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_10)))));
                        }
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_1] [i_4]))));
                        var_34 = ((/* implicit */long long int) ((var_6) << (((/* implicit */int) var_10))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((long long int) var_9));
                        var_36 = ((/* implicit */signed char) (~(((unsigned int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_9]))));
                    }
                    var_37 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_12 [i_2] [i_1] [i_2] [i_2] [i_0] [i_1]), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (signed char i_11 = 4; i_11 < 23; i_11 += 2) 
            {
                {
                    var_38 = ((/* implicit */short) var_0);
                    var_39 = ((/* implicit */signed char) ((var_10) ? (((/* implicit */unsigned long long int) min((var_6), (((unsigned int) var_11))))) : (var_8)));
                    var_40 = ((/* implicit */short) 4916636248791130305LL);
                    /* LoopSeq 4 */
                    for (short i_12 = 3; i_12 < 22; i_12 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            var_41 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_12] [i_10] [i_11 - 1] [i_13])) && (((/* implicit */_Bool) (unsigned short)34483)))))));
                            var_42 = ((/* implicit */signed char) ((_Bool) var_3));
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((-7306480041130017887LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (unsigned char)201)) : ((~(((/* implicit */int) (unsigned short)0)))))))));
                            var_44 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (((11807753271033472971ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_13] [i_13] [i_11] [i_13] [i_13] [(signed char)6]))))) : (((/* implicit */unsigned long long int) 65535U))))));
                        }
                        for (int i_14 = 3; i_14 < 23; i_14 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_21 [i_14 - 1] [i_14] [i_14] [i_14 - 3] [i_14] [(unsigned short)18]))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_1))) & (1LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
                            var_46 &= ((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_0 [i_0])));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 2; i_15 < 21; i_15 += 1) 
                        {
                            var_47 -= ((/* implicit */signed char) var_4);
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_22 [i_10] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10])))));
                            var_49 = (short)-27231;
                        }
                        for (short i_16 = 1; i_16 < 20; i_16 += 4) 
                        {
                            var_50 = (i_12 % 2 == zero) ? (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_1)))) + (2147483647))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) / (arr_33 [i_0] [i_0] [i_11 - 1] [i_12] [i_12]))) - (66U)))))) : (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_1)))) + (2147483647))) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) / (arr_33 [i_0] [i_0] [i_11 - 1] [i_12] [i_12]))) - (66U))) - (4294967206U))))));
                            var_51 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) arr_38 [(signed char)13] [(short)5] [i_11 - 4] [i_12] [i_16] [i_12] [(signed char)11])) ? (((/* implicit */unsigned long long int) var_11)) : (((unsigned long long int) (short)-27567))))));
                            var_52 *= ((/* implicit */signed char) (unsigned char)21);
                            arr_41 [i_12] [i_10] [i_11] [i_16] = ((long long int) arr_11 [i_16 + 2] [i_16 + 2] [i_12]);
                        }
                        arr_42 [i_0] [i_12] [(short)23] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)16747)), (((unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (3159668509013632181ULL))))));
                        var_53 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-16327))) + (var_7))) + ((((!(((/* implicit */_Bool) (short)-1)))) ? (((var_2) ^ (var_11))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((var_11) + (3137065055741563863LL))))))))));
                        var_54 = ((/* implicit */short) arr_29 [i_11 + 1] [i_12 + 2] [i_12 + 2] [i_12 + 1]);
                        var_55 = ((/* implicit */long long int) (unsigned char)235);
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_56 = ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_10 [i_11 - 2] [i_11 - 1]))), (716280637)));
                        var_57 = ((/* implicit */_Bool) (short)17451);
                    }
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_58 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) * ((+(var_0)))));
                        var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_9))))) ? (((((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))))));
                        var_60 = ((signed char) (short)28289);
                        var_61 = arr_48 [i_0] [i_10] [i_11 - 2] [i_0];
                        var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) (signed char)-118))));
                    }
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) var_3))) + ((-(var_7))))))));
                        var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_11] [i_11] [i_11 - 2] [i_11] [i_11 + 1] [i_11]))))) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (signed char)116)), (1141814751)))))) : (((min((((/* implicit */unsigned long long int) var_9)), (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_45 [i_0] [i_10])), ((unsigned char)64)))))))));
                        var_65 = ((/* implicit */unsigned short) (-(((((var_11) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_21 [i_19] [i_10] [i_19] [i_11] [i_10] [i_0])))) + (205)))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_20 = 2; i_20 < 17; i_20 += 3) 
    {
        arr_55 [i_20] = ((/* implicit */unsigned int) min((min(((-(var_2))), (((/* implicit */long long int) (unsigned char)158)))), (((-9223372036854775803LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_20 + 1] [5ULL] [i_20] [i_20 - 1] [i_20] [i_20 - 1])))))));
        arr_56 [i_20] [i_20] = arr_48 [i_20] [i_20] [i_20 - 1] [i_20];
        arr_57 [i_20] [i_20] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(var_7)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 + 2] [i_20 - 2] [i_20 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_20] [i_20] [i_20]))))))));
        var_66 = ((/* implicit */long long int) max((var_66), (-9223372036854775803LL)));
    }
    for (signed char i_21 = 3; i_21 < 18; i_21 += 1) 
    {
        arr_62 [i_21] = ((/* implicit */long long int) arr_38 [(unsigned short)18] [i_21 - 1] [i_21 - 1] [i_21] [i_21 - 1] [i_21] [i_21]);
        var_67 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) -1LL)), ((-(var_8)))));
        var_68 = ((/* implicit */long long int) min((var_68), (2199023255551LL)));
        var_69 = ((/* implicit */_Bool) max((var_69), (((/* implicit */_Bool) var_11))));
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 22; i_22 += 3) 
    {
        var_70 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) * (((/* implicit */int) (unsigned short)63648))));
        var_71 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_22] [6LL] [i_22]))) != (arr_64 [i_22] [i_22])));
        arr_67 [i_22] = ((/* implicit */short) (unsigned char)21);
        var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) var_11))));
        var_73 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
    }
}
