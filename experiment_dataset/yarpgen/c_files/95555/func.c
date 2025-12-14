/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95555
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
    var_12 = ((/* implicit */int) ((((/* implicit */int) max((min(((short)-7882), ((short)13))), (((/* implicit */short) max((var_0), (var_11))))))) < (((/* implicit */int) var_9))));
    var_13 = max((((/* implicit */unsigned short) var_6)), (var_9));
    var_14 |= min((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((var_1), (var_1))))), (((/* implicit */long long int) var_4)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (var_7)))) ? (var_1) : (max((var_1), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1]))));
            var_16 -= ((/* implicit */int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_1]))))))) >= (((/* implicit */int) max(((unsigned short)1016), (((/* implicit */unsigned short) (_Bool)1)))))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) (short)-7882))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((var_3) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_2 [i_0] [i_1]))))))))));
            /* LoopSeq 2 */
            for (short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned short) ((max((var_8), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [3ULL] [i_2])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 4] [4ULL] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1] [i_2]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [9ULL] [i_3] [i_2 - 2] [i_3 + 1] [i_3 + 1] = ((/* implicit */signed char) max((((/* implicit */long long int) var_10)), (((((var_1) * (((/* implicit */long long int) ((/* implicit */int) var_4))))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_3 + 1] [i_3] [i_3] [i_3]), (((/* implicit */short) arr_2 [i_0] [i_1]))))))))));
                            var_18 = ((/* implicit */short) var_0);
                            arr_13 [i_0] [(short)2] [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1]);
                        }
                    } 
                } 
                var_19 = max((min((((((/* implicit */_Bool) (short)7881)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18ULL))), (((var_4) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) max((min((arr_1 [i_2 - 4]), (((/* implicit */unsigned char) arr_0 [i_2 - 1] [i_1])))), (((/* implicit */unsigned char) var_10))))));
            }
            /* vectorizable */
            for (unsigned short i_5 = 4; i_5 < 7; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [6] [6] [6] [i_6])) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_5 - 2] [i_6])) || (((/* implicit */_Bool) var_6)))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (72))) - (20)))))) ? (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_7))))) : (((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_22 -= ((/* implicit */_Bool) ((arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1]) ^ (((/* implicit */int) var_5))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_5 + 3] [4])) > (((/* implicit */int) var_4))))) / (arr_18 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7 + 1])));
                    }
                    var_24 -= ((/* implicit */unsigned short) ((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_5 + 4] [i_6] [i_1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0])))));
                }
                for (short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned short) var_0);
                    var_25 = ((var_3) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_0))))));
                    arr_27 [(signed char)7] [i_5] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_23 [i_8] [i_5 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11)))));
                    arr_28 [(short)4] [i_1] [(short)4] [i_8] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) > (-101545731)));
                }
                for (short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) arr_30 [i_9] [i_1] [i_1]);
                    arr_32 [(short)7] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_4 [i_0] [i_1] [i_5 + 3] [2LL])))))) : (var_1)));
                    var_27 = ((/* implicit */short) var_11);
                }
                for (short i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                {
                    arr_37 [i_0] [i_0] [i_5] [i_5] [i_1] = ((((arr_24 [(signed char)7] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((/* implicit */int) var_0))));
                    arr_38 [i_5] [i_1] [i_1] [i_1] [i_10] [i_10] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5] [i_0]);
                }
                arr_39 [i_5] [i_0] [i_0] = ((/* implicit */short) var_1);
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_45 [i_0] [i_0] [i_5] = ((/* implicit */short) arr_41 [i_0] [i_1] [i_5] [i_1] [i_12 - 1] [7LL]);
                            arr_46 [i_1] [i_5] = ((/* implicit */long long int) arr_14 [i_5] [i_5] [i_12]);
                            arr_47 [i_5] = ((/* implicit */unsigned short) arr_21 [i_11] [i_11] [i_5 + 1] [i_11]);
                        }
                    } 
                } 
            }
            arr_48 [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)37)), ((unsigned char)160)));
        }
        /* LoopNest 2 */
        for (signed char i_13 = 4; i_13 < 9; i_13 += 2) 
        {
            for (short i_14 = 4; i_14 < 10; i_14 += 1) 
            {
                {
                    arr_55 [i_14 + 1] = ((/* implicit */unsigned short) arr_21 [i_0] [i_13] [5ULL] [i_14]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_0))));
                        arr_59 [(short)6] [i_15] = ((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_7)))))));
                        arr_60 [i_14 - 4] [i_13] [(short)7] [i_15] [i_13] [i_15] = ((/* implicit */unsigned short) var_4);
                        var_29 = ((/* implicit */short) ((var_11) ? (arr_41 [i_15] [i_14] [i_13 - 1] [i_13 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_13] [i_14] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 1; i_16 < 8; i_16 += 1) 
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_14 + 1]);
                        arr_65 [i_0] [i_13 - 3] = ((/* implicit */long long int) arr_29 [i_0] [i_13] [i_14] [i_16 + 1] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (short i_17 = 2; i_17 < 8; i_17 += 4) 
                    {
                        var_30 = arr_23 [(signed char)1] [i_13 - 3] [i_14 - 3] [i_17 - 2];
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            arr_71 [i_18] [i_18] [i_18] [i_18] [i_0] = ((/* implicit */_Bool) arr_30 [i_13] [i_14 - 2] [i_17]);
                            var_31 = ((/* implicit */unsigned char) var_3);
                        }
                        arr_72 [i_0] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_34 [i_13] [i_14] [i_13] [(short)8] [i_0]), (((/* implicit */unsigned long long int) arr_42 [i_0] [i_13 + 1] [i_13 + 1] [i_17]))))) ? (((/* implicit */int) arr_33 [i_0] [i_17] [i_0] [i_0])) : (((/* implicit */int) max((arr_40 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]), (arr_67 [0ULL] [(_Bool)1]))))))) ? (max((((/* implicit */int) var_4)), (((arr_31 [i_0] [(unsigned short)9] [10ULL] [i_17 + 3]) ^ (((/* implicit */int) arr_5 [i_0] [i_13] [i_14 - 1])))))) : (((/* implicit */int) arr_44 [i_17 + 3] [i_13] [i_14] [i_13 - 3] [i_13] [i_13] [i_0]))));
                        arr_73 [i_0] [i_13] [i_13] [i_17] = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) var_10)) == (((((/* implicit */int) (short)-12596)) / (((/* implicit */int) var_2))))))), (min((var_6), (((/* implicit */signed char) var_10))))));
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) arr_51 [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        arr_81 [i_19] [i_19] [i_20] [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_19] [(_Bool)1] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */signed char) arr_76 [i_0] [i_19] [i_20])), (arr_0 [i_0] [i_19]))), (((/* implicit */signed char) ((var_11) && (var_0)))))))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */signed char) var_3))))) ? (max((((/* implicit */unsigned long long int) (signed char)73)), (var_7))) : (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_20] [i_20]) << (((((/* implicit */int) var_10)) - (1))))))))));
                        arr_82 [i_0] [i_0] [i_20] = ((/* implicit */unsigned char) arr_62 [i_0]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_22 = 1; i_22 < 23; i_22 += 1) 
    {
        for (short i_23 = 2; i_23 < 24; i_23 += 3) 
        {
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                {
                    arr_92 [(_Bool)1] [i_23] [i_24] [(short)20] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((var_3), (var_0))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) < (var_8)));
                    var_33 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_6)), (arr_84 [i_22] [i_22]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)60)) + (-101545731))))));
                }
            } 
        } 
    } 
}
