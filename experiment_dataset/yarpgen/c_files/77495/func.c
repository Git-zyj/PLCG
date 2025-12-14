/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77495
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((unsigned int) -3668122572841460453LL)), (((/* implicit */unsigned int) ((((/* implicit */int) max(((short)30577), (((/* implicit */short) var_3))))) / (((/* implicit */int) (signed char)-116)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1 + 3] [(short)2] [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((((int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) var_7))))) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_1] [i_2] [i_1] [i_0])))) + (((((/* implicit */_Bool) -3668122572841460465LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) - (8562675389891654604LL)))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)1994)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3668122572841460453LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_0])))))))) >> ((+(((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 3])))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (1114636406U)))) : (min((arr_4 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6388930517664414214LL)) ? (-33369492530737761LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54216)))))))))));
                                var_12 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) var_3))) & ((~(7621973978519577062LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                for (signed char i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_13 = ((/* implicit */int) ((((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */_Bool) 5510386810087965977LL)) || (arr_6 [i_0] [i_5])))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_6 [i_6] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_5] [i_5])), ((unsigned short)54224))))) : (((((/* implicit */_Bool) arr_29 [i_8] [i_5] [i_7 - 1] [i_6] [i_5] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65504))) : (arr_8 [(unsigned short)6] [i_5] [i_6 - 1] [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_23 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_10)))))))));
                            arr_30 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6 + 1] [i_5] [i_6 + 2]))) ^ (((arr_21 [4LL] [i_5]) ? (arr_23 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6 + 2]))))))) / (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)63517)))))))));
                            arr_31 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */long long int) arr_12 [i_6 + 2] [i_0]);
                        }
                        arr_32 [10ULL] [i_5] [i_5] [i_7 - 1] = arr_10 [i_0] [i_0] [i_6 - 1] [i_7 - 2];
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) 1072205482)), (arr_4 [i_0] [i_0]))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 4LL))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38753)) / (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_0] [i_0])))))));
            var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_8) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)30577)) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_0] [i_0])))) : ((~(((/* implicit */int) (signed char)64))))))), (max((((/* implicit */unsigned int) var_4)), (arr_28 [(unsigned short)0] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        }
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 11; i_9 += 1) 
        {
            for (unsigned short i_10 = 4; i_10 < 9; i_10 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned int) ((short) (~(16252928U))));
                        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_11] [i_11 - 2] [i_10 + 3] [5LL] [i_9 - 2] [i_9]))));
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_10] [i_9 + 1] [i_10] [i_10 - 1]))))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_9 - 2] [i_0] [i_10 + 2]))) % (-6551977060941593240LL))) - (53967LL)))));
                    var_19 ^= ((/* implicit */signed char) min((max((arr_37 [i_0] [i_9] [i_10 - 1] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55838)) ? (arr_34 [i_0] [i_9] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)54224)) : (((/* implicit */int) (unsigned char)168)))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_12 = 3; i_12 < 9; i_12 += 3) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_10))));
            /* LoopNest 3 */
            for (unsigned short i_13 = 2; i_13 < 11; i_13 += 3) 
            {
                for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (+(arr_4 [i_12 - 2] [i_14 - 2])));
                            arr_51 [i_13] [i_13] [i_13] [i_13] [5ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_29 [i_0] [(unsigned short)8] [i_0] [(unsigned short)8] [i_0] [i_13] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_13 - 1] [i_14 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_16 = 2; i_16 < 11; i_16 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11349)) / (((/* implicit */int) arr_49 [i_16] [i_17] [i_17] [i_16] [i_16]))));
                /* LoopNest 2 */
                for (short i_18 = 3; i_18 < 9; i_18 += 3) 
                {
                    for (unsigned char i_19 = 3; i_19 < 11; i_19 += 4) 
                    {
                        {
                            arr_64 [i_0] [i_18] [i_0] [i_18] [i_19] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_60 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_52 [i_0] [i_0])))) : (((/* implicit */int) (_Bool)1)));
                            arr_65 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-27747)) : (((/* implicit */int) (signed char)117))));
                            arr_66 [i_0] [i_16] [i_16 - 1] [i_16] [i_18 + 3] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_16 - 1] [6] [i_18 - 2] [i_19 - 3] [i_19 - 1])) & (((/* implicit */int) arr_16 [i_0] [i_16] [(unsigned char)10] [(unsigned char)10]))));
                            var_23 &= ((/* implicit */long long int) ((((((/* implicit */int) var_6)) / (((/* implicit */int) var_7)))) <= (((/* implicit */int) arr_25 [i_16] [i_16] [i_18 - 3] [i_19 - 2]))));
                        }
                    } 
                } 
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0])) ? (968139377156809478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (arr_54 [i_16 - 2])))) : (((((/* implicit */int) arr_21 [i_17] [i_17])) * (((/* implicit */int) var_7)))));
                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_4))) * (((/* implicit */int) (unsigned short)26635))));
            }
            for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0)))))))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((var_9) << (((/* implicit */int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_16] [i_16 - 1] [i_16 - 2]))))))));
            }
            for (unsigned int i_21 = 1; i_21 < 11; i_21 += 4) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) arr_63 [i_16] [i_16 - 1])))))));
                var_29 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_16 + 1] [i_16 + 1]))) == (-3668122572841460453LL)));
                arr_72 [1ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39567))) / (arr_1 [i_16 + 1])));
            }
            var_30 += ((/* implicit */unsigned int) (((-(arr_1 [i_16 + 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7ULL)) || ((_Bool)1)))))));
        }
        for (signed char i_22 = 2; i_22 < 10; i_22 += 4) 
        {
            var_31 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_22 + 2] [i_22 + 1] [i_0]))) ^ (((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */long long int) arr_9 [i_22] [i_0])) : (arr_46 [5ULL] [i_22] [(_Bool)1] [5ULL] [(_Bool)1] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-15360)) ^ (((/* implicit */int) (unsigned char)251)))))));
            var_32 = ((/* implicit */int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((-(5126552367940573029ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        }
    }
    /* vectorizable */
    for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
    {
        arr_78 [i_23] = ((/* implicit */unsigned short) (-(2441592251U)));
        arr_79 [(unsigned char)6] = ((/* implicit */int) (+(arr_75 [i_23])));
        /* LoopNest 2 */
        for (unsigned char i_24 = 3; i_24 < 21; i_24 += 4) 
        {
            for (unsigned short i_25 = 1; i_25 < 21; i_25 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 4; i_26 < 22; i_26 += 3) 
                    {
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                        {
                            {
                                arr_90 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65511)) ? (arr_75 [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                                var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_87 [i_27 - 1] [(_Bool)1] [i_23] [i_23] [i_23]))));
                                var_34 ^= ((/* implicit */unsigned short) (-(((int) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_28 = 2; i_28 < 22; i_28 += 3) 
                    {
                        arr_94 [i_25] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1924498496)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)17084))))));
                        arr_95 [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_75 [i_23])))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)16)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_29 = 0; i_29 < 24; i_29 += 2) 
                    {
                        var_35 = ((((((/* implicit */_Bool) (unsigned short)11292)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_96 [i_23] [i_24] [i_25]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) arr_86 [i_23] [i_23] [i_23] [i_23] [i_23])) : (((/* implicit */int) (short)15360))))));
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32909))));
                        var_37 = ((/* implicit */unsigned int) (short)2162);
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_30 = 0; i_30 < 14; i_30 += 4) 
    {
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            {
                arr_106 [i_30] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_97 [i_31] [i_31] [i_30] [i_30])), (var_1)))), ((~(var_11)))));
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 0; i_32 < 14; i_32 += 2) 
                {
                    for (unsigned short i_33 = 0; i_33 < 14; i_33 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2019)) ^ (((((/* implicit */_Bool) arr_108 [i_30])) ? (((/* implicit */int) ((((/* implicit */int) arr_82 [i_30] [i_30] [i_32] [i_33])) != (-1073741824)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_101 [i_30]))))))))))));
                            arr_113 [i_32] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12668))) : (2U))))) >> (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            arr_114 [i_33] [i_32] [i_31] [i_30] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_80 [i_30] [i_30]))));
                        }
                    } 
                } 
                arr_115 [7U] [i_30] [i_30] = min((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_87 [i_30] [i_30] [i_30] [i_30] [i_30]))))), (((unsigned short) 9454176724123154499ULL))))), (((((((/* implicit */_Bool) arr_80 [i_30] [i_31])) || (((/* implicit */_Bool) -1792260731)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)57)) : (1873264941))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [(unsigned short)8] [i_30]))))))));
                arr_116 [i_30] [i_31] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1792260743)) ? (9454176724123154497ULL) : (((/* implicit */unsigned long long int) 1978465996U))))) ? (max((((/* implicit */long long int) var_2)), (arr_81 [i_30]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1978465996U)) ? (2733078925U) : (2U)))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2553827887440630006LL)) ? (arr_105 [i_30] [i_31]) : (((/* implicit */int) arr_98 [i_30]))))) != (((((/* implicit */_Bool) (unsigned short)62087)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_31] [17LL]))))))))));
            }
        } 
    } 
    var_39 -= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((-2075409831666259332LL) & (((/* implicit */long long int) 3741961075U)))))))) : (((/* implicit */int) var_5)));
}
