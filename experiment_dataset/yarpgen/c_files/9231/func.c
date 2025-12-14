/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9231
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-3429))))) ^ (max((((/* implicit */long long int) (signed char)-109)), (-4558679997118079217LL)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [(unsigned char)5]);
        var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 7U))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)167)))))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_14))))));
        var_17 |= arr_1 [i_0];
    }
    for (short i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) max((var_5), (((min((((/* implicit */unsigned int) 840799022)), (5U))) >= ((+(arr_5 [i_1])))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) 1668209432U);
        arr_9 [i_1 - 2] = ((/* implicit */long long int) var_13);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) 7U);
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((var_8) ? (arr_15 [i_1] [i_2] [i_2] [i_4]) : (((/* implicit */int) (_Bool)1))))))));
                    arr_19 [i_1] [13] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */int) max(((unsigned char)167), (arr_17 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1])));
                }
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4294967288U) >> (((((/* implicit */int) arr_0 [i_1])) + (123)))))) ? (((((/* implicit */unsigned long long int) 4294967288U)) / (10068646520743535604ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_3]))))))));
                        arr_24 [i_1] [i_5] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (8U))) : (((/* implicit */unsigned int) (+(arr_15 [i_6] [i_3] [i_1 - 1] [i_1 - 1]))))));
                        arr_25 [(_Bool)1] [i_3] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 2240788950U)) : ((-9223372036854775807LL - 1LL))))));
                        arr_26 [i_2] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (min((arr_22 [i_6] [i_1] [i_3] [i_1] [i_1] [i_1]), (var_12)))))));
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [2] [i_7] = ((/* implicit */short) ((arr_21 [i_1] [i_1] [1LL] [i_1] [i_7]) || (((/* implicit */_Bool) max((((/* implicit */long long int) min((4294967288U), (22U)))), (arr_4 [i_1 - 2] [i_2 + 2]))))));
                        arr_30 [i_7] [i_1] [i_7] = ((/* implicit */unsigned char) arr_28 [i_1] [i_1] [i_1] [i_1 - 2] [i_7] [i_1 + 1] [i_1]);
                    }
                    var_20 -= ((/* implicit */unsigned int) (-(max((arr_15 [i_1] [i_1 + 1] [i_1] [i_1 - 2]), (arr_15 [i_1 - 1] [i_1] [i_1] [i_1 - 2])))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((max((var_10), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 2] [i_2])) && (((/* implicit */_Bool) 7U))))))))));
                }
                arr_31 [4ULL] [4ULL] [i_3] = ((/* implicit */int) max((((((/* implicit */_Bool) 13U)) ? (2205607588288581484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46032))))), (((/* implicit */unsigned long long int) 4294967260U))));
            }
            for (short i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 3])) ? (((/* implicit */int) (short)25073)) : (((/* implicit */int) arr_35 [i_8] [i_2 - 1] [i_1 - 3]))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (arr_2 [i_8 - 2] [i_1]) : (arr_2 [i_1 - 1] [i_2])))));
                arr_36 [i_1] [10ULL] [i_2 - 1] [i_8] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
            }
            /* LoopSeq 3 */
            for (signed char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                arr_41 [i_1] = ((/* implicit */signed char) min((((long long int) arr_21 [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (unsigned short)58757)) : (((/* implicit */int) var_3)))) : (max((arr_40 [i_1] [i_2 + 1] [i_9]), (((/* implicit */int) (unsigned short)45209)))))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_9))));
                var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                var_25 &= (~(((var_7) ? (((/* implicit */unsigned long long int) arr_33 [i_2 - 1] [i_9 + 1] [i_9])) : (2205607588288581484ULL))));
            }
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                arr_44 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
                arr_45 [i_10] [i_2] [i_1] = 3615845021765532777ULL;
            }
            for (int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) ((min((var_10), (((/* implicit */unsigned long long int) var_3)))) == ((+(var_10))))))));
                    var_27 = ((/* implicit */unsigned char) max((((((/* implicit */int) max(((unsigned short)2224), (((/* implicit */unsigned short) var_6))))) + (((/* implicit */int) max((var_9), ((short)22793)))))), (((/* implicit */int) (unsigned char)66))));
                }
                for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    arr_55 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */_Bool) var_4);
                    arr_56 [i_11] [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_15 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1])), (((((/* implicit */_Bool) var_6)) ? (15114692547525601416ULL) : (((/* implicit */unsigned long long int) arr_15 [i_2 + 1] [i_2 - 2] [14LL] [i_2 - 2]))))));
                    arr_57 [i_1] [i_2] [i_2] [i_11] [i_13] = arr_50 [i_1] [i_1] [i_2 + 2] [i_11] [i_11] [(unsigned char)0];
                }
                var_28 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_0)) & (903592504))), (((/* implicit */int) (_Bool)1))));
                arr_58 [1U] = ((/* implicit */unsigned short) var_7);
            }
            arr_59 [8] = ((/* implicit */_Bool) var_10);
        }
        for (unsigned short i_14 = 2; i_14 < 15; i_14 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_46 [i_1] [i_14] [i_14 - 1]))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((9223372036854775807LL), (((/* implicit */long long int) arr_12 [i_14 + 1])))))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-18199)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_1 - 2] [i_1 - 2] [i_1 - 2])))))));
            arr_63 [i_1] [i_14] = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (short)18198)) : (((/* implicit */int) (unsigned short)20961)))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) (_Bool)1))))), (max((507904U), (((/* implicit */unsigned int) arr_17 [i_1] [i_14 - 2] [i_14] [i_14 - 2] [i_1] [i_14]))))))));
            var_32 = ((/* implicit */short) var_10);
        }
        /* vectorizable */
        for (short i_15 = 1; i_15 < 13; i_15 += 4) 
        {
            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+(-6857117384921026428LL))))));
            var_34 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_1 - 2])) && (((/* implicit */_Bool) 4294967288U))));
            arr_68 [i_15] = ((/* implicit */short) (((~(((/* implicit */int) arr_54 [i_1] [i_1 - 1] [i_1] [i_1] [i_15])))) >> ((((~(var_12))) - (1916926038415192234LL)))));
            arr_69 [i_1] [i_15] [i_15] = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_48 [i_1] [i_1] [i_15 + 1]))));
            arr_70 [i_15] [i_1] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
        }
    }
    var_35 = ((/* implicit */_Bool) var_10);
    var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
}
