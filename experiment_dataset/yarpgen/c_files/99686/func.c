/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99686
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
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_9)), (var_1))) >= (((/* implicit */int) var_12))));
    var_15 = ((/* implicit */long long int) var_0);
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3559302448478304970LL))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1184705290680631963LL)) ? (-1184705290680631964LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))))) ? (((611476422U) | (4101686587U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767)))))) ? (((((/* implicit */_Bool) min((var_13), ((signed char)-17)))) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (min((var_2), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) (unsigned short)58151))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */_Bool) (+(var_10)));
        var_19 |= ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) var_1)) : (1184705290680631963LL));
    }
    for (short i_1 = 4; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-21988)), (var_3)));
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) 6136415664703353222LL)))))));
        var_22 -= ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) -4420033156984653620LL)))))) && (((/* implicit */_Bool) (short)-18493))));
    }
    /* vectorizable */
    for (short i_2 = 4; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_24 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
            var_25 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_26 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                var_27 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 167676790U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))));
                var_28 *= ((/* implicit */unsigned int) ((unsigned short) (short)-6318));
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1184705290680631955LL)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)65516))));
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_29 += ((/* implicit */signed char) ((long long int) (unsigned short)0));
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (unsigned short)31800))));
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_23 [i_2] [(unsigned short)10] &= ((/* implicit */signed char) var_8);
                            arr_24 [i_2] [i_7] [19] [19] [19] [16ULL] [i_2] = var_9;
                            arr_25 [i_2] [i_3] [i_5] [i_2] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (short i_8 = 2; i_8 < 20; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)25))));
                            arr_35 [i_2 - 2] [i_2 - 4] [i_2] [i_8 - 2] [i_9] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-2027))));
                            var_32 -= ((short) var_3);
                        }
                    } 
                } 
                arr_36 [i_2] [i_2] [i_2] [i_8] |= ((/* implicit */short) ((long long int) var_5));
            }
            for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                var_33 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                var_34 = ((/* implicit */signed char) (+(2750770931U)));
                var_35 = ((/* implicit */signed char) var_0);
                var_36 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)6))));
            }
        }
        for (unsigned short i_12 = 2; i_12 < 19; i_12 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31955))) : (((unsigned long long int) var_0)))))));
            arr_41 [i_2] [i_12] [i_2] = ((/* implicit */unsigned long long int) var_9);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_38 = ((((/* implicit */_Bool) var_0)) ? (5833115771289027798LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17584))));
                    var_39 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_15 = 4; i_15 < 21; i_15 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_16 = 3; i_16 < 20; i_16 += 4) 
        {
            var_40 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) < (-5636143432552186495LL)));
            arr_51 [16LL] [i_15] = ((/* implicit */int) var_6);
            var_41 = ((/* implicit */signed char) ((unsigned char) 17266000569972483359ULL));
        }
        var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26023))));
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)20368)) : (((/* implicit */int) var_13))));
        /* LoopSeq 2 */
        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_0))))))));
                var_45 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                var_46 = ((/* implicit */long long int) ((((long long int) var_4)) < (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                var_47 -= ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 2750770931U)));
                var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2040)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)110))));
                var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 1610684861U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)62012)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (-(((/* implicit */int) var_13)))))));
            }
            for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2018)) ? (((/* implicit */unsigned long long int) 2052)) : (14378161334723910951ULL))))));
                var_52 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)57)) : (var_1));
                var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17266000569972483349ULL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_4))));
                var_54 |= ((/* implicit */signed char) ((var_10) < (var_10)));
            }
            arr_62 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-1)))) | ((~(var_1)))));
            var_55 = ((/* implicit */unsigned char) (unsigned short)45168);
            var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (14113184983808647841ULL) : (((/* implicit */unsigned long long int) 8133840973919036247LL))));
        }
        for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) ((long long int) 16389085979137783734ULL)))));
            var_58 = ((/* implicit */signed char) var_3);
            arr_67 [i_15] [i_21] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_0))));
        }
    }
}
