/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55235
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
    var_17 = ((/* implicit */signed char) 6529929476704578051LL);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 *= ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned int) (unsigned short)4095)))));
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1])) < (((/* implicit */int) arr_5 [i_1 + 3] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_7 [i_3 - 2])))) ? (((/* implicit */long long int) (+(1928635923U)))) : (((arr_7 [i_3 - 2]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_4))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] [(signed char)9] [i_0] = ((/* implicit */signed char) (-(-6429257754018105121LL)));
                    }
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_3] [i_3] [i_5] [i_0] [i_3 - 1] = ((/* implicit */short) ((((_Bool) ((-2436297882896937068LL) == (-2436297882896937068LL)))) ? (((/* implicit */unsigned long long int) var_8)) : (18012796654310321809ULL)));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((((long long int) arr_0 [i_2] [i_1])) / (max((((/* implicit */long long int) var_3)), (var_8)))))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) ((var_6) < ((+(min((arr_9 [i_6] [i_6] [i_3] [(short)10] [i_1 - 1] [i_0]), (((/* implicit */long long int) 4294967288U))))))));
                        var_25 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) % ((-(((/* implicit */int) arr_2 [i_2 + 1]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_3] [i_3] [i_2] [1ULL] [10] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 2] [i_3] [i_2] [i_2] [i_2])) | (((/* implicit */int) var_4)))) < (((arr_10 [i_1 - 1] [i_2] [5] [i_3] [i_0] [i_3 - 2] [i_0]) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_2] [i_3] [(signed char)0] [i_3 + 2] [(unsigned short)2])) : (((/* implicit */int) (signed char)-17))))));
                        var_26 = ((/* implicit */short) (((+(((/* implicit */int) arr_2 [i_3 + 2])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((8688651248312934170LL), (((/* implicit */long long int) (_Bool)0))))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_25 [i_3 + 1] [i_3] [i_2] = ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) arr_13 [i_1] [i_2 - 2] [i_3] [i_1] [i_3 + 1]))))) ? (((((/* implicit */long long int) ((983019872) / (((/* implicit */int) (short)32767))))) * ((-(1LL))))) : (((min((125535686598780014LL), (((/* implicit */long long int) (unsigned char)249)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_2))))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min(((~(arr_7 [i_1 - 1]))), (((/* implicit */long long int) min(((unsigned short)57417), ((unsigned short)29182)))))))));
                        var_28 = ((/* implicit */int) max((var_28), (max(((((~(((/* implicit */int) var_3)))) ^ (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((max((var_11), (((/* implicit */unsigned char) var_9)))), (((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [(short)0] [i_8])))))))));
                    }
                    for (short i_9 = 3; i_9 < 10; i_9 += 4) 
                    {
                        arr_30 [i_3] [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) arr_19 [i_1 - 1] [0LL] [i_1] [i_2 + 1] [i_2 + 1] [i_3 + 1])), ((-(((/* implicit */int) arr_19 [i_1 + 3] [i_1 - 1] [i_1] [i_2 - 1] [i_3] [i_3 + 1]))))));
                        var_29 = (+(max((((/* implicit */long long int) (-(((/* implicit */int) var_12))))), (max((arr_26 [i_0] [i_0] [i_3] [4U] [i_3] [i_9] [i_9]), (arr_27 [i_0] [i_1] [i_2] [i_3] [i_9]))))));
                        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_20 [i_1] [10U] [i_2 - 1] [i_3 + 1] [i_3] [i_0] [i_3])))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_3] [i_3 - 3] [i_9 - 2]))) & ((~(arr_1 [i_0])))))));
                        var_31 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 1]))) / (((((/* implicit */_Bool) var_6)) ? (arr_27 [(short)4] [i_1] [i_2] [i_3] [0LL]) : (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_2 - 1] [i_3 - 2] [i_9 - 3]))) != (arr_7 [(signed char)8]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_20 [i_2] [i_2] [i_2 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_9 - 1]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_32 -= max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 172299251))))), (((var_10) << (((((/* implicit */int) (short)7127)) - (7106))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_3 + 2]))))));
                        arr_33 [i_3] = ((/* implicit */short) ((arr_4 [i_3 - 3] [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((-(arr_7 [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) (((-(arr_1 [i_3]))) < (max((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_5))))))))));
                        var_33 = ((/* implicit */short) (+(max((var_15), (((/* implicit */long long int) arr_0 [i_0] [i_1 + 2]))))));
                        arr_34 [i_10] [i_2] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((((/* implicit */int) arr_0 [i_2 - 1] [i_3 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_1 + 1] [i_3 + 2] [i_2 - 2])) + (106))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1 - 1] [i_1] [i_3] [i_2 + 1])))))));
                        var_34 = min((((/* implicit */long long int) var_2)), ((~(-4377899344962727331LL))));
                    }
                }
                for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) arr_36 [i_0] [i_2] [i_11]))));
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_0)))) & (((((/* implicit */_Bool) arr_14 [i_12] [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_16 [2U] [(_Bool)1] [i_12] [i_11] [i_12])) : (((/* implicit */int) (short)-1))))))) < (max((((/* implicit */long long int) (~(var_10)))), (max((-125535686598780004LL), (var_15))))))))));
                        arr_40 [i_0] [i_1 + 1] [i_12] [i_0] [i_12] = ((/* implicit */short) (((-(125535686598780014LL))) + (((arr_32 [i_0] [i_1 + 1] [i_2] [i_11] [i_12]) - (arr_32 [i_1 + 3] [i_1] [i_1 + 1] [i_11] [i_12])))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        var_37 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)54))));
                        var_38 = 36028797018963967LL;
                        var_39 -= ((/* implicit */long long int) var_3);
                        var_40 = ((/* implicit */long long int) 4135833687U);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        var_41 &= ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_14)))))) / (((/* implicit */int) ((short) (+(((/* implicit */int) var_7))))))));
                        var_42 = (-(((max((1828638457014747211LL), (((/* implicit */long long int) (unsigned char)34)))) / (max((arr_27 [i_1] [i_0] [i_2] [i_1] [i_0]), (((/* implicit */long long int) var_2)))))));
                        var_43 -= ((/* implicit */unsigned int) arr_37 [i_0] [i_1] [i_2 - 1] [i_2] [i_11] [i_14]);
                    }
                    arr_45 [i_1] [i_1] [2U] [i_1] [i_1 - 2] [i_1 - 1] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */short) var_7)), ((short)-26956)))))) ? (max((min((12193025768019366295ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_11])))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */short) var_2))))))) : (((/* implicit */unsigned long long int) (-(274877898752LL))))));
                }
                var_44 |= ((/* implicit */signed char) arr_0 [i_2 + 1] [i_1 - 1]);
            }
            arr_46 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17770)) << (((4294967279U) - (4294967277U)))));
        }
        for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_16 = 3; i_16 < 10; i_16 += 1) 
            {
                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)111)) + (((/* implicit */int) (signed char)22))))), (max((arr_49 [i_0] [i_15]), (((/* implicit */long long int) (signed char)32)))))), (((/* implicit */long long int) var_12)))))));
                /* LoopSeq 3 */
                for (signed char i_17 = 0; i_17 < 12; i_17 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned int) max((max((((4611686018427387903ULL) * (((/* implicit */unsigned long long int) arr_7 [i_0])))), (((/* implicit */unsigned long long int) 4294967293U)))), (((unsigned long long int) ((((/* implicit */int) arr_14 [i_17] [i_16] [i_0])) << (((-1828638457014747207LL) + (1828638457014747226LL))))))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        arr_55 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) | ((~(((/* implicit */int) arr_5 [i_18] [i_16 - 3] [i_0])))))))));
                        var_47 = ((/* implicit */int) ((((min((arr_44 [i_18] [i_18] [11LL] [i_18] [i_18] [i_18]), (((/* implicit */long long int) 1294432044U)))) + (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_16] [i_16 + 1] [i_15] [i_16]))))))) != (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_22 [i_18] [i_18] [i_17] [i_16 + 1] [(short)9] [i_15] [11LL])), (var_10)))), (((arr_49 [i_16] [i_15]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                        var_48 = ((_Bool) var_13);
                        var_49 = min((((/* implicit */long long int) ((min((((/* implicit */long long int) (unsigned short)44325)), (arr_47 [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_16] [i_17])))))), ((-((-(arr_44 [i_0] [i_15] [i_16] [i_17] [(short)2] [i_18]))))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        var_50 |= ((/* implicit */signed char) ((3900278019U) - (((/* implicit */unsigned int) -227041891))));
                        arr_59 [i_16] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)92))))), ((~(arr_48 [i_16 - 2] [i_16 + 1])))));
                    }
                }
                for (signed char i_20 = 0; i_20 < 12; i_20 += 1) /* same iter space */
                {
                    var_51 -= (+(min((((267908155U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (max((3981942135U), (((/* implicit */unsigned int) (signed char)-1)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_52 = ((((/* implicit */_Bool) ((max((3846909234U), (((/* implicit */unsigned int) (unsigned short)29190)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30478)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [i_0] [i_15] [i_16] [i_0] [i_21 - 1])))))))) ? (max(((+(8053063680LL))), (max((var_15), (((/* implicit */long long int) (unsigned short)30475)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) == (((((/* implicit */_Bool) 3033689464U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31774))) : (4029988780243253870LL))))))));
                        arr_64 [i_0] [i_16] &= (~((~(min((arr_54 [i_15] [i_20] [6U]), (((/* implicit */long long int) var_11)))))));
                        var_53 = ((/* implicit */signed char) (short)12472);
                        arr_65 [i_16] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (max((((/* implicit */unsigned char) arr_16 [i_21] [i_20] [i_16] [4LL] [4LL])), (var_2))))))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_69 [i_16] [i_15] [11LL] [i_20] [i_15] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) < ((~(1720568120123885087LL))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_44 [i_0] [i_15] [i_0] [(unsigned char)6] [i_16] [i_16])), (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) 4294967292U))))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_37 [i_16] [i_16 + 2] [(_Bool)1] [i_16 - 3] [i_16] [i_16 - 2])) : (((/* implicit */int) (signed char)119))))));
                        var_54 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_22] [i_16 + 1])), (var_2))))) >= ((+(arr_1 [i_16])))));
                    }
                    for (int i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        var_55 = ((max((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)12446))))), (arr_28 [i_16]))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0))));
                        var_56 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_43 [i_20] [i_16])), ((~(((/* implicit */int) arr_72 [i_16] [i_16] [i_16 - 3]))))));
                    }
                    var_57 = ((/* implicit */long long int) min((var_57), ((-9223372036854775807LL - 1LL))));
                }
                for (signed char i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
                {
                    var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-121)), ((short)894)))) ? (arr_68 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_63 [i_16 + 2] [i_16] [i_16 + 1])))), (max((((/* implicit */unsigned long long int) ((long long int) var_16))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (7719597827642692331ULL))))))))));
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        var_59 = ((/* implicit */short) ((((-991730683520364018LL) >= (((((/* implicit */_Bool) arr_18 [i_16] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (arr_26 [i_0] [i_0] [i_16] [i_0] [i_0] [i_16] [i_0]))))) ? (((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_16] [i_16 - 2] [(unsigned char)7] [i_16 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_52 [i_0] [i_15] [i_15] [i_16] [i_16 - 1] [i_16 - 2])))) : (((/* implicit */int) min((((/* implicit */signed char) var_14)), (arr_19 [i_0] [i_24] [i_0] [i_0] [i_16 + 1] [i_24]))))));
                        var_60 ^= max((((((/* implicit */_Bool) arr_9 [i_16 - 3] [i_16 - 3] [i_16] [i_16 + 2] [i_16] [i_16 + 2])) ? (arr_9 [i_16 + 1] [i_16 + 2] [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) (unsigned short)32030)));
                        arr_78 [i_0] [0] [i_0] [i_0] [i_16] [i_0] = ((/* implicit */signed char) arr_36 [i_16 - 1] [i_16 - 2] [i_15]);
                    }
                }
            }
            var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (signed char)77)) - (53)))))) : (arr_27 [i_0] [i_0] [i_0] [i_15] [i_15])))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_0] [i_0] [i_15] [i_0] [i_15])) ? (((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [(_Bool)1] [i_15] [i_15] [(unsigned char)4])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_15] [i_15] [i_15] [2])) ? (((/* implicit */int) arr_73 [i_15] [6LL] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))))))))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_81 [i_0] [i_0] = (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (arr_75 [i_0] [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) 5777372906740093818LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_26] [i_26] [i_26]))))))));
            arr_82 [i_26] [i_26] [i_26] &= ((/* implicit */unsigned short) (unsigned char)142);
        }
    }
    for (long long int i_27 = 0; i_27 < 11; i_27 += 1) 
    {
        arr_85 [i_27] = ((/* implicit */long long int) min(((+(((/* implicit */int) var_12)))), ((+(arr_63 [i_27] [i_27] [i_27])))));
        var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) min(((+(min((((/* implicit */long long int) (unsigned char)6)), (arr_1 [(short)7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_27] [i_27] [i_27] [(unsigned short)0] [i_27])) ? (((/* implicit */unsigned int) ((arr_29 [i_27] [(unsigned char)2] [i_27] [(short)1] [i_27] [(short)1]) & (((/* implicit */int) var_0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_20 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [(_Bool)1])))))))))));
    }
    var_63 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) var_16))))), (5660969936571453361LL)))) ? (min((18446744073709551604ULL), (((/* implicit */unsigned long long int) (short)31744)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_64 = ((/* implicit */int) var_6);
}
