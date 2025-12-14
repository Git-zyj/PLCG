/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90078
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_7))))))));
    var_16 -= ((/* implicit */unsigned long long int) var_13);
    var_17 = var_4;
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_19 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (_Bool)0))))))) && (((/* implicit */_Bool) ((unsigned long long int) var_11)))));
                    var_20 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (unsigned char)255)))));
                    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -9223372036854775798LL)), (arr_1 [i_0])));
                    var_22 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (short)-28133)))) > (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) (signed char)110)))))) && (((((((/* implicit */unsigned int) ((/* implicit */int) (short)28132))) * (arr_2 [i_0] [i_0]))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1879)))))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23316)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)1)))))) : (((long long int) arr_9 [i_0] [i_1] [i_3]))))));
                    var_24 = ((/* implicit */unsigned long long int) (unsigned short)27578);
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3 + 1] [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_9 [i_3 + 3] [i_3] [i_3]))) : ((~(arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                }
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4503599593816064LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / ((+(613745198U))))))));
                    var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4] [i_4])) && (var_2))))))) ? ((-(((var_2) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_2)))))))));
                }
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_28 = min((((long long int) ((signed char) var_1))), (((long long int) max((((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_5] [i_1])), (var_1)))));
                    var_29 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_7)))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (18446744073709551615ULL)));
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)125)))) * (((/* implicit */int) arr_7 [i_6] [i_5] [i_1] [i_0])))))));
                        var_32 = ((/* implicit */unsigned short) (unsigned char)0);
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_33 = var_3;
                            var_34 -= ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_7])))));
                        }
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) (short)3);
                            var_36 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_11 [4ULL] [(unsigned short)7] [i_5] [i_5])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_5] [i_6] [i_8]))) < (18446744073709551615ULL))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 3; i_9 < 10; i_9 += 3) 
                        {
                            var_37 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned int) -1385666263)), (3114564585U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9 - 2] [i_9] [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)157)) != (((/* implicit */int) var_9)))))));
                            var_38 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)127)) : (var_4)))) : (arr_21 [i_0] [i_1] [i_5]))))));
                            var_39 = ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_9 - 2]);
                            var_40 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_11 [i_9 + 1] [i_9 + 1] [i_1] [i_1])), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) > (((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9])) ? (arr_15 [i_0] [i_0] [i_0]) : (arr_15 [i_0] [(unsigned short)9] [i_5])))));
                        }
                    }
                    var_41 ^= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), ((~(4ULL))))), (arr_15 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 4; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_42 = (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((2524552196824752631ULL) - (2524552196824752622ULL))));
                                var_43 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            {
                                var_45 = ((((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) (unsigned short)65524)) ? (arr_27 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_14] [i_13] [i_13] [i_13] [i_12] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_1])) * (((/* implicit */int) arr_39 [i_0]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))));
                                var_46 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((/* implicit */int) arr_33 [i_12] [i_14])))))))), (((((/* implicit */_Bool) -1022192577415448511LL)) ? (arr_19 [i_0] [i_0] [i_1] [i_0] [i_13] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1896)) ? (((/* implicit */int) (_Bool)1)) : (var_6))))))));
                                var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_22 [i_0] [i_1] [i_12] [i_0] [i_0] [i_12])))) ? (arr_20 [i_12] [(_Bool)1] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (short)32755)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_12] [i_1] [i_0]))))))))) : (((unsigned int) (unsigned short)21015))));
                                var_48 *= ((/* implicit */_Bool) var_9);
                                var_49 = (-(((/* implicit */int) var_13)));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)0)))))))) ? (((/* implicit */int) (unsigned char)255)) : (min((var_4), ((+(((/* implicit */int) (short)32744)))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    var_51 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_15])) ? (arr_20 [i_0] [i_0] [i_15]) : (((/* implicit */long long int) arr_41 [i_15] [i_0]))));
                    var_52 = ((/* implicit */unsigned char) arr_29 [i_0] [i_0] [i_15] [i_15]);
                    var_53 = ((/* implicit */signed char) arr_25 [i_0] [i_1] [i_15]);
                }
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_54 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)242)))) != ((+(arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 2; i_17 < 9; i_17 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned char)245))))) ? (arr_43 [i_0] [i_0] [i_16] [i_17]) : (max(((-(((/* implicit */int) (unsigned char)248)))), ((+(((/* implicit */int) (_Bool)1))))))));
                        var_56 -= ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_10))) < ((-(var_6))))))));
                        var_57 &= ((/* implicit */_Bool) (~(((unsigned long long int) 4238942223U))));
                        var_58 *= ((/* implicit */short) ((unsigned short) (short)9));
                        var_59 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (-923416507)))))) ? (((/* implicit */int) arr_49 [i_0] [i_17] [i_17])) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)19), (((/* implicit */short) (unsigned char)24))))))))));
                    }
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_60 = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)234)))), (((/* implicit */unsigned long long int) min((-4008274050278408329LL), (((/* implicit */long long int) 4294967295U))))))))));
                        var_61 = ((/* implicit */unsigned char) arr_42 [i_0] [i_1]);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    var_62 = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_19]));
                    var_63 -= min((((arr_16 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), ((-(arr_16 [i_0] [i_0]))));
                    var_64 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_47 [i_0] [i_1] [i_0] [i_0])))));
                    var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [9ULL] [7LL] [7LL] [i_19]))) == ((~(arr_20 [i_1] [i_1] [i_1])))))));
                }
                for (unsigned short i_20 = 1; i_20 < 8; i_20 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_21 = 1; i_21 < 9; i_21 += 3) 
                    {
                        var_66 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_21] [i_21 - 1] [i_21] [i_20 + 3] [i_20 + 3])) >> (((((((/* implicit */_Bool) (short)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_12 [i_0] [i_1] [i_20] [i_21]))) - (8245U)))));
                        var_67 = ((/* implicit */signed char) arr_55 [i_0] [i_1] [i_1]);
                        var_68 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
                    }
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        var_69 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        var_70 = ((/* implicit */unsigned long long int) (signed char)-103);
                        var_71 = arr_5 [i_0] [i_1];
                        var_72 = ((/* implicit */unsigned short) min((var_72), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_8 [i_20 + 3] [i_1] [i_20] [(unsigned short)2])))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-84))))) : (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_2)))))))))));
                    }
                    for (int i_23 = 1; i_23 < 8; i_23 += 2) 
                    {
                        var_73 = ((/* implicit */long long int) arr_28 [i_23 + 1] [i_20] [i_0] [i_0] [i_0] [i_0]);
                        var_74 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_12))), (18446744073709551598ULL))))));
                        var_75 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_33 [i_0] [i_20 - 1])))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                    }
                    var_76 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_61 [i_20] [i_20 + 3] [i_20 - 1] [2] [i_20]))))), (((((/* implicit */_Bool) arr_20 [i_20 + 2] [i_1] [i_20 + 2])) ? (((/* implicit */long long int) arr_61 [i_0] [i_20 + 3] [i_20 + 3] [i_20 + 3] [i_20 + 3])) : (arr_20 [i_20 + 1] [i_1] [i_20])))));
                }
                var_77 = ((/* implicit */signed char) max((var_77), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) > (arr_37 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
}
