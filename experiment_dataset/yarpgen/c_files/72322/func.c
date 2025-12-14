/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72322
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) && (var_15))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) var_12))))) : (((((/* implicit */int) var_12)) % (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) arr_1 [i_0] [i_1 + 1]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_18 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_8 [i_0] [(short)15] [i_2] [i_2])))));
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_2] [i_0] [i_1] [0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)15233)) << (((/* implicit */int) (_Bool)1))));
                    var_19 *= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-39))));
                }
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)11708)))))));
                    arr_14 [(_Bool)1] [i_4] &= ((/* implicit */unsigned int) (unsigned char)24);
                }
                for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    arr_17 [i_0] [i_0] [13ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_8 [i_0] [2] [i_2] [i_2]))));
                    var_21 = ((/* implicit */int) var_13);
                }
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) (signed char)-28))));
                    arr_21 [i_0] [(unsigned char)0] [(short)0] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) var_9))));
                }
            }
        }
        for (unsigned short i_7 = 4; i_7 < 20; i_7 += 3) 
        {
            arr_25 [i_0 + 1] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [9U] [9U] [i_7]) & (((/* implicit */long long int) arr_22 [i_7] [i_7]))))) ? (var_11) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_0] [i_0]))))));
            arr_26 [i_7] [i_7 - 4] [i_7] = ((/* implicit */short) var_12);
        }
        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) arr_23 [i_0 + 1]));
        arr_27 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        /* LoopSeq 4 */
        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_24 = ((/* implicit */int) arr_29 [i_8] [i_8]);
            var_25 = arr_6 [15LL] [i_8] [i_0];
            arr_31 [(signed char)10] = ((/* implicit */unsigned char) arr_24 [i_8] [4ULL]);
            /* LoopSeq 4 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) (short)20461);
                arr_35 [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_32 [i_0] [i_8] [i_9]);
                var_27 = ((/* implicit */unsigned short) (+(arr_18 [i_0 - 1] [i_0] [i_0])));
                arr_36 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_8] [i_0 - 1])) && (((/* implicit */_Bool) arr_29 [i_0 + 1] [i_0 - 1]))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (signed char)-39))));
                var_29 = ((/* implicit */unsigned char) (signed char)-64);
            }
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1]))) * (arr_15 [i_0] [i_8] [i_0 + 1] [i_8])));
                var_31 = ((/* implicit */signed char) (-(arr_38 [i_0 - 1])));
            }
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_32 = ((/* implicit */short) arr_4 [i_0 - 1] [i_8] [(unsigned char)0]);
                arr_45 [i_12] [i_8] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_12] [i_8] [i_0] [i_0])) ? (arr_15 [i_8] [i_8] [i_12] [i_8]) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(signed char)17] [i_8] [i_8])) && (arr_24 [i_0] [i_8])))) : (((/* implicit */int) arr_10 [i_0] [i_12] [i_12] [i_12]))));
                arr_46 [i_0] [i_8] [(signed char)6] = ((/* implicit */_Bool) -1100517572);
                /* LoopSeq 1 */
                for (int i_13 = 1; i_13 < 21; i_13 += 3) 
                {
                    arr_51 [i_0] [i_8] [i_13] [i_13 + 1] [i_0] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (short)11735))));
                    var_33 = ((/* implicit */short) (_Bool)1);
                    var_34 = ((/* implicit */signed char) ((arr_24 [i_13 - 1] [i_0 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)244))));
                    var_35 = ((/* implicit */unsigned short) (signed char)-38);
                }
            }
        }
        for (int i_14 = 2; i_14 < 19; i_14 += 2) 
        {
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_14 - 1] [i_0 + 1])) && (((/* implicit */_Bool) var_6)))))));
            arr_56 [i_14] = ((((/* implicit */_Bool) arr_19 [i_14] [i_14 + 2] [i_14] [i_0 - 1] [i_14 + 2])) && (((/* implicit */_Bool) arr_8 [i_14 + 1] [(_Bool)1] [i_14 + 3] [i_0 - 1])));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                var_37 &= ((/* implicit */unsigned int) var_2);
                /* LoopNest 2 */
                for (signed char i_16 = 1; i_16 < 20; i_16 += 2) 
                {
                    for (unsigned int i_17 = 1; i_17 < 21; i_17 += 3) 
                    {
                        {
                            arr_63 [10LL] [i_16] [10LL] [i_16 - 1] [(unsigned short)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16033)) ? (((((/* implicit */_Bool) (unsigned short)49503)) ? (((/* implicit */int) (unsigned short)16032)) : (((/* implicit */int) (unsigned short)16033)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33093)))))));
                            arr_64 [i_14 + 2] [i_16] [i_16] [i_0 + 1] = ((/* implicit */signed char) (unsigned short)14336);
                            var_38 = ((/* implicit */int) arr_2 [i_0 - 1]);
                        }
                    } 
                } 
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (5657730028303860452LL) : (((/* implicit */long long int) arr_4 [i_0] [i_14 - 2] [i_15])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16033)))));
                arr_65 [i_14 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2056899271U)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_14] [i_14])) && (((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_15]))))) : (((/* implicit */int) (unsigned short)16032))));
                /* LoopSeq 2 */
                for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_18] [(signed char)10])) ? (((/* implicit */int) arr_10 [i_14] [i_14] [i_15] [i_0])) : ((-(((/* implicit */int) (short)-11705))))));
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_14 + 1] [i_0 + 1] [i_0] [i_14 + 1] [i_0])) | (-414104954)));
                    arr_69 [i_0] [i_18] [i_15] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) % (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((2147483625) & (((/* implicit */int) var_8)))))));
                }
                for (long long int i_19 = 1; i_19 < 18; i_19 += 4) 
                {
                    var_42 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0] [i_19] [i_19]))) : (arr_28 [i_14]))))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 2; i_20 < 21; i_20 += 3) 
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_53 [i_20 - 1] [i_19 + 1])) % (((arr_28 [i_20]) % (((/* implicit */unsigned long long int) arr_33 [13U])))))))));
                        arr_75 [i_0] [i_19] [4LL] [i_19] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_19 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_20] [i_19 + 1] [i_14]))) : (var_7)));
                        var_44 ^= ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)60)))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        arr_79 [i_0] [(short)15] [(short)15] [(_Bool)1] [i_19] [i_14 - 1] = ((/* implicit */unsigned short) var_14);
                        var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_0] [i_0] [i_0] [i_19] [i_21] [i_21] [i_21])) ? (arr_50 [8U] [i_14] [i_14] [i_0]) : (((/* implicit */unsigned long long int) arr_77 [i_0] [i_14]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_14 + 3] [i_21])) ? (var_4) : (arr_15 [i_0] [i_0] [i_15] [i_19])))) : (-6784039634498090489LL)));
                        arr_80 [i_21] [i_19] [i_19] [i_14 + 1] = ((/* implicit */unsigned int) ((((var_0) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_59 [i_0 + 1] [(signed char)16] [(short)0] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_57 [i_21]))) - (207LL)))));
                    }
                    var_46 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_15] [9U] [(unsigned char)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 1]))) : (var_14)))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_14]))) : (((((/* implicit */int) var_15)) & (((/* implicit */int) arr_42 [i_14]))))));
                }
            }
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_18 [i_0] [i_0] [(_Bool)1])))) ? ((+(var_11))) : (((/* implicit */int) (unsigned short)255))));
        }
        for (int i_22 = 2; i_22 < 21; i_22 += 3) 
        {
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_0] [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_0 - 1] [i_0])) & (((/* implicit */int) arr_74 [i_22] [12] [(short)19] [i_0 + 1] [12]))));
            var_49 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [0] [i_22])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-11679))));
        }
        for (int i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            arr_85 [(_Bool)1] [i_23] [16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49503)) && (((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 1]))));
            var_50 = ((/* implicit */long long int) 13ULL);
            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_32 [i_0] [i_23] [i_0])) << (((/* implicit */int) arr_6 [i_23] [i_23] [i_0])))) : ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)14]))))));
        }
        arr_86 [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    }
    var_52 = var_10;
    var_53 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_8)))) ? (var_6) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_10))))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (var_14)))))));
    var_54 = ((/* implicit */short) ((var_5) << ((((+(var_1))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
