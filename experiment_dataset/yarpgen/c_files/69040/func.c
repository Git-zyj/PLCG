/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69040
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), ((-(0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)4048)), (arr_0 [(signed char)1] [i_0])))) ? (((unsigned int) (signed char)-19)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)31)))))))) : (min((3069061905724477888ULL), (((/* implicit */unsigned long long int) (unsigned char)118))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)24))))))), (((unsigned long long int) (+(((/* implicit */int) arr_2 [(_Bool)1])))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_7 [9ULL] [i_0] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (1832777576U)))))));
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)52)), (arr_3 [i_0 - 1])))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (2853197752407809002ULL))))), (((/* implicit */unsigned long long int) (unsigned short)34788)))))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_5 [i_1] [i_1]))));
            arr_8 [(unsigned char)6] [(unsigned char)6] &= ((((/* implicit */_Bool) (+(((/* implicit */int) (short)3072))))) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_7)) : (arr_5 [(unsigned short)16] [i_1])))))));
        }
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned int) ((((/* implicit */_Bool) (unsigned short)30747)) ? (((/* implicit */int) (unsigned short)30747)) : (((/* implicit */int) (unsigned short)34788))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 3])) ? (((/* implicit */int) ((short) (unsigned char)226))) : (((/* implicit */int) ((short) var_10))))))));
            arr_15 [i_3] [i_2] = (((!(((/* implicit */_Bool) arr_10 [i_3 - 2])))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((((_Bool) arr_2 [i_2])) ? (arr_0 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_2] [i_2] [i_2]))))))));
        }
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) (+(9833622526878996391ULL)));
            /* LoopSeq 2 */
            for (short i_5 = 4; i_5 < 13; i_5 += 1) 
            {
                var_16 += ((/* implicit */unsigned short) (_Bool)1);
                arr_23 [i_5] [i_4] [i_5] [i_2] = ((/* implicit */unsigned long long int) var_8);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_27 [i_5] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30730)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34784))) : (arr_6 [i_2] [i_2]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) ((short) var_0));
                        arr_30 [i_5] [i_4] [i_5 + 2] [i_5] [i_7] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) arr_13 [i_4] [i_5 - 2] [(unsigned short)4])))));
                        arr_31 [i_2] [i_4] [i_5] [i_6] [i_7] [i_5] [i_2] = ((/* implicit */signed char) var_5);
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        arr_35 [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_9);
                        arr_36 [i_2] [i_4] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */long long int) arr_22 [i_2] [i_4] [i_5] [i_6]);
                        arr_37 [i_4] [i_5] [i_6] &= ((/* implicit */unsigned short) 8439052418693861964ULL);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34806)) ? ((-(((/* implicit */int) (unsigned short)30700)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 705001951180645039ULL))))))))));
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) var_9);
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775781LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* LoopSeq 4 */
                    for (short i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_32 [i_5] [(signed char)1] [i_10 + 2]);
                        var_22 += (short)-1;
                    }
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (unsigned char)28);
                        arr_45 [i_2] [i_4] [i_5 - 1] [i_5] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5 - 4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) var_10))))) : (4503599090499584ULL)));
                        arr_46 [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_41 [i_5] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30729)))))) : (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_44 [i_2] [i_4] [i_5 - 1] [i_6] [i_11] [i_11])))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                    {
                        arr_51 [i_2] [i_5] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((+(16887413442689009219ULL)))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 - 4] [i_5 - 4])) ? (arr_0 [i_5 - 4] [i_5 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_52 [i_2] [i_2] [i_12] [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-47)) ? (4919922632896235960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                        var_25 = ((/* implicit */signed char) arr_17 [i_2] [i_2]);
                    }
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        arr_57 [i_2] [i_4] [i_5] [i_5] [i_13] = ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14834))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))));
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)34836))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((/* implicit */int) (short)24188)))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2] [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_44 [(unsigned char)11] [i_4] [i_4] [i_4] [(short)7] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_13] [i_6]))) : (13359581200639137036ULL))) : (((((/* implicit */_Bool) (signed char)-66)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26539)))))));
                    }
                }
                var_29 ^= ((/* implicit */signed char) (+((-(max((((/* implicit */unsigned long long int) (short)-24174)), (arr_26 [i_5 + 1])))))));
                var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((short) (unsigned short)34800))), (((long long int) (short)24188))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4464)) ? (12ULL) : (((/* implicit */unsigned long long int) 536346624U))))) ? (((((/* implicit */_Bool) 13683581905595752099ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5 - 4] [i_2]))) : (arr_5 [i_2] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_2] [i_4]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)17532)))))));
            }
            for (unsigned long long int i_14 = 3; i_14 < 14; i_14 += 3) 
            {
                arr_60 [i_2] [i_14] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 536346624U)) ? (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_18 [i_2] [i_4] [i_14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (signed char)5))))))))));
                /* LoopSeq 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(283337838772125960ULL)))))) ? ((~(((((/* implicit */_Bool) 2147483647)) ? (9022012557504245130ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15]))))))));
                    arr_63 [i_14] [i_14] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 8414739808151206882ULL)))))));
                    var_32 += ((/* implicit */unsigned char) (_Bool)1);
                    var_33 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_14])) ? (arr_28 [i_2] [i_4] [i_14] [i_15] [i_14]) : (((/* implicit */int) arr_39 [(_Bool)1] [i_15] [(unsigned char)4] [i_15] [i_15]))))) ? (6514538474966103272LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (var_9))))))));
                    arr_64 [i_14] [i_4] = ((/* implicit */unsigned short) ((unsigned char) arr_59 [i_2] [(short)2] [i_14]));
                }
                for (signed char i_16 = 2; i_16 < 14; i_16 += 4) 
                {
                    var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))))), (18446744073709551587ULL)));
                    arr_68 [i_2] [i_2] [i_14] [(short)9] = ((/* implicit */short) (+((((_Bool)1) ? (arr_33 [i_14] [i_14 - 3]) : (arr_33 [i_14] [i_14 - 1])))));
                    arr_69 [i_2] [i_14] [i_14] [i_16] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_53 [i_2])) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_53 [i_16 + 1]))))));
                    arr_70 [i_14] [i_14 + 1] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [i_14 - 1]), (arr_19 [i_14 + 1])))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-20443)))) : (((((/* implicit */_Bool) arr_19 [i_14 - 1])) ? (((/* implicit */int) arr_19 [i_14 + 1])) : (((/* implicit */int) var_2))))));
                }
                for (signed char i_17 = 2; i_17 < 14; i_17 += 3) 
                {
                    arr_73 [i_17] [i_2] [i_2] [i_2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_2] [i_17]))));
                    arr_74 [i_14] [i_2] [i_4] [i_14] [i_17 - 2] = ((/* implicit */signed char) ((unsigned int) (signed char)-109));
                    var_35 = ((/* implicit */unsigned short) arr_11 [i_4]);
                }
                var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)19))))) ? (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)88)))) : (((/* implicit */int) (short)20442))));
                arr_75 [i_14] [i_4] = ((/* implicit */unsigned long long int) ((int) min((var_8), (((/* implicit */int) arr_67 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 - 2] [i_4] [i_4])))));
                arr_76 [i_14] [i_4] [i_4] = ((/* implicit */short) ((long long int) ((unsigned short) 18446744073709551615ULL)));
            }
        }
        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            var_37 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(unsigned short)14] [(unsigned short)14] [i_2] [i_18] [i_18])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 117440512U)) ? (arr_66 [i_2] [i_2] [i_2] [i_2] [i_2] [i_18]) : (((/* implicit */int) (signed char)-113))))) ? (((/* implicit */unsigned long long int) (-(-1678731136)))) : (((((/* implicit */_Bool) 14324915620546256463ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12927))) : (0ULL))))));
            var_38 += ((/* implicit */short) ((unsigned long long int) min((((/* implicit */long long int) arr_55 [i_2] [i_2] [i_2] [i_18] [i_18] [i_18] [i_18])), (min((arr_17 [i_2] [i_18]), (((/* implicit */long long int) (short)20447)))))));
        }
        var_39 += ((/* implicit */unsigned char) ((unsigned int) min(((-(13603611680622081974ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)119), ((unsigned char)248)))))));
        var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 10LL)) ? (arr_3 [i_2]) : (16664801U)))))));
        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)116))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)14)), (arr_42 [i_2] [i_2] [i_2] [(unsigned short)9] [i_2] [10LL] [i_2])))) : (((/* implicit */int) ((unsigned char) (signed char)-118))))))));
    }
    var_42 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? ((-(151741520))) : (((/* implicit */int) var_11)))));
}
