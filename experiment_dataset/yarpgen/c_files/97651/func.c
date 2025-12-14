/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97651
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0] [(unsigned short)0]);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0] [i_0]));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0])))));
        arr_3 [i_0] |= ((/* implicit */int) ((min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)184)), (arr_0 [i_0])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) arr_8 [i_1]);
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) ((_Bool) var_5)))));
            arr_11 [i_1] = ((/* implicit */long long int) 18446744073709551615ULL);
            arr_12 [i_1] [i_1] [i_2 - 3] = ((/* implicit */short) (+(-5046371416511484209LL)));
        }
        for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_12))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3 - 2] [i_3 + 2] [5U] [i_4 + 1])) && (((/* implicit */_Bool) arr_17 [i_3 - 3] [i_3 + 1] [i_3] [i_4 + 1]))));
            }
            for (int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_5] [i_3] [i_5] [(short)17] = ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)142)))) == (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (unsigned short)14355)) : (((/* implicit */int) (unsigned char)184))))));
                    arr_25 [i_1] [i_1] [(unsigned short)2] [i_5] [i_1] = ((/* implicit */unsigned char) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16168)))));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_1] [i_3] [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 1] [i_5])) | (((/* implicit */int) arr_23 [i_3 - 3] [5] [i_3]))));
                    var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [i_1] [i_3])) : (((/* implicit */int) (unsigned char)71)))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_9))));
                    var_20 |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1]))) & (var_12))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15U))))))));
                }
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((_Bool) -1618714668));
                    arr_33 [i_1] [i_3] [i_5] [i_5] [i_1] = ((long long int) arr_23 [i_1] [i_3 + 2] [i_5]);
                    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) 15U)) ? (arr_17 [i_3 - 2] [i_3 - 3] [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_23 *= ((/* implicit */short) (+(((((((/* implicit */int) arr_8 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_1)) + (18608)))))));
                }
                /* LoopSeq 4 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    var_24 *= ((/* implicit */_Bool) ((arr_4 [i_3 - 3]) - (var_3)));
                    var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (16442212666630352521ULL))))));
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_26 *= ((/* implicit */unsigned char) (-(arr_28 [i_10] [i_3] [i_10])));
                    arr_39 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(1618714665)))) >= (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) var_5))))));
                    arr_40 [i_1] [i_3 - 3] [i_1] [i_10] [i_1] [i_1] = (-((+(-1618714668))));
                    var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) | ((~(var_9)))));
                    /* LoopSeq 4 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        arr_45 [i_10] [i_3] [i_3] [i_10] [i_11] [i_1] [i_3 - 3] = ((/* implicit */short) (+(arr_31 [i_3 - 3] [i_3 + 2] [4] [i_3 - 3] [i_3 - 3])));
                        arr_46 [i_1] [i_1] [i_11] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [(_Bool)1] [i_3 + 1] [i_5]))));
                    }
                    for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_28 *= ((/* implicit */unsigned int) ((long long int) var_12));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(arr_36 [i_3 - 2] [i_10] [i_10] [i_12] [i_12] [i_3 - 2]))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                    {
                        var_30 *= ((/* implicit */short) (-(arr_50 [i_3 - 1] [i_3] [i_3 - 1] [i_10] [i_13])));
                        arr_51 [i_5] [i_3] [i_1] [5ULL] [i_13] = ((/* implicit */unsigned int) arr_36 [i_1] [i_1] [i_3 - 1] [i_10] [(unsigned char)4] [i_13]);
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        arr_55 [i_1] [i_3] [i_5] = ((/* implicit */long long int) ((unsigned short) arr_53 [i_1] [i_3] [i_1] [10LL] [i_1] [i_3 - 1] [i_3 - 2]));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_5 [i_1])))))))));
                    }
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_1])))) ? (((/* implicit */int) arr_30 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_15])) : ((+(1618714672)))));
                    arr_60 [i_1] [i_1] [i_3] [i_5] [i_5] [i_15] = ((/* implicit */long long int) arr_56 [i_1] [i_3 - 3] [i_5]);
                }
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        var_33 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (~(arr_14 [i_16])))) : (arr_62 [i_1] [i_3] [i_3 - 3] [i_3] [i_17]));
                        arr_67 [i_1] [i_3] [15U] [i_16] [i_3] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 16442212666630352521ULL)) ? (((/* implicit */int) (unsigned char)224)) : (var_7)))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */long long int) ((_Bool) var_12));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (arr_36 [i_5] [i_1] [i_5] [17] [16ULL] [i_1]) : (((/* implicit */int) (short)-3805))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (((((/* implicit */_Bool) 1161220091)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-69)))))));
                    }
                    for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2U) >> (((((/* implicit */int) var_13)) - (23195))))))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) arr_73 [i_1] [i_3 - 2] [i_3] [i_5] [i_16] [i_19] [i_19])) ? (14614913183529213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_1] [i_1] [i_1]))))))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(arr_57 [i_1] [i_5] [(short)4] [i_16] [i_3 - 3]))))));
                    }
                    var_39 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) var_5)) * (var_4)))));
                    var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1053750129)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)181))));
                    arr_74 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_69 [i_1] [i_1] [i_1] [i_1])) < (((((/* implicit */_Bool) arr_38 [i_1] [i_5] [i_5] [i_16] [i_5])) ? (arr_59 [i_16]) : (((/* implicit */int) arr_66 [i_1] [i_1] [i_5] [i_16] [i_5]))))));
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_77 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
                {
                    var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                    var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_3 - 1]))));
                }
                arr_80 [i_1] [i_3 - 1] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_30 [i_1] [i_3 + 2] [i_20] [i_1]))))));
                var_43 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_20] [(unsigned char)1] [(unsigned char)1] [(unsigned short)8] [i_1]))) == (arr_62 [i_1] [i_1] [i_3 - 3] [i_3] [i_1]))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_1] [12] [i_1])))))));
                var_44 = ((/* implicit */long long int) arr_48 [i_1] [i_1] [i_20] [i_3] [i_3 + 1] [i_1]);
            }
            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((((unsigned long long int) var_2)) - (((/* implicit */unsigned long long int) ((var_7) ^ (arr_61 [i_3 + 1] [i_3] [i_1] [17ULL] [i_1]))))))));
            var_46 *= ((/* implicit */unsigned long long int) arr_16 [i_3 + 2] [i_3] [i_3 + 1]);
        }
        arr_81 [16U] [3ULL] = ((/* implicit */short) (~(var_10)));
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            for (unsigned char i_23 = 2; i_23 < 15; i_23 += 4) 
            {
                {
                    var_47 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)225))))));
                    arr_88 [i_23] [i_22] [i_22] [i_1] = ((/* implicit */short) (+(var_7)));
                    var_48 = ((((/* implicit */_Bool) arr_14 [i_23 + 1])) ? (((/* implicit */int) (short)-22049)) : (((/* implicit */int) (short)-3805)));
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [i_1] [i_1] [i_1] [(signed char)16] [i_1] [(signed char)16] [i_1])) ? (arr_53 [i_1] [i_1] [i_1] [11LL] [i_1] [i_1] [i_1]) : (arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_50 = ((/* implicit */int) min((var_50), ((~(((/* implicit */int) arr_58 [i_1] [i_1] [i_1]))))));
    }
    for (int i_24 = 0; i_24 < 10; i_24 += 2) 
    {
        var_51 *= ((((/* implicit */unsigned long long int) (~(arr_14 [i_24])))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (arr_34 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))) ? (((/* implicit */unsigned long long int) -960720220)) : (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_24]))) : (2004531407079199095ULL))))));
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 4) 
        {
            for (unsigned int i_26 = 4; i_26 < 6; i_26 += 3) 
            {
                {
                    var_52 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_42 [9U] [12U] [i_25] [i_26] [i_25])), (arr_36 [i_24] [i_25] [i_24] [i_24] [i_26] [i_26])))), (max((var_2), (((/* implicit */unsigned int) arr_26 [i_24] [i_24]))))))) ? (((max((((/* implicit */unsigned int) arr_13 [(unsigned char)7])), (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (arr_72 [i_24] [i_24] [i_26] [i_24] [i_26])));
                    arr_98 [i_24] [i_24] [i_24] [i_26] = ((/* implicit */short) max((((/* implicit */int) arr_58 [i_24] [i_25] [i_24])), ((+(((/* implicit */int) arr_8 [i_24]))))));
                }
            } 
        } 
        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) max((((/* implicit */long long int) (((~(((/* implicit */int) (short)3812)))) >= (((/* implicit */int) max((arr_7 [i_24]), (((/* implicit */unsigned char) var_0)))))))), (((((/* implicit */_Bool) ((unsigned int) 16442212666630352521ULL))) ? ((-(var_9))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) 2147483647)), (arr_91 [i_24] [i_24])))))))))));
        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_10))), (((/* implicit */long long int) (!(arr_48 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_49 [i_24] [i_24] [i_24] [i_24])) - (((/* implicit */int) var_1)))) % (((((/* implicit */_Bool) arr_4 [i_24])) ? (((/* implicit */int) arr_69 [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) var_6))))))) : (min((((((/* implicit */_Bool) (short)-3805)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_7)) <= (arr_89 [i_24]))))))));
        var_55 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((var_12) <= (((/* implicit */unsigned long long int) var_5))))), (arr_95 [i_24] [i_24] [8U] [i_24])))) && (((/* implicit */_Bool) var_2))));
    }
    /* LoopSeq 2 */
    for (signed char i_27 = 0; i_27 < 15; i_27 += 4) 
    {
        arr_101 [i_27] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_84 [i_27] [i_27] [i_27])) << (((/* implicit */int) (_Bool)1))))), (max((-9223372036854775799LL), (((/* implicit */long long int) 31)))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_54 [i_27] [i_27] [i_27] [(short)9])))))));
        var_56 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((int) arr_16 [i_27] [i_27] [i_27]))) / ((+(10546056697394008412ULL))))));
        arr_102 [i_27] = (-(((long long int) max((arr_47 [i_27] [14ULL] [i_27] [i_27] [i_27] [i_27]), (((/* implicit */unsigned short) (unsigned char)66))))));
    }
    for (long long int i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            for (long long int i_30 = 1; i_30 < 11; i_30 += 2) 
            {
                {
                    var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                    arr_114 [i_28] [i_29] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_53 [i_30 + 1] [i_30 + 1] [i_30] [i_30 + 1] [i_30 + 1] [5] [5])))) ? (min((((/* implicit */int) arr_23 [i_30 + 1] [i_30 - 1] [i_30 - 1])), (-463124860))) : (((/* implicit */int) ((short) arr_23 [i_30 + 1] [i_30 + 1] [i_30 - 1])))));
                    var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (unsigned char)10)), (arr_86 [i_30 - 1] [i_30 - 1] [(unsigned char)14])))))));
                }
            } 
        } 
        arr_115 [(_Bool)1] = ((/* implicit */short) (+((-(((/* implicit */int) arr_47 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))))));
    }
}
