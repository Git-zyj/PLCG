/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98132
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
    var_16 = ((/* implicit */signed char) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) >= (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) 132120576))))))))));
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 - 4] = ((/* implicit */_Bool) var_9);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((132120576) + (((/* implicit */int) (_Bool)0))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 3; i_2 < 7; i_2 += 2) /* same iter space */
        {
            arr_9 [i_1] [i_2 + 3] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) & (((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1)))))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [(short)5] [i_2 + 3] [(unsigned short)7] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-28)) != (((/* implicit */int) var_2))))) <= (((((/* implicit */int) var_0)) % (((/* implicit */int) var_14)))))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    arr_15 [i_1] [i_1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_9)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (min((var_5), (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned char)0)))))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && ((_Bool)1)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 125829120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))) ? ((-(((/* implicit */int) (short)-4340)))) : (max((-678186447), (((/* implicit */int) var_4)))))))))));
                }
                arr_16 [i_1] [i_1] &= ((/* implicit */unsigned short) 1417356664305474375ULL);
                arr_17 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)54226))))) | (((16053223018618226154ULL) | (var_12)))))) ? (((((/* implicit */_Bool) 4611123068473966592ULL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned short)13561)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)8849))))));
                /* LoopSeq 1 */
                for (short i_5 = 4; i_5 < 8; i_5 += 1) 
                {
                    arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) + (((((/* implicit */_Bool) -380956090)) ? (18336055393960629931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                    arr_21 [i_1] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    /* LoopSeq 3 */
                    for (short i_6 = 3; i_6 < 9; i_6 += 4) 
                    {
                        arr_25 [i_5] = (-(((/* implicit */int) ((((/* implicit */_Bool) (-(var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (18446744073709551614ULL))))))));
                        var_20 = ((((/* implicit */_Bool) 4503599627370464LL)) ? ((~(((/* implicit */int) (unsigned char)38)))) : (((/* implicit */int) var_4)));
                        arr_26 [i_1] [i_1] [i_2] [(unsigned char)2] [i_3] [i_1] [i_6] |= ((/* implicit */int) (~(((var_4) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_21 &= ((/* implicit */int) (_Bool)1);
                    }
                    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_29 [i_2 + 4] [i_2] [9] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) var_3);
                        arr_30 [i_1] [i_2 - 1] [2ULL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (272375952356193723ULL)));
                    }
                    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_34 [i_1] [i_5] [i_1] [i_3] [i_5] [i_5] [i_5] = ((((-8584053963294465580LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-96))))) | (((/* implicit */long long int) (+(((/* implicit */int) var_14))))));
                        arr_35 [i_1] [7LL] [i_3] [i_5] [i_8] = ((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (-1562726284))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (268935422U))))));
                    }
                    arr_36 [i_1] [i_1] &= ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_15)))));
                }
            }
            /* vectorizable */
            for (unsigned int i_9 = 2; i_9 < 7; i_9 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) 1112603218525744352LL);
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 7; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-31634)) + (2147483647))) >> (((((/* implicit */int) var_14)) - (83)))));
                            arr_44 [i_11] [i_10] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                        }
                    } 
                } 
            }
            arr_45 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12565))))) ? (((((/* implicit */_Bool) -4611686018427387904LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (2946101876358010248ULL))) : (((/* implicit */unsigned long long int) 4733119554468012077LL))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_0)))))));
        }
        for (unsigned char i_12 = 3; i_12 < 7; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4139)) * (((/* implicit */int) (signed char)88))))) / ((+(-4418946226154391415LL))))) * ((+(-3721122901261153749LL)))));
                arr_52 [i_1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (signed char)37);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (int i_15 = 2; i_15 < 7; i_15 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)95))))) || (((/* implicit */_Bool) ((var_13) ? (-991844466) : (((/* implicit */int) var_8)))))));
                            var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)84)) : (88794331)))));
                        }
                    } 
                } 
            }
            arr_57 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (545357767376896ULL) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))))))) : (((((/* implicit */_Bool) (unsigned short)20477)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24910)))))));
            arr_58 [i_1] [i_12 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_11)) : (var_10)))) ? (min((((/* implicit */unsigned long long int) var_10)), (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)11306)) || (((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_12)))) < (((/* implicit */int) (short)-32572))))) : ((+(((/* implicit */int) ((5007358730174105167LL) < (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
        }
        for (unsigned char i_16 = 3; i_16 < 7; i_16 += 2) /* same iter space */
        {
            arr_62 [i_1] [i_16] = ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)82)) ^ (((/* implicit */int) (signed char)-29))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)23749)) : (((/* implicit */int) (unsigned short)56981)))))));
        }
    }
}
