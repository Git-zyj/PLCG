/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95061
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [(signed char)8] = ((/* implicit */short) (+((+(((/* implicit */int) (short)31195))))));
                var_11 = ((/* implicit */short) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((var_9) ^ (((/* implicit */int) arr_3 [i_0] [(short)1]))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7))))))))));
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned short) (signed char)-112);
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_8 [i_2]);
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((max((1788331971U), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))))) << (((arr_7 [(unsigned short)4] [i_3]) - (1175998205))))))));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (short)-19442))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                var_15 = (+(((/* implicit */int) arr_15 [i_2] [i_2] [i_2])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_27 [5ULL] [i_2] [i_6] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 + 1] [i_7 - 1] [i_8] [i_9] [(signed char)11])))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_7 - 1] [i_7 + 2])))))));
                var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) var_0)))))));
            }
            for (signed char i_10 = 2; i_10 < 21; i_10 += 2) 
            {
                var_19 ^= ((/* implicit */signed char) (unsigned short)52107);
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((((-(9223372036854775807LL))) | (9223372036854775807LL))) > ((-9223372036854775807LL - 1LL)))))));
                arr_31 [i_10 - 1] [i_6] [i_2] = ((/* implicit */unsigned long long int) var_9);
            }
            for (int i_11 = 1; i_11 < 21; i_11 += 3) 
            {
                arr_36 [i_11] = (!(((/* implicit */_Bool) (+(9223372036854775807LL)))));
                var_21 -= ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_22 = max((((/* implicit */unsigned short) (unsigned char)148)), ((unsigned short)13421));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (arr_12 [i_2] [i_6] [i_6] [i_12] [i_13])))) : (10067933166518303340ULL))), (((/* implicit */unsigned long long int) (signed char)4))))));
                        var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52115)) || (((/* implicit */_Bool) (unsigned short)52093))));
                    }
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_21 [(_Bool)1] [i_6]))));
                        var_26 = ((/* implicit */unsigned long long int) max(((+((+(var_5))))), (((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)52114)), (var_7)))))))));
                        var_27 *= ((/* implicit */signed char) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                }
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    var_28 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)78)) || (((/* implicit */_Bool) (unsigned char)137)))))))), (13334037145286975515ULL)));
                    var_29 = ((/* implicit */short) (~((~(var_9)))));
                }
                for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (((arr_40 [i_2] [i_11] [(signed char)0] [i_11 + 1] [(signed char)0] [i_16]) * (((/* implicit */unsigned int) arr_12 [(unsigned short)8] [i_6] [i_16] [i_11 - 1] [i_2])))) : (min((((/* implicit */unsigned int) var_2)), (arr_40 [i_2] [i_6] [10ULL] [i_11 - 1] [i_16] [i_11])))));
                    var_31 = ((/* implicit */short) (-(((/* implicit */int) ((arr_11 [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1]) < (((/* implicit */long long int) var_5)))))));
                    arr_49 [i_2] [i_6] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)52107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (1672254324U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                }
                var_32 -= ((/* implicit */_Bool) (-((~((-(arr_42 [i_2] [i_6] [(unsigned char)13] [(unsigned short)7] [i_11] [i_11] [(unsigned char)5])))))));
            }
            arr_50 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)13428)), (((((/* implicit */int) (short)-1)) ^ (arr_7 [i_2] [i_6])))));
            arr_51 [i_2] [i_2] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) (short)-32738))))) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [i_2] [i_2] [i_6] [i_6])) != (((/* implicit */int) var_1))))) : (((/* implicit */int) (short)25539))))));
        }
        for (int i_17 = 1; i_17 < 20; i_17 += 3) 
        {
            var_33 = ((/* implicit */short) max((var_33), ((short)13021)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                var_34 *= ((/* implicit */_Bool) (((((-(var_3))) + (9223372036854775807LL))) >> (((var_5) - (604917280)))));
                arr_57 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52107))) + (var_7))))));
                var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)0))))));
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                arr_60 [13] [13] [i_19] = var_2;
                var_36 = ((((/* implicit */int) (signed char)4)) >= ((~(((/* implicit */int) var_6)))));
                var_37 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                arr_61 [i_2] [i_2] [i_19] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))));
            }
            /* LoopNest 3 */
            for (unsigned char i_20 = 1; i_20 < 20; i_20 += 3) 
            {
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    for (unsigned int i_22 = 2; i_22 < 21; i_22 += 2) 
                    {
                        {
                            arr_70 [(signed char)17] [i_21] |= ((/* implicit */int) (((~(((((/* implicit */_Bool) 13334037145286975534ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)-120)) : ((-(var_9)))))));
                            var_38 = ((/* implicit */unsigned int) ((var_0) ? (max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_55 [17ULL] [i_21] [17ULL] [17ULL])) : (((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((-3519133230736998817LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_23 = 0; i_23 < 22; i_23 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_24 = 1; i_24 < 20; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    arr_79 [i_23] [i_24] [8ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-92))))) ? (max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((((var_8) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (562932773552128ULL))))))));
                    var_40 = ((/* implicit */int) max((var_40), (((var_0) ? (((/* implicit */int) (!(((/* implicit */_Bool) -881693140))))) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_34 [i_23] [i_24] [i_23] [i_23]))))))))));
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned char) var_8);
        var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 3804268953U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))) : (var_3))) : (((/* implicit */long long int) (~(1151427498))))))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_9))) : (((/* implicit */int) arr_25 [i_23] [i_23] [1] [15ULL] [(_Bool)1] [i_23])))) : ((+((-(var_9))))));
        var_43 = ((/* implicit */_Bool) arr_15 [i_23] [i_23] [i_23]);
    }
    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 4) /* same iter space */
    {
        var_44 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((+(var_10))) : (((/* implicit */unsigned int) (-(var_8))))));
        var_45 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) -1053806974)) : (arr_41 [i_26] [i_26] [i_26] [i_26] [i_26])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) & ((+(arr_16 [i_26] [i_26] [i_26])))));
        arr_82 [i_26] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) (unsigned short)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1191))) : (arr_40 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 3) 
    {
        var_46 = ((/* implicit */int) max((var_46), (var_5)));
        arr_86 [i_27] = ((/* implicit */signed char) ((((/* implicit */int) arr_65 [i_27] [i_27] [14] [i_27])) | (((/* implicit */int) var_6))));
        var_47 = ((/* implicit */short) arr_53 [i_27] [i_27] [i_27]);
        /* LoopNest 3 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (int i_29 = 0; i_29 < 15; i_29 += 2) 
            {
                for (unsigned long long int i_30 = 0; i_30 < 15; i_30 += 2) 
                {
                    {
                        var_48 += ((/* implicit */_Bool) (short)-24169);
                        /* LoopSeq 1 */
                        for (unsigned short i_31 = 2; i_31 < 13; i_31 += 4) 
                        {
                            var_49 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-24180))));
                            arr_99 [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */int) arr_16 [i_30] [(signed char)19] [i_28]);
                            arr_100 [i_27] = ((/* implicit */_Bool) ((arr_93 [i_31 + 1] [6] [i_31 + 1] [i_31 + 2] [i_27]) ? (((/* implicit */int) arr_53 [i_28] [i_28] [i_31 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_50 = ((/* implicit */_Bool) arr_34 [(short)18] [i_27] [i_27] [i_27]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_32 = 0; i_32 < 22; i_32 += 2) 
    {
        arr_105 [i_32] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_29 [i_32] [i_32] [i_32]))));
        arr_106 [i_32] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_6))))));
    }
    for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
    {
        arr_109 [i_33] [i_33] = ((/* implicit */unsigned long long int) (-(var_8)));
        /* LoopNest 3 */
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            for (unsigned long long int i_35 = 4; i_35 < 8; i_35 += 2) 
            {
                for (unsigned short i_36 = 1; i_36 < 9; i_36 += 2) 
                {
                    {
                        var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18025469600719580332ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (2551526382U)));
                        arr_117 [i_33] [i_35] [i_35] [i_34] [i_34] [i_33] = var_6;
                        arr_118 [i_35] |= ((/* implicit */signed char) (((-((+(((/* implicit */int) (short)1175)))))) | (var_8)));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            arr_123 [4] [4] [i_38] = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)0))))));
            arr_124 [i_37] [i_37] [i_37] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_48 [i_38] [i_37] [i_38])) : (((/* implicit */int) var_6)))) | ((+(((/* implicit */int) (unsigned char)8))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((arr_6 [i_37]), (arr_69 [i_37] [(short)10] [i_37] [i_38])))) : (((/* implicit */int) ((var_8) != (var_5)))))) : (((/* implicit */int) var_4))));
            var_52 = ((/* implicit */int) var_3);
        }
        var_53 = ((/* implicit */unsigned long long int) var_7);
        arr_125 [i_37] = ((/* implicit */unsigned short) (signed char)-92);
    }
}
