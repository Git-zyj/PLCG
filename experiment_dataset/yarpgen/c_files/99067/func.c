/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99067
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
    var_12 = ((/* implicit */_Bool) var_3);
    var_13 = ((/* implicit */int) (short)510);
    var_14 = ((/* implicit */signed char) ((int) var_10));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((1780484301) >= (-809844888))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (((~(arr_7 [6U] [i_0] [i_1] [i_2] [i_3]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 49152U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) ((arr_10 [i_2] [i_0]) && (((/* implicit */_Bool) (short)-5161))))))))));
                        var_16 = ((/* implicit */unsigned char) (+(((arr_10 [i_2] [i_1]) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (arr_8 [i_2] [i_2] [i_2] [i_1] [i_2])))));
                        var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((0U), (((/* implicit */unsigned int) arr_5 [i_0] [i_2])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        arr_14 [i_2] [i_2] [i_1] [0] [i_2] = ((/* implicit */_Bool) (-(5219163735412291651ULL)));
                        arr_15 [i_4 + 2] [4LL] [i_4] [i_4] [(_Bool)0] [i_4 + 1] |= ((/* implicit */short) arr_4 [i_0] [i_0] [i_4]);
                        var_18 = ((/* implicit */unsigned char) ((1LL) / (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_2]), (((/* implicit */unsigned short) arr_10 [i_2] [i_4 + 1]))))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((!((!((_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)25)) || (((/* implicit */_Bool) 20LL))))), ((unsigned char)9))))) : ((~(1LL))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_2] [i_2] [i_5] [5LL] = ((/* implicit */short) arr_10 [i_2] [i_2]);
                        var_20 = ((/* implicit */int) ((_Bool) (!((_Bool)1))));
                        var_21 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) max((((arr_16 [i_0] [i_2]) - (min((((/* implicit */int) (unsigned char)249)), (arr_3 [i_1]))))), (((/* implicit */int) arr_0 [(_Bool)1]))))) : (((/* implicit */_Bool) max((((arr_16 [i_0] [i_2]) + (min((((/* implicit */int) (unsigned char)249)), (arr_3 [i_1]))))), (((/* implicit */int) arr_0 [(_Bool)1])))));
                        arr_19 [i_5] [i_2] [0ULL] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(531478235))))));
                        arr_20 [i_2] = (~(((/* implicit */int) arr_13 [i_2])));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? ((-9223372036854775807LL - 1LL)) : (-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))) : (((((/* implicit */_Bool) 0ULL)) ? (9223372036854775806LL) : (2716859825325005706LL)))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7869247849391268663ULL)))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_9 [5] [i_0] [5] [i_0] [i_0])) : (arr_17 [i_0]))) * ((+(12612249261058295346ULL))))))));
                        var_25 |= ((/* implicit */int) arr_13 [i_6]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((arr_23 [i_7] [i_2] [(unsigned char)3]) ? (((arr_23 [i_0] [i_2] [i_0]) ? (2501926392094818746LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32110))))) : (max((arr_7 [i_0] [i_1] [i_1] [i_2] [i_7]), (((/* implicit */long long int) arr_5 [i_0] [i_2])))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_21 [i_0])))) || (((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_1] [i_2] [i_7]))))))));
                        var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_12 [i_0] [i_2] [i_0] [i_0])))))), (((((/* implicit */_Bool) 4294918125U)) ? ((-(arr_16 [i_0] [i_2]))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_16 [i_0] [i_2]))))))));
                        var_28 = ((/* implicit */long long int) ((unsigned short) (unsigned char)12));
                        var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_17 [i_0])))) ? (((((/* implicit */_Bool) -27LL)) ? (8075014805959741889LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5084))))) : (((((arr_7 [i_0] [9] [i_2] [i_7] [(signed char)9]) ^ (((/* implicit */long long int) arr_16 [i_1] [0LL])))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) 1930247675)), (1890463172U))))))));
                    }
                }
            } 
        } 
        var_30 |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
        var_31 ^= ((/* implicit */signed char) arr_16 [(unsigned char)2] [(unsigned char)2]);
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (signed char i_10 = 4; i_10 < 9; i_10 += 4) 
            {
                for (unsigned int i_11 = 3; i_11 < 12; i_11 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7650317774155488506LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((long long int) (-2147483647 - 1))) / (((((/* implicit */_Bool) (signed char)31)) ? (2735098229684748046LL) : (9223372036854775807LL)))))));
                        arr_34 [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (signed char)100)) != (((/* implicit */int) arr_28 [i_10 - 4] [i_9] [i_10 - 3]))))) != (((/* implicit */int) arr_28 [i_11 - 2] [3ULL] [i_10])))) && (((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_9] [i_9])))))));
                        arr_35 [i_8] [i_9] [i_8] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((int) arr_29 [i_8] [i_8] [i_8]))))));
                        /* LoopSeq 4 */
                        for (signed char i_12 = 3; i_12 < 11; i_12 += 3) 
                        {
                            var_33 += ((/* implicit */unsigned long long int) ((long long int) ((int) arr_26 [(unsigned char)0] [7ULL])));
                            var_34 = ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_37 [i_11] [i_8]), (((/* implicit */short) arr_29 [i_8] [i_9] [i_10]))))) ^ (((/* implicit */int) arr_37 [i_8] [i_8]))))) || (((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_10 - 1] [i_11])));
                            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_11 + 1] [i_10 + 1])))))));
                            var_36 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_28 [i_8] [i_9] [i_10])) : (((/* implicit */int) arr_25 [i_11 - 3] [4ULL]))))) >= (min(((+(arr_33 [i_8] [i_8] [i_9] [i_8] [i_11 - 1] [i_9]))), ((+(8105271756165057054LL))))));
                            arr_38 [i_8] [i_8] [i_10] [i_11 - 3] [i_11] [i_12] [i_8] = ((/* implicit */unsigned int) min((2023782849), (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */long long int) (+((+(arr_41 [i_8] [i_11 - 2] [4ULL] [i_11] [i_8])))));
                            arr_43 [i_8] [i_9] [i_10] [i_11] [i_13] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_10 + 4] [i_11 - 1] [i_13]))))) ? (((/* implicit */int) ((_Bool) arr_30 [0LL] [i_9] [i_9] [i_11]))) : (((/* implicit */int) arr_39 [(short)6] [i_9] [i_10] [i_11] [(short)6]))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) (-(((long long int) 1LL))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((23LL) * (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10 + 1])))))) ^ (6345254130209920558ULL)));
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (max((12719570070285974723ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_41 |= arr_31 [i_9];
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)111)) ? (arr_30 [i_10 - 4] [i_11 - 1] [i_10] [12LL]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_29 [i_15] [i_11 + 1] [i_10])), (arr_26 [i_8] [i_8]))))));
                            arr_50 [i_8] [5] [i_10] [i_8] [i_15] = ((/* implicit */int) arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                        }
                        var_43 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 49141U))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                var_44 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [11U] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_16]))) : (-40LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_8] [i_17])) ? (((/* implicit */int) arr_25 [i_8] [i_17])) : (((/* implicit */int) (signed char)30)))))))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (-(144229723)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (arr_46 [(signed char)3] [i_8] [i_16] [0] [i_17]))))));
                var_45 = max((((((/* implicit */int) arr_52 [i_8] [i_16] [i_17])) * (((/* implicit */int) arr_52 [i_8] [i_8] [i_8])))), (((/* implicit */int) ((signed char) -27LL))));
            }
            for (short i_18 = 1; i_18 < 12; i_18 += 2) 
            {
                arr_60 [i_8] [i_8] [i_18 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 10282963467582419741ULL)))))) && (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_42 [i_8] [i_16] [i_18] [i_18] [i_18]))))) != (min((arr_27 [i_8] [i_8]), (((/* implicit */unsigned int) arr_28 [i_8] [i_8] [i_18 - 1]))))))));
                arr_61 [i_16] [i_8] = ((((/* implicit */_Bool) min((arr_56 [i_18 + 1] [i_8] [i_8] [i_8]), (arr_56 [i_8] [i_8] [i_16] [i_8])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_57 [i_8] [i_8] [i_16] [i_8])) && (((/* implicit */_Bool) arr_46 [i_8] [i_16] [i_16] [i_18 + 1] [2U])))) && (((39LL) != (var_9)))))) : (var_3));
                var_46 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_52 [i_18 + 1] [i_16] [i_18])) ? (((/* implicit */int) arr_52 [i_18 - 1] [i_16] [i_18])) : (((/* implicit */int) arr_52 [i_18 + 1] [(_Bool)1] [i_18]))))));
                var_47 = ((/* implicit */_Bool) arr_41 [i_8] [3LL] [i_18] [i_16] [i_8]);
                /* LoopSeq 1 */
                for (long long int i_19 = 1; i_19 < 11; i_19 += 1) 
                {
                    var_48 = ((/* implicit */_Bool) (~((-(((arr_59 [i_8] [i_16] [i_8] [i_8]) / (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_8] [i_16] [i_8] [i_19])))))))));
                    var_49 ^= ((/* implicit */unsigned long long int) ((_Bool) (-(2147483647))));
                }
            }
            arr_65 [(signed char)11] [i_8] = ((/* implicit */unsigned long long int) arr_45 [i_8]);
        }
        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 2) 
        {
            arr_68 [i_8] = ((/* implicit */long long int) ((arr_32 [i_8] [i_20] [i_20] [i_20] [i_20] [i_20]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_8])) ? (arr_45 [i_20]) : (((/* implicit */int) ((unsigned short) arr_37 [i_8] [i_8]))))))));
            arr_69 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) arr_25 [i_8] [i_20]);
        }
        for (unsigned char i_21 = 4; i_21 < 10; i_21 += 2) 
        {
            var_50 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_53 [i_21 - 2] [i_21 + 1])) && (arr_32 [i_8] [i_21] [(short)7] [i_21] [i_21 - 4] [i_21]))));
            var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (short)32755)))));
        }
        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_55 [i_8] [i_8] [i_8] [i_8])) - ((-(8163780606127131874ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8]))) : (-8015287115764751032LL)));
    }
    var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) (~(var_5))))));
}
