/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60439
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_11 [(unsigned short)10] [i_3] [(unsigned char)0] [(unsigned short)10] [i_4] [i_0] |= ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (unsigned short)65533)))) : (((((/* implicit */_Bool) ((64) % (((/* implicit */int) arr_4 [i_3]))))) ? (-836095236) : (((/* implicit */int) arr_5 [i_2])))));
                                var_13 = ((/* implicit */unsigned short) (+(1800527984)));
                                arr_12 [i_0] [i_2] [(_Bool)1] [i_1] [i_4] = ((/* implicit */short) arr_10 [i_4] [i_0 - 1] [i_0 - 1] [i_3] [i_4] [i_4]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_1 + 1] [(unsigned char)0] [i_1] [i_0 - 1]);
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) -1800527985))));
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    arr_16 [i_1] [i_1] [(unsigned short)3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (9223372036854775807LL)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned short)3] [i_1] [i_1])))))) : (3660765295699747096ULL)))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32752)) ? (84907730) : (((/* implicit */int) arr_2 [i_1 - 2]))))) ? (((/* implicit */int) ((_Bool) -84907723))) : (var_0)));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        arr_19 [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(581469004U)));
                        arr_20 [i_0] [(short)2] [i_1] [(short)2] = ((/* implicit */long long int) (~(max((((var_0) & (((/* implicit */int) arr_17 [i_0] [i_1] [i_1])))), (((/* implicit */int) arr_2 [i_1]))))));
                        var_17 = ((/* implicit */_Bool) arr_5 [i_0 - 1]);
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) -1800527984)), (-6317569213431355883LL)));
        arr_24 [9U] = ((((/* implicit */_Bool) (unsigned short)43886)) ? (((((/* implicit */_Bool) -1800527985)) ? (((/* implicit */long long int) var_9)) : (arr_22 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 0U)))));
        var_19 = ((/* implicit */unsigned short) -836095236);
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_32 [i_10] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) -84907730));
                var_21 = ((/* implicit */int) (~(arr_22 [i_8])));
            }
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                arr_36 [(_Bool)1] [i_9] [i_11] = ((/* implicit */_Bool) var_0);
                var_22 |= ((/* implicit */_Bool) ((int) ((var_9) ^ (((/* implicit */int) var_3)))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (signed char)-1))));
                arr_37 [i_8] [i_9] [i_11] |= ((/* implicit */unsigned short) (~(arr_21 [i_8 + 3])));
            }
            arr_38 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 84907722)) ? (((/* implicit */long long int) var_9)) : (-1LL)))) ? (((/* implicit */int) ((arr_26 [i_8] [i_8]) || (((/* implicit */_Bool) arr_27 [i_8]))))) : (((/* implicit */int) arr_30 [i_8 + 4] [i_8 + 4] [i_9]))));
            var_24 = ((unsigned short) arr_34 [13LL] [i_8 + 4] [i_8 + 1]);
            var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) arr_33 [i_9] [i_9] [i_9] [i_9]))))));
        }
        var_26 = ((/* implicit */unsigned short) ((long long int) (signed char)-121));
        /* LoopSeq 4 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            var_27 |= ((/* implicit */unsigned short) 15373834300606715629ULL);
            arr_42 [i_8] [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_8 - 1] [i_8 + 1] [i_8 + 4]))));
            arr_43 [11] [i_12] [i_8 + 3] = ((/* implicit */unsigned short) 6563987856262691513ULL);
        }
        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            arr_47 [i_8] [i_8] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)127)) != (((/* implicit */int) arr_30 [i_8] [i_8 - 1] [i_13]))));
            arr_48 [i_13] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 18446744073709551588ULL))) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (-6317569213431355864LL) : (165006416665684363LL))) : (((((/* implicit */_Bool) var_5)) ? (165006416665684363LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))))));
            arr_49 [i_13] [(unsigned short)2] = ((unsigned long long int) (_Bool)1);
            arr_50 [i_13] = ((/* implicit */signed char) -1);
        }
        for (unsigned long long int i_14 = 3; i_14 < 12; i_14 += 3) 
        {
            arr_53 [i_8 + 1] [i_8] [i_14] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -84907723)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (_Bool)0))))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) % (arr_22 [i_8 + 3]))))));
            arr_54 [i_14] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2040)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_8 - 1] [i_14 + 2]))) : (((arr_46 [i_8] [i_8]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_14 + 2])))))));
        }
        for (long long int i_15 = 2; i_15 < 13; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 13; i_16 += 4) 
            {
                var_29 = ((/* implicit */int) max((var_29), (-281962660)));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1800527985)) ? (1800527984) : (((/* implicit */int) (signed char)-34))));
                arr_60 [i_8 + 2] [i_16] [i_8 + 2] [i_8 + 2] = ((/* implicit */int) ((arr_22 [i_8 + 4]) - (arr_22 [i_8 + 1])));
            }
            var_31 = arr_31 [i_8] [i_8] [i_8] [i_15];
            arr_61 [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_8] [i_8 + 1] [i_8]))) * (arr_21 [i_8 + 2]));
            /* LoopSeq 1 */
            for (unsigned short i_17 = 3; i_17 < 12; i_17 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
                {
                    arr_68 [i_8] [i_8] [i_8] [i_8] [i_8] [12U] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_8 + 1]))));
                    arr_69 [(unsigned short)2] [(unsigned short)2] [i_17] [(unsigned short)2] = ((/* implicit */unsigned long long int) (~(arr_44 [i_8 + 3] [i_15 - 2] [i_17 - 1])));
                }
                for (long long int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_63 [i_8] [i_15 - 1] [i_8 - 1]))));
                    /* LoopSeq 1 */
                    for (signed char i_20 = 3; i_20 < 12; i_20 += 3) 
                    {
                        arr_76 [i_8] [i_8 + 1] [i_8 + 1] [i_17 + 2] [i_19] [i_8 + 1] [i_20 - 1] = ((/* implicit */unsigned short) ((((unsigned long long int) -165006416665684363LL)) < (((/* implicit */unsigned long long int) arr_66 [i_8 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 2] [i_17 + 1]))));
                        arr_77 [i_20] [(unsigned short)11] [(unsigned short)11] [i_20 + 1] [i_20] [0ULL] [i_20] = ((/* implicit */long long int) (!(arr_56 [i_8] [i_8] [i_15 - 1])));
                        arr_78 [i_8 + 4] [i_17] [i_17] [i_19] [i_20 + 1] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_62 [i_8] [i_8] [i_8 + 4])) > (((/* implicit */int) (short)12132))));
                    }
                    var_33 = ((/* implicit */signed char) arr_59 [i_17 + 1] [i_8 + 3] [i_15 - 1] [i_19]);
                }
                for (signed char i_21 = 2; i_21 < 13; i_21 += 4) 
                {
                    arr_81 [i_21] [i_21] [i_21] [i_21 + 1] [i_21 + 1] [i_21] = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) & (arr_41 [(signed char)10] [(signed char)10] [i_8])))));
                    arr_82 [i_17] [i_21 + 1] = ((/* implicit */unsigned int) ((signed char) arr_33 [i_21 - 1] [i_15 - 1] [i_17] [i_8]));
                }
                /* LoopSeq 2 */
                for (long long int i_22 = 0; i_22 < 14; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 3; i_23 < 11; i_23 += 3) 
                    {
                        var_34 |= ((/* implicit */short) var_6);
                        arr_88 [i_8] [(_Bool)1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (((long long int) arr_75 [i_17] [i_23]))));
                        arr_89 [i_15] = ((/* implicit */unsigned char) var_3);
                    }
                    arr_90 [i_8] [i_15 - 2] [i_17] [i_22] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (int i_24 = 1; i_24 < 13; i_24 += 3) 
                {
                    arr_95 [i_8] [i_8] [i_15] [i_17 + 2] [2] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_70 [i_15] [i_15 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)108))));
                    arr_96 [i_15 - 1] [i_17] [i_15 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_17])) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23337)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (unsigned short)23344)))))));
                }
            }
        }
    }
}
