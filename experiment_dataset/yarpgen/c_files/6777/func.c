/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6777
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
    var_17 |= max((-2340620175418719757LL), (((/* implicit */long long int) (unsigned short)33770)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((2340620175418719757LL), (2340620175418719742LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max(((+(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) - (-2340620175418719757LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0])) : (973515058349683063LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57734)) ? (((/* implicit */int) (short)17017)) : (((/* implicit */int) (unsigned char)255))))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)57720)), (288230307432235008ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 2340620175418719755LL)) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) -2340620175418719755LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-116)) + (((/* implicit */int) (signed char)-116))))))) : (max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)1)), (arr_2 [i_0])))), (max((((/* implicit */unsigned int) (signed char)29)), (4258295940U)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1])), ((unsigned char)221))))) - (((((/* implicit */_Bool) arr_0 [i_2])) ? (973515058349683063LL) : (((/* implicit */long long int) arr_2 [i_1])))))) / (((/* implicit */long long int) arr_0 [i_1]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((signed char) (signed char)-116))) : (((/* implicit */int) (unsigned short)57734))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 973515058349683063LL)) ? (((/* implicit */int) arr_11 [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_3] [i_2] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)113))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned short)61173)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_1] [i_1])))))));
                        arr_15 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_6 [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) (short)23008)) : (((/* implicit */int) (signed char)-122)))) * ((~(((/* implicit */int) (unsigned short)57734))))));
                        var_19 = ((/* implicit */unsigned long long int) ((_Bool) 0U));
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) (short)-32764)))) + (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)35))))));
                        arr_20 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)57958)) + (((/* implicit */int) (signed char)115)))));
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28870)) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((signed char) arr_1 [i_2] [i_2]))) : ((+(((/* implicit */int) arr_6 [i_1]))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)21763)) ? (arr_23 [i_6] [i_1] [i_1] [i_0]) : (arr_25 [i_0] [i_0] [i_0])))))));
                            var_22 = ((/* implicit */unsigned short) 1072773666);
                        }
                        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (unsigned short)57958)) : (((/* implicit */int) (signed char)-115))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 8311765368417367702ULL)))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [i_0])) ? (8311765368417367705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_5] [i_7]))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_5] [i_5] [i_7] [i_5]))) : (((((/* implicit */_Bool) arr_23 [i_7] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1]))) : (2544409632U)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10134978705292183914ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_16 [i_1]))))) : (((((/* implicit */_Bool) 8311765368417367702ULL)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (short)-23008))))));
                            var_27 = ((/* implicit */unsigned char) ((short) ((unsigned short) arr_31 [i_0] [i_0] [i_1] [i_5] [i_1] [i_8])));
                        }
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_2] [i_2] [i_9] [i_9])) || (arr_6 [i_0])))) > (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_26 [i_9] [i_5] [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_9] [i_5] [i_1] [i_1] [i_0]))))));
                            arr_35 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) / (7U)));
                            arr_36 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_2] [i_5 + 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_5] [i_9]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (10134978705292183915ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_37 [i_1] [i_1] [i_1] [i_1] = ((arr_24 [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5 + 2] [i_5 - 1] [i_5 - 1]))));
                        arr_38 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_16 [i_1]);
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) (unsigned char)254);
                        var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4843)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967288U)))));
                        arr_43 [i_2] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_0] [i_10] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7555))))));
                        var_31 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-100)) && (((/* implicit */_Bool) 4294967288U)))));
                        arr_44 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (unsigned short)31906));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 2; i_11 < 15; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            var_32 = ((/* implicit */_Bool) (unsigned short)24925);
                            var_33 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)93)) == (((/* implicit */int) arr_6 [i_1])))));
                            var_34 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_12] [i_0] [i_0] [i_0] [i_0])) ? (24U) : (454835965U))) % (((((/* implicit */_Bool) arr_28 [i_12] [i_12] [i_2] [i_2] [i_1] [i_12])) ? (4294967271U) : (4294967272U)))));
                            var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (signed char)125))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) == (24U))))));
                        }
                        var_36 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)65535));
                        arr_52 [i_0] [i_1] [i_1] [i_2] [i_11] [i_11] = ((((/* implicit */_Bool) arr_45 [i_11] [i_11 - 1] [i_11 - 2] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) (short)4241)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_11] [i_2]))))));
                    }
                }
            } 
        } 
        arr_53 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0]))))) ^ (((unsigned int) 2422792891U)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-4844), (((/* implicit */short) (signed char)-2))))))));
    }
    for (unsigned int i_13 = 2; i_13 < 9; i_13 += 2) 
    {
        arr_58 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) arr_13 [i_13] [i_13] [i_13] [i_13]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (unsigned char)254))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned short)1)))))) : (((((((/* implicit */int) (signed char)45)) | (((/* implicit */int) (unsigned short)15225)))) & ((~(((/* implicit */int) (unsigned short)65534))))))));
        arr_59 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) 18446744073709551615ULL))), ((~(534328866U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_45 [i_13] [i_13] [i_13] [i_13])), (3840131330U)))))) : (((((((/* implicit */_Bool) 1596607511U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (arr_55 [i_13] [i_13]))) << (((((((/* implicit */int) (short)-4843)) | (((/* implicit */int) (short)-24270)))) + (4836)))))));
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)20257))))) && (((/* implicit */_Bool) 18446744073709551615ULL))))))));
    }
    var_38 = ((/* implicit */short) min((var_4), (((unsigned int) ((((/* implicit */_Bool) (short)20257)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27510))) : (1279917502U))))));
    var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (((max((634183881U), (((/* implicit */unsigned int) (unsigned short)56464)))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_6)), ((short)15693)))))))));
    var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)52220)) ? (((/* implicit */int) max((var_7), (var_1)))) : (((/* implicit */int) var_2)))) == (((/* implicit */int) ((_Bool) max(((unsigned short)52220), (((/* implicit */unsigned short) var_11))))))));
}
