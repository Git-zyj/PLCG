/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97938
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
    var_15 = ((/* implicit */signed char) ((unsigned long long int) min(((!(((/* implicit */_Bool) var_2)))), (((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((arr_2 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -2309272533651673475LL)))))))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) (signed char)-86);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_1 [i_0])) / ((+(((/* implicit */int) arr_1 [i_0])))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) ((arr_9 [i_1] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
            {
                var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2])) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : (((/* implicit */int) arr_11 [i_1] [i_2]))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1])) ? (arr_9 [i_1] [i_2]) : (((/* implicit */long long int) var_13))))) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [(unsigned short)9] [i_3])) * (((/* implicit */int) arr_13 [i_1] [3U] [i_3] [3U]))))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1] [i_1])) | (arr_7 [i_1] [i_3]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) 2309272533651673460LL))));
                            var_23 *= ((/* implicit */signed char) ((4294967288U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_28 [i_1] [i_2] [i_6] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_7 - 2] [i_8] [i_8]);
                            var_24 = ((/* implicit */unsigned short) (-(((3333650821U) ^ (arr_26 [i_6] [i_2] [i_7 - 1] [i_7 - 1] [(unsigned short)3])))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((int) 5U));
                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6] [i_2] [i_2] [i_1]))) | (arr_22 [i_1] [i_2] [i_2])));
            }
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned long long int) arr_14 [i_10 + 1] [i_10] [i_10] [(unsigned char)6]);
                            arr_35 [i_11] [i_11] [i_10] = ((/* implicit */int) 2263855592U);
                        }
                    } 
                } 
                var_28 &= ((/* implicit */unsigned long long int) (+(arr_8 [i_2] [i_2])));
            }
        }
        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            arr_38 [i_1] [i_12] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_3))) >> (((/* implicit */int) arr_14 [i_12] [i_12] [i_1] [i_1]))))) * (arr_9 [(short)8] [i_12])));
            /* LoopSeq 4 */
            for (unsigned int i_13 = 2; i_13 < 10; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_44 [(signed char)7] [i_12] [i_12] [6] [3ULL] = ((/* implicit */signed char) ((unsigned int) var_11));
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned int) 10713956646683494148ULL)))));
                }
                for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    arr_48 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-106)) / (((/* implicit */int) (signed char)-1))))) / ((+(((2309272533651673475LL) / (-2309272533651673463LL)))))));
                    var_30 |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_32 [i_13 + 2] [i_13] [i_1]))))));
                    var_31 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_24 [6LL] [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13 + 2] [i_13 - 2]))) / (2487710612712320769LL))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1] [i_13 + 1] [i_13] [i_13 + 2]))) * (2031111709U))))));
                    arr_49 [2ULL] [i_1] [i_1] [i_13] [4ULL] [i_15] = ((/* implicit */signed char) ((unsigned short) ((long long int) arr_25 [(_Bool)1] [i_12] [i_13] [i_15] [i_13 - 2])));
                    var_32 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967265U)) - (((unsigned long long int) arr_36 [i_13 - 1]))));
                }
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            arr_55 [i_17] [i_17] [i_16 - 1] [i_13] [i_12] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_16] [i_17])))) % (arr_18 [i_17] [i_17] [i_13 - 2] [i_16 - 1] [i_17] [i_13 - 2] [i_1]))), (((/* implicit */unsigned int) var_2))));
                            var_33 = ((long long int) ((long long int) arr_25 [i_16 - 1] [i_12] [i_1] [i_16] [i_12]));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2098))) : (755378590U))) != (max((arr_18 [i_17] [(_Bool)1] [i_16 - 1] [i_13] [i_12] [i_1] [i_1]), (((/* implicit */unsigned int) 260569963))))))) <= (((/* implicit */int) ((max((arr_37 [i_1] [i_1]), (((/* implicit */int) var_5)))) < (((/* implicit */int) arr_29 [(unsigned char)3])))))))));
                        }
                    } 
                } 
                arr_56 [i_13] [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_17 [i_1] [i_12] [i_1])), (var_2)))) ? (var_12) : (var_8))))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 11; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        {
                            arr_65 [i_18] [i_12] [(unsigned char)2] [i_18 - 1] [i_19] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_12]);
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_19] [i_13] [i_1])), (arr_53 [i_19] [4U] [(unsigned char)7])))) ? (((((/* implicit */_Bool) arr_8 [i_18] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)56902)))) : (((/* implicit */int) arr_10 [i_1] [(short)2] [i_18 - 1]))))) & ((~(arr_43 [i_1]))))))));
                            arr_66 [i_18] [i_18 + 1] [i_13] [i_13] [0LL] [i_18] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_36 [i_13 + 2]))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_41 [i_12])) ? (arr_18 [i_1] [6U] [i_13] [6U] [i_18] [i_18 + 1] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_1] [i_1] [3U])))))))));
                        }
                    } 
                } 
                arr_67 [i_1] = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_12] [i_13] [(unsigned short)5] [i_13] [i_1]);
            }
            for (signed char i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (unsigned short)2126))));
                var_37 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */int) (unsigned short)8636)) < (-260569990)))) ? (((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)30)), ((unsigned short)56902))), (((/* implicit */unsigned short) ((16674088963233297546ULL) != (((/* implicit */unsigned long long int) var_13)))))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_59 [i_1] [i_12] [i_20] [i_20] [i_1])))), ((!(((/* implicit */_Bool) arr_50 [i_1] [i_1])))))))));
                var_38 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_54 [i_1] [i_20] [i_12] [i_20] [i_20])) ? (min((((/* implicit */int) (unsigned short)56908)), (-943174799))) : (((/* implicit */int) arr_40 [i_12] [(unsigned char)0] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (unsigned short)1))));
                var_40 = ((/* implicit */signed char) arr_22 [i_21] [i_12] [i_1]);
            }
            for (long long int i_22 = 1; i_22 < 10; i_22 += 2) 
            {
                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [i_22 - 1] [i_22 + 2] [i_22 + 2] [i_12] [i_22 + 2] [i_12]) | (arr_19 [i_22 + 1] [i_22 - 1] [i_22 + 1] [6LL] [i_22] [i_12])))) ? (((8772607946700508203ULL) | (((/* implicit */unsigned long long int) -260569953)))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) 943174784))))))))));
                /* LoopSeq 1 */
                for (short i_23 = 1; i_23 < 11; i_23 += 4) 
                {
                    var_42 = ((/* implicit */unsigned char) ((signed char) ((signed char) (unsigned short)56902)));
                    var_43 *= max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_23] [(unsigned char)10] [i_12] [(unsigned char)7]))) != (var_14)))), ((~(arr_61 [i_1] [i_12] [i_22] [i_23 + 1] [i_12]))));
                    arr_81 [i_23 - 1] [(unsigned char)6] [i_12] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                    var_44 |= ((/* implicit */_Bool) ((unsigned long long int) min((arr_47 [i_23 - 1] [i_22] [i_1] [6U] [i_1]), (((/* implicit */signed char) arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                }
                var_45 = ((/* implicit */unsigned char) var_14);
            }
            arr_82 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)106);
            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) arr_4 [i_12]))));
        }
        arr_83 [(unsigned short)10] [i_1] = ((/* implicit */unsigned char) ((min((1537609804), (((/* implicit */int) (signed char)-96)))) != (((int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [(signed char)1] [i_1] [i_1])))))));
        arr_84 [i_1] = ((/* implicit */signed char) ((unsigned char) (~(-2309272533651673478LL))));
        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) arr_61 [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned char i_24 = 0; i_24 < 21; i_24 += 4) 
    {
        arr_88 [i_24] = ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max((arr_87 [i_24] [i_24]), (arr_87 [i_24] [i_24])))));
        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_87 [i_24] [i_24])))) ? (((((/* implicit */_Bool) (~(arr_87 [i_24] [i_24])))) ? (arr_85 [i_24] [i_24]) : (arr_85 [i_24] [i_24]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) arr_86 [(unsigned short)7]))), (((unsigned int) var_0))))))))));
        arr_89 [i_24] = ((/* implicit */long long int) arr_85 [i_24] [(unsigned char)2]);
        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) -260569953))));
    }
}
