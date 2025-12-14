/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74722
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
    var_19 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16584)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_6 [12] [12] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-68)) && (((/* implicit */_Bool) (short)-21835)))) ? (-2) : (((/* implicit */int) (short)6155))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)16554)) | (((/* implicit */int) arr_2 [i_0]))));
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-819767535480435384LL)));
            arr_13 [i_0] [7ULL] [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_0 [i_0]))));
            var_21 = ((/* implicit */int) (-(arr_9 [i_0])));
        }
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_30 [i_4] = ((/* implicit */signed char) ((((arr_15 [i_3 + 1]) + (9223372036854775807LL))) >> (((arr_15 [i_3 - 1]) + (5129333827058143213LL)))));
                            arr_31 [i_3] [i_3] [i_4] [i_6] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_15 [i_4 - 3])));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_8 = 2; i_8 < 17; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        {
                            arr_41 [3U] [i_4] [(signed char)11] [i_4] [(short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 14480046849064339662ULL))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_38 [2LL] [(_Bool)1] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-5162907754603944895LL)))));
                            arr_42 [i_3] [i_4] [i_8] [i_4] [17LL] = ((/* implicit */long long int) var_17);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_46 [i_3] [(signed char)15] = ((((/* implicit */int) var_14)) >> (((var_16) - (755369143))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */unsigned long long int) ((1232140882U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_3 + 2] [(short)13])))))) : (var_9))))));
        }
        arr_47 [i_3] [(signed char)16] = ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            var_24 -= ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)125)));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_56 [i_14] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3609404613533998995LL)) && ((_Bool)0)));
                arr_57 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_12] [i_12] [i_12] [i_12] [8] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-32168)))) : ((+(68719460352LL)))));
            }
            arr_58 [i_13] [i_12] [i_12] = ((/* implicit */unsigned long long int) (short)-23243);
            arr_59 [i_12] [7U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)178))));
        }
        for (signed char i_15 = 4; i_15 < 18; i_15 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) (short)17483);
                /* LoopSeq 4 */
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    arr_67 [i_12] [3ULL] [i_16] [i_15] = ((/* implicit */unsigned char) ((-5162907754603944896LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-16585)))));
                    arr_68 [i_15] = ((/* implicit */_Bool) (signed char)-69);
                }
                for (long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    arr_72 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_52 [(unsigned char)4] [(signed char)16])) | (((/* implicit */int) var_11)))) & (((/* implicit */int) var_17))));
                    var_26 = ((/* implicit */unsigned char) (+(14162408589411932241ULL)));
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_44 [i_15 - 3] [i_15 - 3]))));
                    arr_73 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (-68719460353LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16613)))));
                }
                for (short i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    arr_76 [i_15] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))) : (4611686018427379712LL))) : (((((/* implicit */_Bool) var_18)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                    arr_77 [(unsigned char)20] [i_15] [i_16] [i_19] = ((/* implicit */long long int) (unsigned char)213);
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 2; i_20 < 18; i_20 += 1) 
                    {
                        arr_81 [i_12] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_78 [(unsigned short)2] [i_20] [12U] [i_20 + 2] [i_15]))));
                        arr_82 [i_15] [i_15] [i_15] [i_15] [i_12] = ((/* implicit */unsigned int) (short)-21575);
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)1016)) | (((/* implicit */int) var_10))));
                        arr_83 [i_12] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)119))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) arr_51 [i_15 + 1] [i_15] [i_15])) : (((((/* implicit */_Bool) (unsigned char)43)) ? (7523710181968243981ULL) : (12093282680581453580ULL)))));
                        arr_86 [i_12] [i_12] [i_16] [2U] [i_21] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-127))));
                    }
                    /* LoopSeq 1 */
                    for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58509))) & (749214698U));
                        arr_89 [i_15] [i_15] [i_15] = ((/* implicit */long long int) (_Bool)1);
                        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) >> (((((/* implicit */int) (unsigned char)213)) - (199)))))) ? (((((/* implicit */_Bool) (unsigned short)49190)) ? (var_16) : (arr_36 [i_12] [(short)16] [i_12] [2ULL] [i_22] [i_16]))) : (((/* implicit */int) var_7))));
                    }
                    var_32 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)240)) | (-46912618))) % (arr_14 [i_15 - 1])));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_93 [(_Bool)1] [i_15] [i_16] [(_Bool)1] [i_16] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)58498))));
                    arr_94 [i_15] [(short)13] [10LL] [8ULL] [i_12] [i_15] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)7021))))));
                    var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)16417)) : (((/* implicit */int) var_13)))))));
                }
            }
            for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 1) /* same iter space */
            {
                arr_99 [i_24] [i_15] [i_15] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                arr_100 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)10181)) ^ (((/* implicit */int) (unsigned char)0))));
                arr_101 [i_12] [(_Bool)1] [i_15] [i_12] = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 1) /* same iter space */
            {
                arr_105 [i_15] = ((/* implicit */long long int) (((+(((/* implicit */int) var_12)))) >> (((/* implicit */int) ((var_1) > (((/* implicit */int) (unsigned short)58488)))))));
                arr_106 [i_12] [i_15] [i_12] [i_15] = ((/* implicit */signed char) (+(1967060072)));
                var_34 = (((_Bool)1) ? (((/* implicit */int) (unsigned short)32309)) : (((/* implicit */int) (unsigned short)65531)));
                arr_107 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) arr_18 [i_15 - 2] [(unsigned short)18] [i_15]);
            }
            for (unsigned short i_26 = 1; i_26 < 20; i_26 += 1) 
            {
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_110 [i_26 + 1] [i_26 + 1] [i_15] [i_26 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_6)));
                arr_111 [i_15] [i_15] = ((/* implicit */unsigned char) ((long long int) arr_23 [i_15] [(short)15] [i_15 + 1] [i_15]));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_27 = 1; i_27 < 19; i_27 += 4) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 2) 
                {
                    {
                        arr_118 [i_12] [i_15] [i_27] [i_28] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (4294967285U))))));
                        var_36 = ((/* implicit */short) (unsigned short)7038);
                    }
                } 
            } 
            var_37 = ((/* implicit */short) (~(((/* implicit */int) (short)26693))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) arr_116 [i_12] [i_15] [i_15 - 2] [i_15 - 2] [i_15] [i_15])) : ((-(9223372036854775807LL)))));
            arr_119 [i_12] [i_15] |= ((/* implicit */long long int) var_13);
        }
        for (signed char i_29 = 0; i_29 < 21; i_29 += 2) 
        {
            arr_123 [i_12] [i_29] [i_12] &= ((/* implicit */signed char) ((unsigned long long int) var_7));
            arr_124 [i_29] = ((/* implicit */int) ((((/* implicit */_Bool) arr_98 [i_12] [i_29] [i_12] [i_29])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_17)))) : (2928347100074154537ULL)));
            arr_125 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [0ULL] [0ULL] [i_12])))) > (((/* implicit */int) arr_74 [i_12] [i_12] [i_29]))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58509)) ? (arr_79 [i_29]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_109 [i_12] [(short)0] [i_29] [4U])) ? (arr_14 [i_12]) : (((/* implicit */int) arr_66 [i_12]))));
        }
        arr_126 [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_12] [i_12]))));
        arr_127 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_12] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)29))));
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_69 [i_12])) ^ (((/* implicit */int) arr_66 [i_12]))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_30 = 3; i_30 < 9; i_30 += 3) 
    {
        arr_130 [i_30] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_117 [i_30])) | (5343140412391224434ULL)))) ? (((((/* implicit */_Bool) (unsigned short)47000)) ? (var_9) : (((/* implicit */unsigned long long int) arr_117 [i_30])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_117 [i_30])) ? (-7420264219141969934LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))))))));
        arr_131 [i_30] [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((371145212899836424LL), (((/* implicit */long long int) var_0))))) || (((((/* implicit */_Bool) arr_85 [i_30] [i_30])) || (var_8)))));
    }
}
