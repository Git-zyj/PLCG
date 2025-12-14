/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9938
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
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_2)) : (var_16)))) ^ ((-(67108863ULL)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) 3483281103322220942LL)))))))) == (var_3)));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) - (((/* implicit */int) (signed char)52))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16383))))) : (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_0))));
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)52))) | (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) | (-3483281103322220943LL))), (-7789915002264951747LL)))));
        var_22 = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) > (arr_2 [i_0]))))) <= (arr_2 [i_0]))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_4))));
            var_24 = (((!(((/* implicit */_Bool) max(((short)-22004), (((/* implicit */short) (signed char)78))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-53)), (arr_3 [4ULL] [i_1] [i_1])))) ? (18446744073642442753ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)2] [(short)2]))) : (var_16)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1023)) && (((/* implicit */_Bool) 1880799054U)))))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) - (147)))));
            arr_5 [i_0] [(signed char)3] [i_0] |= ((/* implicit */_Bool) -4398046511104LL);
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) : (-9183036236885568151LL)))) ? ((~(((/* implicit */int) (signed char)-52)))) : (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)11] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 4])) : (((/* implicit */int) arr_6 [i_0] [(short)2]))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-79)) || (((/* implicit */_Bool) (unsigned short)0)))))))));
            arr_8 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [i_2] [i_2])))) / (((/* implicit */int) (unsigned short)65535))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 4]), (arr_3 [i_0 - 3] [i_3] [i_3]))))) : (((67108857ULL) * (((/* implicit */unsigned long long int) -3483281103322220955LL))))));
            var_28 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_3]))) * (var_2)))), (((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_3])) ? (arr_2 [i_0]) : (var_5))))) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)41)) ? (arr_4 [i_0 - 3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_3] [10])))))))));
            var_29 = ((/* implicit */signed char) var_4);
            var_30 = ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 3] [(unsigned char)3])) >= (((/* implicit */int) (short)-15433))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */long long int) arr_9 [i_0] [i_3])) : (arr_2 [i_0])))))))));
            var_31 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (unsigned char)27)), (-7259399256959809515LL))), (((/* implicit */long long int) (unsigned short)1028))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2]))))) ? ((-(((/* implicit */int) arr_13 [(unsigned char)10] [(unsigned char)10])))) : ((+(arr_17 [i_0] [i_0] [i_6] [i_6])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) (~((~(-3483281103322220944LL)))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (_Bool)1))));
                        var_34 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_3 [i_0 - 4] [i_4] [i_5])))) | (((/* implicit */int) arr_3 [i_4] [i_4] [i_0 - 1]))));
                        var_35 -= ((/* implicit */unsigned int) ((arr_14 [i_0 - 1] [i_4] [i_5 - 1] [i_0 - 2]) ? (((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1] [i_5 - 3])) : (((/* implicit */int) arr_14 [i_0 - 2] [i_4] [i_5 + 1] [i_6]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_36 = ((short) arr_10 [(unsigned char)0] [i_5 - 1] [i_5 - 1]);
                        var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_5] [(unsigned short)2] [i_5 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5]))) : (arr_15 [i_5] [i_5] [i_5] [i_5 - 3])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4] [i_5])) ? (((unsigned long long int) 3133796748U)) : (((/* implicit */unsigned long long int) 2147483647))));
                        arr_28 [i_6] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) ^ (((((/* implicit */_Bool) arr_0 [i_4] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (arr_27 [i_0] [i_0] [i_5] [i_6] [i_0] [i_0] [i_5])))));
                        var_39 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) 4294967295U)))));
                        var_40 -= ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 1]);
                        arr_29 [i_0] [(unsigned char)9] [i_0] [i_6] [i_9] = ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */unsigned long long int) 245849717U)) : (11156141074439979160ULL));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_41 = ((/* implicit */_Bool) arr_13 [i_0 - 4] [i_4]);
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0 - 1] [i_4] [i_0 - 1] [i_6] [i_10])) << (((((/* implicit */int) ((unsigned char) (short)-11888))) - (135)))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_26 [i_11] [i_6] [i_5 - 2] [i_6] [(signed char)0]) ? (((/* implicit */int) arr_31 [i_5] [i_5 - 1] [i_5 - 3] [i_5] [i_5 - 1] [i_5] [i_5 - 3])) : (arr_9 [i_6] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1436527314)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-59))))) : (9223372036854775804LL)));
                        var_44 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((4398046511102LL) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_4] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_4] [i_4] [i_5 + 1])))));
                        arr_35 [i_0] [i_4] [i_11] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_5] [i_5 - 3] [i_5 - 2] [i_6] [i_5 - 1]))));
                    }
                    var_45 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5] [i_4] [i_5] [i_6] [i_5]))))));
                    var_46 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)60)) || (((/* implicit */_Bool) 9223372036854775804LL)))))));
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        arr_40 [i_12] [i_12] [i_5 + 1] [i_4] [i_12] [i_5] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)101)) ? (67108857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned long long int) arr_17 [i_5 + 1] [i_12] [i_5] [i_12]))));
                        var_47 = ((/* implicit */unsigned char) (~(arr_15 [i_0 - 2] [i_0 - 2] [i_5 - 1] [i_5 - 2])));
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_48 = (+(((/* implicit */int) arr_22 [i_5 - 3] [i_4] [i_5 - 2] [i_4] [i_5 - 3] [i_14] [i_5 - 3])));
                        arr_43 [i_0] [i_12] [i_0] [(unsigned short)11] [i_5] [i_12] = ((/* implicit */unsigned short) (short)2719);
                    }
                    var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) var_4))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        arr_47 [i_12] [1LL] = ((/* implicit */unsigned int) (-(arr_38 [(short)1] [i_12] [i_0] [i_0 + 1] [(short)4])));
                        arr_48 [i_0] [i_0] [i_12] [i_12] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_4] [i_5])) + ((-(((/* implicit */int) var_1))))));
                        arr_49 [i_0] [i_12] [i_5 - 3] [i_12] [i_5 - 3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)11895))));
                        arr_50 [i_0] [i_0] [i_0 - 3] [i_12] [i_0 - 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned short)31143)) : (((/* implicit */int) (short)-18229))));
                    }
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        arr_53 [i_12] [i_12] [i_16] = ((/* implicit */unsigned short) (+(var_14)));
                        var_50 += (~((+(((/* implicit */int) var_15)))));
                        arr_54 [i_4] [i_4] [i_5] [i_16] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_12])) ? (((/* implicit */int) (signed char)117)) : ((+(((/* implicit */int) var_8))))));
                }
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            var_52 = var_13;
                            var_53 = ((/* implicit */_Bool) (-((~(arr_19 [i_4] [i_4] [i_5])))));
                        }
                    } 
                } 
                arr_60 [i_0] [i_5] [i_0] = ((/* implicit */long long int) -437579167);
            }
            for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                arr_64 [i_0] [i_4] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_0] [i_0 - 1] [i_0 - 1] [7U] [i_0] [i_0] [i_19])) ^ (((/* implicit */int) var_7))))) & ((~(18446744073642442758ULL)))));
                arr_65 [(short)7] [i_4] [(short)7] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0 - 4] [i_0] [i_0] [i_0] [i_0 - 4] [i_0 - 4])) ? (-6836310838613719833LL) : (arr_27 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                var_54 = ((/* implicit */unsigned int) -9223372036854775805LL);
                var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_20 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_4] [6ULL] [i_4] [i_4] [i_4])))))));
                var_56 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61314))) / (18446744073709551615ULL)))));
            }
            arr_69 [i_4] [i_0 - 4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0 - 4] [(signed char)0] [i_0 + 1]))));
        }
    }
    for (unsigned char i_21 = 1; i_21 < 17; i_21 += 2) 
    {
        var_57 = ((/* implicit */int) (+(arr_71 [i_21 - 1])));
        var_58 ^= ((/* implicit */signed char) arr_70 [i_21 + 2] [i_21 - 1]);
    }
}
