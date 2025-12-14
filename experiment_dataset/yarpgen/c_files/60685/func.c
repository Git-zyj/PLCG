/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60685
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [(short)8] [8ULL] [10ULL] [i_2] [i_2] [i_4] |= ((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (12969100884759546022ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) (unsigned char)193))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7688691643443821460LL)) ? (arr_12 [i_0 + 2] [i_0 + 3] [i_0 - 1] [i_1] [i_3 - 1]) : (((/* implicit */unsigned long long int) var_1)))))));
                                arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                {
                    arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0 + 3] [i_6 + 1])) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned char)27))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_6 [(unsigned short)2] [i_0 - 1] [i_0] [i_0]) : (arr_6 [i_0] [i_0 - 1] [6LL] [i_0 + 3])));
                    arr_21 [i_6] [i_6 - 2] [10ULL] [0] |= ((((/* implicit */_Bool) var_10)) ? (var_14) : (var_1));
                }
            } 
        } 
        arr_22 [2U] [i_0 + 1] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-7439)) : (((/* implicit */int) (unsigned short)34354)));
        /* LoopSeq 4 */
        for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 2] [i_7] [(unsigned char)2] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (4745077609499445610ULL)));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned int i_9 = 3; i_9 < 9; i_9 += 1) 
                {
                    {
                        arr_31 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_9 + 2] [6U] [(short)0] [i_9 - 2] [i_9 - 1] [i_9])) ? (arr_17 [i_9 - 3] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8])))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))));
                    }
                } 
            } 
        }
        for (int i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)43))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (arr_11 [10U] [10U] [i_0 + 1] [10U]) : (arr_11 [i_0] [i_0] [i_0 - 1] [i_0 + 3])));
                var_28 = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_10 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) : (((/* implicit */int) (short)-4579))));
            }
            arr_38 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_10 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] [9U]))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)105)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10] [i_10] [(unsigned char)3] [3LL] [i_10 - 1] [i_10 + 1])))));
        }
        for (long long int i_12 = 2; i_12 < 8; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_13 = 1; i_13 < 9; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned int i_15 = 4; i_15 < 7; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11276790630255447894ULL)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) var_10))));
                            var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_14] [(unsigned char)2] [(unsigned char)2] [i_0 + 1])) ? (((/* implicit */int) var_9)) : (arr_37 [(_Bool)1] [0ULL] [0ULL] [i_0 + 3])));
                            arr_48 [i_0] [2LL] [i_12] [(_Bool)1] = ((((/* implicit */_Bool) var_18)) ? (arr_43 [i_0 + 1] [i_15 + 1]) : (arr_43 [i_0 + 2] [i_15 - 3]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_55 [i_12] [i_12] [i_12] [i_12 - 1] [i_12] [i_12 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_12])) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_12] [i_17])) ? (((/* implicit */int) arr_45 [i_0] [i_12 - 1])) : (((/* implicit */int) (signed char)43)))))));
                            arr_56 [(short)2] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_13 + 1] [i_12 + 2] [i_0 - 1])) ? (arr_27 [(short)2] [i_13 - 1] [i_12 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))));
                        }
                    } 
                } 
            }
            for (long long int i_18 = 3; i_18 < 9; i_18 += 4) 
            {
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_12 - 2] [i_18 + 1])) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_40 [i_12 + 3] [i_18 + 2])))))));
                /* LoopSeq 1 */
                for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -3939912445288478619LL)) : (var_16)));
                        arr_66 [i_18] [2U] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)233)) : (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned char)50))))));
                        arr_67 [i_12] [i_19] [(short)2] [i_19] [i_20] = ((((/* implicit */_Bool) (unsigned char)147)) ? (var_6) : (((/* implicit */unsigned long long int) arr_37 [i_0] [i_12] [i_18] [i_19])));
                    }
                    arr_68 [i_0] [i_12] [i_0] [i_19] = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) var_9)) : (var_18)));
                }
            }
            arr_69 [i_0 + 2] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)17072)))));
        }
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_21])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))));
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                for (unsigned long long int i_23 = 2; i_23 < 10; i_23 += 1) 
                {
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)));
                        arr_78 [i_0] [i_21] [i_22] [i_23 - 2] [i_0 + 1] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_45 [i_23 - 2] [i_0 - 1]))));
                    }
                } 
            } 
        }
        arr_79 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 2938862823U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))) : (864658309U)));
    }
    /* LoopNest 2 */
    for (unsigned char i_24 = 0; i_24 < 21; i_24 += 1) 
    {
        for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 3) 
        {
            {
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_25])) ? (((/* implicit */unsigned long long int) 4249040167U)) : (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 132303915U)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_82 [i_24]))))) : (((((/* implicit */_Bool) 16467141321842946501ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_24]))) : (var_1))))))));
                arr_85 [i_24] [i_24] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2387)) ? (arr_81 [i_24]) : (((/* implicit */unsigned long long int) 3847157612U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (short)19125)) : (((/* implicit */int) (signed char)-104))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_81 [i_24])))));
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_24] [i_25]))) : (var_5)))) ? (((((/* implicit */_Bool) 9601496740891043102ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_84 [i_25] [i_25])) : (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_18)) : (var_14)));
    var_39 = ((/* implicit */_Bool) var_17);
}
