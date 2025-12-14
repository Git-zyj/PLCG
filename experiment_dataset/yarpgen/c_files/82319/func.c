/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82319
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((arr_3 [i_0] [i_1] [i_0 + 1]) % (((/* implicit */int) (short)14210)))))))));
                                var_21 *= ((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1]);
                                arr_12 [i_4] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_2 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)-14210))))), (((/* implicit */long long int) arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)14227)) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4]))))) ? (((((/* implicit */int) (unsigned short)18309)) * (((/* implicit */int) arr_4 [i_0 - 2] [i_2])))) : ((~(((/* implicit */int) arr_4 [9U] [i_2])))))) : ((~(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_4] [i_1] [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2]))) * (var_15)))))));
                    arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [1U]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1]);
                        arr_17 [i_0 - 2] [i_1] [i_1] [4LL] |= ((/* implicit */_Bool) ((17267465031954815392ULL) / (8749315466645573772ULL)));
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (1179279041754736205ULL)));
                    }
                }
            } 
        } 
        arr_18 [(unsigned char)2] [i_0 - 2] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-14))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_25 -= ((((/* implicit */_Bool) arr_24 [i_6 - 2] [i_7] [i_8] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1033812886)))))) : (((((/* implicit */_Bool) var_9)) ? (8002710543978727127LL) : (((/* implicit */long long int) 1033812886)))));
                    arr_27 [i_6] [i_6 + 1] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)2])) / (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-6478)))) : (((((/* implicit */_Bool) (short)-6479)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_7] [i_7] [i_6]))) : (arr_16 [i_8] [i_8] [i_7] [i_6]))));
                    arr_28 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) (short)6465));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (4057237235U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18329)))))) ? (((/* implicit */unsigned long long int) 565712476U)) : ((+(14741533899687025124ULL)))));
        arr_29 [i_6 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_26 [i_6] [1ULL] [i_6] [i_6 + 1]) + (((/* implicit */long long int) 759111402))))) * (arr_6 [i_6 - 2] [i_6 + 1])));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)88)) : ((~(((/* implicit */int) arr_8 [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1]))))));
    }
    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (12656160966732252339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) * (3736653358552390789ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-31))))))) * (((((/* implicit */_Bool) ((short) (unsigned short)37425))) ? ((+(var_9))) : (var_9)))));
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        arr_34 [(_Bool)1] = (+((-(arr_31 [(_Bool)1]))));
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_37 [5ULL] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_33 [i_9])))) ? (((((/* implicit */_Bool) 2083811844682426592ULL)) ? (((/* implicit */long long int) 1087449071U)) : (4837411298143891042LL))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_33 [i_9])) : (((/* implicit */int) arr_33 [i_10])))))));
            arr_38 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1033812886)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned char)117))))) ? (((((int) var_0)) % (((-759111391) % (((/* implicit */int) (unsigned short)60266)))))) : (((((((/* implicit */int) (short)-6457)) % (-361366572))) * (((/* implicit */int) (unsigned short)25258))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_43 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */_Bool) (signed char)121);
                arr_44 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_35 [i_9] [i_10] [i_11])) ? (arr_31 [i_9]) : (15482038461044497681ULL)))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)139)))))));
            }
            var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23253)) % (((/* implicit */int) (signed char)-127))))) ? (((((/* implicit */_Bool) arr_33 [i_9])) ? (((/* implicit */unsigned long long int) (+(-3351873667656841751LL)))) : (arr_31 [i_9]))) : (((((((/* implicit */_Bool) arr_41 [i_9] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (16654980560298542173ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50005))) : (arr_41 [i_9] [i_9] [i_9]))))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            var_31 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_9] [i_12])))));
            arr_47 [i_9] = ((/* implicit */_Bool) var_1);
            arr_48 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_41 [i_9] [i_9] [i_12]), (arr_41 [i_9] [i_12] [i_12])))) ? (((/* implicit */long long int) arr_30 [i_9] [i_12])) : (((((/* implicit */_Bool) (short)-24086)) ? (arr_41 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) -66719753))))));
        }
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            arr_51 [i_9] [i_9] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_49 [i_9] [i_13])))) && ((!(((/* implicit */_Bool) (unsigned short)16820)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14668))))) ? (arr_31 [i_14 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_33 -= ((/* implicit */unsigned int) ((int) ((349136705U) % (((/* implicit */unsigned int) -174806391)))));
                arr_55 [i_9] [i_13] [i_14 + 3] [i_14 + 1] = ((/* implicit */unsigned long long int) ((-1605383628) / (((int) arr_45 [i_9] [i_9]))));
            }
            /* vectorizable */
            for (signed char i_15 = 1; i_15 < 21; i_15 += 2) 
            {
                arr_58 [13ULL] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_46 [i_15] [i_13] [15U])) ? (8002710543978727145LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                var_34 &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_9])))))));
            }
        }
        for (unsigned int i_16 = 1; i_16 < 21; i_16 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 2; i_17 < 21; i_17 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    var_35 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 6709265591568988915LL)) ? (16654980560298542184ULL) : (((/* implicit */unsigned long long int) -817999789885163176LL)))) % (5739279702292749908ULL)));
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(arr_60 [i_16])))) % (var_13)))) ? (max((((/* implicit */long long int) (_Bool)1)), (-1501053017262259644LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)6484)))));
                        arr_70 [i_9] [i_9] [i_9] [i_16] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_45 [i_9] [i_9])), (-6709265591568988915LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_9] [i_16 + 1] [i_9] [i_18] [10LL])) && (((/* implicit */_Bool) var_7)))))))) ? (max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_9] [13LL] [i_17] [i_18])) ? (1439968630) : (((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 16654980560298542186ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_49 [i_9] [i_9]))))))));
                        var_37 = ((/* implicit */int) ((long long int) (unsigned short)56870));
                    }
                    var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_32 [i_17 - 1] [i_16 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_17 - 1] [i_16] [i_16] [i_16]))) : (1791763513411009444ULL))) % (((/* implicit */unsigned long long int) max((3264919096U), (((/* implicit */unsigned int) arr_65 [i_17 + 1] [i_16] [i_16] [i_16 + 1])))))));
                    var_39 = ((13619347261418337111ULL) / (((/* implicit */unsigned long long int) -3325589732866075123LL)));
                }
                var_40 ^= -3325589732866075115LL;
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (arr_66 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56610)) ? (((/* implicit */int) (unsigned short)29678)) : (((/* implicit */int) arr_49 [i_9] [i_16 + 1]))))) : (max((6709265591568988914LL), (((/* implicit */long long int) arr_40 [i_16 - 1] [i_16 - 1] [i_9] [i_9]))))))) ? (((/* implicit */long long int) ((arr_56 [i_16 - 1]) ? (((/* implicit */int) arr_56 [i_16 - 1])) : (((/* implicit */int) arr_56 [i_16 + 1]))))) : (((((/* implicit */_Bool) (short)17872)) ? (arr_50 [i_9] [i_16] [i_17 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_9] [i_16] [i_17 + 1] [i_17 - 1] [i_17])))))));
            }
            for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 2) /* same iter space */
            {
                var_42 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9] [i_16 - 1])) ? (arr_60 [i_20]) : (((/* implicit */int) arr_65 [i_9] [i_9] [i_9] [16LL]))))) ? (((/* implicit */long long int) ((int) arr_71 [i_9] [i_16] [i_20] [i_16]))) : (max((var_7), (((/* implicit */long long int) var_14)))))));
                var_43 -= ((/* implicit */_Bool) (~((~(9163860217642915468ULL)))));
            }
            for (unsigned long long int i_21 = 2; i_21 < 21; i_21 += 2) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_33 [i_9])) * (((/* implicit */int) arr_33 [i_21 - 1])))))))));
                arr_76 [i_16] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_35 [i_9] [i_9] [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_9] [i_16] [i_21 + 1]))))) ? ((+(1030048192U))) : (((/* implicit */unsigned int) ((arr_60 [i_16]) / (((/* implicit */int) arr_32 [i_9] [i_9])))))))));
            }
            for (unsigned long long int i_22 = 2; i_22 < 21; i_22 += 2) /* same iter space */
            {
                var_45 = ((/* implicit */_Bool) var_9);
                arr_79 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_14)) ? (arr_54 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_36 [i_16 + 1])) ? (((((/* implicit */_Bool) arr_68 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_9] [i_9] [i_22] [i_9]))) : (arr_42 [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [(_Bool)1] [i_16] [i_22 - 1]))))) : (((/* implicit */long long int) ((arr_75 [i_16] [i_16] [i_16 + 1] [i_16]) ? (((/* implicit */int) arr_75 [i_16] [i_16 - 1] [i_16 + 1] [i_16 - 1])) : (((/* implicit */int) arr_75 [i_16] [i_16 - 1] [i_16 + 1] [3ULL])))))));
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_84 [i_9] [i_16 + 1] [6] [i_23] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) arr_64 [i_9] [i_16] [i_22 - 2]))));
                            arr_85 [i_9] [i_9] [i_22] [i_16] [(signed char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27299)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6471))) : (-6709265591568988915LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23310)) ? (((/* implicit */int) (short)6484)) : (((/* implicit */int) (unsigned short)43441))))) : (arr_81 [i_16 + 1] [i_16 + 1] [(short)16] [i_16])))));
                            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_35 [i_16] [i_22] [i_23])) : (((/* implicit */int) (short)-6466))))) ? (arr_77 [i_22 - 2] [i_22] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-6484), ((short)-6457)))))))) ? ((-(((unsigned long long int) arr_42 [(short)4])))) : (var_11))))));
                        }
                    } 
                } 
            }
            arr_86 [i_16] [i_16 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((6709265591568988914LL) % (((/* implicit */long long int) 198991654))))))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23310)) * (((/* implicit */int) arr_32 [i_9] [(unsigned short)2]))))) ? (((/* implicit */unsigned long long int) var_6)) : (var_15)))));
            var_47 = (((!(((/* implicit */_Bool) 1185499311U)))) ? (((/* implicit */long long int) 198991661)) : (((((/* implicit */_Bool) max((arr_31 [i_9]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_68 [i_9] [i_16] [i_16] [i_16] [i_16])) ? (arr_68 [i_9] [i_9] [i_9] [i_9] [i_16]) : (((/* implicit */long long int) arr_80 [i_9] [i_16] [i_16] [i_16])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_73 [i_9] [i_16 + 1]), (((/* implicit */short) var_14)))))))));
        }
    }
}
