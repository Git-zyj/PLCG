/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62466
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
    var_15 = ((/* implicit */unsigned char) (~(((min((9407672351645907453ULL), (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_11))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */int) ((((/* implicit */_Bool) 15047892172009864618ULL)) && (arr_3 [i_0])))) > (((((/* implicit */int) arr_1 [(signed char)8])) << (((((/* implicit */int) arr_1 [i_0])) - (13635)))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_2 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26191)) / (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_3] [i_2]) << (((arr_4 [i_4] [i_1]) - (8928501799094958829LL)))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 2] [i_3 + 1])))))));
                        var_20 = ((/* implicit */unsigned long long int) ((short) (+(arr_6 [2U]))));
                    }
                } 
            } 
        }
        var_21 *= ((/* implicit */short) ((((arr_10 [i_1] [i_1] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) ((arr_4 [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) - (1)))));
    }
    for (int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 18; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        arr_24 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_8 - 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 + 1] [i_6 + 1] [i_6 - 2] [i_8 + 3]))))) / (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_5] [i_6] [i_8])), (arr_18 [i_5] [i_5] [i_7] [i_8])))) % (((/* implicit */int) ((unsigned short) arr_18 [i_5] [i_7] [(short)7] [i_8]))))))));
                        arr_25 [i_8] [(signed char)1] [i_6] [i_5] = (~(((/* implicit */int) ((_Bool) arr_21 [i_8] [i_7] [i_6 - 2] [i_5 - 1]))));
                        arr_26 [i_5] [i_6] [i_7] [i_8] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_13 [i_8] [i_5])))) <= (((((/* implicit */int) (short)-8192)) / (arr_23 [(_Bool)1] [i_6] [(unsigned short)0] [i_8] [i_6 - 1]))))))) / (min((((/* implicit */long long int) arr_22 [i_5] [i_5] [i_5] [i_5 - 2])), (arr_17 [i_5] [i_5] [i_5])))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) arr_18 [i_5] [i_7] [(_Bool)0] [i_7]);
                    arr_27 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((unsigned char) (signed char)37)))) ? (min((min((arr_17 [i_5] [i_6] [2ULL]), (((/* implicit */long long int) arr_22 [i_5] [2] [i_5] [i_7])))), (((/* implicit */long long int) (-(127204876)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) arr_20 [1] [i_6] [i_5])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_7])) && (((/* implicit */_Bool) 145996605170906182LL))))))))))));
                }
            } 
        } 
        arr_28 [i_5] [i_5 - 1] = ((/* implicit */unsigned short) (+(((arr_17 [i_5] [i_5 - 2] [i_5 - 1]) | (((/* implicit */long long int) arr_23 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 2; i_10 < 17; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        arr_36 [i_5 + 1] [i_5] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_30 [i_11])))) ? (49824648689164496LL) : (arr_17 [i_5 - 1] [i_5 - 1] [i_10 + 1])));
                        var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_34 [i_5 - 1] [i_9] [i_10 + 3] [16LL]));
                    }
                } 
            } 
            var_24 ^= ((/* implicit */long long int) arr_19 [i_5]);
            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_9] [7LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5 - 2]))) : (5679575058531356067ULL)))) ? ((-(arr_30 [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [19LL] [i_5])) : (var_0))))));
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 3; i_13 < 22; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                {
                    arr_45 [i_14] [i_13] [i_12] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_44 [i_13 - 3])) ? (((/* implicit */unsigned int) arr_43 [i_12] [i_13] [i_13 + 2] [i_14])) : (arr_42 [i_13 - 2] [i_13] [i_13]))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_13 - 2])))))));
                    var_26 ^= ((max((((((/* implicit */_Bool) arr_37 [(signed char)20] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14]))) : (arr_42 [(unsigned char)21] [i_13] [i_12]))), (((/* implicit */unsigned int) min((arr_40 [i_13]), (arr_40 [i_12])))))) | (((((/* implicit */_Bool) arr_40 [i_12])) ? (((((/* implicit */_Bool) arr_37 [i_12] [i_14])) ? (arr_42 [i_12] [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_14] [i_13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13 - 3]))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            {
                                arr_51 [i_16] [i_16] [(unsigned short)7] [i_14] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13 + 2] [i_13 + 2])) ? (arr_41 [i_13 - 3] [i_13 - 3]) : (arr_41 [i_13 + 1] [i_13 - 2])))) ? ((~(arr_41 [i_13 - 2] [i_13 + 1]))) : (min((arr_41 [i_13 + 3] [i_13 - 3]), (arr_41 [i_13 - 3] [i_13 - 3])))));
                                var_27 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_12] [i_13 + 1] [i_14] [21LL] [i_16]))))))) ? ((~(((/* implicit */int) (signed char)104)))) : (arr_50 [i_13 - 1] [i_13] [8U] [i_13] [i_13] [6U] [i_13])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned short) ((int) min((arr_38 [i_12]), (arr_38 [i_12]))));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
    {
        var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_17] [i_17] [i_17] [i_17] [i_17])) && (((/* implicit */_Bool) arr_44 [i_17]))));
        /* LoopNest 3 */
        for (signed char i_18 = 3; i_18 < 11; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    {
                        arr_64 [(unsigned char)2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_19] [i_18] [i_17])) ? (arr_62 [i_17] [i_17] [i_19] [i_18]) : (((/* implicit */unsigned long long int) var_6))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_17] [i_17]))))));
                        arr_65 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_62 [i_17] [i_17] [i_17] [i_17]) == (arr_61 [(unsigned char)6] [i_17]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 4) 
        {
            arr_69 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [i_17] [i_21] [i_21])) / (((/* implicit */int) arr_68 [i_17] [i_17] [i_17]))));
            arr_70 [i_17] [i_21] = ((/* implicit */long long int) ((unsigned int) arr_30 [i_17]));
            var_30 = ((((/* implicit */_Bool) arr_54 [i_21])) && (((/* implicit */_Bool) ((signed char) var_8))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_17] [19ULL])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [i_21] [i_21])) ? (((/* implicit */int) arr_22 [(_Bool)1] [(short)6] [(_Bool)1] [i_17])) : (((/* implicit */int) arr_5 [i_17] [i_21]))))) : (arr_42 [i_21] [i_21] [i_17])));
            arr_71 [i_17] = ((/* implicit */signed char) ((((arr_30 [4]) != (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? ((~(228187285))) : (((/* implicit */int) arr_29 [i_17] [i_17] [i_17]))));
        }
        for (unsigned int i_22 = 2; i_22 < 10; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (unsigned char i_24 = 4; i_24 < 13; i_24 += 3) 
                {
                    {
                        arr_81 [i_17] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [2])))))));
                        arr_82 [i_17] [i_22] [i_23] [i_24 - 1] = ((/* implicit */unsigned long long int) var_14);
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_68 [i_22] [i_22] [i_17]))))) ? (((/* implicit */int) ((short) arr_37 [i_17] [i_22]))) : (((((/* implicit */_Bool) arr_42 [i_22] [i_17] [i_17])) ? (((/* implicit */int) arr_73 [i_22] [i_17] [i_17])) : (arr_32 [i_17] [i_17] [i_22])))));
            var_33 = ((/* implicit */_Bool) 9215377155109139040LL);
        }
        var_34 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_40 [i_17])) : (((/* implicit */int) arr_40 [i_17])))));
    }
}
