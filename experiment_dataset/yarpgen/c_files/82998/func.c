/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82998
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
    var_14 = ((/* implicit */signed char) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned short)5] [1U] [(signed char)3])) ? ((-(137438951424ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)15])) ? (((/* implicit */int) arr_4 [i_1] [i_3])) : (((/* implicit */int) arr_7 [i_1] [i_2])))))));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)0] [i_2]))) : (137438951424ULL)))) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (((((/* implicit */_Bool) arr_6 [i_0] [13ULL] [13ULL])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_3])) : (18446743936270600191ULL))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
        arr_11 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) -777799170)) : (2730320779U)));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) : (arr_13 [3] [3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(short)5] [15])) || (((/* implicit */_Bool) arr_13 [i_4] [i_4]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) <= (arr_13 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_5] [11] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_4])), (((1564646517U) - (((/* implicit */unsigned int) arr_14 [i_6]))))))) ? (max(((+(((/* implicit */int) arr_20 [i_4] [i_4])))), (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_19 [i_4] [i_4] [(_Bool)1] [i_6])) : (2034179780))))) : (-840902594)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4]))))) ? ((-(((/* implicit */int) (signed char)36)))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_17 [i_4] [i_5])) : (((/* implicit */int) (unsigned short)1431)))))))))));
                                var_19 += ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [(short)20] [(short)20] [(short)20] [i_8]))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1696187370U)) ? (((/* implicit */int) arr_20 [i_4] [i_5])) : (((/* implicit */int) arr_20 [(unsigned short)3] [(unsigned short)3]))))) || (((/* implicit */_Bool) min((arr_26 [i_7]), (((/* implicit */short) arr_20 [i_5] [5U])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_4] [i_4]))))) ? (154118029U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2730320800U)) ? (((/* implicit */int) (signed char)-112)) : (-777799184))))));
                    var_22 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) 1680650474)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8128)) ? (((/* implicit */int) arr_24 [i_4] [(signed char)15] [i_6] [i_6])) : (2034179780)))) || (((((/* implicit */_Bool) (unsigned short)2362)) && (((/* implicit */_Bool) (unsigned char)0))))))) : (((((/* implicit */_Bool) (signed char)-51)) ? (((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) arr_19 [i_4] [i_5] [1ULL] [22LL])) : (((/* implicit */int) arr_20 [i_5] [i_6])))) : (((/* implicit */int) (short)-887))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                arr_38 [i_10] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_19 [i_4] [i_5] [i_6] [i_10]))))));
                                arr_39 [i_10] = (+((~(((((/* implicit */_Bool) 2730320779U)) ? (2034179771) : (((/* implicit */int) arr_31 [i_4] [i_5] [i_6] [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            arr_50 [i_4] [i_11] [i_13] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (-777799170) : (-1901954240)))) ? (4294967292U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_4] [i_11] [i_13] [i_13])) ? (((((/* implicit */_Bool) 4294967292U)) ? (869640161) : (((/* implicit */int) arr_26 [i_12])))) : (((/* implicit */int) arr_36 [i_4] [i_11] [i_12] [i_13] [i_13]))))));
                            arr_51 [i_4] [i_4] [i_4] [i_4] [i_4] [(signed char)13] = ((/* implicit */signed char) (-(-536870912)));
                            arr_52 [i_4] [i_4] [i_12] [i_13] [i_4] [i_14] = ((/* implicit */long long int) 2730320778U);
                        }
                    } 
                } 
            } 
            arr_53 [13] [13] = ((/* implicit */_Bool) max(((unsigned short)59935), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_4])))))));
            arr_54 [i_4] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)139))))) ? ((-(((((/* implicit */_Bool) arr_48 [i_4] [i_4] [i_11])) ? (((/* implicit */int) arr_40 [i_4])) : (((/* implicit */int) (unsigned char)79)))))) : ((~(4194303)))));
            arr_55 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 15297312553166116808ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_4] [i_11] [i_11])))))))) ? ((-(((((/* implicit */_Bool) arr_47 [i_4] [i_4] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_4] [i_4] [(signed char)6] [i_11]))) : (arr_32 [i_4] [i_4]))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) arr_34 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_11] [i_11])))))))));
        }
        for (long long int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
        {
            arr_58 [0U] [i_15] = ((/* implicit */signed char) (+((+((+(2147483647)))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)2783)), (((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_30 [9ULL]))))))))))));
            arr_59 [i_4] = ((/* implicit */int) (+((~((~(-1114179127414284545LL)))))));
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            arr_66 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_16] [i_17])) ? (((/* implicit */int) arr_12 [i_16])) : (-777799170)))) ? (((((/* implicit */_Bool) (unsigned short)4367)) ? (((/* implicit */int) (short)30223)) : (((/* implicit */int) (signed char)17)))) : (((((/* implicit */_Bool) arr_22 [i_16] [i_17])) ? (arr_14 [i_16]) : (((/* implicit */int) (unsigned short)19242))))))) ? (((((/* implicit */_Bool) arr_34 [14ULL] [i_17] [(unsigned char)17] [i_17])) ? (((((/* implicit */_Bool) 1403746466)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_35 [i_16] [(unsigned short)18] [(unsigned short)18] [i_17] [i_17]) < (((/* implicit */unsigned long long int) arr_32 [i_16] [i_17])))))))) : (((((/* implicit */_Bool) arr_44 [i_16] [i_17])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1842721513447759085LL)) ? (((/* implicit */int) arr_65 [i_16] [i_17])) : (725745729)))) : (((((/* implicit */_Bool) (unsigned short)6885)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2389))) : (0U)))))));
            arr_67 [i_17] [i_17] = ((/* implicit */unsigned long long int) (+(((-7214810419764244877LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-2783)))))));
            var_24 = ((/* implicit */unsigned int) arr_41 [i_16] [i_16]);
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_56 [19] [19] [(signed char)13]))));
        }
        var_26 = arr_33 [15ULL];
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                {
                    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_18] [i_19] [i_19])) ? (((((/* implicit */_Bool) arr_44 [12LL] [i_19])) ? (arr_48 [i_18] [i_19] [11U]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11475))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 17; i_22 += 3) 
                        {
                            {
                                var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_20] [i_21] [i_22])) ? (((/* implicit */int) arr_20 [i_18] [i_18])) : (((/* implicit */int) arr_12 [i_18])))))));
                                arr_78 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_18] [i_22])) ? (1971385835725750085ULL) : (((/* implicit */unsigned long long int) -777799170))))) ? (((((/* implicit */_Bool) arr_13 [i_20] [12LL])) ? (((/* implicit */unsigned long long int) arr_13 [i_20] [15])) : (5365556849464564313ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7214810419764244897LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(signed char)6] [i_19] [i_19] [i_21] [i_22]))) : (2308575866U))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_31 [i_18] [(signed char)20] [i_19] [i_20]))));
                }
            } 
        } 
        var_30 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_18] [i_18] [i_18] [i_18] [i_18]))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20050)) ? (777799170) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_45 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) arr_68 [1LL])))) : (((((/* implicit */_Bool) arr_76 [i_18] [i_18] [i_18] [(signed char)8] [i_18] [i_18] [(signed char)7])) ? (((/* implicit */int) arr_45 [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [i_18]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 1) 
        {
            arr_82 [i_18] [15LL] = ((/* implicit */signed char) arr_22 [i_18] [i_18]);
            arr_83 [7ULL] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_18])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [2U])) ? (((/* implicit */int) (unsigned short)59847)) : (((/* implicit */int) (short)-11973)))))));
        }
        for (unsigned int i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_25 = 0; i_25 < 17; i_25 += 2) 
            {
                arr_89 [i_18] [i_18] [i_24] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_61 [i_18]))));
                arr_90 [i_18] [i_18] [i_24] = ((((/* implicit */_Bool) ((arr_88 [i_18] [i_18] [i_18] [i_24]) / (((/* implicit */long long int) arr_80 [i_18] [i_24]))))) ? (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned long long int) 1403746441)) : (9649987754828678500ULL))) : (((((/* implicit */_Bool) 1095766938U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49042))) : (arr_35 [i_18] [i_24] [i_24] [i_24] [18LL]))));
                var_32 -= ((/* implicit */int) arr_22 [i_18] [i_18]);
            }
            for (int i_26 = 0; i_26 < 17; i_26 += 2) 
            {
                var_33 = arr_79 [i_18] [i_24] [i_26];
                arr_93 [i_18] [i_24] [i_24] = ((/* implicit */signed char) (short)-20051);
                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_18] [i_18] [i_18] [i_24] [i_24] [i_26] [i_26])) ? (((/* implicit */int) arr_27 [i_18] [i_18] [i_24] [i_24] [i_26] [i_26] [i_18])) : (((/* implicit */int) arr_22 [(unsigned short)19] [i_24]))));
            }
            /* LoopNest 2 */
            for (unsigned int i_27 = 0; i_27 < 17; i_27 += 3) 
            {
                for (unsigned char i_28 = 0; i_28 < 17; i_28 += 3) 
                {
                    {
                        arr_99 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_77 [i_18] [i_24] [i_27] [11] [i_27] [i_28])) ? ((-(arr_76 [i_18] [i_18] [i_24] [i_24] [i_27] [i_28] [i_28]))) : (((/* implicit */int) (unsigned short)0))));
                        var_35 = ((/* implicit */unsigned short) arr_56 [i_18] [(signed char)24] [i_18]);
                    }
                } 
            } 
        }
        for (unsigned int i_29 = 0; i_29 < 17; i_29 += 3) /* same iter space */
        {
            var_36 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_100 [i_18] [i_18])) ? (((/* implicit */int) arr_41 [19] [5ULL])) : (((/* implicit */int) (unsigned char)64)))) < ((+(((/* implicit */int) arr_75 [i_18] [i_18] [i_18] [i_29] [i_18]))))));
            arr_102 [i_18] = ((/* implicit */unsigned int) (+(-1)));
        }
    }
}
