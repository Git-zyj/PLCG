/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84736
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) var_5);
        arr_3 [i_0] = ((/* implicit */int) ((unsigned char) arr_2 [i_0]));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [5ULL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((int) 8989459215029923227LL)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)188)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_16 *= ((/* implicit */signed char) var_2);
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (signed char)0);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) >= (3116009656784657859LL)))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    arr_14 [i_1] [i_2] [i_2] [6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1809987392)) | ((-(var_10)))));
                    arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 3; i_5 < 16; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_19 = ((/* implicit */int) min((var_19), ((+(((/* implicit */int) (_Bool)1))))));
                arr_23 [i_6] [i_4] [i_4] = (-(((((/* implicit */int) (unsigned char)188)) % (((/* implicit */int) (unsigned char)188)))));
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2036992451258571307LL)) ? (((/* implicit */unsigned long long int) var_0)) : (var_5)));
                        arr_28 [i_4] [16] [i_6] [i_4] [16] = ((max((15125189207674477929ULL), (((/* implicit */unsigned long long int) arr_21 [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1])))) + (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) -924869025)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))))));
                    }
                    var_21 = ((/* implicit */int) (((+(3116009656784657861LL))) / (min((2036992451258571312LL), (((/* implicit */long long int) arr_19 [i_5 + 2] [i_5 - 2] [i_4]))))));
                    arr_29 [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned int) (((~(arr_21 [i_5 - 1] [i_5] [11ULL] [(short)8]))) < ((+(((/* implicit */int) (_Bool)1))))));
                    arr_30 [i_7] [i_4] [i_6] [i_5] [i_4] [i_4] = ((/* implicit */long long int) ((523264U) >> (((((/* implicit */int) var_6)) - (22732)))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_22 *= ((/* implicit */signed char) arr_24 [i_4] [(short)0] [i_6]);
                        var_23 = ((/* implicit */signed char) ((unsigned long long int) 4294444032U));
                    }
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_42 [i_4] [i_4] = ((/* implicit */unsigned int) (-(((long long int) arr_34 [i_4] [i_4] [(unsigned short)11] [i_4]))));
                        arr_43 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) var_12);
                        var_24 = ((/* implicit */long long int) var_2);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 4; i_12 < 14; i_12 += 4) 
                    {
                        arr_47 [i_4] [i_5] [i_6] [i_9] [i_12] = ((/* implicit */unsigned short) (unsigned char)67);
                        var_25 = ((/* implicit */signed char) ((arr_21 [i_5 - 2] [i_5 - 2] [i_12 + 3] [12]) >= (arr_21 [i_5 - 2] [i_12] [i_12 - 1] [i_9])));
                    }
                }
                for (unsigned char i_13 = 1; i_13 < 17; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        arr_53 [i_4] [i_4] [4ULL] [i_4] [i_4] [i_4] [(unsigned char)7] = ((/* implicit */_Bool) (signed char)9);
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_48 [i_4] [i_13 + 1] [i_6] [i_5 - 2] [i_14]) : (((/* implicit */unsigned long long int) 8917447273680744289LL))));
                        arr_54 [i_4] = ((/* implicit */short) 8867710605127620185LL);
                        arr_55 [i_4] [i_4] [i_4] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_13 + 1] [i_5] [i_6] [i_5 + 1] [i_14] [i_14])) ? (var_5) : (((/* implicit */unsigned long long int) arr_40 [i_13 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 2] [12] [12]))));
                    }
                    var_27 = ((/* implicit */_Bool) ((var_10) >> (((((((/* implicit */int) arr_49 [i_4] [i_4])) - ((+(((/* implicit */int) arr_37 [i_4] [i_4] [i_6] [i_6] [i_13])))))) + (28408)))));
                    var_28 *= (~(var_11));
                    arr_56 [i_4] [i_4] [i_6] [i_4] [i_6] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_13 - 1])) < (((/* implicit */int) max((arr_31 [i_13 - 1]), (arr_31 [i_13 + 1]))))));
                    var_29 = max((5ULL), (((/* implicit */unsigned long long int) arr_21 [i_4] [i_13 + 1] [2LL] [i_13 - 1])));
                }
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_59 [i_6] [i_6] [i_6] [i_4] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) (unsigned char)238);
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 3663072924U)) : (arr_40 [i_5 - 3] [i_5 - 3] [i_5] [i_5 + 2] [i_5 + 1] [i_5]))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)43784))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_5 + 1]))) & (var_11)));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_33 = (-(((var_5) - (6934167004743428432ULL))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_4] [i_5] [i_6])) << ((((((~(var_4))) + (1100730332))) - (21))))))));
                        arr_62 [i_4] [i_5 - 1] [i_4] = ((/* implicit */unsigned long long int) var_10);
                        arr_63 [i_4] [6ULL] [5ULL] [i_6] [i_15] [(unsigned short)10] [i_6] = ((/* implicit */signed char) var_13);
                    }
                }
                var_35 |= min((((/* implicit */long long int) ((arr_21 [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 3]) / (arr_21 [i_5 - 2] [(short)3] [i_5] [i_5 + 1])))), (min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_50 [16LL] [i_5 + 1] [(unsigned short)4] [i_6] [(signed char)14])) ? (-3116009656784657868LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22127))))))));
            }
            for (long long int i_17 = 2; i_17 < 16; i_17 += 4) 
            {
                var_36 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > ((-((~(arr_48 [i_4] [i_5] [i_5] [16ULL] [0LL])))))));
                var_37 = ((/* implicit */short) 523276U);
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_49 [i_5] [i_17]))))))));
                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_12))));
                var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_40 [i_4] [i_5 - 1] [2LL] [i_4] [i_4] [i_4])) | (var_12)))))))));
            }
            var_41 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_44 [i_5 + 2]), (((/* implicit */long long int) (short)1016))))), (((unsigned long long int) var_8))));
            /* LoopSeq 2 */
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (_Bool)1))));
                var_43 = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(_Bool)1] [i_5 - 2] [i_5 - 3] [i_5 - 1] [i_5 - 1]))) * (var_0))), (((/* implicit */unsigned int) ((unsigned char) 523249U))));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        {
                            arr_78 [(short)7] [i_5] [i_4] [i_19] [i_20] = ((/* implicit */unsigned long long int) arr_52 [i_4] [i_5] [(_Bool)1] [i_18] [i_19] [i_19] [i_4]);
                            var_44 = var_9;
                            arr_79 [0ULL] [13ULL] [1] [i_4] [i_4] [i_4] [1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_50 [i_18] [i_5 - 2] [3ULL] [i_19] [i_4])), (8917447273680744289LL)));
                        }
                    } 
                } 
            }
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_22 = 1; i_22 < 15; i_22 += 2) 
                {
                    arr_88 [i_4] [4] [i_21] [i_22 + 1] = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) arr_87 [i_4] [i_5 + 1] [15ULL] [i_22] [i_4])) ^ (-8917447273680744289LL))));
                    arr_89 [i_4] [i_5 - 1] [i_4] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_26 [i_21] [i_21] [i_21] [11U] [i_21])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_9))));
                }
                for (unsigned long long int i_23 = 3; i_23 < 17; i_23 += 1) 
                {
                    arr_92 [i_4] = ((/* implicit */unsigned int) var_13);
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((((/* implicit */_Bool) arr_82 [i_4] [i_21] [i_23 + 1])) ? (((((/* implicit */_Bool) max((arr_67 [i_21] [i_21]), (((/* implicit */unsigned long long int) var_1))))) ? (((unsigned long long int) 1953723246U)) : (((((/* implicit */_Bool) 2359840728233160435ULL)) ? (2038010538203375282ULL) : (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1928)))))));
                    var_46 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned char i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    var_47 = ((/* implicit */int) min((var_47), (var_2)));
                    var_48 = ((/* implicit */int) arr_74 [i_5 - 2] [i_5 + 1] [i_5 - 3] [5U]);
                    var_49 = var_1;
                    arr_96 [i_4] [i_4] [i_24] [i_24] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-3)) ? (var_13) : (((/* implicit */int) (_Bool)1))))))), (var_11)));
                    var_50 = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)6))))));
                }
                /* vectorizable */
                for (unsigned char i_25 = 1; i_25 < 16; i_25 += 1) 
                {
                    var_51 += ((/* implicit */short) var_11);
                    var_52 = ((/* implicit */int) var_3);
                    arr_99 [i_25 + 2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_4] [i_5 - 3] [i_4]))) : (arr_82 [i_4] [i_4] [i_21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_25 + 1] [i_5 + 1] [i_21] [i_25 + 1]))) : (arr_66 [i_4] [i_5 - 3] [9] [i_5 - 3])));
                }
                arr_100 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((unsigned char) (unsigned short)63607)), (((/* implicit */unsigned char) var_9))))) % (max((((/* implicit */int) ((unsigned short) var_10))), (((16383) | (1619408316)))))));
                var_53 = ((/* implicit */signed char) (unsigned char)67);
                var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */int) arr_93 [i_5 - 3])) : (((/* implicit */int) (_Bool)1)))))));
                var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(arr_61 [i_5] [i_5 + 2] [i_5 - 3] [i_5 + 1] [i_5 - 2])))), (max((var_14), (((/* implicit */unsigned short) arr_61 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 3] [i_5 - 1])))))))));
            }
        }
        arr_101 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_86 [i_4] [i_4])) : (((/* implicit */int) arr_86 [i_4] [i_4])))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)34135)) : (((/* implicit */int) arr_86 [i_4] [i_4]))))));
    }
    var_56 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (var_4)))), (max((((/* implicit */unsigned long long int) var_9)), (524287ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_10)) : (var_5)))))));
    var_57 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) % (16652792564861776235ULL))) > (((/* implicit */unsigned long long int) -1283284423)))))));
    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) ((3200167999250539805ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9)))))) ? (((/* implicit */long long int) max((var_13), (((/* implicit */int) var_9))))) : (var_1)));
    /* LoopNest 3 */
    for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 1) 
    {
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            for (int i_28 = 0; i_28 < 24; i_28 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_29 = 0; i_29 < 24; i_29 += 2) 
                    {
                        var_59 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                        var_60 = ((/* implicit */unsigned char) arr_112 [(signed char)18] [i_27 - 1] [i_29] [(unsigned short)0] [i_29]);
                    }
                    for (unsigned long long int i_30 = 3; i_30 < 22; i_30 += 4) 
                    {
                        var_61 += ((/* implicit */unsigned char) (+(3116009656784657849LL)));
                        var_62 = var_2;
                    }
                    arr_117 [i_26] = (~(((/* implicit */int) max((arr_103 [i_27 - 1]), (((/* implicit */unsigned short) (_Bool)1))))));
                }
            } 
        } 
    } 
}
