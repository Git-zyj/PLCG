/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/776
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (short)-3396);
        arr_2 [i_0] = ((/* implicit */short) var_9);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-16763))))), ((short)-18559)));
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) != (((/* implicit */int) arr_4 [i_1]))))))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_3 + 1] [i_3 - 1] [i_3]) : (arr_10 [i_3 + 1] [i_3 + 1] [i_3]))))));
            arr_12 [i_2] = ((/* implicit */short) 3541226721882504446LL);
            arr_13 [i_3 - 1] [i_3 + 1] [i_2] = var_13;
            arr_14 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1144071232U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32747))) : (8795958804480LL)))));
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_19 -= (+(min((((((/* implicit */_Bool) arr_1 [(short)8])) ? (arr_16 [i_4] [i_4] [i_2]) : (arr_7 [i_2] [i_4]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2] [i_2]))))))));
            arr_17 [i_4] [i_4] [i_4] = (signed char)94;
            arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((((/* implicit */long long int) 3557049399U)), (-1059739550242959860LL)))))))) <= (((((/* implicit */_Bool) 10LL)) ? (4503599627369984LL) : (((/* implicit */long long int) 133169152U))))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_22 [i_5] [i_2] = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((signed char) (signed char)-74))), (((long long int) (short)-28144)))), (((/* implicit */long long int) ((arr_7 [i_2] [i_5]) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_2]) : (arr_15 [i_5])));
                    arr_29 [i_2] [i_5] [8U] = ((long long int) -1LL);
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    var_21 = ((/* implicit */long long int) (short)-2061);
                    arr_32 [7U] [7U] = ((/* implicit */signed char) ((3557049420U) == (arr_26 [(short)1] [2LL] [i_6] [i_8 - 1] [i_8] [i_8])));
                }
                for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    arr_36 [i_2] [i_5] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)3410))) + (8795958804480LL)));
                    arr_37 [i_9] [i_6] [6LL] [i_5] [i_2] = ((/* implicit */signed char) var_9);
                    arr_38 [i_9] [i_9] [i_6] [i_9] [i_2] = ((/* implicit */short) ((min((((/* implicit */long long int) (signed char)-100)), (-3020114582644513362LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 98010586U)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)3))))) : (min((((/* implicit */unsigned int) arr_30 [i_2] [i_9])), (arr_34 [i_2] [i_5] [i_6] [i_9]))))))));
                    var_22 = ((/* implicit */unsigned int) (short)-2233);
                }
                for (long long int i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) ((long long int) (short)32767));
                        arr_46 [i_11] [i_10] [i_6] = 3481044262U;
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        arr_50 [7LL] [i_2] [i_2] [9LL] [i_6] [i_10 - 1] [i_12] = ((/* implicit */signed char) var_2);
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_39 [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 2]), (arr_39 [i_10 - 2] [i_10 + 1] [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 - 1]))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(var_4))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3481044281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3481044262U)))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) (signed char)26)), (1935509677U))))) : (((((/* implicit */_Bool) min(((signed char)-89), ((signed char)61)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32751)) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_2] [i_2])) && (((/* implicit */_Bool) var_1)))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        arr_55 [i_2] [i_2] [(short)7] [i_13] [i_2] = arr_7 [i_13] [i_2];
                        arr_56 [i_13] [i_13] = ((/* implicit */short) var_11);
                        var_27 *= ((/* implicit */short) arr_11 [i_2] [i_5] [i_6]);
                    }
                    var_28 = ((/* implicit */short) arr_16 [i_2] [i_5] [i_6]);
                    var_29 = ((/* implicit */long long int) arr_53 [i_10] [i_10 - 2] [i_6] [i_5] [i_2]);
                    arr_57 [i_10 - 1] [i_10 - 1] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */signed char) min((3481044281U), (3557049406U)));
                    arr_58 [i_2] [i_5] [i_6] [i_6] [i_6] [i_10] = ((/* implicit */short) var_10);
                }
                arr_59 [(short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)25979))) ? ((-(((/* implicit */int) ((1014185377U) != (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) : (((((/* implicit */_Bool) ((long long int) var_15))) ? (((/* implicit */int) arr_3 [i_5] [i_6])) : (((/* implicit */int) (short)-1))))));
                arr_60 [i_5] [i_5] [(short)6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3048780522U)) ? (4165052390U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))))) && (((/* implicit */_Bool) (~(((unsigned int) 0U)))))));
            }
        }
        arr_61 [(signed char)1] [i_2] = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 3557049414U))))), (((signed char) var_15))));
        arr_62 [i_2] = ((/* implicit */short) (((~(arr_31 [i_2] [i_2]))) >> (((((((/* implicit */_Bool) (signed char)63)) ? (3481044281U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (3481044250U)))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_2] [i_2] [(short)0] [i_2] [i_2] [i_2]))) & (arr_1 [i_2])));
        /* LoopNest 3 */
        for (short i_14 = 3; i_14 < 9; i_14 += 4) 
        {
            for (short i_15 = 2; i_15 < 10; i_15 += 4) 
            {
                for (short i_16 = 1; i_16 < 12; i_16 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 2; i_17 < 12; i_17 += 3) 
                        {
                            arr_74 [i_16] [i_16] [i_16] [6U] [i_17] = ((/* implicit */signed char) -3020114582644513362LL);
                            var_31 = ((/* implicit */short) ((((((3048780531U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_16]))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-7))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_15])))));
                            var_32 = min((((/* implicit */unsigned int) (short)25894)), (737917892U));
                            arr_75 [i_16] [i_14 + 4] [i_14] [i_15] [i_16 + 1] [i_17] [i_17 - 1] = ((/* implicit */long long int) 1691148860U);
                            var_33 = arr_49 [i_16] [i_14] [i_15 + 1] [i_16 - 1];
                        }
                        for (signed char i_18 = 1; i_18 < 10; i_18 += 4) 
                        {
                            var_34 = ((/* implicit */short) ((long long int) (short)17250));
                            var_35 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_72 [i_16 + 1] [i_16 - 1] [i_16] [i_16] [i_16])) ? (arr_23 [i_18 + 2] [i_16 + 1]) : (((/* implicit */long long int) arr_72 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16])))));
                            arr_78 [i_15 - 1] [i_16] = ((((/* implicit */_Bool) (signed char)108)) ? (-6294449136179277940LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-27))));
                        }
                        /* vectorizable */
                        for (signed char i_19 = 2; i_19 < 11; i_19 += 3) 
                        {
                            arr_81 [(signed char)5] [i_16] [i_14] [i_15] [i_15] [i_16] [i_19] = ((/* implicit */unsigned int) ((short) arr_64 [i_2] [i_14 + 1] [i_16 + 1]));
                            var_36 = ((/* implicit */long long int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_16 - 1] [(short)5])))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_10))));
                            arr_82 [i_19] [i_16] [i_15 - 2] [4U] [i_16] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_45 [i_2] [i_14 + 2])) == (((/* implicit */int) (signed char)39)))))));
                        }
                        arr_83 [(signed char)11] [i_16] [i_15 - 1] [(signed char)8] = ((/* implicit */short) min(((~(103811786U))), (((((/* implicit */_Bool) arr_8 [i_14 + 4] [i_15 + 1] [i_16 - 1])) ? (737917882U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_14 + 1] [i_15 - 1] [i_16 + 1])))))));
                        var_38 = arr_30 [i_2] [i_15 - 2];
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (long long int i_20 = 0; i_20 < 16; i_20 += 3) 
    {
        var_39 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_84 [i_20])))));
        arr_88 [i_20] = ((/* implicit */signed char) ((2696356489U) >> ((((((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7))) - (22258U)))));
    }
    /* vectorizable */
    for (unsigned int i_21 = 1; i_21 < 19; i_21 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            arr_96 [i_22] = ((/* implicit */signed char) ((long long int) var_10));
            arr_97 [i_21] = ((/* implicit */signed char) var_4);
        }
        for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
        {
            arr_101 [i_23] [i_21 + 2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_94 [i_23] [i_21])))))));
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_98 [i_21] [i_21 + 2] [i_23])) ? (arr_98 [i_21 + 2] [i_21] [(signed char)19]) : (arr_98 [i_21 + 2] [i_21 - 1] [i_23])));
            arr_102 [i_23] [i_21 + 1] [i_21 + 1] = ((/* implicit */signed char) ((long long int) ((3695181945565777559LL) == (((/* implicit */long long int) 1073464368U)))));
        }
        for (signed char i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            var_41 = ((short) ((signed char) var_12));
            var_42 = ((/* implicit */signed char) ((unsigned int) var_9));
        }
        /* LoopSeq 2 */
        for (unsigned int i_25 = 3; i_25 < 18; i_25 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_26 = 0; i_26 < 21; i_26 += 4) 
            {
                for (short i_27 = 0; i_27 < 21; i_27 += 4) 
                {
                    {
                        arr_116 [i_21] [i_25 - 2] [i_26] [i_25] = ((/* implicit */short) ((long long int) arr_92 [i_21 + 2]));
                        var_43 = ((/* implicit */short) ((((arr_113 [i_25] [i_26] [i_27]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_107 [i_25 + 3] [4U]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_93 [i_26])))));
                        /* LoopSeq 1 */
                        for (signed char i_28 = 0; i_28 < 21; i_28 += 4) 
                        {
                            var_44 = ((arr_103 [i_21 + 1] [i_21 + 2]) + (arr_103 [i_21 + 1] [i_21 + 2]));
                            arr_120 [i_21] [i_25 + 3] [i_26] [i_25] [i_28] = ((/* implicit */short) ((((5LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) * (((/* implicit */long long int) ((/* implicit */int) (short)-3373)))));
                            arr_121 [i_25] = ((((/* implicit */_Bool) 3962099408U)) ? (arr_103 [i_21 + 2] [i_25 + 2]) : (arr_103 [i_21 + 2] [i_25 + 3]));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_29 = 0; i_29 < 21; i_29 += 1) 
            {
                for (signed char i_30 = 0; i_30 < 21; i_30 += 1) 
                {
                    for (short i_31 = 1; i_31 < 20; i_31 += 4) 
                    {
                        {
                            arr_128 [i_21] [i_25] [i_31] = ((/* implicit */short) ((((/* implicit */_Bool) 1765542439580969393LL)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (short)16295))));
                            arr_129 [i_31] [i_31] [i_31] [i_25] [i_31] [i_31] [i_31] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-46))) & (-1428141117609112147LL)));
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_118 [i_21] [i_25] [i_29] [3U] [i_31])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_110 [(signed char)18] [i_21] [i_29] [i_30])) ? (-3932690823031984746LL) : (((/* implicit */long long int) arr_98 [i_21] [i_25 + 2] [11LL])))) : (((long long int) var_2))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_32 = 0; i_32 < 21; i_32 += 4) 
        {
            arr_132 [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_100 [i_21 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_115 [i_21 + 2] [i_21 + 2]))) : (arr_105 [i_21 - 1])));
            arr_133 [i_21 + 2] [(signed char)13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) 332867888U)))) == (((((/* implicit */_Bool) 268434432U)) ? (((/* implicit */long long int) arr_98 [i_21] [i_21] [i_32])) : (var_10)))));
            var_46 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-95)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14)))) : (((((/* implicit */_Bool) arr_118 [i_21] [i_32] [i_32] [i_32] [i_32])) ? (((/* implicit */long long int) arr_100 [i_21 + 1])) : (var_13)))));
        }
    }
    for (unsigned int i_33 = 0; i_33 < 13; i_33 += 4) 
    {
        arr_136 [i_33] = ((/* implicit */signed char) ((long long int) 0U));
        var_47 = ((/* implicit */signed char) min((((arr_69 [i_33] [i_33] [i_33]) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_5)))))), (((/* implicit */unsigned int) min((((signed char) 9223372036854775807LL)), ((signed char)34))))));
        var_48 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)23))))));
    }
    var_49 = var_5;
}
