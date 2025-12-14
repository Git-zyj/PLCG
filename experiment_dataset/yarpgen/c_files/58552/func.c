/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58552
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
    var_12 = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_0))))), (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    var_13 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [0LL] [(_Bool)1] [i_0] [0LL]))));
                    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_3 - 1] [i_2]))));
                    var_15 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [4LL] [i_3] [4ULL] [4ULL] [i_3 - 1] [(unsigned short)2]));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (unsigned short)8))));
                    arr_10 [i_0] [(unsigned char)11] [(signed char)0] [i_3] [i_0] = ((/* implicit */signed char) (-(((arr_3 [i_0] [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_0] [(signed char)20] [i_2] [17U] [17U] = (+(((/* implicit */int) (unsigned short)45284)));
                    var_17 = ((unsigned char) (signed char)-52);
                    arr_15 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((int) arr_4 [i_0] [i_1] [18] [i_4])));
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                    arr_17 [i_0] [(unsigned short)18] [(unsigned short)18] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [(signed char)3] [i_2] [i_4]);
                }
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((signed char) (-2147483647 - 1))))));
                arr_18 [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]);
                arr_19 [i_0] = 2147483647;
            }
            var_19 *= ((/* implicit */signed char) (+(-1950426913)));
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) -2147483625);
                        arr_28 [i_0] [i_6] [17LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [7] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_5] [i_5] [i_5]))) : (arr_12 [i_5] [i_5] [i_5]))))));
                        var_21 ^= ((/* implicit */short) 2147483647);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)17787))));
        }
        for (int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_26 [(unsigned short)0] [(unsigned short)0] [i_8] [i_0]))));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((long long int) ((signed char) (signed char)127)));
                var_25 = ((/* implicit */int) ((unsigned short) (unsigned short)50939));
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3935517058U))));
            }
            for (unsigned int i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (short)12847))));
                    var_28 = ((/* implicit */int) arr_33 [i_11] [i_8] [i_8] [i_0]);
                    arr_37 [i_0] [10LL] [i_8 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 - 1] [i_10] [16LL]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) + (var_2)))));
                }
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    var_29 = ((/* implicit */short) ((long long int) ((int) (signed char)109)));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_45 [i_0] [i_8] [i_10] [i_10 - 1] [i_8] [i_13] = ((/* implicit */int) (unsigned char)224);
                        var_30 |= ((/* implicit */unsigned int) ((long long int) (unsigned char)132));
                    }
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)10299)) : (((/* implicit */int) (signed char)-63))))) ? (((/* implicit */long long int) arr_24 [i_12] [i_10] [(_Bool)1] [i_0])) : (9223372036854775804LL)));
                }
                for (signed char i_14 = 1; i_14 < 21; i_14 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 70368744177663ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                    var_33 -= ((/* implicit */unsigned char) (-(arr_24 [i_10] [17LL] [i_10 + 3] [i_14 + 1])));
                    arr_50 [i_0] [i_0] [i_10] = ((/* implicit */signed char) 3935517058U);
                    var_34 -= ((/* implicit */unsigned char) ((unsigned long long int) (short)12847));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_53 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_10 + 2] [i_8 - 1] [i_8]);
                        var_35 = ((/* implicit */unsigned char) ((unsigned int) 4068567378815640195ULL));
                        var_36 = ((/* implicit */long long int) (signed char)0);
                        var_37 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) (-2147483647 - 1))) <= (1056964608U))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-71)) ? (4068567378815640195ULL) : (((/* implicit */unsigned long long int) var_2)))))));
                        var_38 = ((/* implicit */int) var_8);
                    }
                }
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    for (int i_17 = 1; i_17 < 21; i_17 += 3) 
                    {
                        {
                            arr_59 [i_17] [i_16] [i_0] [i_8] [i_0] [5LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_44 [i_0] [i_8 + 1] [i_10 + 3] [i_10 + 3] [i_17 - 1]) : (((/* implicit */long long int) 1839339259))));
                            var_39 -= ((/* implicit */_Bool) ((unsigned char) var_2));
                        }
                    } 
                } 
                arr_60 [i_0] = ((/* implicit */unsigned char) (short)-5383);
                /* LoopSeq 1 */
                for (int i_18 = 2; i_18 < 19; i_18 += 4) 
                {
                    var_40 = ((/* implicit */short) arr_30 [i_0]);
                    var_41 = ((/* implicit */signed char) arr_57 [i_0] [i_0] [8LL] [(signed char)5] [i_8 - 1] [i_8 - 1] [i_18]);
                    /* LoopSeq 3 */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        arr_66 [i_0] [i_0] [i_0] = ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) arr_24 [i_0] [i_8] [i_10] [(_Bool)1]))));
                        arr_67 [i_8] [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_19] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_47 [i_18] [i_18]))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((signed char) (signed char)-58)))));
                        arr_68 [i_8] [i_8] [i_0] [i_8] [i_8] [20] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (arr_32 [i_0] [i_0] [i_10])));
                        arr_69 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((1056964615U) << (((var_4) + (6132499682925992258LL)))));
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (-(((/* implicit */int) arr_61 [i_18 - 2] [i_8] [i_8 + 1] [i_18])))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_43 = (short)12847;
                        var_44 = ((/* implicit */unsigned long long int) ((36028797018963968LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        arr_75 [i_0] [i_8 - 1] [i_8 - 1] [i_10] [i_0] [(signed char)21] [i_21] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [(signed char)11] [i_18] [(signed char)15] [i_8]);
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        var_46 |= ((/* implicit */unsigned int) ((2147483640) / (((/* implicit */int) arr_63 [19U]))));
                        var_47 ^= (unsigned char)112;
                        var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (arr_76 [i_22] [i_18 + 3] [i_0] [i_8] [i_0]) : (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */int) arr_77 [i_10] [i_10] [i_10])) : (((((/* implicit */int) var_1)) ^ (-393253933))))))));
                    }
                    for (short i_23 = 4; i_23 < 18; i_23 += 3) 
                    {
                        arr_82 [i_0] [i_0] [i_23 - 4] = ((/* implicit */_Bool) 4100476872U);
                        arr_83 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_7 [i_0] [i_8] [i_10])))));
                        var_49 = var_7;
                        var_50 = ((/* implicit */short) arr_79 [6] [i_18 + 1] [i_0] [6] [i_0]);
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (!(arr_35 [i_10]))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        arr_87 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_64 [i_0] [i_0]) & (2147483624)))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50955))) - (arr_39 [i_0] [i_0] [i_0] [21ULL] [i_0] [i_0])))));
                        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_77 [i_24] [i_10 + 3] [i_18 + 3]))) ^ ((+(((/* implicit */int) arr_74 [4U] [11] [7] [i_18] [i_24])))))))));
                    }
                }
            }
            for (long long int i_25 = 4; i_25 < 21; i_25 += 2) 
            {
                arr_91 [i_0] [i_0] [i_0] [4U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (26995897) : (((/* implicit */int) (unsigned char)190))))) && (((/* implicit */_Bool) (unsigned short)51014)));
                arr_92 [i_8] [i_0] [i_8] = ((/* implicit */unsigned short) var_0);
                arr_93 [i_0] [i_0] [i_0] [i_25] = ((/* implicit */int) arr_29 [0ULL] [i_8 - 1] [i_8 - 1]);
            }
        }
        var_53 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
    }
}
