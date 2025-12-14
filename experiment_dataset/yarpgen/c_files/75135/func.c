/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75135
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2018130635)) ? (17155263689855045391ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((_Bool) 17155263689855045391ULL))) : (((/* implicit */int) (unsigned short)44820)))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_1 [i_0]))));
                    arr_9 [(unsigned char)14] [i_1] |= ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [(short)0] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (unsigned short)51520);
                                arr_16 [i_4] [i_1] [i_4] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (+((+((+(arr_13 [i_0] [i_0] [i_1] [16] [i_0] [16] [i_4])))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_4 [i_0] [i_0] [17]))))), (8998403161718784ULL))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_1]))) : (1291480383854506225ULL)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */short) ((var_8) || (((/* implicit */_Bool) 8998403161718784ULL)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        arr_22 [i_5] = ((/* implicit */long long int) 3557636187U);
        arr_23 [i_5] [(short)2] = ((unsigned long long int) ((((/* implicit */_Bool) 17155263689855045390ULL)) ? (min((((/* implicit */unsigned long long int) var_4)), (18437745670547832862ULL))) : (((((/* implicit */_Bool) arr_18 [6] [i_5])) ? (((/* implicit */unsigned long long int) var_0)) : (1291480383854506224ULL)))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_26 [(unsigned short)5] = ((/* implicit */long long int) (unsigned char)253);
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((arr_20 [i_6]), ((unsigned char)247))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_8]) << (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((int) (unsigned char)3))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_15))) : (18437745670547832832ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_24 = ((/* implicit */unsigned int) (short)-8192);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_39 [i_10] [10LL] [i_8] [i_8] [i_10] [i_8] [i_9] = ((/* implicit */unsigned long long int) 4294967295U);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)253))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_16))))));
                    }
                }
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((arr_6 [i_11 - 1]) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_5 [i_11] [i_11 - 1] [i_11 - 1]))))) : (((((/* implicit */_Bool) arr_36 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])) ? (1499713409717958830LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1])))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11 - 1] [i_7] [i_7])) ? (arr_19 [i_11] [i_11 - 1]) : (arr_19 [i_11] [i_11 - 1])))))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_6])) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_30 [(short)1] [i_7] [(short)1])) ? (((/* implicit */int) (unsigned short)44820)) : (((/* implicit */int) (short)-30751)))) * (((/* implicit */int) (short)-31281))))) : ((+((+(arr_21 [16ULL])))))));
                var_29 = ((/* implicit */_Bool) 1291480383854506229ULL);
            }
            var_30 = ((/* implicit */signed char) (unsigned char)252);
            arr_44 [i_6] [i_7] [i_7] &= ((/* implicit */long long int) max(((short)-30740), ((short)-8627)));
            var_31 = ((/* implicit */int) 96LL);
            var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_7] [i_7] [(unsigned char)3] [i_6] [i_6] [i_7])) ? ((+(((/* implicit */int) arr_5 [i_6] [i_7] [i_7])))) : (((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_37 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_37 [i_6] [i_7] [i_6] [i_6]))))) : (((3031178605U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            arr_47 [i_12] [i_12] = ((/* implicit */short) (unsigned char)195);
            arr_48 [i_12] = ((((/* implicit */_Bool) (~(arr_45 [i_12 - 1] [i_12 - 1] [i_12 - 1])))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14015)) || (((/* implicit */_Bool) arr_13 [i_6] [i_12] [i_12] [i_6] [i_12] [i_12] [i_6]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))));
        }
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_51 [i_13] = ((/* implicit */short) var_10);
            arr_52 [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1413919070204782786LL)))))));
            /* LoopSeq 3 */
            for (long long int i_14 = 1; i_14 < 10; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    arr_59 [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_6] [i_14 + 2] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_29 [i_6]))))))) : (((((/* implicit */_Bool) (~(arr_28 [i_14])))) ? (min((((/* implicit */long long int) var_2)), (arr_2 [16ULL] [i_15]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (-56118413) : (((/* implicit */int) (unsigned short)44834)))))))));
                    var_33 = ((long long int) (+(arr_1 [i_15])));
                    var_34 ^= (!(((/* implicit */_Bool) 8388044291306189354ULL)));
                    arr_60 [(short)0] [i_13] [i_14] [i_13] [i_6] [10] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16763))) * (((1291480383854506218ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        arr_63 [i_6] [i_6] [i_13] [i_6] [7LL] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_3 [i_14 + 2] [i_16 + 3]))))));
                        arr_64 [i_6] [i_13] [i_14 + 2] [i_13] [i_14] = ((/* implicit */_Bool) (-((~(arr_8 [i_6] [i_14 + 2] [i_16 + 1] [18LL])))));
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_14] [i_14] [i_14] [i_14 + 1] [i_14 - 1])) ? (-544727121360737045LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))))) : (((((/* implicit */_Bool) (short)896)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_17)))))) ? (((/* implicit */long long int) ((((36028797018959872ULL) > (((/* implicit */unsigned long long int) 3279802023U)))) ? (((/* implicit */int) arr_30 [i_16 - 1] [i_16 + 1] [i_16 + 2])) : ((+(var_0)))))) : (((((_Bool) (unsigned short)20701)) ? (((long long int) arr_53 [i_6] [(short)2] [i_14] [i_16])) : (max((-6503649441585844212LL), (((/* implicit */long long int) (_Bool)1))))))));
                    }
                    for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned short) (signed char)-101);
                        arr_67 [i_6] [i_13] [i_6] [i_15] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)14)) ? (((long long int) arr_10 [i_6] [i_13] [i_14] [(short)15] [i_17])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))));
                    }
                }
                var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) arr_66 [i_6] [i_6] [i_6] [1] [1] [1])) - (arr_57 [(unsigned char)7] [(unsigned char)7] [9U] [i_13])))));
            }
            for (signed char i_18 = 2; i_18 < 11; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */short) 14614920109471721894ULL);
                            arr_75 [(short)11] [i_13] [i_18 + 1] [i_19] [i_13] = ((/* implicit */short) ((unsigned short) arr_61 [9] [i_18] [9]));
                            arr_76 [i_6] [i_6] [i_6] [i_13] [(_Bool)1] [i_20] [i_20] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-24692)), (18446744073709551615ULL)));
                            arr_77 [i_20] [i_18] [i_6] &= ((/* implicit */short) min((((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned short)65527)) - (65505))))), (((/* implicit */int) ((max((var_4), (((/* implicit */unsigned int) (signed char)109)))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_18 - 2] [i_18 + 1] [i_18 + 1]))))))));
                        }
                    } 
                } 
                arr_78 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_18] [i_13] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [11LL] [i_6] [i_18 - 1]))) : ((-(arr_2 [i_6] [i_18])))))) ? (((/* implicit */unsigned long long int) (+(65535)))) : (max((arr_62 [i_6] [10U] [2ULL] [i_18 - 2] [i_18 - 1]), (arr_62 [2U] [i_13] [i_13] [i_13] [i_13])))));
            }
            for (int i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                arr_82 [i_6] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_6] [i_13] [i_6] [i_6]));
                arr_83 [i_13] [i_13] = ((/* implicit */int) var_12);
                arr_84 [i_13] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (var_5)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7709))) : (18385062842491799792ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)1794), ((unsigned short)8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_6))))));
            }
        }
        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            arr_87 [i_6] [i_22] = ((((/* implicit */_Bool) ((short) 1023))) ? (((((/* implicit */_Bool) (unsigned short)7109)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7156)))) : (((/* implicit */int) (_Bool)1)));
            arr_88 [9] [9] [i_22] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_43 [i_6] [6LL] [i_6]), (((/* implicit */long long int) (+(arr_61 [i_22] [i_6] [i_6]))))))) ? (((((/* implicit */int) var_19)) * (((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) ((int) (short)-7688))) ? (var_7) : (((/* implicit */int) ((short) arr_54 [i_6] [i_22] [4U])))))));
            arr_89 [i_6] = (signed char)12;
            arr_90 [(short)5] [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18437745670547832820ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((65535), (1023)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)19)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)13268))) : (-7832367475446948409LL)))));
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30674)))))) : (max((((/* implicit */long long int) arr_29 [i_6])), (var_5)))));
        }
    }
    /* vectorizable */
    for (short i_23 = 4; i_23 < 20; i_23 += 2) 
    {
        arr_93 [i_23] [i_23 - 1] = ((/* implicit */unsigned long long int) ((short) var_0));
        arr_94 [i_23] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_91 [i_23 - 1] [8U]))));
        arr_95 [i_23 - 2] = ((/* implicit */short) (+(((unsigned int) (_Bool)0))));
        arr_96 [i_23 - 3] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17706043505418598216ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2317315383U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_92 [i_23] [i_23 - 2])) ? (((/* implicit */int) (short)2944)) : (((/* implicit */int) arr_91 [i_23 - 2] [i_23 - 2]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (var_4)))));
        /* LoopSeq 2 */
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 2) 
        {
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_91 [(_Bool)1] [i_23 + 1])) ? (((/* implicit */int) arr_91 [i_23] [i_23 - 1])) : (((/* implicit */int) arr_92 [5] [i_23 + 1]))));
            arr_101 [i_24] [i_24] &= ((/* implicit */unsigned long long int) ((_Bool) arr_91 [i_23 + 2] [i_24]));
            arr_102 [i_23] = ((/* implicit */_Bool) (~(467714666U)));
        }
        for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (int i_27 = 4; i_27 < 21; i_27 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_28 = 0; i_28 < 22; i_28 += 2) 
                        {
                            var_41 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_91 [i_27 - 1] [i_23 + 2]))));
                            arr_111 [i_26] = ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-2940))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_6) : (var_6))));
                            arr_112 [i_23] [i_25] [i_26] [i_27] [i_28] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (8998403161718783ULL))));
                        }
                        arr_113 [i_23 - 4] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_92 [i_25] [i_26]))))) ? (((/* implicit */int) arr_110 [i_23] [i_27 - 2] [i_26] [i_27])) : (((/* implicit */int) arr_106 [i_23 - 1] [i_26] [i_26] [i_27 - 1]))));
                    }
                } 
            } 
            arr_114 [i_23] = ((((_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_100 [i_25]))))) : (((/* implicit */int) (unsigned short)42806)));
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */int) arr_105 [i_23 + 2] [(unsigned short)8])) == (((((/* implicit */_Bool) -1080675421)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) arr_105 [i_25] [i_23 - 2])))))))));
        }
    }
    var_43 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)19))))) ? (min((var_14), (var_16))) : (((((/* implicit */_Bool) 1252762069796635950LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45600))) : (var_14)))))));
}
