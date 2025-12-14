/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91401
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)4264)) : (((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_11))))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_17 = ((/* implicit */_Bool) var_12);
                arr_13 [i_1 - 2] [i_3] = var_10;
                var_18 = (-(((((/* implicit */int) ((short) arr_2 [i_1]))) & (((/* implicit */int) arr_7 [i_1 - 1])))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) var_3))), (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                var_20 += ((/* implicit */signed char) var_8);
            }
            /* LoopSeq 3 */
            for (unsigned int i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_4 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_5]) >> (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) var_7))))) : (arr_5 [i_4 - 1] [i_5])));
                    var_21 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_6 [i_4])));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_25 [i_6] [i_5] [i_4 - 3] [i_4 - 3] [i_2] [i_5] [i_1 - 1] = ((/* implicit */unsigned char) ((((min((arr_5 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_6])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15)))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6])))));
                        arr_26 [i_1 - 2] [i_2 + 1] [i_4 - 2] [i_5] [i_2 + 1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_1 + 1])) * (((/* implicit */int) arr_2 [i_1 - 1])))), (((/* implicit */int) min((arr_2 [i_1 - 2]), (var_0))))));
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-107))));
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) min((((/* implicit */signed char) arr_0 [i_6])), (arr_7 [i_6]))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_2] [i_2] [i_5] [i_5])) ? (arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 + 1])))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)19627)) : (arr_23 [i_6] [i_5] [i_4 - 1] [i_4] [i_1] [i_1]))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_1] [i_1] [(unsigned short)1] [i_5] [i_6])), (var_6))))))));
                    }
                    for (int i_7 = 3; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (signed char)-114)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) & (((/* implicit */unsigned long long int) var_14))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_9))));
                        arr_30 [i_1 - 2] [i_5] [i_2] [i_4 - 4] [i_5] [i_7 - 1] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (!(arr_0 [i_1])))) < (max((((/* implicit */int) arr_2 [i_1 - 2])), (arr_4 [(_Bool)1])))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-31)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_21 [i_1 + 1] [i_2 - 2] [i_4] [i_4] [i_7]))))))));
                    }
                    for (int i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        var_25 &= ((/* implicit */int) var_4);
                        var_26 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_1 - 1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1]))) & (var_2)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_5])) ? (arr_33 [i_2] [i_5]) : (((/* implicit */unsigned long long int) var_15)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : ((+(min((var_9), (1509576871))))));
                    }
                }
                for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_37 [i_9] [i_9] [i_4 - 3] [i_2] [i_1] [i_1] = ((signed char) ((((/* implicit */int) ((unsigned short) (signed char)-50))) / (((/* implicit */int) var_12))));
                    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_9] [i_1 - 2])) ? (var_15) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_9] [i_4 + 2] [i_2])))))));
                }
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_7)), ((~(var_2))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))))));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_8))));
                arr_38 [i_4] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_10)), (arr_22 [i_1 - 1] [i_4] [i_4 + 1] [i_1 - 1] [i_2] [i_2 - 1]))), (((/* implicit */unsigned long long int) 0))));
                arr_39 [i_4] [i_4 - 2] [i_1] [i_1] = ((/* implicit */signed char) (~(min((arr_34 [i_1 + 1] [(short)8] [i_2 + 1] [i_4 + 2] [i_4]), (arr_34 [i_1] [i_1] [i_2 + 1] [i_4 - 2] [i_4 - 1])))));
            }
            for (int i_10 = 1; i_10 < 10; i_10 += 4) 
            {
                var_30 = ((/* implicit */short) arr_33 [i_2] [i_2]);
                arr_43 [i_1] [i_1 - 2] [i_10] [i_10] = ((/* implicit */short) (signed char)-15);
            }
            for (signed char i_11 = 1; i_11 < 10; i_11 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 4; i_13 < 10; i_13 += 4) 
                    {
                        arr_51 [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))))) ^ (-2126467940)));
                        arr_52 [i_1 + 1] [i_13] [i_11 + 1] [i_13] [i_13 - 3] |= min((((((/* implicit */_Bool) arr_33 [i_13] [2LL])) ? (arr_33 [i_1] [i_2 - 1]) : (arr_33 [i_13] [i_13]))), ((+(max((arr_42 [i_13] [i_1]), (((/* implicit */unsigned long long int) var_11)))))));
                    }
                    arr_53 [i_11] [i_2 - 2] = ((/* implicit */long long int) var_0);
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_9 [i_11 + 1]), (arr_9 [i_11 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 3; i_15 < 10; i_15 += 4) 
                    {
                        arr_60 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_15] [i_11] = ((/* implicit */unsigned char) ((unsigned int) arr_11 [i_1] [i_1] [i_14] [i_15 - 2]));
                        var_32 = ((/* implicit */unsigned long long int) var_6);
                    }
                    arr_61 [i_1] [i_2] [i_11] [i_11] = 2885461688U;
                }
                for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    var_33 = ((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_23 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 1]))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)22083)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) 0)))) - (18446744073709551590ULL)))));
                    var_34 += ((/* implicit */_Bool) ((long long int) ((unsigned char) ((arr_33 [i_2] [i_11 + 1]) & (((/* implicit */unsigned long long int) var_8))))));
                    var_35 = ((/* implicit */signed char) min((max((arr_40 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_11 - 1]), (arr_40 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_11 - 1]))), (((((/* implicit */_Bool) arr_40 [i_2 + 2] [i_2] [i_11 - 1] [i_11 - 1])) ? (arr_40 [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_11 - 1]) : (arr_40 [i_2 + 2] [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                }
                var_36 = ((/* implicit */signed char) var_10);
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)175)) && ((_Bool)0))))) > (min((var_1), (((/* implicit */unsigned long long int) (_Bool)0))))))))));
                var_38 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_56 [i_1] [i_1] [i_2 + 2] [i_1] [i_2] [i_2 + 2])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((arr_34 [i_1] [9U] [9] [5LL] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_1] [i_1] [i_1] [i_1] [i_1])))))) : ((((_Bool)1) ? (arr_64 [i_1] [i_2 + 2] [i_2 + 2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_1])))))))));
                var_39 = ((/* implicit */_Bool) min((var_39), (arr_2 [i_11])));
            }
        }
        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            var_40 = ((/* implicit */signed char) (+(((/* implicit */int) arr_65 [i_17]))));
            var_41 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_1])) ? (((/* implicit */unsigned int) arr_23 [i_17] [i_17] [i_17] [i_1] [i_1 - 1] [i_1])) : (var_14)))) * ((-(arr_64 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_1 + 1] [i_1 + 1])) & (min((((/* implicit */int) (unsigned short)61272)), (arr_36 [i_1 - 2]))))))));
        }
        arr_69 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_19 [i_1])) > (((/* implicit */int) var_12)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))))))) ? (min((((/* implicit */int) (unsigned short)16384)), ((-(((/* implicit */int) arr_28 [i_1] [i_1])))))) : (((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_1]))));
    }
    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
    {
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_49 [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */int) var_12)))) & (arr_49 [i_18] [i_18] [4U] [i_18] [i_18]))))));
        var_43 = ((/* implicit */_Bool) ((min((var_8), (((/* implicit */unsigned int) arr_54 [i_18] [i_18] [i_18] [i_18])))) + (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_18] [i_18] [i_18] [i_18] [(short)1] [i_18]))))) | (((/* implicit */int) ((unsigned char) var_12))))))));
        var_44 += ((/* implicit */_Bool) ((((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)7995)) : (((/* implicit */int) (unsigned short)40998))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_28 [i_18] [i_18]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)9)) <= (((/* implicit */int) arr_48 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))) : (((/* implicit */int) var_7))))) : ((~(arr_14 [i_18])))));
    }
    var_45 = ((/* implicit */unsigned int) ((int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)17600)))), (((/* implicit */int) (!(((/* implicit */_Bool) 16795995678808524731ULL))))))));
}
