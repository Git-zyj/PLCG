/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74634
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                arr_8 [i_0] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */short) ((((_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (max((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_0] [i_1] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 4] [i_1 + 1]))))))));
                var_11 = ((/* implicit */unsigned long long int) ((max((arr_3 [i_1 + 3] [i_1 + 2] [i_1 + 4]), (((arr_2 [i_0] [i_2]) ? (arr_3 [i_0] [i_1 + 2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 3] [i_2])) ? (((arr_1 [i_1 - 1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(unsigned short)15] [i_0]))))))))));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)32765)), ((unsigned short)504))))));
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) (unsigned char)169)), (arr_11 [i_0] [i_1] [i_0] [i_4]))), (((/* implicit */unsigned long long int) ((arr_16 [i_0] [(unsigned short)8] [i_3] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))), (arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 1])));
                    var_13 = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                    var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_3)) + (var_10))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) (unsigned short)59287)) * (((/* implicit */int) min(((unsigned char)0), (arr_5 [i_1 + 3]))))))));
                    var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -5118842783501969156LL)), (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 656451935)), (-5118842783501969176LL)))) % (18446744073709551615ULL)))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_1 - 1] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_21 [i_1 + 4] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned int) var_4)) | (arr_14 [i_0] [i_0] [i_1 + 3] [i_3] [i_0] [15]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1 - 1]))))));
                    arr_24 [i_0] [i_1] [i_1] [i_0] [i_6] = max((((/* implicit */unsigned long long int) arr_5 [i_3])), (min((((/* implicit */unsigned long long int) arr_19 [12ULL] [i_3] [12ULL])), (max((arr_3 [i_0] [(_Bool)1] [i_6]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0])))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) (~(2147483645)));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(min((arr_29 [i_1] [i_1 - 1] [i_1 + 4] [i_1] [i_1 + 1]), (arr_18 [i_1 - 1])))));
                        arr_30 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_22 [i_1] [i_3] [i_0]))));
                        var_19 += ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_10)), (arr_14 [i_0] [i_1 + 4] [i_1 + 4] [i_1 - 1] [i_3] [i_1 - 1]))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32741)))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (arr_32 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 3] [i_1 + 4]) : (arr_32 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_3] [i_7]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-32747)), (-5118842783501969156LL))))))))))));
                        var_21 |= ((/* implicit */int) ((((/* implicit */unsigned int) max((arr_19 [i_1 + 2] [i_1 + 4] [i_1 + 1]), (((((/* implicit */int) var_1)) << (((var_4) - (889972711)))))))) ^ (((max((arr_14 [i_9] [(short)0] [i_3] [i_3] [i_3] [12]), (((/* implicit */unsigned int) arr_25 [i_0] [i_1 + 1] [i_3] [i_7] [i_9])))) << (((min((var_0), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0])))) + (4071486346156522665LL)))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1 + 3] [i_1 + 2] [i_1 + 2]), (arr_3 [i_1 + 3] [i_1 + 4] [i_1 + 3])))) ? ((+(arr_3 [i_1 + 1] [i_1 + 3] [i_1 + 3]))) : (max((arr_3 [i_1 + 2] [i_1 + 1] [i_1 + 2]), (arr_3 [i_1 + 3] [i_1 + 4] [i_1 + 2])))));
                        arr_33 [i_0] [i_1] = (!(((/* implicit */_Bool) max((arr_15 [i_7] [i_9]), (arr_20 [i_1] [i_1 + 1] [i_1 + 4] [i_1 + 3])))));
                        arr_34 [i_1] [i_0] [i_1] [i_1 + 4] [i_1 + 3] = min((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (var_2))) / (((/* implicit */int) arr_22 [i_0] [14ULL] [i_0])))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_10])) ? (-5118842783501969169LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_10 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_5 [i_10 - 1])))))) > (((var_6) ? (((((/* implicit */_Bool) var_4)) ? (var_7) : (arr_36 [i_0] [i_1] [i_3] [4U] [i_7] [i_10]))) : (((/* implicit */unsigned int) ((arr_17 [i_10] [i_10] [i_7] [i_3] [i_1] [i_0]) / (((/* implicit */int) arr_21 [i_10 - 1] [i_0] [i_0] [i_1])))))))));
                    }
                }
            }
            arr_38 [i_0] [i_0] [i_1 + 3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) arr_27 [i_1 + 4] [(_Bool)1]))), (((arr_11 [i_0] [i_1 + 2] [12ULL] [i_1]) >> (((/* implicit */int) ((arr_3 [i_0] [i_0] [3]) == (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_1] [(unsigned short)4] [i_1])))))))));
            arr_39 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-32760)), (((((/* implicit */_Bool) (short)32716)) ? (arr_19 [i_1] [i_0] [i_0]) : (((/* implicit */int) (short)32741))))))), (((arr_22 [i_1 + 4] [i_1 + 2] [i_0]) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_25 [i_1 + 1] [4LL] [i_0] [i_0] [i_0])), (var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [7LL] [7LL] [i_1] [i_1] [7LL]))) - (arr_28 [i_0] [i_0] [i_0])))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_42 [i_0] [2U] [(short)8] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_0] [i_11] [(_Bool)1] [i_11] [0] [i_0]) > (((/* implicit */unsigned int) var_4)))))) & (min((arr_14 [i_11] [0] [i_11] [i_11] [0] [i_0]), (arr_36 [i_0] [i_0] [(unsigned char)13] [i_0] [i_0] [i_0])))));
            arr_43 [i_0] [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_10)), (max((((/* implicit */unsigned int) var_2)), (var_7))))), (((/* implicit */unsigned int) max((max((-656451936), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) arr_0 [i_11])))))));
        }
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_40 [i_0] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                {
                    var_25 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_20 [8ULL] [i_0] [i_12] [i_13])) % ((~(((/* implicit */int) arr_25 [i_12] [i_13] [i_12] [i_12] [i_0]))))))), (((long long int) arr_32 [i_13] [i_12] [i_12] [i_12] [i_0] [i_0] [i_0]))));
                    var_26 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((var_10) != (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) arr_29 [i_13] [i_13] [6] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_18 [i_0])))))))));
                    arr_50 [i_0] [i_0] [i_12] [i_13] = ((/* implicit */unsigned long long int) (-((-(arr_4 [i_0] [i_12] [i_13])))));
                }
            } 
        } 
        arr_51 [i_0] = ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                arr_62 [i_14] [i_14] [(_Bool)1] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_15 - 1] [i_15] [i_15 - 1]))));
                arr_63 [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_16] [i_16]))) > (arr_36 [i_14] [i_14] [(_Bool)1] [i_14] [(short)13] [i_14]))))));
            }
            arr_64 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_15 - 1] [i_15 - 1])) ? (((((/* implicit */_Bool) arr_7 [i_14] [i_14] [i_15] [i_14])) ? (((/* implicit */int) var_3)) : (arr_57 [i_14] [i_14] [(unsigned short)5]))) : (arr_53 [i_14])));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((long long int) arr_11 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))));
        }
        var_28 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_10)) : (var_7)))));
        var_29 = ((/* implicit */_Bool) ((arr_54 [i_14]) % (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 3; i_17 < 9; i_17 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) ((_Bool) arr_60 [i_14] [i_17 - 3]));
            arr_67 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) var_10);
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) arr_29 [i_14] [i_14] [i_17] [6] [i_17])) : (((/* implicit */int) arr_15 [i_14] [i_17])))) != (((/* implicit */int) ((short) arr_9 [3] [3] [3]))))))));
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                for (unsigned short i_19 = 4; i_19 < 11; i_19 += 1) 
                {
                    {
                        var_32 += ((/* implicit */long long int) arr_69 [(short)6] [(short)1] [i_17]);
                        arr_74 [i_14] [i_17] [i_18] [i_18] [i_18] [i_14] |= ((/* implicit */short) arr_12 [i_17 - 1]);
                        arr_75 [i_14] [i_18] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                        /* LoopSeq 4 */
                        for (int i_20 = 1; i_20 < 10; i_20 += 4) /* same iter space */
                        {
                            arr_78 [i_18] = ((/* implicit */unsigned char) arr_55 [i_14] [i_14]);
                            var_33 *= ((/* implicit */_Bool) ((long long int) arr_77 [i_17] [i_17 + 1] [i_19 - 4] [i_20 + 2] [i_17]));
                            arr_79 [4] [i_17] [i_18] [i_19] [i_20] = ((/* implicit */short) arr_1 [i_20 - 1] [i_20 - 1]);
                        }
                        for (int i_21 = 1; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            arr_83 [i_14] [i_14] [i_17 + 2] [i_18] [i_18] [i_19] [i_21] = ((_Bool) ((((/* implicit */int) var_5)) >> (((arr_31 [i_14] [i_17] [i_18] [(_Bool)1] [i_21]) - (1983522462)))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_17 + 1] [i_18] [i_17 + 2])) & (((/* implicit */int) arr_26 [i_17 + 1] [i_18] [i_17 + 3]))));
                        }
                        for (int i_22 = 1; i_22 < 10; i_22 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */short) arr_54 [i_14]);
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((unsigned long long int) arr_17 [i_17] [i_17] [i_17] [i_17 + 3] [i_22 + 1] [i_19 - 4])))));
                            arr_87 [i_14] [i_17] [i_18] [i_19] = ((((/* implicit */int) arr_22 [i_17 + 3] [i_19 - 2] [i_18])) % (arr_73 [i_17 - 3] [i_17] [i_17 - 3] [i_17 - 2]));
                            arr_88 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_59 [(unsigned short)1] [(unsigned short)1])) ? (var_9) : (((/* implicit */unsigned int) 1121292490)))) % (((/* implicit */unsigned int) arr_10 [i_19 - 2] [i_17 + 2] [i_22 + 1]))));
                        }
                        for (int i_23 = 1; i_23 < 10; i_23 += 4) /* same iter space */
                        {
                            arr_91 [i_14] [i_17] [i_23] [0U] [i_23] [i_14] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (arr_9 [9] [12ULL] [9])))) | (arr_73 [i_14] [i_17 - 3] [i_19 + 1] [i_23 - 1])));
                            arr_92 [i_23] [i_23] [i_18] [(short)2] [i_19] [i_19 + 1] [i_23] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_1)))));
                            arr_93 [i_18] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_19 - 1] [i_17 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_89 [i_14] [i_23 - 1] [i_19 - 1] [i_17 + 2] [i_23]))) : (arr_85 [i_19 + 1] [i_17 + 3])));
                        }
                        var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_17] [i_19]))) > (((/* implicit */int) arr_47 [i_18] [i_18] [i_17 + 2] [i_19 - 2]))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        arr_98 [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_24] [i_24])) && (((/* implicit */_Bool) (short)(-32767 - 1))))))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((int) (!(((/* implicit */_Bool) arr_32 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))))));
        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_95 [i_24] [i_24])), (var_8))))));
    }
    var_39 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (var_10))))) : (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) % (((unsigned long long int) ((var_9) + (((/* implicit */unsigned int) var_4)))))));
    var_40 = ((/* implicit */short) min((var_4), (var_2)));
    /* LoopNest 3 */
    for (long long int i_25 = 0; i_25 < 13; i_25 += 4) 
    {
        for (long long int i_26 = 1; i_26 < 11; i_26 += 1) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 13; i_28 += 2) 
                    {
                        arr_110 [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_25] [i_26 - 1] [i_26 + 1])), (arr_11 [i_26] [i_26 + 1] [i_26 + 1] [i_26 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) (-(arr_46 [i_25] [i_26])))) * (((unsigned long long int) var_1))))));
                        var_41 += ((/* implicit */int) (!(max((((((/* implicit */int) arr_107 [i_28] [i_27] [i_27] [i_26 + 1] [i_25] [i_25])) != (((/* implicit */int) arr_40 [5ULL] [i_26] [5ULL])))), (((_Bool) (_Bool)1))))));
                        arr_111 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(arr_6 [i_28] [i_26 - 1] [i_26 - 1])))))) && (((/* implicit */_Bool) max((max((-803810287), (arr_104 [i_25] [i_25]))), (((/* implicit */int) max(((short)-32760), (((/* implicit */short) arr_35 [i_25]))))))))));
                    }
                    arr_112 [i_27] [i_26 + 2] [i_25] [i_27] = ((/* implicit */_Bool) arr_32 [i_25] [i_26] [i_27] [i_27] [i_27] [i_26] [i_27]);
                }
            } 
        } 
    } 
}
