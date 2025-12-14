/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8677
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
    var_15 |= ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_16 -= ((/* implicit */signed char) (+((+(((/* implicit */int) (short)-2087))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 122880U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) && (((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1)))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_5))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((var_9) ? (var_6) : (var_2))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_1])))));
                        var_19 -= ((/* implicit */int) (((_Bool)1) ? (arr_10 [4] [4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)0])))));
                    }
                } 
            } 
            arr_14 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) (+(arr_12 [i_1] [i_2] [i_2] [i_2] [i_1] [i_2 + 1])))) < (-138850651119761309LL)));
            /* LoopSeq 4 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12495))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_19 [i_1] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    arr_22 [6U] &= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) ^ (744931019U)))));
                }
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -138850651119761294LL)) ? (((/* implicit */int) (unsigned short)6466)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) var_7)) : ((+(arr_19 [i_8] [(_Bool)0] [i_7] [2LL])))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 - 1])))))));
                    }
                    var_22 |= ((/* implicit */unsigned short) ((unsigned char) var_13));
                    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)9118)) ? (((/* implicit */int) arr_25 [10] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) (unsigned char)217))));
                    var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_12 [i_1] [0U] [i_2 + 1] [i_1] [(signed char)0] [i_7])))));
                }
                var_25 -= ((/* implicit */short) ((unsigned int) (unsigned short)65535));
                var_26 += ((/* implicit */unsigned long long int) var_9);
                var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) && (((/* implicit */_Bool) (unsigned short)504))));
            }
            for (unsigned short i_9 = 2; i_9 < 15; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51804))) + (var_8))))));
                    var_29 += 598343998U;
                    var_30 = ((/* implicit */short) ((signed char) arr_26 [i_9 - 1]));
                }
                var_31 *= ((/* implicit */long long int) ((arr_8 [i_9 - 1] [i_2 + 2]) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_8 [i_9 - 1] [i_2 + 1]))));
                var_32 = ((/* implicit */short) ((arr_11 [i_2 + 2] [i_2 + 1] [i_1] [i_2 + 1]) ? (((/* implicit */int) (short)26017)) : (((/* implicit */int) arr_18 [i_1]))));
                var_33 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255))));
            }
            for (unsigned short i_11 = 2; i_11 < 15; i_11 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)23016)) ? (1125882726973440LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1])))))));
                arr_35 [i_1] [i_2 + 2] [(signed char)13] [7U] = ((/* implicit */unsigned char) ((((unsigned int) 891475380231409074ULL)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2087)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))))));
                var_35 ^= ((/* implicit */unsigned char) ((unsigned short) var_4));
                arr_36 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_11] [i_2] [i_2 + 2] [i_1]))))) ? (arr_27 [i_11] [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_11])) ? (4204269206U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16383))))))));
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) * (3563759214U))) + (var_2))))));
            }
            for (unsigned short i_12 = 2; i_12 < 15; i_12 += 3) /* same iter space */
            {
                var_37 ^= ((((/* implicit */_Bool) (unsigned short)512)) ? (((/* implicit */int) (short)-2087)) : (((/* implicit */int) (unsigned short)65535)));
                var_38 = ((/* implicit */int) max((var_38), (-1133581296)));
                arr_39 [i_12 + 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_5) < (((/* implicit */long long int) ((((/* implicit */_Bool) 1271858249U)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_13)))))));
                var_39 = ((/* implicit */unsigned int) var_4);
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        arr_44 [i_1] [i_1] [8U] [i_1] = ((/* implicit */long long int) ((unsigned int) arr_40 [i_1] [i_1] [i_1]));
                        var_40 = ((/* implicit */long long int) ((arr_27 [i_14] [i_14] [i_14 - 2] [i_14 + 2] [i_12 + 2] [i_2] [i_2]) >> (((arr_27 [i_14] [i_14] [i_14 + 1] [i_2 - 1] [i_12 - 1] [(unsigned short)1] [i_2 - 1]) - (12126873493558238489ULL)))));
                    }
                    arr_45 [i_13] [8LL] [i_13] [i_13] |= ((/* implicit */signed char) var_11);
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 858473865602202205ULL)) ? (917523342399168103LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52616))))))))));
                    var_42 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_12 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13] [i_12] [i_2] [(unsigned short)4]))) : (9007199254740991LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65039)))));
                }
                for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    arr_49 [i_1] = ((/* implicit */unsigned long long int) 0LL);
                    var_43 += ((/* implicit */signed char) (~(((/* implicit */int) (signed char)20))));
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_2] [i_1])) >> (((var_6) - (4095292074U)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    var_45 ^= ((/* implicit */long long int) (short)16364);
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_16 = 4; i_16 < 14; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_17 = 1; i_17 < 16; i_17 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 2; i_18 < 15; i_18 += 1) 
                {
                    var_46 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))) - (4294967295U)));
                    arr_58 [i_16] [i_16 - 3] [i_17 + 1] [i_18] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) ((short) arr_8 [14U] [14U])))));
                    arr_59 [i_1] [i_17] [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)26017)))) ? (((/* implicit */int) (unsigned short)65036)) : (((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */int) (unsigned short)65029)) : (((/* implicit */int) var_0))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        var_47 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1244365367)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8520))))))) : (var_8)));
                        var_48 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59874)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221)))));
                        var_49 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65023))))) : (arr_27 [i_16] [i_16 + 3] [i_17 - 1] [i_16] [i_17 - 1] [i_18 - 2] [i_19])));
                        var_50 -= ((/* implicit */unsigned int) ((arr_28 [i_16 - 1] [i_17 - 1]) && (((/* implicit */_Bool) 1856936891U))));
                    }
                    for (signed char i_20 = 3; i_20 < 14; i_20 += 4) 
                    {
                        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [3] [3] [i_1])) ? (((/* implicit */int) (short)30863)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) (+(arr_50 [i_16])))) : (1118002739526940103ULL))))));
                        var_52 |= ((/* implicit */long long int) (+(17119290776997896295ULL)));
                        var_53 = ((/* implicit */_Bool) max((var_53), (((((/* implicit */_Bool) (signed char)-115)) && (((/* implicit */_Bool) arr_6 [i_16]))))));
                        arr_64 [i_17] [i_16 - 2] [i_1] [7U] [i_20 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned char)34))));
                    }
                    var_54 = ((/* implicit */int) (+(arr_56 [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_18 - 1])));
                }
                arr_65 [i_16] [i_16] [i_17 + 1] |= ((/* implicit */unsigned int) arr_6 [i_16]);
            }
            var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)222)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
        }
        for (signed char i_21 = 3; i_21 < 14; i_21 += 1) 
        {
            arr_69 [i_1] [4ULL] &= ((((/* implicit */_Bool) max((((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_7))))), ((+(((/* implicit */int) arr_51 [i_21]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [8U] [i_1] [i_21 + 1] [i_21 + 1])) ? (((/* implicit */int) arr_11 [i_1] [i_21 + 3] [8U] [i_21 + 2])) : (((/* implicit */int) arr_7 [(short)0]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)109))))) ? (858473865602202205ULL) : (max((2412959343195934742ULL), (((/* implicit */unsigned long long int) var_8)))))));
            arr_70 [i_1] [2ULL] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_11 [i_21] [i_1] [i_1] [i_21 + 1])) + (((/* implicit */int) arr_11 [i_21] [i_1] [i_1] [i_21 - 2])))), (((arr_11 [i_21] [i_1] [i_1] [i_21 + 2]) ? (((/* implicit */int) arr_11 [i_21] [i_1] [i_1] [i_21 - 1])) : (((/* implicit */int) arr_11 [i_21] [i_1] [i_1] [i_21 + 1]))))));
        }
        for (unsigned short i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_55 [i_1] [i_1] [i_1] [i_1])), ((unsigned short)18581)))), (((int) (unsigned char)2)))))));
            var_57 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-30867))));
            arr_74 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_22] [i_1])) ? (67108863U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) == (max((-7983286310548826219LL), (((/* implicit */long long int) (unsigned short)16384))))));
        }
        var_58 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14289737206484156416ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) : (4294967295U)))) == (((((/* implicit */_Bool) ((short) arr_26 [i_1]))) ? (858473865602202196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)2), (((/* implicit */unsigned char) var_3))))))))));
        arr_75 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4197272658U)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned short)46954))));
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 17; i_23 += 4) 
        {
            arr_79 [i_23] [i_1] [i_23] |= ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)226)) % (((/* implicit */int) (_Bool)1))))));
            var_59 |= max((((arr_71 [i_23]) ^ (arr_71 [i_1]))), (((/* implicit */unsigned int) (-(arr_54 [i_23])))));
        }
    }
    var_60 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((1475811426U), (((/* implicit */unsigned int) (unsigned char)202))))) ? ((+(3454631523457531745ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) ((unsigned char) var_7))), (((7951024058361172064ULL) * (((/* implicit */unsigned long long int) -8437734026776816530LL))))))));
}
