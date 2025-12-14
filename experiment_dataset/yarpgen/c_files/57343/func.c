/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57343
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) ^ (max((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))))));
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (var_10)))))));
        }
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_15)) < (arr_2 [i_0])))) : (((/* implicit */int) var_0)))) >> (((((var_11) / (arr_10 [i_0] [i_2 + 2] [i_3] [i_2]))) + (30)))));
                        arr_13 [i_2] = ((/* implicit */int) ((signed char) ((unsigned char) (_Bool)0)));
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) ((long long int) (-(var_5))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (min((var_2), (((/* implicit */unsigned long long int) (unsigned short)57925)))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))))) ? (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((var_15) <= (((/* implicit */int) var_13))))) : (((/* implicit */int) (unsigned short)2147)))) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)188)))) >= (((/* implicit */int) arr_9 [i_2 + 3])))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((_Bool) (_Bool)0)))));
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3935)) ? (-1LL) : (((/* implicit */long long int) -716882855))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (((unsigned long long int) var_6))))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned int) var_11)) != (32767U)))), (arr_3 [i_0])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                var_26 = ((/* implicit */short) var_8);
                var_27 = ((/* implicit */int) ((_Bool) var_12));
                arr_21 [i_5] [i_5] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)52365)) ? (arr_1 [i_5]) : (((/* implicit */unsigned int) arr_12 [i_6]))))));
                var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3944))))) : (arr_16 [i_6])));
                arr_22 [i_0] = ((/* implicit */int) ((unsigned long long int) ((arr_2 [i_6]) != (((/* implicit */unsigned int) var_9)))));
            }
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) arr_27 [i_8] [i_8 - 2] [i_5] [i_5]));
                            var_29 += var_3;
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_5]))) - (((((/* implicit */unsigned long long int) 4294967295U)) + (18446744073709551615ULL)))))));
                            arr_32 [i_0] [i_0] [i_7] [i_7] [i_8] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(arr_12 [i_7])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_19 [i_7] [i_8] [i_9]))))) * ((-(arr_16 [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_5] [i_7] [i_8 - 2])) ? (((/* implicit */unsigned long long int) var_15)) : (18446744073709551615ULL))))))))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0]) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (_Bool)1))))) ^ (min((((/* implicit */unsigned int) arr_12 [i_0])), (arr_23 [i_0] [i_0] [i_0] [i_0])))))) : (min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_0))))));
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 1; i_11 < 21; i_11 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (short i_14 = 1; i_14 < 22; i_14 += 2) 
                    {
                        {
                            arr_46 [i_10] [i_11] [i_13] [i_13] [i_11] [i_11] [i_14] = ((/* implicit */short) var_11);
                            var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)255)) : (-2064761845)));
                        }
                    } 
                } 
            } 
            arr_47 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))), (((((/* implicit */_Bool) 113315558997733966LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1002878841)) / (var_5)))) ? (((((/* implicit */_Bool) arr_0 [i_10])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))) : (((/* implicit */unsigned long long int) arr_10 [i_11] [i_11] [i_11 + 1] [(signed char)18]))));
            var_32 = ((int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) arr_37 [i_10] [i_11] [i_10] [i_10]))))) ? (8LL) : (((long long int) var_14))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_50 [i_10] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) arr_29 [i_15] [i_15] [i_15] [i_10] [i_10]))) / (max((arr_42 [i_10]), (arr_1 [i_10]))))))));
            var_33 = ((/* implicit */long long int) arr_37 [i_10] [i_10] [i_15] [i_15]);
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                arr_53 [i_10] [i_10] [i_16] [i_16] = ((/* implicit */short) arr_17 [i_15] [i_16]);
                /* LoopSeq 1 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((unsigned short) ((int) ((var_5) < (((/* implicit */unsigned int) -6685841)))))))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_52 [i_10] [i_15])) ? (var_9) : (((/* implicit */int) var_0)))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)14))))) > (((((/* implicit */_Bool) var_1)) ? (arr_24 [i_17] [i_16] [i_15]) : (arr_2 [i_10])))))))));
                }
            }
            var_36 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (+(var_9)))) ? (min((((/* implicit */unsigned long long int) var_4)), (4ULL))) : (arr_16 [i_10]))));
            arr_56 [i_15] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-32759))))) : (var_10)));
        }
        /* LoopNest 2 */
        for (signed char i_18 = 1; i_18 < 21; i_18 += 4) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_62 [i_10] [i_19] [i_19] = ((/* implicit */unsigned int) var_12);
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 3) 
                        {
                            {
                                var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_18 + 1] [i_18 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (max((arr_57 [i_18 + 2] [8]), (((/* implicit */unsigned int) var_15)))) : (min((arr_57 [i_18 + 2] [i_21]), (arr_57 [i_18 + 1] [i_21])))));
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_52 [i_10] [i_10])) ? (arr_42 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((/* implicit */int) ((var_11) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) 19ULL))))))))));
                                arr_68 [i_10] [i_18 + 1] [i_19] [i_10] [i_19] [i_18 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_10] [i_18] [i_18]))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) ^ (var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) / (max((((/* implicit */unsigned int) (-(var_15)))), (arr_23 [i_10] [i_10] [i_10] [i_10]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_22 = 2; i_22 < 19; i_22 += 2) 
        {
            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_43 [i_22] [i_10] [i_22] [i_22 - 1] [i_22 - 2] [i_22] [i_10]))));
            var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_22 + 3]))));
        }
        for (int i_23 = 0; i_23 < 23; i_23 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) ? (arr_33 [i_10]) : (((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_77 [i_10] [i_23] [i_24] [i_10])), (var_7))))));
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) var_2))));
                arr_79 [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_61 [i_10] [15] [i_10])))) + (((/* implicit */int) ((signed char) var_6)))))) ? (((arr_69 [i_10]) / (arr_69 [i_23]))) : (((/* implicit */int) (unsigned short)65535)));
                var_44 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_26 [i_23] [i_10] [i_24] [i_24] [i_24])))));
            }
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (5116931635270702677LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) arr_19 [i_10] [i_10] [i_10])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -5116931635270702677LL)) || (((/* implicit */_Bool) ((unsigned char) arr_66 [i_10] [i_10] [i_23] [i_23] [i_23] [i_10])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_10] [(unsigned short)7] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_10])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_14))))))))));
            arr_80 [i_10] [i_23] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1023135617)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_8)) : (var_10))) : (((/* implicit */long long int) ((unsigned int) 4294967295U)))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_23] [i_10] [i_10] [i_10]))) : (4ULL))))));
            var_46 += ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) min((var_2), (((/* implicit */unsigned long long int) arr_49 [(unsigned char)8] [i_10] [i_10]))))));
        }
        for (signed char i_25 = 3; i_25 < 22; i_25 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_26 = 0; i_26 < 23; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_27 = 1; i_27 < 22; i_27 += 2) 
                {
                    for (int i_28 = 1; i_28 < 21; i_28 += 1) 
                    {
                        {
                            var_47 += ((/* implicit */unsigned char) (((((_Bool)1) || (((/* implicit */_Bool) min((arr_23 [i_10] [i_25] [i_25] [i_27 + 1]), (((/* implicit */unsigned int) arr_82 [i_27] [i_10]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_16) ? (var_10) : (((/* implicit */long long int) var_6))))) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_13))));
                            arr_92 [i_26] [i_26] [i_26] = ((var_7) / (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_38 [i_26])))) ? (arr_89 [i_26] [i_27] [i_26] [i_25 + 1] [i_10] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_27 + 1] [i_25] [i_28 + 2] [i_10])))))));
                            var_48 = ((((((/* implicit */int) var_3)) == (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_13))))))) ? (((int) ((_Bool) arr_64 [i_10] [i_26] [i_26] [i_28]))) : (((((/* implicit */int) arr_66 [i_26] [i_27 - 1] [i_28] [i_27] [i_28 - 1] [i_27])) >> (((/* implicit */int) arr_66 [i_10] [i_27 - 1] [i_26] [i_26] [i_28 + 1] [i_10])))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) max(((~(arr_90 [i_10] [i_10] [i_25 - 2] [i_26] [i_26] [i_26]))), (((/* implicit */unsigned int) ((int) -690625671))))))));
            }
            for (short i_29 = 2; i_29 < 19; i_29 += 3) 
            {
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 23; i_30 += 2) 
                {
                    for (unsigned long long int i_31 = 1; i_31 < 21; i_31 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */int) max((var_50), (((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_64 [i_10] [i_10] [i_29] [i_30]))))))) ? (((((/* implicit */_Bool) (+(-887182836)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) arr_69 [i_25 - 3])))))));
                            var_51 += ((/* implicit */_Bool) arr_11 [i_31 + 1] [13LL] [i_29] [i_25] [i_10]);
                            arr_99 [i_10] [i_10] [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */unsigned long long int) -690625671)) : (974456638781785382ULL));
                            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10])) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (-5116931635270702692LL)))) || (((/* implicit */_Bool) arr_4 [i_25] [i_25 - 1] [i_25])))))))));
                            var_53 = ((/* implicit */int) ((_Bool) ((arr_16 [i_31 + 2]) ^ (((/* implicit */unsigned long long int) var_9)))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) var_10))));
            }
            for (unsigned short i_32 = 2; i_32 < 21; i_32 += 4) 
            {
                arr_103 [i_25] [i_25] [i_25] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31182)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)1)))))));
                var_55 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 1791430220U))) ? (arr_75 [i_10] [i_25 + 1] [i_32 + 2]) : (((long long int) var_5))));
                arr_104 [i_32] [i_25 - 3] [i_25 - 2] [i_10] |= ((/* implicit */int) max((var_10), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) arr_78 [i_10])) ? (arr_90 [i_10] [i_10] [i_32] [i_32] [i_32] [i_32]) : (((/* implicit */unsigned int) arr_10 [i_10] [i_25] [i_32] [i_10])))))))));
                var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_15 [i_10] [i_25])))) + (((unsigned long long int) arr_102 [i_10] [i_10] [i_32])))))));
            }
            arr_105 [i_10] [i_25] = arr_11 [i_10] [i_10] [i_10] [i_25] [i_25];
        }
    }
    for (unsigned char i_33 = 0; i_33 < 23; i_33 += 4) /* same iter space */
    {
        var_57 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_27 [i_33] [i_33] [i_33] [i_33])))));
        var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) var_4))));
        var_59 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_16)))));
        var_60 = ((/* implicit */int) ((unsigned int) 1579638019594624925ULL));
    }
    var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) var_13))));
}
