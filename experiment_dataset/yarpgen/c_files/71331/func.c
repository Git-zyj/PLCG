/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71331
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (signed char)-28)) <= (((/* implicit */int) var_8))))), (min((var_3), (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((var_1), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0 - 2]), (((/* implicit */unsigned short) (short)-19091))))) ? (max((((((/* implicit */_Bool) (short)20131)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (5663827706666316239LL))), (((/* implicit */long long int) arr_5 [i_1 + 1] [i_0 - 1])))) : (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_1] [i_0])), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (-1357743918) : (((/* implicit */int) arr_1 [i_0])))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))));
                        var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_1] [i_2] [i_3])), (arr_9 [i_3] [16U] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_1])))))) ? (((((/* implicit */_Bool) min((var_5), (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [16U]))))) : (min((arr_4 [i_1]), (arr_4 [(signed char)2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((var_2), (arr_7 [i_3] [i_2] [(short)10]))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14950723394313446629ULL)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (short)-1))))) ? (max((-1357743918), (-1357743918))) : (-1357743918)))));
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                    }
                } 
            } 
            var_14 = ((/* implicit */long long int) arr_7 [i_1 + 3] [16] [(short)2]);
        }
        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_0 - 2] [i_4 + 3])) << (((((/* implicit */int) arr_14 [i_0 + 1] [i_4 - 1])) - (107))))) | (((/* implicit */int) arr_16 [i_4 + 1] [i_0 - 3]))));
            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
            arr_17 [i_0 - 3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 - 1])) ? (arr_15 [i_4] [i_4 + 2] [i_4]) : (17978710679683355143ULL)))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_17 ^= ((/* implicit */short) (!(((_Bool) (signed char)-43))));
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_16 [i_5] [i_0 + 1])))));
            arr_21 [i_0] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned char) -7747678066845787793LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)2))))));
        }
        var_19 = ((/* implicit */signed char) arr_8 [i_0] [i_0 - 3] [i_0 + 3] [i_0 + 3]);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                {
                    arr_26 [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) 7747678066845787792LL);
                    arr_27 [i_0] [i_0] [i_7] [i_6] = ((/* implicit */unsigned char) min((7444053319116821129ULL), (((((/* implicit */unsigned long long int) arr_23 [i_0 + 2] [i_0 + 2] [i_0 + 2])) & (7444053319116821129ULL)))));
                    arr_28 [i_0] [i_0] = var_6;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] = ((((/* implicit */_Bool) arr_4 [i_8])) ? (((/* implicit */unsigned long long int) ((arr_24 [i_8] [i_8] [(unsigned char)9] [i_8]) ? (((/* implicit */int) var_9)) : (var_3)))) : (11002690754592730487ULL));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) (~(((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10 - 2] [i_9] [13LL]))) : (arr_18 [i_10 - 2] [i_10 - 2] [i_10])));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_8] [i_8]))) * (arr_13 [i_10] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))))));
                /* LoopSeq 1 */
                for (int i_11 = 4; i_11 < 9; i_11 += 1) 
                {
                    arr_39 [i_9] [7ULL] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) arr_24 [i_10 - 1] [i_10 - 1] [i_10] [i_11 + 2]))));
                    var_23 += (+(((/* implicit */int) (short)-1)));
                    var_24 = arr_0 [i_10 - 2];
                    arr_40 [i_9] [i_9] [i_10] [i_11 + 2] [i_8] = ((/* implicit */short) (-(((/* implicit */int) (short)17472))));
                }
            }
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
                var_26 += ((/* implicit */signed char) var_0);
            }
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) (_Bool)0);
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(unsigned short)6] [i_9])) ? (arr_13 [i_8] [i_8]) : (arr_13 [i_13] [i_9])));
                var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)102))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17472))) % (arr_29 [i_8]))) : (((/* implicit */unsigned long long int) arr_23 [i_8] [i_9] [i_8]))));
                var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_37 [i_8] [i_9] [i_13])) : (((/* implicit */int) arr_37 [i_8] [i_9] [i_8]))));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    arr_50 [i_8] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 584415996U)) ? (3245855591U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22638)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-17472))));
                    var_33 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [(short)1] [i_9])))) & (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_13 [i_8] [(unsigned char)15])))));
                }
            }
            arr_51 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30541)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_8 [i_8] [i_9] [i_8] [i_9]))));
        }
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_54 [i_15] [i_15] = ((((/* implicit */_Bool) max((max((var_3), (1073217536))), (((/* implicit */int) ((short) 3245855591U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (max((((/* implicit */unsigned long long int) 0U)), (max((3272052413235291978ULL), (((/* implicit */unsigned long long int) arr_23 [i_15] [i_15] [i_15])))))));
    }
    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) arr_35 [i_16] [i_16] [i_16]);
        var_36 = arr_46 [i_16] [i_16] [i_16] [0] [i_16] [8ULL];
        var_37 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [(unsigned short)2] [i_16] [i_16] [i_16] [i_16] [(unsigned short)2]))));
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            for (short i_18 = 2; i_18 < 7; i_18 += 1) 
            {
                {
                    var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)0))) ? (((((/* implicit */_Bool) (-(10955937609648507396ULL)))) ? (((((/* implicit */_Bool) arr_14 [i_17] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)8420)))) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_57 [i_16]))));
                    arr_61 [10ULL] |= ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_66 [i_19] = (-(((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-12950)), (arr_13 [i_19] [8ULL])))) * (max((arr_42 [i_19]), (((/* implicit */unsigned long long int) arr_7 [i_19] [i_19] [i_19])))))));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            for (long long int i_21 = 1; i_21 < 9; i_21 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_39 = ((/* implicit */short) 201317974010425080LL);
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_21 + 1] [i_20] [i_20 + 1])) ? (arr_49 [i_19] [i_20]) : (((/* implicit */unsigned long long int) arr_69 [i_21 + 1] [i_20] [i_20 + 1]))))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_49 [i_19] [i_19]))) : (((/* implicit */unsigned long long int) ((long long int) arr_69 [i_21 + 1] [0LL] [i_20 + 1])))));
                        var_41 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((0) / (((/* implicit */int) (short)-10685))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) arr_19 [i_22]))))))));
                        var_42 |= ((/* implicit */short) ((((/* implicit */int) (short)0)) > (((/* implicit */int) var_6))));
                        arr_73 [i_19] [i_20] [i_21 + 1] [i_21 + 1] [i_22] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)21681)) : (((/* implicit */int) (unsigned char)38))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)64))))) : (((((/* implicit */_Bool) arr_13 [i_19] [i_20 + 1])) ? (((/* implicit */long long int) ((unsigned int) arr_46 [i_19] [(signed char)0] [i_20] [i_20] [i_19] [i_19]))) : (arr_69 [i_19] [i_19] [i_19])))));
                    }
                    for (long long int i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_19] [i_20] [i_20])) ? (((/* implicit */int) arr_1 [i_19])) : (arr_75 [i_19] [i_19] [i_19] [i_19])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17472))) : (((unsigned int) arr_41 [i_19] [i_20] [i_19])))), (((/* implicit */unsigned int) min(((short)-26500), (min((((/* implicit */short) (signed char)22)), ((short)31820))))))));
                        arr_76 [i_19] [i_19] = ((/* implicit */short) ((var_8) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_23] [i_21 - 1] [i_19] [i_19]))) : (min((arr_0 [i_19]), (((/* implicit */long long int) var_0))))))) : (((((/* implicit */unsigned long long int) 329382670881113933LL)) ^ (6894091607650754520ULL)))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_19])) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)12))))) : (((/* implicit */int) var_5)))))));
                        var_45 &= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)49)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-21681)) && (((/* implicit */_Bool) 6894091607650754520ULL)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        arr_80 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */short) arr_14 [i_21] [i_20]);
                        var_46 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 5659787751785224566LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_63 [i_19]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_25 = 1; i_25 < 8; i_25 += 2) 
        {
            for (short i_26 = 0; i_26 < 10; i_26 += 1) 
            {
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26500)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21681))) : (7055546083961888769LL)))), (max((var_1), (((/* implicit */unsigned long long int) arr_77 [i_25] [i_19] [i_25] [8] [i_25] [(short)0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_25 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 1; i_27 < 9; i_27 += 1) 
                    {
                        arr_87 [i_25] [i_19] = ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)0)) << (((((/* implicit */int) var_2)) + (23231))))), (((arr_24 [(short)1] [i_25] [i_26] [i_27 + 1]) ? (((/* implicit */int) arr_46 [i_19] [(signed char)8] [i_26] [i_19] [i_25 + 1] [i_19])) : (((/* implicit */int) var_0))))))) & (max((0ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
                        arr_88 [i_19] [i_19] [i_26] = ((/* implicit */long long int) ((unsigned short) 1929803274));
                        arr_89 [i_19] [i_26] [i_19] [i_19] = -518767395;
                    }
                    arr_90 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)0)), (arr_56 [i_25 + 2])));
                }
            } 
        } 
        var_48 = ((/* implicit */int) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27203))) != (6894091607650754520ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_19] [i_19] [i_19])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_19] [i_19]))))) ? (arr_48 [(signed char)9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_19] [i_19] [i_19] [i_19] [10ULL])) ? (arr_47 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_47 [i_19] [i_19] [i_19] [i_19] [i_19]))))));
    }
    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (329382670881113933LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)19883)))))));
    var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) -2045704661))));
}
