/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59317
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
    var_10 += ((/* implicit */_Bool) var_0);
    var_11 = ((/* implicit */_Bool) ((long long int) ((unsigned int) var_2)));
    var_12 &= ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)126)) : (var_4))))), (var_3)));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_13 |= ((/* implicit */long long int) 128933348U);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_2 [i_0] [i_0]));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_2 + 3])) & (((/* implicit */int) ((unsigned short) arr_1 [i_2])))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_4 [i_0]) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)20)) <= (arr_4 [i_0]))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3] [i_3] [19U])) & (arr_10 [i_3]))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) 1906956744U);
        /* LoopSeq 4 */
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
        {
            arr_17 [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_4 - 1] [i_4 + 2] [i_4 - 1]), (arr_5 [i_4 + 2] [i_4 - 1] [i_4 - 1])))) ? (((/* implicit */int) ((short) 2388010552U))) : (((((/* implicit */_Bool) arr_8 [i_4 + 3] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_4 - 1] [i_4 + 2])) : (((/* implicit */int) arr_8 [i_4 - 1] [i_4 + 3] [i_4 + 3]))))));
            arr_18 [10] [i_3] [i_4] = ((/* implicit */int) arr_16 [(short)0]);
            arr_19 [i_4] [i_4] |= ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_8 [i_3] [i_4 + 1] [(signed char)1])))));
        }
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_16 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_3])) || (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_5])))))))))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (((((/* implicit */_Bool) 4166033948U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27803))) : (128933360U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [3] [(short)17] [i_3])))))));
            var_18 = ((/* implicit */signed char) ((unsigned int) arr_16 [i_5 + 2]));
            var_19 = ((/* implicit */unsigned long long int) ((arr_12 [i_3] [i_3]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_1 [i_3])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            var_20 = ((/* implicit */_Bool) 13336728855086118605ULL);
            /* LoopSeq 4 */
            for (unsigned short i_7 = 3; i_7 < 22; i_7 += 4) /* same iter space */
            {
                arr_28 [i_3] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) arr_11 [i_3] [i_7 - 3]);
                var_21 = ((/* implicit */short) var_0);
                arr_29 [i_3] [i_6 + 3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_14 [i_3])) - (((/* implicit */int) arr_5 [i_3] [i_6 - 2] [i_7])))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_7])) : (((/* implicit */int) (short)27724))))) ? (((((/* implicit */_Bool) arr_27 [i_3])) ? (((/* implicit */int) arr_25 [i_3] [i_6 + 2] [i_3])) : (var_3))) : (((/* implicit */int) ((((/* implicit */_Bool) 322476512U)) || (((/* implicit */_Bool) (short)-20223)))))));
            }
            for (unsigned short i_8 = 3; i_8 < 22; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    var_23 |= ((/* implicit */short) arr_0 [i_8]);
                    arr_34 [i_6] [i_9] [i_9] [i_9] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_8 - 3] [i_6 + 2] [i_8])) ? (arr_12 [i_9] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_3] [i_3])) : (-1))))));
                }
                for (long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_10] [i_8] [i_6 + 2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_26 [i_3])))) ? (arr_12 [8ULL] [i_10]) : (((/* implicit */unsigned long long int) var_3))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(arr_4 [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) arr_2 [i_3] [i_3])));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_38 [i_8 - 3] [i_8 - 1] [i_8 - 3] [i_6 - 1] [i_6 + 2]))));
                    }
                }
                var_27 = ((/* implicit */short) arr_15 [i_3] [i_6 - 2]);
                var_28 = arr_39 [i_6] [i_8] [i_6] [i_6] [i_3] [i_6];
                var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6 - 1] [i_6] [i_8]))) : ((((_Bool)1) ? (arr_38 [i_3] [i_6] [17U] [i_6] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [11U])))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_42 [i_12] [22LL] [i_12] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -3613785029170459640LL)) ? (arr_41 [i_3] [i_6] [i_6] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_6 - 1] [4ULL]))))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_45 [i_12] [i_13] [i_3] [i_13] = ((/* implicit */short) arr_43 [i_6 + 2] [i_6 - 1]);
                    var_30 = ((/* implicit */unsigned char) (short)-18389);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    var_31 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-24372)) != (((/* implicit */int) arr_8 [i_12] [i_6] [i_12]))));
                    arr_49 [i_12] [i_6] [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_12] [i_6] [i_6])) : (((/* implicit */int) (unsigned char)122))));
                }
                for (short i_15 = 3; i_15 < 20; i_15 += 4) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (arr_1 [i_6 + 1])));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_3] [i_3] [i_15 - 2] [i_6 - 2] [i_3])) & (((/* implicit */int) arr_15 [i_3] [i_6])))))));
                    var_34 = ((/* implicit */short) (unsigned char)20);
                }
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_6] [i_6 - 2] [i_6 - 1] [i_3])) ? (arr_47 [i_3] [i_6 - 1] [i_6 + 1] [i_3]) : (((/* implicit */int) arr_33 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1] [i_6 + 3] [i_6 + 1]))));
            }
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_36 = ((/* implicit */unsigned long long int) (short)24328);
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    arr_57 [i_17] [i_17] [i_17] [i_3] = ((/* implicit */unsigned long long int) arr_35 [i_17] [i_17] [i_16] [i_6] [i_3]);
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_1 [i_16]))));
                    arr_58 [i_17] = ((/* implicit */unsigned int) ((long long int) ((int) (unsigned char)12)));
                }
                for (int i_18 = 1; i_18 < 22; i_18 += 4) 
                {
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_18] [i_6 + 2] [i_16] [i_6] [i_18 + 1])) ? (((((/* implicit */_Bool) 32767)) ? (((/* implicit */unsigned int) arr_10 [i_6 + 1])) : (arr_26 [i_3]))) : (arr_38 [(_Bool)1] [i_18 - 1] [i_6 + 2] [i_6] [i_6 - 2])));
                    var_39 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_18 - 1] [i_6 + 1] [i_6 + 3] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30596))) : (arr_41 [i_18 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                    var_40 = ((/* implicit */unsigned char) ((arr_46 [i_18] [i_3] [i_6] [i_3]) <= (arr_43 [i_3] [i_18])));
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_6]))))) ? (((/* implicit */unsigned int) arr_47 [i_3] [i_6] [i_16] [i_18])) : (arr_32 [23LL] [i_6] [23LL] [i_6] [i_6]))))));
                }
            }
            arr_63 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6])) / (((/* implicit */int) arr_53 [(short)8] [i_3]))))) ? (arr_12 [i_6 - 1] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_38 [i_3] [i_3] [i_3] [i_3] [i_6]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6 + 3] [(_Bool)1])))))))));
            arr_64 [i_3] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_61 [4LL] [4LL] [i_6] [(signed char)11]))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_48 [i_3] [1LL] [i_3]))))));
        }
        /* vectorizable */
        for (short i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            arr_67 [i_19] [i_3] = ((/* implicit */int) arr_44 [i_3] [i_19] [i_3] [i_19]);
            /* LoopSeq 3 */
            for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                var_42 = ((/* implicit */_Bool) max((var_42), (((arr_52 [18] [i_20]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)97)))))));
                var_43 = ((/* implicit */short) var_6);
            }
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                var_44 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (arr_32 [i_19] [i_19] [i_19] [i_19] [i_3]))));
                var_45 = ((/* implicit */short) arr_38 [19LL] [19LL] [i_21] [i_19] [i_3]);
                var_46 = ((/* implicit */int) arr_69 [i_19] [i_3]);
                /* LoopSeq 1 */
                for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_76 [i_3] [i_3] [9] [i_3] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_22] [i_19])) || (((/* implicit */_Bool) ((arr_15 [i_3] [20ULL]) ? (((/* implicit */int) arr_16 [i_23])) : (((/* implicit */int) (short)-5232)))))));
                        var_47 = ((((unsigned int) arr_74 [i_3] [i_21] [i_21])) >> (((((unsigned int) var_5)) - (3834126984U))));
                    }
                    for (int i_24 = 2; i_24 < 22; i_24 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) (-(((unsigned long long int) var_1))));
                        var_49 = ((/* implicit */int) arr_35 [9ULL] [i_24 + 2] [(short)13] [i_24 - 1] [i_24 - 1]);
                        var_50 = ((/* implicit */short) ((int) arr_14 [i_24 + 1]));
                    }
                    var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */_Bool) 1172550527)) ? (((/* implicit */int) arr_66 [i_3] [i_19])) : (((/* implicit */int) arr_66 [(unsigned char)11] [i_3])))))));
                    arr_79 [i_19] = ((/* implicit */int) arr_16 [i_21]);
                }
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_82 [i_3] [i_3] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_19] [i_3])) ? (arr_21 [i_3] [i_25]) : (arr_21 [i_19] [i_19])));
                arr_83 [i_3] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_19] [i_19]))) < (var_1)))) >= (((/* implicit */int) arr_56 [i_3] [i_3]))));
            }
            var_52 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)234));
        }
        /* LoopSeq 2 */
        for (long long int i_26 = 0; i_26 < 24; i_26 += 2) 
        {
            arr_86 [i_3] [i_3] [i_26] = ((/* implicit */unsigned long long int) -1172550530);
            arr_87 [8LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_3]))));
            var_53 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_3] [i_3] [i_26] [i_26])) ? (-4692181700199993664LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned int i_27 = 0; i_27 < 24; i_27 += 1) 
        {
            var_54 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 1172550533)) || (((/* implicit */_Bool) var_0)))))))) || (((/* implicit */_Bool) max((arr_65 [i_27] [i_3]), (((/* implicit */long long int) ((((((/* implicit */int) (short)-31087)) + (2147483647))) >> (((((/* implicit */int) (short)-29947)) + (29966)))))))))));
            var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_27] [i_27] [i_3])) ? (((var_0) & (-5427601316928363092LL))) : (((/* implicit */long long int) ((((818597005) >= (-1))) ? (max((((/* implicit */unsigned int) arr_77 [i_27] [i_27] [i_3] [i_3] [i_27] [(signed char)13])), (arr_43 [i_3] [i_27]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_41 [i_3] [i_3] [(short)7] [i_3]) >= (arr_32 [i_27] [i_3] [i_3] [i_27] [i_27]))))))))));
        }
    }
    for (int i_28 = 0; i_28 < 23; i_28 += 2) 
    {
        var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((max((arr_84 [i_28] [i_28]), (((/* implicit */unsigned int) var_8)))) >> (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_28] [i_28] [i_28])))))))) : (arr_43 [(signed char)10] [i_28])));
        arr_94 [i_28] = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        for (short i_29 = 0; i_29 < 23; i_29 += 1) 
        {
            arr_97 [1LL] = ((((((/* implicit */unsigned long long int) max((1172550533), (((/* implicit */int) (short)2091))))) <= (arr_90 [i_28]))) ? (((/* implicit */long long int) ((unsigned int) arr_46 [i_28] [i_29] [(short)20] [i_29]))) : (arr_40 [i_29]));
            var_57 = ((/* implicit */short) ((((long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)-20575))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_39 [i_29] [i_28] [i_28] [i_28] [i_28] [i_28]))))));
            arr_98 [i_28] [(short)12] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_69 [(short)3] [i_29])) / (((/* implicit */int) arr_85 [i_28] [i_29]))))) ? (((arr_14 [i_28]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_28] [i_28] [i_28]))))) : (((((/* implicit */_Bool) var_8)) ? (-9043175332580472861LL) : (((/* implicit */long long int) arr_54 [i_28] [i_28] [i_28] [i_28])))))));
        }
    }
    for (unsigned char i_30 = 0; i_30 < 22; i_30 += 4) 
    {
        var_58 = max((((((/* implicit */_Bool) arr_66 [i_30] [i_30])) ? (((/* implicit */int) arr_66 [i_30] [(short)21])) : (((/* implicit */int) arr_66 [i_30] [i_30])))), (((/* implicit */int) min((arr_66 [i_30] [i_30]), (arr_66 [i_30] [i_30])))));
        var_59 = ((/* implicit */int) max((((unsigned long long int) arr_48 [i_30] [i_30] [i_30])), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_72 [(short)10] [(short)10] [i_30] [i_30] [(short)14]))))));
        arr_101 [i_30] |= ((/* implicit */_Bool) arr_46 [i_30] [i_30] [(unsigned short)11] [i_30]);
        var_60 = ((/* implicit */unsigned char) ((unsigned int) arr_6 [i_30] [0] [0]));
    }
}
