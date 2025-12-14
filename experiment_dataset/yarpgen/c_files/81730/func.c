/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81730
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] &= min((4494803534348288LL), (((/* implicit */long long int) 3426513016U)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((-4551339921463596160LL) + (9223372036854775807LL))) >> (((arr_0 [i_2] [i_1 - 3]) - (7848750421063436793LL)))));
                    var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (-4551339921463596179LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3])))));
                    var_14 = ((/* implicit */_Bool) (unsigned short)20934);
                }
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4] [i_1 + 1] [i_1 - 1])) != (((/* implicit */int) arr_5 [i_4] [i_1 - 2] [i_1 - 2]))));
                    var_15 = (+(((/* implicit */int) (unsigned short)44602)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) var_6);
                        var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        arr_18 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(18014398509481983LL)))) || (((var_4) != (var_9)))));
                        arr_19 [i_0] [i_1] [13ULL] [i_0] = (~(3623341575U));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (16262440686387833067ULL))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        arr_22 [(unsigned short)2] [i_1] [(unsigned short)2] [12ULL] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((var_5) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)25)))))));
                        arr_23 [i_0] [i_0] [i_2] [i_4] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-68)) && (((/* implicit */_Bool) 4004793699U))));
                    }
                }
                var_19 = (-(((((/* implicit */_Bool) 3ULL)) ? (arr_7 [i_1] [i_1] [i_0]) : (((/* implicit */int) (short)2411)))));
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((((-903343250) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)68)) != (((/* implicit */int) (signed char)-61)))))))));
                    }
                    arr_28 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)26346)) ? ((+(7989305505432670700ULL))) : (15249551881688255179ULL)));
                    arr_29 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) arr_21 [4U] [14U] [i_1] [(unsigned char)13] [i_7])) : (var_9)));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3627388216U)) - (15249551881688255184ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (4251979653U)));
                }
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 15249551881688255179ULL))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (-2031028313707881296LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25359)))));
                    arr_33 [i_1] = ((/* implicit */short) (unsigned short)24980);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)68)) > (arr_26 [9ULL] [i_9 + 1] [i_1] [i_2] [i_1] [i_0] [13ULL])));
                }
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10] [i_10]))) >= (7248315270004256585ULL)));
                        arr_40 [i_1] [16U] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_1 - 2]) : (-1LL)));
                        var_25 *= ((/* implicit */unsigned char) (~(4551339921463596155LL)));
                        arr_41 [i_10] [i_10] [i_10] [i_10] [12U] [i_1] [(short)9] = ((((/* implicit */_Bool) 6U)) ? (131071ULL) : (((/* implicit */unsigned long long int) -1699779399)));
                    }
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)96))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)0)))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) >= (((((/* implicit */_Bool) 1699779414)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2])))))));
                    arr_45 [i_2] [(short)0] [i_0] [i_2] &= ((int) -6809166351544690787LL);
                }
            }
            for (unsigned char i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                arr_48 [i_1 - 3] [i_1 - 3] [i_1] = ((/* implicit */short) max(((~(((long long int) 2U)))), (max((var_9), (((/* implicit */long long int) var_2))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    for (short i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) arr_0 [i_1] [i_14]);
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)82))))) ? (min((9977687061845052668ULL), (((/* implicit */unsigned long long int) (signed char)89)))) : (((unsigned long long int) 667579080U)))))));
                            arr_57 [i_1] [i_1] [i_1] [6ULL] [i_15 + 1] = (((-(6809166351544690772LL))) - (((/* implicit */long long int) (-(((((/* implicit */int) var_7)) - (((/* implicit */int) (short)1016))))))));
                            var_30 |= ((((/* implicit */_Bool) (short)25379)) ? (4125287698U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))));
                        }
                    } 
                } 
                arr_58 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((unsigned int) 581000962)))) ^ (((/* implicit */int) (short)1000))));
                var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_13] [i_1] [i_0] [i_13])) + (((/* implicit */int) arr_55 [i_0]))))), (var_3)))));
            }
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_62 [i_0] [i_0] [i_1 + 1] [i_1 - 2] [i_17])) | (((/* implicit */int) (short)25359)))) : ((~(((/* implicit */int) (signed char)-39)))))))));
                        arr_64 [i_17] [i_1] [i_16] [i_1 - 1] [i_1] [10ULL] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_1])) ? (((/* implicit */long long int) 11U)) : (var_9))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_16] [i_1 - 3] [i_16] [i_17]))) & (3780438693758961395LL)))))), (var_4)));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (short)-32751))));
                        arr_65 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) max((var_12), (var_12)))) < (308798523)))), (((((/* implicit */_Bool) 4125287684U)) ? (((((/* implicit */int) (short)11399)) / (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_36 [i_0] [i_1] [i_16] [i_16] [i_17] [i_17])) ^ (((/* implicit */int) (short)-11250))))))));
                        arr_66 [i_0] [i_1] [12U] [i_1 - 3] [i_0] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1037))) / (-6658340992839293785LL)))) ? (((arr_16 [(signed char)6] [11ULL] [i_0] [i_17] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (max((18446744073709420544ULL), (((/* implicit */unsigned long long int) (signed char)-12)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1864807004U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1)))))))));
                    }
                } 
            } 
            arr_67 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(max((4294967295U), (((/* implicit */unsigned int) (signed char)0))))));
            var_34 += ((((((/* implicit */_Bool) arr_50 [i_1 - 2] [i_1 - 1] [i_1 - 3])) || (((/* implicit */_Bool) (unsigned char)129)))) ? (((((/* implicit */_Bool) arr_50 [i_1 + 1] [i_1 - 1] [i_1 - 3])) ? (1041313132U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27421))));
        }
    }
    /* vectorizable */
    for (short i_18 = 4; i_18 < 20; i_18 += 3) 
    {
        var_35 *= ((short) arr_68 [16ULL] [i_18 + 2]);
        arr_70 [(unsigned char)12] = arr_69 [i_18 + 1];
    }
    for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_21 = 1; i_21 < 8; i_21 += 3) 
            {
                arr_79 [(signed char)2] [(signed char)2] &= (~((+(3884632500U))));
                var_36 = ((/* implicit */short) (+(arr_46 [i_21 - 1] [i_21 + 1] [i_21])));
            }
            var_37 = ((/* implicit */_Bool) max((var_37), (((((arr_37 [i_19] [6ULL] [i_19]) & (arr_37 [i_19] [2LL] [2ULL]))) != (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 14372172411602156035ULL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)57))))))))))));
        }
        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) /* same iter space */
        {
            var_38 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27421))) : (131071ULL)));
            arr_83 [i_19] [i_22] = ((/* implicit */_Bool) var_7);
        }
        arr_84 [i_19] = ((/* implicit */long long int) (~(((/* implicit */int) min(((_Bool)0), (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)12278)))))))));
    }
    var_39 &= ((/* implicit */short) ((((long long int) ((((/* implicit */int) (signed char)94)) >= (((/* implicit */int) (signed char)65))))) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
