/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57991
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (short)-17099))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_8))));
                            var_18 -= ((/* implicit */_Bool) (short)-17113);
                            arr_14 [i_0 - 2] [2ULL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((15183731924210694369ULL) ^ (((/* implicit */unsigned long long int) 134217727LL))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (2961647907U)))) : (((/* implicit */int) arr_2 [14LL] [i_0 - 2]))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 4) 
                        {
                            var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16383))) : (var_0)))) != (-3773717640343065126LL)));
                            arr_19 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) var_7);
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) 2961647919U);
                            arr_22 [i_0 - 3] [(signed char)8] |= ((/* implicit */signed char) -1LL);
                        }
                        var_21 -= ((/* implicit */unsigned char) var_15);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_8))));
                        var_23 = ((/* implicit */short) arr_10 [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (_Bool)1))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned char)242))));
                        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) var_9)) ? (15183731924210694371ULL) : (((/* implicit */unsigned long long int) 1018319303))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        {
                            var_27 |= ((/* implicit */unsigned int) (unsigned char)127);
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)188)) + (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) & (var_8))))))));
                            var_29 -= ((/* implicit */unsigned int) arr_31 [i_7] [i_7] [i_7]);
                            var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 835832932U)) : (-134217742LL)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-122)) >= (((/* implicit */int) (signed char)-97))))) : (((/* implicit */int) var_6))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1018319303)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_7] [i_7] [i_7] [i_7])) != (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)200)))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))));
                arr_46 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned char) (_Bool)0);
            }
            for (signed char i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
            {
                arr_49 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (1922047988U)));
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_12))));
                    arr_52 [i_7] [i_7] [i_7] [i_15] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 16777215LL)) < (((11928065749584335234ULL) << (((11928065749584335234ULL) - (11928065749584335193ULL)))))));
                    var_34 *= ((/* implicit */unsigned int) (signed char)108);
                    var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_15] [i_15] [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) (short)-10538))));
                }
                for (int i_16 = 2; i_16 < 12; i_16 += 1) 
                {
                    var_36 *= ((/* implicit */short) -4639643085594656336LL);
                    var_37 = ((/* implicit */unsigned char) min((var_37), ((unsigned char)157)));
                    var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)31)) ? (-1LL) : (-1LL)));
                }
                arr_56 [i_7] [i_7] [i_7] |= ((/* implicit */short) -1952424108);
            }
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17596))))))));
        }
        var_40 += ((/* implicit */signed char) 2641100515U);
    }
    for (long long int i_17 = 4; i_17 < 14; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 1; i_20 < 14; i_20 += 2) 
                    {
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (signed char)-1))));
                        var_42 |= ((/* implicit */_Bool) ((((((((-1605112838456552910LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_17 - 4])) - (11330))))) > (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (short)-12002))))), (min((((/* implicit */long long int) (signed char)-1)), (-134217742LL))))))));
                        var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (short)14772))));
                        arr_67 [i_18] [i_17 - 1] = ((/* implicit */int) ((-137203818) >= (((/* implicit */int) (short)-11995))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_22 = 4; i_22 < 15; i_22 += 1) 
                        {
                            var_44 += ((/* implicit */signed char) 18446744073709551615ULL);
                            var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))) ? (arr_23 [i_17 - 4] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                            arr_73 [i_17] [i_17 - 1] [i_17 - 4] [i_17] [i_17 + 2] [10U] [i_17 + 1] &= ((/* implicit */unsigned char) (signed char)2);
                        }
                        for (int i_23 = 4; i_23 < 14; i_23 += 3) 
                        {
                            arr_77 [i_17] [i_17 + 1] [(short)6] [i_17] [i_17 - 4] &= ((/* implicit */signed char) (short)-23318);
                            arr_78 [i_17] [i_18] [i_17 - 2] = ((((/* implicit */_Bool) (short)21893)) ? (max((((((/* implicit */_Bool) 2340301154U)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-81)), (var_13)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-12000)))) * (((((/* implicit */int) (signed char)-70)) / (arr_58 [i_17 + 1])))))));
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) ^ (max((((/* implicit */long long int) (_Bool)1)), (-134217742LL)))));
                            arr_79 [i_17 - 1] [i_17 + 2] [(short)4] [i_17 + 1] |= ((/* implicit */unsigned long long int) arr_35 [i_17 - 4] [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 - 3]);
                        }
                        var_47 = ((/* implicit */short) (unsigned short)8191);
                        arr_80 [i_17 + 1] [i_17 + 1] [0U] [i_17 - 2] [i_17] &= ((((((/* implicit */_Bool) (unsigned short)1173)) ? (((arr_26 [i_17 - 3] [i_17]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))) - (((/* implicit */long long int) ((/* implicit */int) (short)10150))));
                        arr_81 [i_17] [i_17] [i_17] [6] &= var_12;
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 16; i_24 += 3) /* same iter space */
                    {
                        var_48 -= var_1;
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((((/* implicit */_Bool) -3274005421953220200LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (max((14134732523923139110ULL), (((/* implicit */unsigned long long int) -1LL)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_17] [i_17 - 1] [i_17 + 1] [i_17]))))))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 16; i_25 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_26 = 4; i_26 < 14; i_26 += 4) 
                        {
                            var_50 += ((/* implicit */unsigned char) 2387776150U);
                            arr_90 [i_17 - 2] [i_17 - 4] [i_17 - 4] [i_26] [i_17] [i_17 - 1] |= ((/* implicit */signed char) 6281508448514198364LL);
                        }
                        var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_16), (var_5)))) ? (var_1) : (((/* implicit */unsigned long long int) arr_39 [i_17 + 2] [i_17]))));
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) arr_9 [i_17 + 2] [i_17] [i_17 + 2] [i_17 - 4]))));
                    }
                    arr_91 [i_17 - 2] [i_17 - 1] [i_18] [i_17] = ((/* implicit */_Bool) var_11);
                    var_53 = ((/* implicit */unsigned short) 3809800798U);
                }
            } 
        } 
        var_54 += ((/* implicit */unsigned long long int) var_10);
        arr_92 [i_17] [i_17 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)127)) + (((/* implicit */int) var_11))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_27 = 0; i_27 < 16; i_27 += 4) 
        {
            var_55 = ((/* implicit */_Bool) 2623454865U);
            arr_95 [i_17] [i_17] |= ((/* implicit */int) ((((/* implicit */_Bool) 6200658266147976545ULL)) ? (((/* implicit */unsigned long long int) 3809800788U)) : (16932273531659705623ULL)));
        }
        for (signed char i_28 = 0; i_28 < 16; i_28 += 4) 
        {
            var_56 += ((/* implicit */unsigned long long int) ((((738819168) >> (((((/* implicit */int) (short)20487)) - (20483))))) > (((/* implicit */int) arr_15 [i_17] [i_28]))));
            var_57 -= ((/* implicit */int) ((63LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    var_58 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 885902085)) ? (7002900765992017029LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    var_59 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((-1LL), (max((var_7), (((/* implicit */long long int) (signed char)-107))))))));
}
