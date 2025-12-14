/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91926
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
    var_15 = ((/* implicit */short) var_13);
    var_16 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((1880132952U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) != (var_5)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_1] = ((short) 2414834346U);
            /* LoopSeq 3 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 3) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 5816753696115109635LL)))) ^ (((unsigned int) -840934149))));
                arr_9 [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21860))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)3])) && (((/* implicit */_Bool) var_3)))))));
                arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (-(arr_2 [i_2 - 3] [i_2 - 1] [i_2])));
            }
            for (signed char i_3 = 3; i_3 < 20; i_3 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))))));
                var_19 = ((unsigned short) ((long long int) 2414834343U));
            }
            for (signed char i_4 = 3; i_4 < 20; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_20 = ((((/* implicit */unsigned long long int) arr_11 [i_4 - 3] [10LL] [i_1])) ^ (arr_14 [i_1] [i_1] [i_1 + 1] [i_1 - 3]));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [16ULL])))))));
                    arr_18 [i_0] [i_0] [i_1] [i_1] [13] = ((/* implicit */unsigned short) 1005416751);
                }
                arr_19 [i_0] [i_1] [i_0] = var_9;
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [20ULL] [i_1] [i_4 - 1])) ? (((/* implicit */int) arr_15 [i_1 - 1] [(short)16] [i_4] [i_4 - 2])) : (((/* implicit */int) arr_15 [i_1 - 2] [2ULL] [i_1] [i_4 + 3]))));
            }
            arr_20 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((-1028821148691781854LL) >= (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) 2414834348U)) ? (((/* implicit */int) arr_15 [i_0] [(unsigned short)14] [i_6] [i_6])) : (arr_0 [i_1 - 3]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 4) 
                {
                    arr_28 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) 2414834319U)) + (1028821148691781854LL)));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((unsigned long long int) 2414834343U))));
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_25 = ((/* implicit */short) ((unsigned long long int) 0ULL));
                    arr_31 [(unsigned short)20] [i_1] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) (-(((unsigned int) arr_22 [i_1]))));
                    arr_32 [i_1] = ((/* implicit */int) var_13);
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_24 [i_0]))))));
                }
            }
        }
        for (unsigned long long int i_9 = 3; i_9 < 23; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 3; i_10 < 23; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned long long int) min((min((arr_2 [i_9 + 1] [4U] [(_Bool)0]), (((/* implicit */long long int) arr_37 [i_9 - 1] [i_9 + 1] [i_10 - 2] [(signed char)17])))), (((/* implicit */long long int) ((unsigned char) arr_37 [i_9 - 1] [i_0] [i_10] [i_11])))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (5816753696115109635LL)))))))) * (((((/* implicit */_Bool) min(((unsigned short)27404), (((/* implicit */unsigned short) (signed char)-40))))) ? (arr_41 [i_9] [i_12] [i_10] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) ((unsigned short) var_10));
            }
            arr_42 [i_9] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11791131538575645160ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned short)2] [0U]))))) ? (max((arr_23 [i_0]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [8LL] [i_9] [8LL]))))))))), (((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_35 [(short)10]))))) & (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (arr_26 [i_9] [i_0] [6] [i_9] [4ULL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            arr_43 [1LL] = ((/* implicit */signed char) 18446744073709551610ULL);
            arr_44 [15U] [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (arr_13 [(unsigned short)16] [i_0] [i_0] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))))))))))));
        }
        arr_45 [(short)1] = ((_Bool) min((((/* implicit */unsigned short) arr_25 [i_0] [i_0])), (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_30 |= ((/* implicit */unsigned char) 3552753628U);
    }
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                arr_52 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) max(((~(max((((/* implicit */int) (signed char)39)), (1543720726))))), (((/* implicit */int) (((~(-5816753696115109615LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_14] [i_14] [i_15] [(_Bool)1] [i_14])) ? (arr_48 [i_13] [i_14]) : (arr_5 [i_13] [i_13])))))))));
                var_31 |= ((/* implicit */short) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_14]))));
                    var_33 = ((/* implicit */short) (~(((arr_23 [i_13]) | (arr_24 [(unsigned short)6])))));
                    arr_57 [i_16] [i_14] [(unsigned char)2] [i_14] &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
                    var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_17])) ? (arr_3 [1ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned int i_18 = 4; i_18 < 22; i_18 += 3) 
                {
                    arr_60 [i_13] [i_14] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((+(11791131538575645142ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (-(arr_55 [i_18 - 1] [i_14] [i_14] [i_18] [i_14] [i_14]))))));
                    var_36 += (-(((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-27395)))))));
                }
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    arr_65 [i_13] [i_13] [i_16] [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 0U)) : (18446735277616529408ULL))) - ((-(var_5)))));
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15239530136464673579ULL)) ? (arr_22 [i_14]) : (((/* implicit */unsigned long long int) arr_17 [i_19] [22U] [i_16] [10ULL] [i_14] [i_13]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27836))) == (1880132952U))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10))))))));
                    var_38 += arr_41 [(short)1] [i_14] [i_14] [i_16] [i_19];
                    arr_66 [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) var_10);
                }
                for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    arr_70 [i_13] [(unsigned short)4] [i_16] [i_16] [i_16] [i_20] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        var_39 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_13] [(_Bool)1] [i_14] [4LL] [i_20])) >= (((int) var_4))));
                        arr_73 [i_21] [i_20] [i_16] [i_16] [i_16] [i_13] [i_13] |= arr_38 [i_13] [6] [i_20] [i_21];
                    }
                    /* LoopSeq 2 */
                    for (long long int i_22 = 3; i_22 < 23; i_22 += 4) 
                    {
                        arr_76 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_22 - 3] [i_22 - 3])) ? (arr_12 [i_22 - 2] [i_22 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_22 - 3] [11U] [i_13] [i_22 - 2] [2ULL])))));
                        arr_77 [i_13] [i_13] [i_14] [12ULL] [i_20] [(unsigned char)20] [i_22] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (arr_11 [(short)22] [(_Bool)0] [i_16])))) ? (((/* implicit */long long int) 742213668U)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 4294967295U)) : (6723150278918001413LL)))));
                    }
                    for (unsigned char i_23 = 1; i_23 < 22; i_23 += 2) 
                    {
                        arr_82 [17ULL] [i_13] [15] [i_20] = ((/* implicit */unsigned long long int) var_7);
                        arr_83 [i_13] [8] [i_16] [0U] [i_13] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) 8U)));
                    }
                    var_40 = ((/* implicit */_Bool) (-(arr_16 [i_13] [i_13] [i_13] [(unsigned short)22] [i_13] [i_13])));
                }
                var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65394))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                var_42 -= (!(((/* implicit */_Bool) ((((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)11302)))) ? ((+(((/* implicit */int) arr_80 [(unsigned short)12] [i_14] [i_14] [i_13])))) : (((/* implicit */int) (unsigned short)13121))))));
                var_43 = ((/* implicit */unsigned long long int) ((arr_1 [i_13]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_56 [(unsigned char)6]), (((/* implicit */unsigned long long int) arr_47 [i_13])))) == (((((/* implicit */_Bool) 15239530136464673582ULL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_7 [(short)17] [i_14] [i_24]))))))))));
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) <= (268419072ULL))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5)))) : (((((/* implicit */_Bool) 11791131538575645129ULL)) ? (var_10) : (((/* implicit */unsigned int) arr_81 [i_13] [i_13] [1ULL] [(short)22] [i_13])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4703167531778859126LL)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0)))) : ((-(var_11)))))))))));
                var_45 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((-9223372036854775784LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-40)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))))));
            }
        }
        arr_86 [i_13] = ((/* implicit */unsigned char) 18446744073709551615ULL);
    }
    /* vectorizable */
    for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
    {
        var_46 += ((/* implicit */short) ((((((/* implicit */_Bool) 1151795604700004352LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3552753628U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        arr_90 [16] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_69 [21ULL])))));
        arr_91 [(short)23] |= ((/* implicit */unsigned short) (short)0);
    }
}
