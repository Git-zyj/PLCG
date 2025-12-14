/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75167
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_2 [i_0 - 3]))))))) + (arr_2 [i_0 - 2])));
        var_16 = ((/* implicit */unsigned int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0 - 3] [i_0 + 2]))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_10 [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_7)) & (7515679222271557761ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13))))))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_1]))))) : (((((/* implicit */_Bool) 15U)) ? (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-47)) & (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (signed char)43))))))));
            var_18 = ((/* implicit */unsigned long long int) arr_9 [i_1]);
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_1]);
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            var_19 = ((/* implicit */int) (-(0U)));
            var_20 = ((/* implicit */unsigned int) ((arr_13 [i_1] [i_1]) ? (((/* implicit */int) arr_14 [i_1] [i_3] [i_1])) : (((2147483646) + (((/* implicit */int) arr_8 [i_3]))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3 + 2] [i_3 - 2] [i_1])) == (2147483646)));
        }
        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (arr_15 [i_1] [i_4] [i_4 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_1]))))) : (((unsigned long long int) 7773459530848848617ULL)))));
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(5070197900802037933ULL)));
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))));
        }
        var_23 += ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_2)) : (arr_7 [10U]))), (((/* implicit */int) min(((unsigned short)26), (((/* implicit */unsigned short) arr_14 [i_1] [i_1] [8LL]))))))) / (max((((/* implicit */int) ((unsigned char) arr_6 [i_1]))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [(signed char)12])) : (((/* implicit */int) var_15))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    var_24 = ((signed char) arr_6 [(unsigned char)3]);
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_6])), (min((1U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (0U) : (((/* implicit */unsigned int) ((-2147483647) ^ (((/* implicit */int) var_2)))))));
                }
            } 
        } 
        var_26 = arr_14 [i_1] [i_1] [i_1];
        var_27 -= ((/* implicit */int) (((!(((((/* implicit */int) arr_14 [i_1] [i_1] [2])) <= (-562030532))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) min((arr_16 [4ULL]), (((/* implicit */int) var_9))))) : (arr_22 [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (9158407998767185551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [12ULL]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15743)) ? (-8288630038398325264LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))))))))));
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_27 [i_7] [i_8] = ((((/* implicit */unsigned long long int) arr_7 [i_8])) <= (((7773459530848848617ULL) | (((/* implicit */unsigned long long int) 0)))));
            var_28 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((~(arr_7 [i_7]))), (((/* implicit */int) ((-8288630038398325260LL) <= (arr_2 [i_8]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-42))))) ? (((/* implicit */unsigned long long int) max((0), (((/* implicit */int) arr_21 [i_7] [i_7]))))) : (max((((/* implicit */unsigned long long int) -2147483646)), (var_11)))))));
        }
        for (unsigned short i_9 = 2; i_9 < 9; i_9 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((min((((_Bool) var_1)), (((((/* implicit */_Bool) arr_1 [2U] [i_9])) && (((/* implicit */_Bool) var_6)))))) ? (((/* implicit */int) arr_14 [(signed char)12] [i_9 + 1] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_22 [i_7])))))))))));
            arr_30 [i_9 + 1] [i_9] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483646)) ? (2147483646) : (0)))), (min((((/* implicit */unsigned long long int) arr_22 [i_7])), (arr_28 [i_7] [i_9] [i_9])))))));
            var_30 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned char)116)), (var_13))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) arr_6 [i_9])) : (var_6))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) % (2532722259U)))))))));
            var_31 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) > (((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) 0U)) : (2199006478336ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_7] [i_9 - 1])) | (((/* implicit */int) var_0))))) ? (((var_6) ^ (((/* implicit */long long int) arr_29 [i_9 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_7])), ((signed char)-66))))))))));
        }
        for (unsigned int i_10 = 3; i_10 < 8; i_10 += 4) 
        {
            arr_33 [i_7] [i_10] = ((/* implicit */int) (((~(((((/* implicit */unsigned long long int) var_14)) ^ (var_5))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_10] [i_10 + 1])) ? (arr_6 [i_10 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned int) var_14))))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((var_6), (((/* implicit */long long int) 14)))) << (((unsigned long long int) 0))))) > (min((min((arr_24 [i_7]), (((/* implicit */unsigned long long int) 1762245032U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 801105751U)))))))));
            arr_34 [i_10] [i_10] [i_7] = ((-31) & (0));
            arr_35 [i_10] = var_5;
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_7] [i_7]))))) != (((((/* implicit */long long int) 14)) - (arr_2 [i_7])))))));
            arr_38 [i_11] = ((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_7] [i_7] [i_11]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) : (min((1762245036U), (((/* implicit */unsigned int) (unsigned char)198)))));
        }
        var_34 = ((/* implicit */unsigned int) ((0) & ((-2147483647 - 1))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_13 = 2; i_13 < 15; i_13 += 1) 
        {
            arr_45 [i_12] [i_13] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35356))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((min((2532722259U), (((/* implicit */unsigned int) arr_41 [4ULL] [i_13])))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (16383U))))));
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 2974412473U))) ? (arr_41 [i_13 + 2] [i_13]) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (5421843905263087432LL)));
            arr_46 [i_13] [i_13] = ((/* implicit */signed char) (-(2147483647)));
            arr_47 [i_13] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) -2089749848)), (((unsigned long long int) var_7)))), (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_39 [i_12]))))) ? (arr_44 [i_12] [i_13]) : (arr_44 [i_13 + 1] [i_13])))));
        }
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            var_36 += ((/* implicit */unsigned short) arr_48 [i_12] [i_12] [i_14]);
            arr_51 [i_12] = ((/* implicit */int) min((((((/* implicit */_Bool) (+(arr_41 [i_12] [i_14])))) ? (arr_42 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((3659930574U) & (253680608U)))))), (max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_39 [i_14])) : (arr_42 [i_12] [i_12] [i_12])))))));
            arr_52 [i_12] [14ULL] [11] = ((/* implicit */int) arr_50 [i_14]);
        }
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    {
                        arr_64 [i_12] [i_12] [i_12] [i_16] [i_17] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1033521988U)) ? (((/* implicit */int) ((unsigned short) (unsigned char)222))) : (((/* implicit */int) ((signed char) 1))))), (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0)))))));
                        arr_65 [i_16] = ((/* implicit */unsigned char) max((arr_42 [i_12] [i_15] [i_16]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_60 [i_12] [i_12] [i_16] [i_16])))))));
                    }
                } 
            } 
            arr_66 [i_12] = ((/* implicit */signed char) ((unsigned char) arr_44 [i_15] [i_15]));
            var_37 -= ((/* implicit */int) (!(((arr_42 [i_12] [i_15] [i_15]) < (arr_48 [i_12] [i_12] [i_12])))));
        }
        for (int i_18 = 2; i_18 < 15; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    {
                        var_38 = ((/* implicit */unsigned int) var_15);
                        var_39 += ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) 2096128)) ? (((/* implicit */long long int) var_3)) : (arr_40 [i_12] [i_18 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_18 + 2] [i_18 + 1]))) / (arr_40 [i_18 + 2] [i_18 - 2])))));
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) - (max((864691128455135232ULL), (((/* implicit */unsigned long long int) 0))))))) ? ((-(max((((/* implicit */long long int) arr_41 [i_12] [1U])), (arr_39 [i_12]))))) : (((/* implicit */long long int) 3659930574U))));
        }
        arr_75 [i_12] = ((/* implicit */signed char) 2096128);
        var_41 = ((/* implicit */unsigned int) ((_Bool) ((((unsigned int) arr_58 [i_12] [i_12] [i_12])) | (((/* implicit */unsigned int) max((arr_57 [i_12] [i_12]), (var_12)))))));
    }
    for (unsigned int i_21 = 2; i_21 < 16; i_21 += 4) /* same iter space */
    {
        var_42 -= ((/* implicit */signed char) ((int) min((min((((/* implicit */unsigned int) var_0)), (3840U))), (1762245037U))));
        arr_78 [i_21] [i_21 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) + ((((!(((/* implicit */_Bool) var_11)))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_44 [i_21] [i_21]))) : (((/* implicit */unsigned long long int) (+(4294967295U))))))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 3; i_22 < 15; i_22 += 2) 
        {
            for (long long int i_23 = 4; i_23 < 16; i_23 += 3) 
            {
                {
                    var_43 -= ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_73 [i_21] [i_22 - 1] [i_22 - 1] [i_22 - 1])) ? (arr_70 [i_21] [i_21]) : (((/* implicit */int) arr_81 [i_21 + 1]))))) / (((((/* implicit */_Bool) 2147483647)) ? (2841894144U) : (arr_71 [i_22]))))) + (((/* implicit */unsigned int) ((int) 16383U)))));
                    arr_86 [i_21] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25398)) + (((/* implicit */int) ((signed char) 7474556257263864931ULL)))))) == (max((((/* implicit */unsigned int) min((-2096128), (var_12)))), (((((/* implicit */_Bool) arr_55 [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) : (arr_85 [i_21] [i_21] [i_23])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_24 = 2; i_24 < 16; i_24 += 4) /* same iter space */
    {
        arr_89 [i_24] [i_24] = ((/* implicit */signed char) var_4);
        /* LoopNest 2 */
        for (signed char i_25 = 0; i_25 < 17; i_25 += 2) 
        {
            for (unsigned int i_26 = 0; i_26 < 17; i_26 += 4) 
            {
                {
                    arr_96 [i_25] [i_26] = ((((/* implicit */_Bool) 1135882903)) ? (arr_92 [(_Bool)1] [i_24]) : (((/* implicit */unsigned int) -1)));
                    var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-101))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_27 = 0; i_27 < 18; i_27 += 3) 
    {
        arr_99 [i_27] [i_27] = (i_27 % 2 == 0) ? (((/* implicit */int) max((((((((/* implicit */_Bool) arr_97 [i_27] [i_27])) ? (var_13) : (((/* implicit */long long int) arr_98 [i_27])))) / (((/* implicit */long long int) min((1113340772U), (((/* implicit */unsigned int) arr_98 [i_27]))))))), (((/* implicit */long long int) ((((arr_98 [i_27]) + (2147483647))) << (((((arr_98 [i_27]) + (164398032))) - (14))))))))) : (((/* implicit */int) max((((((((/* implicit */_Bool) arr_97 [i_27] [i_27])) ? (var_13) : (((/* implicit */long long int) arr_98 [i_27])))) / (((/* implicit */long long int) min((1113340772U), (((/* implicit */unsigned int) arr_98 [i_27]))))))), (((/* implicit */long long int) ((((((arr_98 [i_27]) - (2147483647))) + (2147483647))) << (((((((arr_98 [i_27]) + (164398032))) - (14))) - (1996600506)))))))));
        arr_100 [i_27] = ((/* implicit */_Bool) min((((((3181626523U) < (var_7))) ? (((((/* implicit */_Bool) arr_98 [i_27])) ? (1113340772U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_97 [i_27] [i_27]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_4))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_13))))))));
        var_45 = ((/* implicit */unsigned int) min((6204777777323644429ULL), (((/* implicit */unsigned long long int) 1113340772U))));
    }
    for (unsigned int i_28 = 0; i_28 < 22; i_28 += 1) 
    {
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)1) ? (arr_102 [i_28]) : (((/* implicit */unsigned long long int) var_12)))) + (((arr_102 [i_28]) + (((/* implicit */unsigned long long int) var_7))))))) ? ((+(((((/* implicit */unsigned long long int) var_13)) - (arr_102 [i_28]))))) : (((/* implicit */unsigned long long int) arr_101 [(signed char)18] [(signed char)18]))));
        var_47 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_101 [i_28] [i_28])), (arr_102 [i_28]))))))), ((-(((1161504572U) & (520926424U)))))));
        /* LoopNest 2 */
        for (unsigned char i_29 = 0; i_29 < 22; i_29 += 3) 
        {
            for (signed char i_30 = 0; i_30 < 22; i_30 += 1) 
            {
                {
                    var_48 = ((/* implicit */signed char) ((arr_106 [i_29]) >> ((((-(((((/* implicit */_Bool) 3133462724U)) ? (520926424U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (3774040858U)))));
                    arr_112 [i_29] [i_29] = ((/* implicit */signed char) (_Bool)1);
                    var_49 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((signed char) 15143772212284171086ULL))) : (((/* implicit */int) ((signed char) 3302971861425380530ULL))))), (((((((/* implicit */int) (unsigned char)23)) > (arr_101 [i_28] [i_28]))) ? (((((/* implicit */int) arr_109 [i_30] [i_28] [i_28] [i_28])) & (1146600946))) : (arr_108 [i_28] [i_29] [i_30] [i_28])))));
                }
            } 
        } 
        arr_113 [i_28] [i_28] = ((/* implicit */unsigned long long int) ((int) arr_102 [i_28]));
    }
}
