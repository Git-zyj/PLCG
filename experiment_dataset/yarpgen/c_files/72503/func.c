/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72503
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
    var_16 += (-(var_11));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */short) min((((((/* implicit */_Bool) 3375727404853910658ULL)) ? (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) (short)32767))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_12 [i_0] [i_0] [3U] [9ULL] [i_2 + 2] [i_4] [i_4]))));
                                var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [(unsigned short)5] [i_3 - 1] [i_2 - 1] [(signed char)10]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (var_11)));
                        arr_16 [i_0 + 1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) arr_11 [i_5] [i_2 + 1] [i_1] [(_Bool)1] [i_0 - 1]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (arr_14 [i_0] [(unsigned short)3] [i_2 - 1] [i_0])));
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1843835416U)) ? (((/* implicit */int) (unsigned short)2204)) : (((/* implicit */int) ((unsigned char) (unsigned short)41862)))));
                    }
                    var_23 = ((/* implicit */int) var_1);
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
        var_25 -= ((/* implicit */short) 3056375017U);
    }
    var_26 = ((/* implicit */int) max((((/* implicit */unsigned int) var_4)), (var_12)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (unsigned short i_9 = 4; i_9 < 7; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    {
                        arr_30 [i_7] [i_7] [i_7] = ((((/* implicit */int) arr_21 [i_7 + 1])) != (((((/* implicit */_Bool) (short)-16790)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1)))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8557)) && (((/* implicit */_Bool) var_5)))))));
                        var_28 ^= ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))) | (((((/* implicit */_Bool) var_5)) ? (2114868764U) : (var_12))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                {
                    arr_35 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 - 1] [i_11 - 1]))) : (var_9)))));
                    var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7] [i_11] [i_11] [i_12])) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (short)-32753)))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) var_11);
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_7 - 1]))));
        var_33 ^= ((/* implicit */unsigned char) 3U);
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        var_34 -= ((/* implicit */long long int) (unsigned short)1016);
        arr_38 [i_13] = ((/* implicit */_Bool) (unsigned short)44242);
        arr_39 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_37 [i_13])) : (((/* implicit */int) arr_37 [i_13])))) >= ((+(((/* implicit */int) arr_36 [i_13]))))));
        var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)35985)))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        arr_43 [14U] = ((/* implicit */int) 3056375017U);
        var_36 ^= ((/* implicit */unsigned short) 4294967293U);
        /* LoopSeq 3 */
        for (unsigned char i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            arr_47 [4U] [4U] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(1619913272U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_14 [i_14] [i_15] [15ULL] [i_15 + 3]))))))) ? (98304ULL) : (min((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (arr_44 [i_14])))));
            var_37 = ((/* implicit */_Bool) arr_14 [(_Bool)1] [i_15] [i_15 + 2] [(unsigned short)2]);
            var_38 &= ((/* implicit */unsigned int) (_Bool)1);
        }
        /* vectorizable */
        for (signed char i_16 = 3; i_16 < 15; i_16 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_17 = 1; i_17 < 13; i_17 += 2) 
            {
                var_39 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */unsigned long long int) 1167588309U)) / (13824457639143254166ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45124)))));
                arr_54 [i_14] [i_16 - 3] [i_16 - 1] [i_17 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [(signed char)10]))))) ? (((/* implicit */int) (!(arr_8 [i_14] [i_16] [i_17] [i_14])))) : (((/* implicit */int) var_8))));
            }
            for (unsigned char i_18 = 1; i_18 < 14; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_19 = 1; i_19 < 15; i_19 += 2) 
                {
                    arr_60 [i_14] [(short)14] [i_18] [i_18] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)155)) ? (-910305753) : (((/* implicit */int) (unsigned short)7936))))));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_40 += ((/* implicit */unsigned short) (short)32757);
                        var_41 = ((/* implicit */unsigned int) -130984034);
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    arr_64 [i_19 + 1] [(unsigned short)15] [i_19] [i_19 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 33030144U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12921))) : (9223372036854775807LL)));
                }
                arr_65 [i_16 + 1] [i_16 + 1] [i_16] [(unsigned short)4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (78277000U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (8936579604115976350LL));
            }
            var_43 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) % (4622286434566297450ULL)));
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 16; i_22 += 2) 
            {
                var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26952)) ? (((/* implicit */unsigned int) var_5)) : (4269076972U))))));
                /* LoopNest 2 */
                for (short i_23 = 1; i_23 < 15; i_23 += 3) 
                {
                    for (long long int i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        {
                            arr_76 [i_14] [i_21] [i_22] [i_23 + 1] [i_24] [i_23 + 1] = ((/* implicit */signed char) -9223372036854775807LL);
                            arr_77 [i_23] [i_21] [i_21] [i_23] [i_23] = ((/* implicit */unsigned char) 242587681U);
                            arr_78 [i_24] [i_21] [i_21] [i_21] [15LL] [i_21] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_63 [i_14] [12U] [i_22] [i_23] [i_23 + 1] [15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-3637)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52971))) : (13824457639143254168ULL)))));
                        }
                    } 
                } 
            }
            var_45 = ((/* implicit */_Bool) arr_56 [i_14] [i_21] [i_21]);
        }
        /* LoopSeq 2 */
        for (long long int i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1167588309U))));
            var_47 -= ((/* implicit */unsigned char) 1167588300U);
        }
        for (signed char i_26 = 2; i_26 < 15; i_26 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 3) 
            {
                arr_88 [(unsigned short)2] [i_26] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [(signed char)6])) : (((/* implicit */int) ((_Bool) var_5))))) != (((/* implicit */int) var_0))));
                var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4201899863U)) ? (arr_52 [i_14] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))));
            }
            for (unsigned char i_28 = 3; i_28 < 13; i_28 += 2) 
            {
                var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_26 - 1] [i_28 - 3]))))) % (93067431U))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_29 = 0; i_29 < 16; i_29 += 4) 
                {
                    var_50 = ((/* implicit */unsigned char) (signed char)87);
                    arr_94 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_26 - 2] [i_26])) + (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 1673290007)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)36707))));
                    arr_95 [i_14] [i_26] [i_28 + 3] [14U] = ((/* implicit */unsigned int) ((arr_0 [i_14]) && ((!(((/* implicit */_Bool) 93067431U))))));
                }
                for (unsigned int i_30 = 0; i_30 < 16; i_30 += 2) 
                {
                    var_51 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3630)) ? (((max((((/* implicit */unsigned long long int) var_11)), (13824457639143254166ULL))) % (min((var_3), (18446744073709453294ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 2; i_31 < 15; i_31 += 4) 
                    {
                        var_52 -= ((/* implicit */unsigned char) var_12);
                        arr_100 [i_31] [i_31] [(unsigned char)0] [i_30] [i_26] [i_31 + 1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_67 [i_14] [i_28 + 2] [i_31 - 2]), (arr_67 [i_14] [i_28 - 1] [i_31 - 2])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((arr_67 [i_14] [i_28 - 2] [i_31 - 1]), (arr_67 [i_14] [i_28 + 2] [i_31 - 1]))))));
                    }
                }
                for (unsigned int i_32 = 0; i_32 < 16; i_32 += 2) 
                {
                    arr_103 [i_32] [i_28 - 3] [i_14] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) % (15965634025531741790ULL))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_67 [i_14] [i_14] [i_14]))))));
                    var_53 -= ((/* implicit */int) (unsigned char)172);
                    var_54 = 1167588310U;
                }
                /* vectorizable */
                for (short i_33 = 2; i_33 < 13; i_33 += 3) 
                {
                    arr_108 [i_14] [i_33] [i_26] [i_33] = (!(((/* implicit */_Bool) var_7)));
                    var_55 -= ((/* implicit */unsigned char) var_2);
                }
            }
            var_56 ^= ((/* implicit */unsigned char) (!(((((/* implicit */int) ((signed char) var_5))) >= (((var_0) ? (((/* implicit */int) arr_4 [i_14] [i_26 - 2])) : (((/* implicit */int) var_1))))))));
            var_57 += ((/* implicit */short) 6274097294682055917LL);
        }
    }
}
