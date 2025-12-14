/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71511
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) : (289592573846812755LL)));
    var_12 |= ((/* implicit */int) var_4);
    var_13 = ((/* implicit */unsigned long long int) (short)-32744);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_15 [12ULL] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)32743))))), ((short)-32744)))) ? (((4294967288U) & (((/* implicit */unsigned int) ((((/* implicit */int) (short)32743)) ^ (((/* implicit */int) arr_11 [i_0] [i_1] [i_2]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [14U] [18U])))));
                            arr_16 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min(((short)-32767), (var_5))), (((/* implicit */short) arr_14 [i_2] [i_2] [i_2] [i_2 + 2] [(unsigned short)1] [i_2])))))));
                            var_14 = ((/* implicit */unsigned char) min((min(((unsigned short)7381), (((/* implicit */unsigned short) (unsigned char)253)))), (((/* implicit */unsigned short) (short)32749))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (+(arr_2 [i_1] [i_1] [i_3])))), (3238453483U)))), (var_7)));
                            var_16 *= ((/* implicit */short) ((unsigned long long int) min((arr_8 [i_2 + 1] [i_2 + 2]), (((/* implicit */unsigned int) arr_5 [i_2 - 3] [i_2 + 2])))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_1] [i_2 - 3] [i_2 + 1] [i_2] [i_2 - 2])), (arr_0 [i_2 - 2] [i_2 - 1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1])))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_11 [i_0] [i_2] [i_6]))));
                            var_19 = ((/* implicit */int) (+(1056513805U)));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min(((+(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1])) ? (66025147612878935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_2] [i_3] [i_6])))))));
                            arr_23 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_6]);
                        }
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_26 [i_0] [18] [i_2] [i_3] [i_7] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_24 [i_2] [i_2] [i_2])), (2121422507)))));
                            var_21 *= ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2121422510)) ? (((/* implicit */unsigned long long int) min((var_4), (var_6)))) : (max((((/* implicit */unsigned long long int) (unsigned char)100)), (5370820366826932899ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (~(876960980U)))))))));
                            var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2 + 1] [i_2] [i_2 - 3] [i_2 - 2] [i_2 - 1])) & (arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 3])))) ? (((/* implicit */unsigned long long int) min((max((1056513805U), (((/* implicit */unsigned int) arr_11 [i_7] [i_0] [i_0])))), (min((((/* implicit */unsigned int) (unsigned short)29189)), (3238453483U)))))) : (arr_4 [i_0] [i_1] [i_0])));
                            var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056513805U)) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2 + 2] [i_1] [i_3] [i_1])) ? (1056513812U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_7]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_3]) ? (arr_25 [i_0] [i_1] [i_2] [i_3] [i_3] [i_7]) : (2121422510))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_7 [i_1] [i_2] [i_1] [i_1]))))));
                            arr_27 [i_0] [i_1] [i_2 - 3] [i_3] [i_7] |= ((/* implicit */signed char) 893529286U);
                        }
                        for (unsigned char i_8 = 3; i_8 < 19; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2] [i_2 + 1]))) ? (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_5 [i_0] [i_8])), (arr_2 [i_1] [(unsigned short)5] [i_3])))))) : (max((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4116048762973587535ULL))), (4116048762973587535ULL)))));
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_3] [i_8 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [9] [i_2 - 2] [i_8 + 1])) && (((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 2] [i_8 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)29)))))) : (((((/* implicit */_Bool) (short)32740)) ? (1410194835432741379ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255)))))));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)76))));
                        }
                        var_26 = ((unsigned long long int) (!(((/* implicit */_Bool) 3238453504U))));
                        var_27 = ((((/* implicit */_Bool) (short)17822)) ? (3238453483U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))));
                    }
                    for (short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        arr_35 [i_0] [i_1] [i_0] [i_2] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((int) arr_33 [i_0] [i_1] [i_2] [i_9]))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2 - 1] [(short)4] [i_9])) ? (1357241836187410419LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17516)))))))) ? ((~(((/* implicit */int) arr_5 [i_1] [i_2 - 2])))) : (((((/* implicit */_Bool) 2862236924U)) ? (((/* implicit */int) min((arr_19 [i_0] [i_1] [i_2] [i_1] [(unsigned short)0]), (arr_17 [i_0] [i_0] [i_2] [i_9] [i_9])))) : (((/* implicit */int) ((_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0])))))));
                        arr_36 [(unsigned short)19] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_1]);
                        var_28 = ((/* implicit */short) ((((/* implicit */int) (signed char)-59)) != (((/* implicit */int) (signed char)-101))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 *= ((/* implicit */signed char) 2129566222);
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_30 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -5991692279345890751LL)) ? (((((/* implicit */unsigned long long int) 1432730371U)) & (1410194835432741379ULL))) : (var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-88)), (-2121422507))))));
                            var_31 = ((/* implicit */int) ((unsigned short) 1023LL));
                            arr_42 [i_0] [i_1] [i_11] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((18446744073709551605ULL), (((/* implicit */unsigned long long int) 2121422507))))) ? ((-((+(((/* implicit */int) arr_19 [i_2] [i_1] [i_1] [i_10] [i_0])))))) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_10] [i_11]))));
                            var_32 = ((/* implicit */int) arr_22 [i_11] [i_10] [(signed char)13] [i_1] [i_0] [i_0]);
                        }
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (-(max((min((((/* implicit */unsigned long long int) (signed char)-32)), (var_3))), (((/* implicit */unsigned long long int) var_7)))))))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])), ((+(((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [12LL] [i_2]))))))) ? (((((((/* implicit */_Bool) 2862236924U)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (var_3))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3238453496U)) ? (2121422517) : (((/* implicit */int) (unsigned char)170))))), (var_4)))))))));
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_45 [i_2] [i_1] [i_2 + 1] [i_12] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_2] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (var_3)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_2] [i_12] [i_12]))))))) >= ((((-(0ULL))) / (((/* implicit */unsigned long long int) 3238453496U)))));
                        arr_46 [i_0] [i_0] [i_1] [i_1] [i_12] [i_12] = ((/* implicit */unsigned char) 752873684);
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_14 = 3; i_14 < 17; i_14 += 1) 
                        {
                            arr_53 [i_0] [i_0] [i_2] [15U] [i_14] = min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 9223372036854775797LL)));
                            arr_54 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-32756))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            var_35 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(12990152612910920688ULL)))) ? (((int) arr_41 [i_0] [i_1] [i_2] [i_13] [i_0])) : (-2121422517)))) ? (((/* implicit */int) (short)32759)) : (((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned char)86)) - (86)))))));
                            arr_57 [i_2 - 3] [i_13] [i_2] [i_2 - 3] [i_2 - 3] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (signed char)127)))))), (((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2] [(signed char)14] [i_2 - 2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 - 2] [4U] [i_2] [i_2 + 1] [i_2]))) : (7386938542318042657ULL)))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            var_36 = ((/* implicit */long long int) arr_34 [i_0] [0ULL] [i_2 + 1] [i_0]);
                            var_37 = 382783876;
                            arr_60 [i_0] [i_2] [i_16] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_16] [i_1])) ? (var_4) : (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -1987938559)) ? (((/* implicit */int) arr_22 [i_0] [i_13] [i_13] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_16] [i_2] [i_16] [i_0]))))))));
                            var_38 = ((/* implicit */long long int) (~(arr_25 [i_0] [i_0] [i_2] [i_13] [i_16] [i_16])));
                        }
                        for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_64 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((~((-(((/* implicit */int) (signed char)-29))))))));
                            var_39 *= ((/* implicit */unsigned char) 18446744073709551604ULL);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            arr_67 [i_18] [i_13] [i_13] [5U] [i_13] [3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) var_0))))) ? (max((-2147483645), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned short) (unsigned char)255))))));
                            var_40 = ((min(((~(((/* implicit */int) (unsigned char)245)))), (min((2147483647), (((/* implicit */int) (unsigned char)169)))))) | (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_2] [i_18] [i_2])));
                            arr_68 [7ULL] [i_1] [i_18] [i_13] [i_18] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9))))), (min((17054298592878377688ULL), (((/* implicit */unsigned long long int) arr_25 [i_18] [i_18] [(unsigned short)5] [(unsigned short)5] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) var_1))));
                            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (unsigned char)86)) ? (17054298592878377688ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))))));
                            var_42 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) == (18446744073709551615ULL))) ? (((int) (signed char)30)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((2917007882576940112ULL), (((/* implicit */unsigned long long int) (short)-25136))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 4) 
                        {
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_2 - 2] [i_2 - 2] [i_19 - 2])) || (((/* implicit */_Bool) arr_24 [i_2 + 2] [i_2 - 2] [i_19 - 1]))));
                            arr_71 [i_0] [i_1] [i_2] [i_13] [i_19] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)-93))))));
                        }
                        arr_72 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32753)))))) | (arr_61 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((long long int) var_3)) : (var_7)))));
                        arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((arr_56 [i_0] [3ULL] [i_2] [i_13] [i_2] [3ULL]), (((/* implicit */unsigned int) arr_29 [i_0] [i_1] [i_2] [i_13] [i_13]))))) ? (11815767178637142166ULL) : (((/* implicit */unsigned long long int) arr_47 [i_0] [i_2] [i_2] [i_13]))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        arr_76 [i_20] [i_1] [i_1] [i_2] [i_2] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)170)) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)170)) && (((/* implicit */_Bool) 5456591460798630927ULL)))))));
                        var_44 = (-(((((/* implicit */int) var_1)) ^ (((((/* implicit */int) (unsigned short)10)) >> (((((/* implicit */int) (signed char)51)) - (38))))))));
                        var_45 = ((/* implicit */int) (~(arr_0 [(_Bool)1] [i_1])));
                    }
                }
            } 
        } 
    } 
}
