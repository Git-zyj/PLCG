/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70359
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 948332860)) && (((/* implicit */_Bool) -948332853))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((/* implicit */int) var_8)) < (-948332843))) ? (var_6) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((608411205770586767LL) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1])))));
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((var_3) - (((/* implicit */long long int) 948332859)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7470145618564699060LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6))))));
            arr_7 [i_1] = var_0;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_8 [i_0 + 1]))));
            var_15 = ((/* implicit */long long int) (~(arr_1 [i_2] [i_0 + 1])));
        }
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_0))) % (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))))) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036850581504LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3]))) : (var_3)))) ? (min((arr_11 [i_3] [i_3]), (((/* implicit */int) arr_12 [i_3] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_9)))))))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65286))) >= (-9132884936410725937LL)));
                arr_18 [i_5] [i_3] [i_3] = ((/* implicit */_Bool) (-((+(((arr_16 [i_4]) * (arr_16 [i_3])))))));
                arr_19 [i_3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3])) >= (((/* implicit */int) var_8))))), (arr_16 [i_4 - 1]))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((706878657U) > (3588088620U)))))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    var_18 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 8719841893919094977LL)) >= (16375717016533061412ULL))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_6 + 4])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
                }
            }
            var_20 = (+(arr_20 [i_3] [i_3] [i_3] [i_4]));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_7])) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_3])))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 18446744073709551615ULL))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_23 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_20 [i_3] [i_8] [i_3] [i_3])) ? (-12008669401726391LL) : (((/* implicit */long long int) arr_13 [i_3]))))));
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_29 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9] [i_3])) ? (arr_11 [i_3] [i_9]) : (arr_11 [i_3] [i_9])))) ? (((/* implicit */int) arr_14 [i_3])) : (((((/* implicit */int) var_5)) ^ ((+(((/* implicit */int) (unsigned short)65535))))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_1)) % (((/* implicit */int) arr_23 [i_3]))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)35))))) ? (max((((/* implicit */unsigned int) var_8)), (arr_13 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27)))))))))));
            var_26 = ((((((/* implicit */unsigned long long int) -7774779300893145129LL)) & (arr_16 [i_3]))) >= (((/* implicit */unsigned long long int) (-(5911177369656626712LL)))));
        }
    }
    /* LoopSeq 4 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_32 [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)12))));
        var_27 *= ((/* implicit */unsigned int) (_Bool)1);
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-4298))) + (arr_30 [i_10]))) >= (((max((-3548337113579393215LL), (arr_30 [3ULL]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10]))))))))))));
        var_29 = ((/* implicit */unsigned char) (((((+(-9223372036854775797LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) == (arr_30 [i_10]))))))) < (((arr_30 [i_10]) >> (((var_6) - (4028362768U)))))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        arr_35 [i_11] = ((((/* implicit */_Bool) 948332835)) ? (arr_28 [i_11] [i_11]) : (arr_28 [i_11] [i_11]));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            arr_38 [i_11] [i_11] = ((((/* implicit */_Bool) arr_15 [i_11] [i_12] [i_12])) ? (arr_15 [i_11] [i_11] [i_12]) : (arr_33 [i_11] [i_12]));
            var_30 = ((/* implicit */unsigned char) (~(var_6)));
        }
        for (long long int i_13 = 1; i_13 < 17; i_13 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)8184))) >= (9223372036854775807LL)));
            /* LoopSeq 4 */
            for (signed char i_14 = 1; i_14 < 16; i_14 += 4) 
            {
                arr_44 [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_13 + 1])) ? (((/* implicit */long long int) -1241096924)) : (arr_15 [i_13 - 1] [i_13 - 1] [i_13 - 1])));
                var_32 = ((/* implicit */_Bool) arr_28 [i_13 - 1] [i_13 + 1]);
                /* LoopSeq 4 */
                for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    var_33 = ((/* implicit */long long int) (~(arr_34 [i_14 + 1] [i_13 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 2; i_16 < 16; i_16 += 3) 
                    {
                        var_34 = ((/* implicit */int) (+(arr_30 [i_13 - 1])));
                        var_35 = ((/* implicit */unsigned int) var_4);
                    }
                    arr_49 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_13 + 1])) & (((/* implicit */int) arr_25 [i_13 + 1]))));
                }
                for (signed char i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    var_36 = ((((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_14] [i_14 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51491))) : (arr_21 [(unsigned char)5] [(unsigned char)5] [i_14] [i_14 + 2] [i_14 - 1]));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13 + 1] [i_13 + 1] [i_17]))) > (arr_21 [i_13 - 1] [i_14 - 1] [i_13 - 1] [i_14] [(unsigned char)17])));
                }
                for (short i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 4; i_19 < 16; i_19 += 3) 
                    {
                        arr_57 [i_19 + 2] = ((/* implicit */int) (((+(-5661601557632770112LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17020)))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_56 [i_14 - 1] [i_14 - 1] [i_14] [i_18] [i_19 - 4] [i_19 - 1] [i_18])) - (((/* implicit */int) ((((/* implicit */int) var_5)) < (arr_11 [i_11] [i_18]))))));
                        arr_58 [i_11] [i_11] [i_14] [i_11] &= ((/* implicit */signed char) ((arr_13 [i_11]) >> (((((/* implicit */int) var_1)) - (15115)))));
                        arr_59 [i_11] [i_13] [i_11] [i_18] [i_19 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((85490461U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_11] [i_11]))) - (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_11] [i_11])) || (((/* implicit */_Bool) arr_16 [i_18]))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_20 = 1; i_20 < 14; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_20 + 1] [i_13 - 1])) ? (arr_27 [i_20 + 3] [i_13 + 1]) : (arr_27 [i_20 + 2] [i_13 + 1]))))));
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)108)) ? (5264173763143188705LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))));
                    }
                    for (int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(var_6)))) / ((-(9223372036854775807LL)))));
                        var_42 = ((/* implicit */unsigned int) ((arr_33 [i_13 - 1] [i_14 + 1]) / (arr_33 [i_13 - 1] [i_14 + 1])));
                        arr_66 [i_11] [i_11] [i_11] = arr_63 [i_11] [i_11] [i_14 - 1] [i_14] [i_21] [i_13 - 1] [i_14 - 1];
                    }
                    for (signed char i_22 = 1; i_22 < 15; i_22 += 3) 
                    {
                        arr_69 [i_22] [i_13 + 1] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_13 - 1] [i_14])) * (((/* implicit */int) arr_17 [i_18] [i_22]))));
                        arr_70 [i_11] [0LL] [i_14] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_13])) > (((/* implicit */int) arr_55 [i_11] [i_13] [i_14] [(unsigned short)8] [i_22 + 3]))));
                        arr_71 [i_11] [i_11] [i_11] [i_11] [i_22] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-5066250830913575135LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (arr_51 [i_13 + 1] [i_22] [i_22 + 3] [i_22 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)2777)))))));
                    }
                    arr_72 [i_11] [i_13] [i_14 - 1] [i_18] &= ((/* implicit */unsigned int) ((arr_20 [i_13 - 1] [i_13 + 1] [i_14 + 2] [i_14 + 1]) | (((/* implicit */unsigned long long int) arr_28 [i_13 - 1] [i_13 + 1]))));
                }
                for (unsigned int i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    var_43 = ((/* implicit */short) ((arr_65 [i_13 - 1] [i_14 - 1] [i_13 - 1] [i_13 - 1] [i_13]) << (((((((/* implicit */int) arr_41 [i_13 - 1] [i_13 - 1] [i_14 + 1])) + (134))) - (25)))));
                    arr_76 [i_11] [i_13] [i_14] [(signed char)7] = var_0;
                    var_44 = ((/* implicit */_Bool) var_8);
                    arr_77 [i_11] [i_11] [i_13] [17ULL] [i_23] = ((arr_68 [i_13 - 1] [i_13 - 1] [i_14 + 1] [i_23] [i_23]) != (arr_68 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_23] [i_23]));
                }
                var_45 = ((/* implicit */unsigned short) ((3665810567U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65174)))));
                var_46 *= (!(((/* implicit */_Bool) arr_40 [i_14] [i_13] [i_11])));
            }
            for (short i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                var_47 = ((/* implicit */unsigned char) var_2);
                arr_80 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) > (arr_68 [i_11] [i_13 - 1] [i_24] [i_13 - 1] [i_13])));
            }
            for (unsigned int i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)17))));
                var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_25] [i_11] [i_11])) || (((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_11] [i_13 + 1]))));
                var_50 = ((/* implicit */unsigned short) arr_20 [9LL] [i_13 + 1] [i_13 + 1] [i_13 + 1]);
            }
            for (long long int i_26 = 1; i_26 < 17; i_26 += 3) 
            {
                var_51 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_11] [i_13])) + (2147483647))) << (((((/* implicit */int) var_4)) - (5495)))))) ? (((((/* implicit */_Bool) 3523436976U)) ? (arr_42 [i_13] [i_13] [i_13] [i_26 - 1]) : (17LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)68))) <= (arr_78 [i_11] [i_13] [i_13])))))));
                var_52 = ((/* implicit */signed char) (+(16473429056754022818ULL)));
            }
        }
        arr_86 [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [i_11] [i_11]))) - (arr_85 [i_11] [i_11] [i_11])));
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 18; i_27 += 4) 
        {
            for (long long int i_28 = 0; i_28 < 18; i_28 += 3) 
            {
                {
                    arr_91 [i_11] [i_27] [i_28] [i_27] = ((/* implicit */long long int) arr_34 [i_11] [i_27]);
                    var_53 *= ((/* implicit */long long int) arr_54 [i_11] [i_27] [i_28]);
                    var_54 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_63 [i_28] [i_28] [i_27] [i_27] [i_27] [i_11] [i_11])) + (2147483647))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5632))) : (var_6))) - (5632U)))));
                    /* LoopSeq 1 */
                    for (int i_29 = 1; i_29 < 14; i_29 += 1) 
                    {
                        var_55 += var_1;
                        arr_95 [i_11] [i_11] [i_29] = ((/* implicit */unsigned short) (signed char)-54);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_30 = 4; i_30 < 17; i_30 += 4) 
    {
        var_56 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65515)) / (((/* implicit */int) arr_47 [i_30] [1LL] [i_30] [i_30 - 4] [i_30]))));
        arr_99 [i_30] = ((/* implicit */unsigned int) arr_89 [i_30] [i_30] [i_30] [i_30]);
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 12; i_31 += 3) 
    {
        var_57 = ((/* implicit */unsigned char) (signed char)-47);
        var_58 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14043))))) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) + (var_0))))));
        arr_103 [i_31] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-111))));
        var_59 = ((/* implicit */unsigned int) arr_40 [i_31] [i_31] [i_31]);
        arr_104 [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_31])) ? (((/* implicit */int) arr_96 [i_31])) : (((/* implicit */int) arr_26 [i_31]))));
    }
}
