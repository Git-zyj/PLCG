/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64822
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [2LL])) ? (((/* implicit */long long int) var_4)) : (var_16))), (((/* implicit */long long int) arr_2 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((3591421062841452226ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))))))) : (((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) / (max((var_16), (((/* implicit */long long int) arr_0 [3]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_19 += arr_6 [i_2 + 1] [i_2 - 2];
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_20 = ((/* implicit */short) ((23246246975264083ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (0LL))))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 23246246975264058ULL)))))) : (((/* implicit */int) ((unsigned short) ((1799309272U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 2])))))))));
                        arr_16 [i_2] [i_3] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_14 [i_2 - 2] [i_4] [i_4] [i_2 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_11)))))))) ? (((long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 2] [10U] [i_5])) || (((/* implicit */_Bool) 1799309272U))))) : (min((arr_8 [i_2 - 2] [i_2 - 2] [i_4]), (((/* implicit */long long int) ((7575710161015747556LL) <= (-1721837087034341901LL))))))));
                        var_22 = (((!(((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_4])))) && (((/* implicit */_Bool) min((arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_4]), (arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_4])))));
                        var_23 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) 18423497826734287520ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (var_1))), (((/* implicit */long long int) min((arr_10 [i_2] [i_5]), (((/* implicit */short) var_15))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_12))))) * (((/* implicit */int) ((_Bool) var_8))))))));
                    }
                } 
            } 
            var_24 *= ((/* implicit */unsigned short) ((((min((var_6), (((/* implicit */unsigned long long int) (short)22737)))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_12 [i_2] [(unsigned char)14]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1805826686U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_1)))))))) ? (((((/* implicit */int) ((-3248320227410877536LL) <= (arr_9 [i_2 + 1] [i_3] [i_3])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(_Bool)0] [4LL] [4LL] [i_2 - 1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_8 [(unsigned short)16] [i_2 - 1] [i_2 + 1])))))));
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            arr_20 [i_2 - 2] [i_2 - 2] = arr_13 [i_2 - 1] [i_2 - 1] [i_6] [(unsigned short)11];
            arr_21 [i_2 - 1] [i_6] = ((long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_10 [i_2] [i_6])))));
            var_26 = ((/* implicit */unsigned int) min((((max((((/* implicit */unsigned long long int) arr_19 [i_6])), (18423497826734287532ULL))) << (((((((/* implicit */_Bool) 23ULL)) ? (arr_17 [i_2] [i_2]) : (18423497826734287532ULL))) - (17547927906278246540ULL))))), (((/* implicit */unsigned long long int) ((arr_19 [i_2 - 1]) <= (arr_19 [i_2 + 2]))))));
        }
        for (int i_7 = 3; i_7 < 15; i_7 += 3) 
        {
            arr_25 [i_2 + 2] = ((/* implicit */int) max(((short)22755), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_2 - 1] [4ULL])))))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_33 [i_7 + 1] [i_7 - 2] [i_8] [i_7 - 2] [i_8] [i_7 - 2] [(short)3] = ((/* implicit */unsigned long long int) ((max((arr_8 [i_2] [i_2] [i_7 - 3]), (((/* implicit */long long int) arr_29 [i_8])))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_2 + 1] [i_8] [i_8] [i_10 + 1]))))) == (min((((/* implicit */unsigned int) arr_29 [i_8])), (var_4)))))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned long long int) 0LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (var_1)))) ? ((~(var_16))) : (max((((/* implicit */long long int) (signed char)84)), (var_16)))))) : (((((((/* implicit */unsigned long long int) var_1)) % (arr_11 [i_8] [(unsigned short)11] [i_7 + 2] [i_8]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18423497826734287525ULL)) ? (((/* implicit */int) arr_13 [i_8] [i_8] [i_10 - 1] [i_9])) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_27 [i_7] [(unsigned short)3] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_24 [5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : ((+(var_13))));
        }
        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            arr_37 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) var_13)), (var_8))))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28439))) & (arr_28 [i_2 - 2] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [11LL] [i_11] [i_11])) || (((/* implicit */_Bool) var_3)))))) : (max((((/* implicit */unsigned long long int) arr_24 [i_2 - 2])), (arr_17 [(short)12] [i_11])))))));
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (var_1)))) >> (((min((-9223372036854775791LL), (((/* implicit */long long int) arr_24 [i_2])))) - (-9223372036854775801LL)))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 4; i_13 < 15; i_13 += 3) 
                {
                    var_30 *= ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) ((short) arr_19 [i_13 + 2]))), (var_10))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [i_11] [i_13 + 2] [i_13 - 3]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_11] [i_12] [i_13 + 1]))))) : (((((/* implicit */_Bool) 23246246975264084ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_2)))));
                }
                arr_44 [i_11] [11U] [i_11] = ((/* implicit */long long int) max(((-(((/* implicit */int) (short)-1)))), (((/* implicit */int) var_11))));
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                arr_48 [i_2 + 2] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) arr_29 [i_11]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_8)) : (-6758375595454028664LL))) : (((/* implicit */long long int) ((var_13) ^ (((/* implicit */int) arr_46 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_14])))))));
                var_32 = (-(arr_11 [i_2] [i_11] [i_2] [i_11]));
            }
            for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                var_33 = ((/* implicit */unsigned long long int) arr_23 [(signed char)5] [(unsigned short)13] [i_11]);
                /* LoopSeq 1 */
                for (short i_16 = 2; i_16 < 15; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 1; i_17 < 16; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */short) max((((signed char) var_11)), (((/* implicit */signed char) ((((unsigned int) (unsigned char)203)) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))))));
                        var_35 = ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((1549067203701345403ULL) << (((((/* implicit */int) arr_40 [i_16 + 2] [i_11] [i_2 + 1] [i_17 - 1])) - (200))))));
                    }
                    for (unsigned int i_18 = 3; i_18 < 13; i_18 += 3) 
                    {
                        var_36 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_11])) && (((/* implicit */_Bool) 0ULL))))) != (((((/* implicit */int) (signed char)28)) >> (((arr_18 [i_2] [i_2] [i_15]) + (7573472315462543768LL)))))))), (min((((/* implicit */long long int) arr_52 [i_11] [i_16 + 2] [i_16 + 1] [6ULL])), (arr_36 [i_11])))));
                        var_37 = ((/* implicit */short) ((((/* implicit */int) (!(arr_24 [i_15])))) * (((/* implicit */int) ((var_6) >= (arr_14 [i_2 + 2] [i_11] [i_2 + 2] [i_18 - 2]))))));
                        arr_61 [i_11] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_38 [i_15] [i_18 - 3] [i_15]))))));
                    }
                    var_38 = ((/* implicit */int) (short)-1);
                    var_39 &= ((/* implicit */long long int) min((min((arr_29 [10LL]), (((/* implicit */int) var_14)))), (min((arr_29 [(unsigned short)2]), (((/* implicit */int) (short)-22738))))));
                    arr_62 [i_11] [i_11] = ((/* implicit */short) ((signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_11]))))), (((int) 2305843009213693952ULL)))));
                }
            }
            var_40 = ((/* implicit */long long int) arr_39 [i_2] [i_11] [i_2 + 2] [i_11]);
        }
        var_41 = ((/* implicit */signed char) var_5);
    }
    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
    {
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_19] [i_19] [i_19] [i_19])) ? (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_19] [i_19] [i_19] [i_19])))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_19] [i_19] [(_Bool)1] [(_Bool)0]))) : (min((arr_8 [i_19] [i_19] [i_19]), (((/* implicit */long long int) arr_55 [i_19] [i_19] [i_19] [i_19] [i_19])))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(var_2))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_24 [i_19]) || (((/* implicit */_Bool) arr_46 [i_19] [i_19] [i_19] [14ULL]))))))))))));
        var_43 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-22712))))), (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned long long int) ((var_9) & (-1385062789)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 130023424LL)) : (arr_43 [i_19] [i_19] [i_19] [i_19])))))));
        var_44 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_27 [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_39 [(short)5] [i_19] [i_19] [i_19])))) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_19] [i_19] [i_19] [i_19])), (var_12))))));
    }
}
