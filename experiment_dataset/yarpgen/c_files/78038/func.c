/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78038
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
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5280446954452631376ULL))), (var_13)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [i_0] [(short)12] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1555977312U)) ? (((/* implicit */int) arr_2 [i_0] [12ULL])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_1 [(unsigned char)0])), (var_4))), (((((/* implicit */_Bool) (unsigned char)204)) ? (arr_0 [(short)12] [(short)12]) : (((/* implicit */unsigned long long int) 1052514118U))))))) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) (unsigned char)54)), (var_15))))) : (((unsigned long long int) min((arr_8 [i_0] [i_0] [12ULL]), (((/* implicit */unsigned long long int) (unsigned char)232)))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) (short)1);
                var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_0] [i_0])), (((((/* implicit */int) var_2)) + (((/* implicit */int) (short)(-32767 - 1)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)105))))), (arr_11 [i_0] [i_3])))));
            }
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)205))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)32767), (((/* implicit */short) var_6)))))) : (((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) arr_4 [i_2 - 2] [i_2 + 1] [i_2 - 1])))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)243)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)1512))))) : (((((/* implicit */_Bool) max((2264933482488567068ULL), (((/* implicit */unsigned long long int) var_0))))) ? (131056U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))))))))));
                        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-7904)), (max((max((((/* implicit */unsigned long long int) 0U)), (13728981077581974990ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-17787)) : (((/* implicit */int) (unsigned char)0)))))))));
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) ((-8479719423217477617LL) >= (9223372036854775807LL)));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_6]))))))))))))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) (+((~(var_8)))));
                        var_30 = ((/* implicit */long long int) var_12);
                        arr_30 [i_0] [i_6] [i_6] [i_6] [i_6] [(unsigned char)6] = ((/* implicit */unsigned long long int) arr_15 [i_9]);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149)))))));
                    }
                    arr_31 [i_0] [i_6] [i_0] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                    var_32 = ((/* implicit */unsigned char) max((2264933482488567068ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_32 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11132008236098712820ULL)) || (((/* implicit */_Bool) min(((short)-18908), (((/* implicit */short) var_6))))))))) - (max((((((/* implicit */_Bool) var_9)) ? (2258294804555607793ULL) : (8448881889020585514ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))))));
                }
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    arr_37 [i_0] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_6] [i_10])) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (28U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10])))))), ((((!(((/* implicit */_Bool) 4095LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_7]))) : (arr_35 [10U])))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_6] [i_6] [i_7] [i_0]))) : (((long long int) (unsigned char)151))))) > (max((((/* implicit */unsigned long long int) ((unsigned char) 18446744073709551604ULL))), (max((12500292519567637479ULL), (((/* implicit */unsigned long long int) (unsigned char)15))))))));
                    var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)178)), ((short)-32753))))));
                    var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_1))))), ((short)3516)))), ((-(2261393463959561241LL)))));
                }
                for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    var_36 &= ((/* implicit */long long int) 2954117504U);
                    arr_40 [8LL] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)84))))) ? ((~(1125899906842608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0])))))) ? ((((!(((/* implicit */_Bool) arr_16 [i_0] [i_6] [i_7] [i_11])))) ? (min((arr_3 [i_6] [i_7]), (((/* implicit */long long int) (unsigned char)196)))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                }
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6642)) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98)))))) ? (((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (short)6642)))) : (((/* implicit */int) ((_Bool) 12500292519567637479ULL))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            }
        }
        var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) : (2147483647LL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) - (10784763036008713305ULL))))));
            var_40 = ((/* implicit */short) -327576716783813038LL);
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1004278433795407239LL)) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_12])) ? (805306368ULL) : (((/* implicit */unsigned long long int) 1158030006U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_12] [i_12])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_12])))))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
    {
        arr_49 [i_13] [i_13] = ((/* implicit */long long int) var_10);
        var_42 &= ((/* implicit */short) ((arr_0 [i_13] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    }
    for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
    {
        var_43 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) (_Bool)1))))), (17049522032288598172ULL))) < (10968094796603116816ULL)));
        arr_52 [i_14] = arr_50 [i_14];
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_50 [i_14]);
    }
    var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))));
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483661LL)) ? (((/* implicit */unsigned long long int) var_10)) : (7478649277106434809ULL)))) ? (max((((/* implicit */unsigned int) (signed char)103)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32608)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) max((7478649277106434780ULL), (((/* implicit */unsigned long long int) 9U))))))));
}
