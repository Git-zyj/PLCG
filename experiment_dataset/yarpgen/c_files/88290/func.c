/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88290
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_8)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(var_8))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) 2009959249);
                        var_20 = (+(((/* implicit */int) var_9)));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [12ULL] [i_3])) ? (((/* implicit */int) arr_3 [i_3 - 1])) : (((/* implicit */int) (signed char)84))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
                            var_23 = ((((/* implicit */_Bool) (+(0ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned long long int) arr_14 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) || (((/* implicit */_Bool) var_8)))))));
                        }
                        var_24 *= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) (+((~(0ULL)))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_0))));
                        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((7ULL) / (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1])) || ((_Bool)1))))) : (arr_17 [i_6] [i_2] [3ULL] [i_0])));
                        var_27 = ((/* implicit */signed char) (+(0ULL)));
                        var_28 = ((arr_2 [i_0] [i_0] [i_2]) + (18446744073709551601ULL));
                    }
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned long long int) ((((var_0) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_8])) - (23427))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_30 = ((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0])) >= (var_2));
                        }
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */long long int) ((signed char) arr_0 [i_0]));
        arr_26 [i_0] = var_15;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
    {
        arr_29 [(short)4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) > (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
        arr_30 [i_9] = ((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)0)) + (var_12)))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_33 [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))));
            arr_34 [i_10] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (signed char)-18)))));
            var_32 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8690310790714521350LL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1))))) + (18446744073709551602ULL));
            arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9]))) : (arr_20 [i_9] [i_9] [i_9] [i_9])));
        }
        for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 3) 
        {
            arr_39 [i_11] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_9])) : (arr_9 [i_11]))));
            /* LoopNest 3 */
            for (unsigned char i_12 = 1; i_12 < 7; i_12 += 2) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            var_33 &= ((/* implicit */long long int) ((int) arr_40 [i_11 - 2] [i_13 - 1]));
                            var_34 *= ((/* implicit */int) arr_7 [10ULL] [i_13] [i_9] [i_11 - 3] [10ULL]);
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((arr_4 [i_11 - 1]) ? (arr_45 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 + 1] [2ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13]))) > (15ULL))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (short)-32433)) : (((/* implicit */int) arr_3 [i_15]))))), (var_0)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) / (min((((/* implicit */unsigned long long int) (short)32432)), (18446744073709551598ULL)))))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_15]))))) % (((var_6) ? (arr_7 [i_15] [(signed char)1] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) arr_23 [i_15] [i_15] [i_15]))))))) ? (min((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */int) arr_11 [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_5))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_36 [i_15] [i_15])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
        {
            var_38 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_10 [i_16] [i_16] [i_16] [i_16]) ? (arr_7 [4U] [i_16] [i_16] [i_15] [4ULL]) : (15ULL))))));
            arr_52 [10LL] [i_16] [(signed char)8] &= ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_28 [i_15])) ? (arr_28 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32433))))), (((var_8) % (var_13)))));
            var_40 += ((/* implicit */short) max((arr_5 [i_15] [i_17] [i_17]), (((max((var_8), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_11)))))))));
            var_41 ^= ((min((arr_22 [(_Bool)1] [i_15] [i_17]), (arr_31 [i_15] [i_15] [i_15]))) * (((/* implicit */long long int) ((((/* implicit */int) max(((signed char)-109), (((/* implicit */signed char) (_Bool)0))))) * (((((/* implicit */int) arr_38 [i_15])) * (((/* implicit */int) var_4))))))));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_18]) ? (var_14) : (((/* implicit */unsigned long long int) 4194303U))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)0)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 3) 
            {
                arr_64 [(_Bool)1] [i_18] [i_20] = ((/* implicit */signed char) ((arr_28 [i_20 + 1]) % (arr_28 [i_20 + 1])));
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) 1282035195281976943ULL))));
                var_44 = (!((!((_Bool)1))));
                /* LoopSeq 4 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_20 + 1] [i_20] [i_20] [i_20 + 1])) ? (arr_7 [i_20 - 1] [i_20] [i_20] [i_20 - 1] [i_18]) : (((/* implicit */unsigned long long int) 1U))));
                    arr_69 [i_18] [i_18] [i_20 - 1] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_18] [i_20 - 1] [i_20 - 1])) ? (((/* implicit */int) arr_44 [i_18] [i_18] [i_18] [i_21] [i_18] [i_18] [i_18])) : (((/* implicit */int) var_16))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_46 = var_4;
                    arr_72 [i_18] [i_18] [i_19] [i_18] [i_18] = ((/* implicit */_Bool) var_10);
                }
                for (long long int i_23 = 0; i_23 < 11; i_23 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_24 = 2; i_24 < 10; i_24 += 2) 
                    {
                        arr_80 [i_23] [i_23] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((arr_32 [i_23] [i_20 - 1] [i_18]) < (arr_32 [i_23] [i_20 + 1] [(_Bool)1])));
                        var_47 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 39ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_15 [i_18] [i_19] [i_20 - 1] [i_24 - 1] [i_24 + 1] [i_19])));
                        var_48 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) % (((/* implicit */int) arr_0 [i_24 - 1]))));
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_18] [i_19] [i_20 + 1] [(_Bool)1])) % (((/* implicit */int) arr_10 [i_18] [i_19] [i_20 - 1] [i_19]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_70 [i_18] [i_20 - 1] [i_20 - 1] [i_18] [i_18] [i_18]) != (((/* implicit */long long int) arr_16 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
                        var_51 *= ((/* implicit */unsigned long long int) ((signed char) (signed char)102));
                        arr_84 [i_18] [i_20] [i_18] = ((/* implicit */unsigned char) var_11);
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_88 [i_18] [i_18] [i_19] [(_Bool)1] [i_18] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(8449457454638367270LL)))) % (((((/* implicit */_Bool) arr_42 [i_19])) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551589ULL)))));
                        arr_89 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_67 [i_23] [i_18] [i_18] [i_18])))) : ((-(((/* implicit */int) (_Bool)1))))));
                        var_52 = ((/* implicit */_Bool) var_12);
                        var_53 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17010331330413774718ULL)) && ((_Bool)1))))) * (var_13));
                        var_54 -= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                    }
                }
                for (long long int i_27 = 0; i_27 < 11; i_27 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) (signed char)-100))));
                    var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_18] [i_20] [i_20] [i_20 - 1] [i_20 - 1] [i_20])) ? (arr_70 [i_18] [i_18] [i_18] [i_20] [i_20 + 1] [i_27]) : (arr_70 [i_18] [i_18] [i_18] [i_20] [i_20 - 1] [i_27])));
                }
                arr_93 [i_18] [i_18] [i_20] = ((/* implicit */unsigned char) arr_38 [i_20 - 1]);
            }
        }
        var_57 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_18])) && (var_16)))));
        arr_94 [i_18] [(short)6] |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (244336859)));
        arr_95 [i_18] = (-(((/* implicit */int) (signed char)-103)));
    }
    /* LoopNest 3 */
    for (signed char i_28 = 0; i_28 < 19; i_28 += 3) 
    {
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_31 = 1; i_31 < 17; i_31 += 2) 
                    {
                        for (signed char i_32 = 1; i_32 < 16; i_32 += 2) 
                        {
                            {
                                arr_109 [i_29] [i_30] [i_29] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (unsigned char)253)) : (-244336859)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) max((var_2), (((/* implicit */long long int) arr_8 [i_28] [i_28] [i_28] [i_30])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? (var_15) : (var_10)))) ? (min((var_13), (((/* implicit */unsigned long long int) arr_1 [i_32])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_28] [i_28] [i_30] [i_30]))) * (var_14)))))));
                                var_58 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) var_11))), (((arr_102 [i_28] [i_30] [i_30] [i_31]) ? (arr_97 [i_28]) : (((/* implicit */int) arr_102 [i_29] [i_30] [18ULL] [i_32]))))));
                                arr_110 [i_30] [i_31] [i_31] = ((/* implicit */unsigned int) max((min((var_15), (((/* implicit */long long int) arr_98 [i_31 + 1])))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_98 [i_31 + 1]))) <= (var_13))))));
                            }
                        } 
                    } 
                    var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) max((max((arr_7 [i_29] [i_29] [i_29] [i_29] [(signed char)6]), (arr_7 [i_28] [6ULL] [i_29] [i_30] [16U]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16)))))))))))));
                    var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((var_1) <= (((/* implicit */unsigned int) 1390468945))))), (min((((/* implicit */unsigned long long int) -7977855979821407251LL)), (1661758538652994760ULL))))))));
                }
            } 
        } 
    } 
}
