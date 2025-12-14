/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66265
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))), (min((3007928731U), (((/* implicit */unsigned int) var_1)))))))));
                var_12 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) == (min((arr_2 [i_0]), (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1] [i_0])), (var_1))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_5 [i_2 - 1] [i_2 - 1] [i_2]))));
                        arr_10 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_6);
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (arr_9 [i_2 - 1] [i_0] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 576425567931334656LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2 - 1] [i_3])))))))))));
                        arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) ((short) arr_1 [i_2]))) : (((int) var_4))));
                    }
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (unsigned char)243))));
                }
                for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_16 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_4 + 1] [i_0] [i_4 - 3]))), (min((arr_12 [i_4 + 2] [i_1] [i_4 - 1]), (((/* implicit */unsigned long long int) var_8))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_2 [i_4 - 2])))) ? (((/* implicit */int) arr_14 [i_4 - 3] [(unsigned char)3] [i_4 - 2] [i_4 - 1])) : (((((/* implicit */int) var_8)) | (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) max((((unsigned short) 410182595U)), (((/* implicit */unsigned short) ((_Bool) var_8)))))) : (max((1146630316), (((/* implicit */int) (unsigned char)243)))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_18 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) (unsigned char)232))))), (((unsigned long long int) (unsigned char)18)))), (arr_12 [i_4 - 1] [i_4] [i_1])));
                            arr_19 [i_6] [i_1] [i_1] [i_5] [i_6] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)243))))) ? (max((((10088798089456868123ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(signed char)5] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) : (arr_8 [i_0] [i_5] [i_5] [i_5] [i_6] [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)32497)))));
                            arr_23 [i_5] [i_1] [i_7] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9))))) == (((unsigned int) var_6)))))) + (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) : (arr_9 [i_5] [i_4] [i_4] [i_0])))) ? (18446744073709551615ULL) : (arr_12 [i_4 - 2] [i_4] [i_4 - 3])))));
                            arr_24 [i_4] [2LL] [i_4 + 1] [8ULL] [i_7] [i_4] [i_7] = ((((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_4)), (var_7)))), (((((/* implicit */_Bool) (unsigned char)111)) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) * (max((9007199254740991LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [(_Bool)1] [i_0]))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((var_4), ((unsigned char)99)))) ? (-9007199254740974LL) : (((/* implicit */long long int) var_0)))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_0 [i_0]))));
                        }
                        arr_28 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), ((((_Bool)0) ? (arr_8 [i_0] [i_4 - 3] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (int i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_1] [i_4] [i_4] [16] = ((/* implicit */short) max((((((((/* implicit */_Bool) 3884784710U)) ? (3624926273U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))) * (max((4294967295U), (var_2))))), (410182601U)));
                                var_21 &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)111))))), (min((arr_12 [i_0] [i_10] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)32)))))) ^ (((/* implicit */unsigned long long int) var_0))));
                            }
                        } 
                    } 
                }
                arr_34 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)32))))) | (arr_12 [i_0] [i_1] [i_1]))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2640551742U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_1] [i_1]))) : (-5122578683838234330LL))) << (((arr_17 [i_0] [i_1]) + (1238044414))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */unsigned int) max((var_1), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (5122578683838234353LL))))))), (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 410182601U)))))) : (max((410182595U), (3884784695U))))))))));
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 17; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 2; i_13 < 18; i_13 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16746943699246446837ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-1))))) ^ ((~(var_2))))))));
                    var_24 ^= ((/* implicit */signed char) ((arr_37 [i_11 + 2]) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_5)) - (27685)))))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (3884784695U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18277)))))));
                    var_25 = ((/* implicit */_Bool) (-((+(12963170043217306995ULL)))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        arr_48 [9] [i_12] [(short)9] [(short)9] [i_12] [i_12] = ((/* implicit */unsigned short) -7466286793957410961LL);
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (short)(-32767 - 1)))));
                            arr_52 [i_12] [i_12] [0LL] [i_14 - 1] [i_15] [i_16] [i_16] = ((/* implicit */short) (-(arr_50 [i_12] [i_16])));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((short) arr_43 [i_11 - 2] [i_12])))));
                            arr_53 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) 16746943699246446837ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_11] [i_12] [i_14] [i_12]))))) : (((/* implicit */int) (unsigned short)65535))));
                            var_28 *= ((/* implicit */_Bool) var_3);
                        }
                        arr_54 [i_12] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        arr_57 [i_12] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (arr_50 [i_12] [i_12])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_39 [i_11 + 2] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_39 [i_11 - 2] [i_12]))))));
                        arr_58 [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1699800374463104779ULL)) ? (((/* implicit */int) arr_38 [i_17] [i_14 - 1] [i_11 + 1])) : (((/* implicit */int) arr_38 [i_14 - 1] [i_14 - 1] [i_11 + 2]))))) ? (((/* implicit */int) arr_38 [(short)15] [i_14 - 1] [i_11 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_12] [i_14 - 1]))))));
                        arr_59 [i_11] [i_12] [i_12] [i_17] = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_18 = 2; i_18 < 15; i_18 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(1699800374463104768ULL))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_37 [i_12]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (410182578U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_39 [i_12] [i_12])))))));
                        }
                        for (int i_19 = 2; i_19 < 15; i_19 += 2) /* same iter space */
                        {
                            arr_66 [i_12] [i_19] [i_17] [i_17] [i_19 + 1] [i_11] = (+(((((/* implicit */_Bool) arr_46 [i_14 - 1] [i_19] [i_19 + 4] [i_19] [i_19])) ? (((/* implicit */long long int) arr_60 [i_14 - 1] [i_14] [(unsigned char)17] [i_19 + 3] [i_19] [i_12] [i_19 + 3])) : (-6491706238596081452LL))));
                            arr_67 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_12] [18U] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967295U)))))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15811)))))))) <= (3884784700U))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_42 [18] [i_14 - 1] [i_12] [i_19 - 2])), (min((5093977137302273285LL), (((/* implicit */long long int) (signed char)30))))))) ? (min((arr_56 [i_11 - 1] [i_12] [i_11 + 2]), (410182608U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                        }
                    }
                    var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_10))))) : (max((-735634449039148849LL), (((/* implicit */long long int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) arr_49 [i_11] [i_11] [i_12] [i_12] [i_12] [i_12] [i_14 - 1])) : (((/* implicit */int) (unsigned char)130))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33039))) / (6491706238596081452LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24173)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_56 [9U] [i_12] [i_14]))))));
                    arr_68 [i_11] [i_11 + 1] [i_12] [i_11 + 1] = (!(((arr_45 [i_11 - 2] [i_12] [i_14 - 1] [i_11]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_20 = 3; i_20 < 18; i_20 += 2) 
                {
                    arr_72 [i_12] = ((/* implicit */short) (signed char)-14);
                    var_34 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_10)), (10500569517614223582ULL)));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((arr_45 [i_11 + 2] [i_11 - 2] [i_11 + 1] [i_11 - 1]) / (arr_45 [i_11 - 1] [i_11 + 2] [i_11 + 1] [i_11 - 2]))) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)169))))))))));
                }
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (1699800374463104770ULL) : (((/* implicit */unsigned long long int) -6234707574379064354LL))));
                    arr_77 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                    /* LoopSeq 3 */
                    for (signed char i_22 = 3; i_22 < 17; i_22 += 2) 
                    {
                        var_37 = (unsigned short)17263;
                        /* LoopSeq 1 */
                        for (long long int i_23 = 0; i_23 < 19; i_23 += 2) 
                        {
                            var_38 = ((/* implicit */int) arr_65 [i_12]);
                            arr_83 [i_12] [i_22 - 2] [i_22 - 2] [(_Bool)1] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-6358868698637690617LL)))) ? ((+(((/* implicit */int) (unsigned char)98)))) : (((/* implicit */int) var_3))));
                            var_39 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_11 - 1])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_35 [i_11 - 1]))));
                        }
                        arr_84 [i_21] [i_21] [i_12] [i_21] &= ((/* implicit */signed char) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    }
                    for (unsigned short i_24 = 1; i_24 < 15; i_24 += 2) /* same iter space */
                    {
                        arr_87 [i_24] [i_12] [i_12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125)))))) ? (((/* implicit */int) arr_46 [i_24 + 4] [i_24 + 1] [3U] [i_24 + 3] [i_24 + 4])) : (((/* implicit */int) arr_35 [i_24 + 3]))));
                        arr_88 [(signed char)18] [i_12] [i_12] [i_12] [i_11 + 1] [i_24 - 1] = ((/* implicit */unsigned char) ((short) arr_44 [i_12]));
                        arr_89 [i_11] [i_12] [i_21] [i_24 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) (signed char)42))));
                        /* LoopSeq 1 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned short) arr_44 [i_12]);
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_71 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24]))));
                        }
                    }
                    for (unsigned short i_26 = 1; i_26 < 15; i_26 += 2) /* same iter space */
                    {
                        arr_95 [i_11 + 1] [i_12] [i_12] [i_26] = ((/* implicit */long long int) (_Bool)1);
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)118)) << (((arr_45 [i_26] [i_21] [i_12] [17ULL]) - (3822355224575107866LL)))))));
                    }
                }
                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) (unsigned char)132)), (2060233879016085863LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1808661465))))))));
            }
        } 
    } 
}
