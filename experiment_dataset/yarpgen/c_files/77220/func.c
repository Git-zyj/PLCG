/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77220
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5376732742145767061ULL)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_4 [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_3]))) ^ (arr_6 [i_2])))));
                    var_18 &= (!(((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1])));
                    arr_10 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_6 [i_1])))) ? (var_1) : ((+(var_5)))));
        arr_11 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) | (((/* implicit */int) (signed char)-121))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_13 [i_4]);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_2 [i_4])))) || (((/* implicit */_Bool) arr_9 [i_4] [i_4])))) && (((arr_13 [i_4]) && (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) && (((/* implicit */_Bool) 0U)))))))))));
        arr_14 [i_4] [i_4] &= ((/* implicit */unsigned char) var_6);
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_18 [i_5] [10ULL] &= ((/* implicit */short) (+(((/* implicit */int) (short)-22003))));
        arr_19 [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (arr_12 [i_5] [i_5]) : (717997902U)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5]))))), (arr_9 [i_5] [i_5]))))) <= (((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) & (var_1))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_5] [i_5])))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((13369470115997640769ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((arr_13 [i_5]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)16895)))) : (((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [8ULL])))))) : (((((/* implicit */_Bool) (unsigned short)16008)) ? (833539035U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22002)))))))));
        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)22002))) / (arr_3 [i_5] [i_5]))) * (min((((/* implicit */unsigned int) var_12)), (arr_3 [i_5] [i_5])))));
    }
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_8))));
    var_26 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) (short)-21989)));
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_27 |= ((/* implicit */unsigned short) min((16637827437412632031ULL), (max((((/* implicit */unsigned long long int) arr_13 [i_7])), ((~(arr_2 [i_6])))))));
            var_28 *= ((/* implicit */signed char) min((((unsigned int) arr_6 [i_6])), (((unsigned int) var_9))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((min(((~(((/* implicit */int) (signed char)-6)))), (((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_9])))) >> (((arr_12 [i_6] [i_8]) - (3516106001U)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (unsigned short)13537))));
                            arr_34 [i_6] [i_7] [i_8] [i_6] [i_10] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6]))) : (arr_2 [i_8]))), (min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_8] [i_9] [i_10])), (arr_6 [i_9]))))) << (((arr_8 [i_9] [i_8] [i_7] [i_6]) - (14112805034748447789ULL)))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_31 |= ((/* implicit */unsigned short) min((2196724440765895500ULL), (((/* implicit */unsigned long long int) var_6))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_11])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_20 [i_9])))))))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4057275592U)))) : (((((/* implicit */_Bool) ((long long int) 0U))) ? (((((/* implicit */_Bool) (short)-10)) ? (17653313556921890292ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)11957)), (161920059U)))))))))));
                            var_34 += ((/* implicit */long long int) var_1);
                        }
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_24 [i_8] [i_7] [i_6])))) ? (((((/* implicit */_Bool) 22U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21984))) : (12ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_36 [i_9] [i_9] [i_8] [i_7] [i_7] [i_6])), ((-(4057275592U))))))));
                        arr_37 [i_9] = ((/* implicit */signed char) arr_26 [i_6] [i_7] [i_8] [i_9]);
                        var_36 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_6)));
                    }
                } 
            } 
            var_37 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (3501806710861995551ULL))))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            var_38 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -253776275)) : (((0ULL) * (((/* implicit */unsigned long long int) arr_30 [i_6] [i_12])))));
            var_39 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) 5984744754350768998LL)) + (arr_2 [i_12]))));
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)2)))))));
            var_41 &= ((/* implicit */unsigned short) ((unsigned long long int) arr_23 [i_6]));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                var_42 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_4 [i_13])) - (((/* implicit */int) (_Bool)1)))));
                var_43 = ((((/* implicit */int) (!(arr_26 [i_6] [i_12] [i_13] [i_6])))) < (((/* implicit */int) arr_26 [i_6] [i_6] [i_13] [i_12])));
            }
        }
        var_44 = ((/* implicit */unsigned int) min((var_44), (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_44 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6]))) & ((+(((((/* implicit */_Bool) 4666473558164037876ULL)) ? (arr_2 [i_6]) : (((/* implicit */unsigned long long int) var_1))))))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                {
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) 3455196348U))));
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) || (((0U) == (2174420062U)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                {
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4666473558164037876ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)10367))))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21991))) & (2699876338U))))) : (((/* implicit */int) min(((short)-19732), ((short)21948))))));
                    arr_55 [i_16] [i_16] [i_17] [i_18] = ((/* implicit */short) min((((/* implicit */int) arr_50 [i_16])), (((((((/* implicit */_Bool) arr_51 [i_16] [i_16] [i_18])) ? (((/* implicit */int) arr_50 [i_17])) : (((/* implicit */int) arr_54 [i_16] [i_17] [i_18])))) << (((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)0))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 25; i_20 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((unsigned short) var_12))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_51 [i_16] [i_16] [i_18])))) % ((~(arr_51 [i_16] [i_16] [i_17]))))) - (114ULL)))));
                                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (!(((/* implicit */_Bool) (~(2311515607U)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_51 [i_22] [14U] [i_17])) ? (arr_59 [i_16] [i_17] [i_17] [i_18] [(unsigned short)6] [i_22]) : (((/* implicit */unsigned long long int) arr_49 [6U])))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41652))))))))))));
                                var_51 *= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_10)), ((+(arr_59 [i_22] [16U] [i_18] [i_18] [16U] [i_16]))))), (((/* implicit */unsigned long long int) (((+(var_1))) << (((/* implicit */int) ((15LL) < (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [24LL])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_52 = ((/* implicit */unsigned long long int) (+(max((arr_58 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */long long int) ((unsigned int) (_Bool)0)))))));
    }
    var_53 = ((/* implicit */signed char) var_2);
}
