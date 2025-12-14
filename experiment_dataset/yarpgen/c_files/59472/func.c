/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59472
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_0 + 1] [(unsigned char)0] [i_1 - 1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((unsigned short)57823), (((/* implicit */unsigned short) var_11))))), (min((arr_10 [i_2 - 1] [i_1 - 1] [i_0 - 3] [(signed char)10]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 - 3] [i_0]))))));
                        var_14 = ((/* implicit */signed char) ((unsigned int) arr_10 [i_0 - 3] [i_1] [i_1] [i_0 - 3]));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_0 + 3])) : (((/* implicit */int) arr_6 [i_4] [i_0 - 3] [i_0 - 3] [i_0 - 1]))))) ? (((/* implicit */int) max((arr_6 [i_0] [(short)17] [(short)1] [i_0 - 2]), (((/* implicit */short) var_6))))) : (((/* implicit */int) var_4))));
            var_16 ^= ((/* implicit */long long int) ((int) arr_14 [i_4] [i_0]));
        }
        var_17 *= ((/* implicit */signed char) (+(((((/* implicit */int) arr_4 [i_0] [i_0 - 3] [i_0 - 2])) | (((/* implicit */int) arr_4 [(signed char)16] [i_0] [i_0 - 2]))))));
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        arr_19 [i_5] [(signed char)10] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)-32203))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) ((arr_16 [i_5]) >= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_17 [i_5])))))))) / (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)-32203)))), (((/* implicit */int) arr_3 [i_5] [i_5])))))))));
            var_19 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) / (((/* implicit */int) arr_22 [i_5] [i_5] [i_5])))) - (((/* implicit */int) ((_Bool) arr_22 [i_6] [i_5] [16U])))));
            /* LoopSeq 2 */
            for (long long int i_7 = 2; i_7 < 23; i_7 += 2) 
            {
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) arr_8 [i_7] [i_6] [i_5]);
                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_22 [i_5] [i_5] [i_7 - 1])), ((short)-32185)))) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_7 - 1])) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_7 - 1])) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_7 - 1])) : (((/* implicit */int) arr_22 [i_7] [i_7] [i_7 - 1]))))));
            }
            for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                arr_30 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_16 [i_5]))), (((((/* implicit */_Bool) arr_28 [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_6])) : (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_8] [i_8])))))));
                arr_31 [i_5] [i_6] [i_8] &= ((/* implicit */short) arr_17 [i_8]);
            }
        }
        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
        {
            arr_34 [(signed char)13] = ((/* implicit */signed char) min((((/* implicit */int) ((short) arr_20 [i_9 - 1] [i_9 - 1]))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_5])) * (((/* implicit */int) (short)-32214))))) ? (((/* implicit */int) arr_23 [i_5])) : ((-(((/* implicit */int) var_6))))))));
            /* LoopSeq 3 */
            for (unsigned short i_10 = 3; i_10 < 23; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    arr_39 [i_5] [i_9] [i_10 - 1] |= ((/* implicit */short) ((unsigned long long int) arr_29 [i_5] [i_5]));
                    var_21 = ((/* implicit */int) var_3);
                    arr_40 [i_5] [i_11] [i_5] = ((/* implicit */int) var_8);
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~((-(((/* implicit */int) var_13)))))))));
                }
                var_23 = ((/* implicit */unsigned char) 6133269834792694748LL);
            }
            for (unsigned short i_12 = 3; i_12 < 23; i_12 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_22 [i_12 - 3] [i_12] [i_9 + 1])))) ? (((((/* implicit */int) arr_22 [i_12 - 3] [i_9] [i_9 + 2])) * (((/* implicit */int) arr_22 [i_12 - 1] [i_9] [i_9 + 2])))) : (((/* implicit */int) max((arr_22 [i_12 - 3] [i_9] [i_9 + 2]), (arr_22 [i_12 - 3] [i_9 - 1] [i_9 - 1]))))));
                var_25 ^= ((/* implicit */unsigned short) arr_1 [i_5]);
            }
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_33 [i_5])) | (((/* implicit */int) arr_33 [i_5])))))))));
                arr_45 [i_5] [i_5] [i_5] [17U] = ((((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [(signed char)17])) ^ (((/* implicit */int) (unsigned short)49162)))), (min((arr_16 [i_5]), (((/* implicit */int) arr_22 [i_5] [i_5] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((((~(arr_41 [(short)18] [i_9] [(signed char)3] [i_5]))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) 2641902350U)) : (var_7))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_27 |= ((/* implicit */int) var_1);
                        var_28 = ((/* implicit */_Bool) min(((short)32224), ((short)32196)));
                    }
                    for (unsigned int i_16 = 2; i_16 < 22; i_16 += 2) 
                    {
                        var_29 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) max((var_7), (var_1)))))));
                        var_30 *= ((/* implicit */_Bool) arr_27 [i_5]);
                        arr_53 [i_16] [i_14] [i_13] [i_9] [i_5] [i_5] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (((long long int) (short)7292)))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_11)), (var_8)))) & (((((/* implicit */int) arr_2 [i_5])) / (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) 6702279679093541244LL)) ? (max((6702279679093541241LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_24 [(unsigned char)0] [i_14] [i_9] [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))))))));
                        arr_54 [i_16] [(signed char)20] [(signed char)20] [(signed char)20] [i_5] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))));
                    }
                    var_32 = ((unsigned char) (short)32229);
                }
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            arr_59 [i_18] [i_13] [i_13] [i_13] [i_5] [i_5] = ((((/* implicit */_Bool) min((arr_50 [i_18] [i_17] [i_13] [i_9 + 2] [i_5]), (((/* implicit */unsigned int) min((arr_18 [i_17]), (((/* implicit */unsigned short) arr_47 [(unsigned char)4])))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_48 [i_9 + 1] [i_9] [i_9] [i_9 + 2])));
                            var_33 |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_17] [i_17] [i_9 - 1] [i_9 + 3])) ? (((/* implicit */int) arr_48 [i_13] [i_9 + 2] [i_9 + 2] [i_9 - 1])) : (((/* implicit */int) arr_48 [i_17] [i_13] [i_9 - 2] [i_9 + 1])))));
                        }
                    } 
                } 
            }
            var_34 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_9] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_5 [i_5] [i_9 + 2] [i_5]))))) == (max((((/* implicit */long long int) min((var_12), (var_6)))), (arr_9 [i_5] [i_9 + 3] [i_5] [i_5] [i_9 + 3])))));
            arr_60 [i_5] |= ((/* implicit */unsigned char) ((int) var_2));
        }
        arr_61 [i_5] = ((/* implicit */signed char) (-(arr_21 [i_5] [i_5] [20])));
    }
    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
    {
        arr_65 [i_19] = ((/* implicit */short) ((max((arr_57 [i_19] [i_19] [i_19] [i_19]), (arr_57 [(unsigned char)15] [i_19] [i_19] [(unsigned char)15]))) < (min((arr_57 [i_19] [i_19] [i_19] [i_19]), (arr_57 [i_19] [i_19] [i_19] [i_19])))));
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_19])) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)234)) < (((/* implicit */int) (unsigned char)246))))), (((((/* implicit */_Bool) arr_51 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) arr_37 [i_19] [i_19] [i_19] [i_19] [i_19])))))) : (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_19] [i_19] [i_19] [i_19]))) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) ((_Bool) arr_20 [i_19] [i_19]))))))))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_36 -= ((short) -148855792);
        arr_68 [i_20] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30844))) : (arr_52 [5LL] [i_20] [i_20])))), (12833278359299014463ULL)))) ? (min((arr_64 [i_20]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_20])) : (arr_0 [22])))))) : (var_10)));
        var_37 |= (~(-8129555726352056052LL));
        /* LoopSeq 2 */
        for (unsigned int i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
            {
                arr_74 [i_22] [i_21] [i_21] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_7))))) ? (((arr_73 [i_21] [i_21]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_20] [i_21]))))) : (((/* implicit */unsigned long long int) max((-8LL), (((/* implicit */long long int) (short)32227)))))));
                arr_75 [i_21] [i_20] = ((/* implicit */int) min((((max((((/* implicit */unsigned int) arr_1 [i_22])), (arr_49 [i_22] [i_22] [i_22] [i_22] [(unsigned short)13] [(_Bool)1] [i_22]))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_21] [i_21])) * (((/* implicit */int) (short)-9173))))))), (((/* implicit */unsigned int) ((signed char) arr_38 [i_22] [i_20] [i_21] [i_21] [i_20])))));
                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -5609515606288102377LL))))) % (arr_0 [i_22]))))));
            }
            for (unsigned char i_23 = 0; i_23 < 12; i_23 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & (max((((/* implicit */long long int) arr_38 [i_25] [i_24] [i_21] [(unsigned short)22] [i_20])), (arr_67 [i_20]))))));
                            var_40 += ((/* implicit */unsigned char) arr_63 [i_20]);
                            arr_85 [i_20] [i_24] = (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_24] [i_24] [i_20]))) & (arr_67 [i_23]))));
                        }
                    } 
                } 
                var_41 *= ((/* implicit */_Bool) min((5613465714410537153ULL), (((/* implicit */unsigned long long int) ((long long int) (short)-2334)))));
                var_42 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_15 [21LL] [i_20])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [(signed char)0] [i_21]))))));
            }
            arr_86 [i_21] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_20] [i_21] [i_21] [i_21]))) ^ ((-(arr_50 [i_20] [i_21] [i_21] [i_21] [i_20])))));
            var_43 = ((/* implicit */unsigned short) var_4);
            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_23 [i_20]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_20] [i_20] [i_20] [i_20])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_20])) >> (3LL)))) : (((((/* implicit */_Bool) arr_64 [i_20])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_48 [i_20] [(_Bool)1] [i_20] [i_20])), (arr_21 [i_20] [i_20] [i_20])))) : (arr_43 [i_20] [6LL] [i_20])))));
            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) max((((/* implicit */unsigned int) arr_78 [i_20] [i_20] [i_20] [i_20])), ((~(min((var_10), (((/* implicit */unsigned int) arr_2 [i_21])))))))))));
        }
        for (unsigned int i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
            {
                arr_93 [i_27] [i_27] [i_27] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) < (min((((/* implicit */unsigned long long int) var_8)), (12833278359299014463ULL))))) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_6))));
                /* LoopSeq 2 */
                for (short i_28 = 0; i_28 < 12; i_28 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_29 = 1; i_29 < 8; i_29 += 2) 
                    {
                        var_46 = ((signed char) ((((/* implicit */_Bool) (short)-29625)) ? (((/* implicit */int) arr_38 [i_29] [i_28] [i_29] [i_26] [i_20])) : (((/* implicit */int) var_4))));
                        arr_100 [i_20] [i_29] [i_20] [i_29] [i_20] = 12833278359299014463ULL;
                    }
                    for (signed char i_30 = 0; i_30 < 12; i_30 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_98 [i_20] [i_26] [(_Bool)1] [i_28] [i_30]))))), (var_10)));
                        var_48 += ((/* implicit */unsigned char) var_5);
                        arr_103 [i_27] [i_27] [i_27] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_20] [i_27] [i_28])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_27])))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_80 [i_26])), (arr_88 [i_20] [i_27] [11])))), (var_7)))));
                    }
                    var_49 &= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_28])) ? (((((/* implicit */_Bool) arr_76 [(signed char)1] [(signed char)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_49 [i_20] [(_Bool)1] [i_26] [i_27] [i_27] [i_28] [i_28])) ? (((/* implicit */int) arr_80 [i_28])) : (((/* implicit */int) var_2))))))), ((~(arr_7 [i_20] [i_26] [(_Bool)1] [i_26])))));
                }
                for (unsigned char i_31 = 2; i_31 < 11; i_31 += 2) 
                {
                    var_50 = ((((int) (short)-32204)) + (((/* implicit */int) arr_4 [i_31] [i_27] [i_26])));
                    arr_106 [i_31] [i_27] [i_26] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_37 [i_20] [i_20] [i_20] [12LL] [i_20]))))), (min((352568339U), (((/* implicit */unsigned int) arr_29 [i_20] [i_20]))))))) | (((((/* implicit */_Bool) arr_102 [i_31 + 1] [i_31] [i_31 + 1] [(_Bool)1] [8LL] [i_31])) ? (arr_10 [i_31 - 1] [i_31 - 1] [i_31] [i_31]) : (((/* implicit */unsigned long long int) ((arr_57 [i_20] [i_20] [i_27] [i_31 + 1]) & (((/* implicit */int) arr_99 [i_20] [i_26] [i_26] [i_20] [i_20] [(_Bool)0] [(short)7])))))))));
                    arr_107 [i_20] [i_20] [i_20] [i_31 - 2] [7LL] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_31] [i_20] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 12833278359299014468ULL))))) : (((((/* implicit */_Bool) arr_76 [i_26] [i_26])) ? (((/* implicit */int) arr_88 [(unsigned char)3] [i_26] [(_Bool)1])) : (var_5)))))) == (arr_73 [i_20] [i_20])));
                }
                arr_108 [i_27] [i_27] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
            }
            for (signed char i_32 = 0; i_32 < 12; i_32 += 2) 
            {
                arr_113 [i_26] [7] [i_26] [i_26] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_20]))))) ? (arr_8 [i_20] [i_26] [i_32]) : (max((((var_3) * (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_26]))))), (((/* implicit */long long int) ((int) (short)0)))))));
                var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) arr_37 [i_20] [(unsigned char)7] [(unsigned char)7] [i_26] [i_32]))));
                arr_114 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) var_7);
            }
            var_52 *= ((/* implicit */unsigned int) min((((long long int) var_12)), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_26] [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_20]))) : (arr_7 [(unsigned char)14] [(signed char)10] [i_20] [7]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_20]))))))));
            var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (unsigned short)10327))));
        }
    }
    var_54 = ((/* implicit */signed char) var_3);
    var_55 += ((/* implicit */unsigned char) var_8);
}
