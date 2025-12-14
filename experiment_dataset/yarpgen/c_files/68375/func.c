/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68375
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
    var_20 += var_19;
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned char)0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [14LL] = ((/* implicit */unsigned short) arr_7 [i_1] [1LL] [i_3 - 2]);
                        var_22 = 4294967276U;
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 3; i_5 < 14; i_5 += 2) 
            {
                var_23 -= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (-(var_0)))) ? (min((arr_9 [i_0] [i_4] [i_5 - 1] [i_5]), (((/* implicit */long long int) (unsigned char)30)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -7901899950930782097LL)) ? (733401675) : (((/* implicit */int) (unsigned char)7))))))));
                var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (short)-440)) ? (((/* implicit */int) (_Bool)1)) : (-1601091482))))) ? (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_5])) : (arr_7 [i_0] [i_0] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_5] [i_0 - 1])) && (((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_5] [i_5])))))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (int i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (11648510344193503163ULL)));
                            arr_22 [(unsigned char)14] [i_4] [i_5] [i_6] [i_4] |= min((((((/* implicit */int) (unsigned char)245)) | (((/* implicit */int) arr_21 [i_0 - 1] [i_4] [i_5 + 1] [i_5] [i_6] [i_7])))), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_0] [i_4] [i_4 - 2] [i_4] [i_6] [i_7 - 2])))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(arr_6 [i_0] [i_4] [i_6] [i_7]))))));
                            arr_23 [i_0] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */int) (~(max((((/* implicit */long long int) (unsigned char)250)), (arr_6 [i_4 - 2] [i_5 + 1] [i_5] [i_7 - 1])))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_0)) | (var_8)))) ? ((~(18446744073709551588ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_6]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)419)) >= (arr_4 [i_0 - 2] [i_7 + 1]))))) : (var_1))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)200)))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_4] [i_8])) && (((/* implicit */_Bool) (-(1974390308U))))));
                var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */int) var_10)) % (arr_7 [i_0 - 1] [i_4 - 1] [i_4])))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned char)252)) - (230))))))))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(9223372036854775807LL))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_11 = 2; i_11 < 12; i_11 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) ((arr_1 [i_0 + 1]) > (((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_4] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_8] [12U]))) : (arr_1 [i_4 + 1])))));
                    var_34 = (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_4 - 2] [i_8] [i_11] [i_11 - 1])));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) ((((var_1) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_30 [i_0] [i_4] [i_8] [i_12 - 1])) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_8])) : (var_1))) - (431250367LL)))));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_19 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4404524345029676161LL))))))));
                }
                var_37 = arr_20 [i_0] [i_8];
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        var_38 |= ((/* implicit */int) var_8);
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0 - 1] [i_0 - 1]))) ? (min((4047551482776280833LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (-(arr_4 [i_0 - 2] [i_0 - 1]))))));
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (~((((!(var_4))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (var_7))))))));
                    }
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_8)) != (arr_31 [i_0] [i_0] [i_0] [i_0] [i_15])));
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 14; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) (((((-(arr_19 [i_0] [i_15]))) != (((/* implicit */long long int) ((arr_43 [i_16]) >> (((6798233729516048453ULL) - (6798233729516048424ULL)))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0 + 1] [i_16 - 1]))) >= ((~(4554629711286032757LL))))))));
                        var_43 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_15] [i_0 - 1] [i_16] [i_17] [i_16])) ? (17008538069254312735ULL) : (((/* implicit */unsigned long long int) arr_38 [i_0] [i_15] [i_16] [i_17])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56))))))));
                    }
                } 
            } 
            var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1) == (arr_2 [i_0 - 1]))))) == (((unsigned long long int) arr_32 [i_0 - 1] [i_0 - 1] [11U] [i_0] [i_0 + 1] [i_0 + 1]))));
            var_45 -= ((/* implicit */unsigned char) (-(11648510344193503142ULL)));
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 13; i_18 += 2) 
        {
            var_46 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_45 [i_0 + 1] [i_0 + 1] [i_18] [i_18 - 2]))));
            var_47 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
        }
        for (int i_19 = 0; i_19 < 15; i_19 += 3) 
        {
            var_48 |= ((/* implicit */unsigned int) var_18);
            var_49 += ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) arr_4 [i_0] [i_0]))), (arr_24 [i_0] [i_0 - 1] [i_19] [(_Bool)1])));
            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_46 [i_0] [i_19] [i_19] [i_19])))) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_21 = 2; i_21 < 14; i_21 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_22 = 1; i_22 < 14; i_22 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned char) var_11);
                        var_52 += ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned char)211), (((/* implicit */unsigned char) ((var_2) && (((/* implicit */_Bool) var_17))))))))));
                    }
                    var_53 |= ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) var_2))))));
                    arr_63 [i_0] [i_21] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)251))))) == (((/* implicit */int) arr_12 [i_0 - 2] [i_19])))))));
                }
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    var_54 = (~(((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (_Bool)1)) : (var_11))));
                    var_55 = ((max((1016U), (((/* implicit */unsigned int) arr_37 [i_0 + 1] [i_23 - 1])))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0 + 1] [i_23 - 1]))));
                }
                var_56 -= ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (-(var_12)))));
                var_57 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_14)), (arr_44 [i_0] [i_19] [i_20])));
            }
            /* vectorizable */
            for (unsigned short i_24 = 4; i_24 < 14; i_24 += 3) 
            {
                var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) (+(((var_2) ? (var_11) : (((/* implicit */int) var_14)))))))));
                /* LoopNest 2 */
                for (unsigned char i_25 = 1; i_25 < 12; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        {
                            var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) (~(arr_38 [i_24] [i_24 - 3] [i_24] [i_24]))))));
                            var_60 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_20 [i_0] [i_19])) >= (676102288U)))) : ((+(var_12)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 15; i_27 += 2) 
                {
                    for (unsigned short i_28 = 0; i_28 < 15; i_28 += 1) 
                    {
                        {
                            var_61 = ((/* implicit */long long int) (~(((((/* implicit */int) (signed char)-51)) - (var_17)))));
                            var_62 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) ((((/* implicit */_Bool) 2050885790U)) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1]))))))));
                    arr_82 [i_29] = arr_34 [i_0 - 1] [i_24 - 2] [i_0 - 1] [i_24];
                    var_64 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)63078)) != (((/* implicit */int) (_Bool)1)))))));
                    var_65 = ((/* implicit */unsigned char) min((var_65), (((/* implicit */unsigned char) ((arr_58 [i_0 - 2] [i_0 + 1] [i_24 - 1]) && (arr_58 [i_0 + 1] [i_0 - 1] [i_24 - 2]))))));
                    var_66 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(short)6] [i_0 + 1] [i_24 - 3]))) + (var_1)));
                }
            }
            var_67 = (!(((/* implicit */_Bool) var_13)));
        }
        /* LoopNest 2 */
        for (int i_30 = 1; i_30 < 12; i_30 += 3) 
        {
            for (unsigned int i_31 = 0; i_31 < 15; i_31 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_32 = 2; i_32 < 14; i_32 += 3) 
                    {
                        var_68 *= ((/* implicit */long long int) arr_85 [i_0] [i_30] [i_31] [i_32]);
                        var_69 -= ((/* implicit */_Bool) min((14), (((/* implicit */int) (unsigned char)174))));
                        var_70 -= ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_28 [i_0 - 2] [i_32 + 1])));
                    }
                    for (long long int i_33 = 0; i_33 < 15; i_33 += 3) 
                    {
                        var_71 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [10])) : (var_17)))) == (((((/* implicit */_Bool) var_13)) ? (var_9) : (var_7))))))) + (4294967295U)));
                        var_72 += (-(((/* implicit */int) ((((((/* implicit */_Bool) 1573742127U)) ? (((/* implicit */long long int) 234881024)) : (arr_27 [i_0] [i_0] [i_0] [i_33]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3097111097U))))))))));
                        var_73 = ((/* implicit */short) ((var_2) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_69 [i_0] [i_30] [i_30]))))) : (((((/* implicit */_Bool) arr_61 [i_0 - 1] [i_30] [i_30 + 1] [i_31] [4LL])) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_30] [i_31] [i_33]))) : (var_7))) : (((/* implicit */long long int) (~(609441451))))))));
                    }
                    var_74 = ((/* implicit */int) min((var_74), ((+(((/* implicit */int) arr_59 [i_0] [i_30] [i_31] [i_31]))))));
                }
            } 
        } 
    }
    var_75 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (!(((/* implicit */_Bool) 9822340388334010824ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (unsigned char)12))))))))));
}
