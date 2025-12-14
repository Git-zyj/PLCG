/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65463
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (var_12)))) ? (var_11) : (var_11));
    var_16 |= ((/* implicit */unsigned char) var_0);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned short) var_8)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_7)) : (((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0]))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            arr_7 [(_Bool)0] &= arr_5 [i_0 - 2] [i_1 - 3] [i_1 - 2];
            var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 3]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0 + 4])))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_5 [i_0 - 2] [i_1 - 1] [i_0 + 1]) : (arr_5 [i_0 - 3] [i_1 - 1] [i_1 + 1])))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_1 - 1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 + 3])) : (((/* implicit */int) arr_6 [i_0 + 2])))) : (arr_15 [i_4 - 1] [i_0] [i_0 + 3])));
                            arr_18 [i_0] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_4] [i_1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])))) : (((/* implicit */int) ((short) arr_6 [i_1])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) 1962539318)) ? (((/* implicit */int) (signed char)-2)) : (((((/* implicit */_Bool) 989284334)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned short)11549))))));
            arr_21 [i_0] = ((/* implicit */signed char) ((int) min((((/* implicit */int) arr_16 [(short)1] [i_0 - 2] [(short)1] [i_0] [(short)1] [i_0])), (arr_0 [i_0]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
        {
            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 - 2] [i_6] [i_6]))) ? (((/* implicit */int) ((short) (signed char)3))) : (((int) 1649803673))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(short)0])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_6] [i_0 - 2] [i_6] [i_0 + 1])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])), (arr_20 [(signed char)6])))) : (min((arr_23 [i_0] [i_6]), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-2))))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_7] [i_0] [i_9]) ? (arr_23 [i_10] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_10 [i_8] [i_8] [i_0] [i_9])));
                            arr_36 [i_0] = arr_8 [i_9];
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0 - 2] [i_10])) ? (((/* implicit */int) arr_24 [i_0 - 1] [i_8])) : (((/* implicit */int) arr_24 [i_0 + 3] [i_10]))))) ? (((((/* implicit */_Bool) arr_9 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0])) ? (((/* implicit */int) arr_13 [i_0 + 4] [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 2] [i_0 + 3] [i_0])))) : (((/* implicit */int) arr_3 [i_9]))));
                            var_24 = ((/* implicit */unsigned short) arr_23 [i_0 - 1] [i_0 + 3]);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (short)-7311))));
                        }
                    } 
                } 
                arr_37 [i_0] = ((/* implicit */short) arr_11 [i_0] [i_0] [(_Bool)0]);
                var_26 = ((/* implicit */signed char) arr_2 [i_0 - 3] [i_0]);
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [(short)8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_8] [i_8] [i_7] [i_8])) : (((/* implicit */int) arr_16 [i_8] [i_0 - 1] [i_8] [i_0] [i_7] [i_7]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1649803673))) : (((/* implicit */int) arr_16 [i_0 - 3] [i_0 - 2] [i_0] [i_8] [i_8] [i_7]))));
                var_28 |= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_8])) ? (((/* implicit */int) arr_2 [i_0] [i_7])) : (arr_0 [i_8])))) ? (((/* implicit */int) arr_27 [i_0] [i_8])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_35 [i_0] [15] [i_7] [i_7] [i_8] [i_7])), (arr_24 [4LL] [i_8])))))));
            }
            for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_40 [i_0] [i_0] [i_11] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_7] [i_7] [i_11] [i_11] [i_11]);
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    var_29 = arr_26 [i_0] [i_7] [i_11];
                    arr_43 [i_7] [9] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_30 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)222));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 + 3] [i_0] [i_11])) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) max((arr_45 [i_0] [i_7] [(short)12] [i_13] [i_0]), (((/* implicit */unsigned short) arr_38 [i_7] [i_11])))))));
                    /* LoopSeq 2 */
                    for (short i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((arr_32 [i_0] [i_0] [i_0] [i_13] [i_13]) ? (((((/* implicit */_Bool) arr_2 [i_14 + 1] [i_14])) ? (((/* implicit */int) arr_2 [i_14 - 1] [i_14 + 1])) : (((/* implicit */int) arr_2 [i_14 + 1] [i_14 - 3])))) : (((/* implicit */int) arr_11 [i_13] [i_13] [i_13])))))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_35 [i_0] [i_7] [i_7] [i_0] [i_7] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_13]))) : (arr_30 [i_0] [i_7] [i_11] [i_14])))) ? (((long long int) arr_5 [i_0] [i_11] [i_13])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_0 + 1] [i_7] [i_11] [i_13] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_6 [i_7])))))))) ? (((long long int) arr_39 [i_0] [i_0 + 2] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_7])) ? (max((((/* implicit */long long int) arr_0 [i_0])), (arr_10 [i_14 - 3] [i_0] [i_0] [i_7]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_0] [i_13])) ? (arr_10 [i_0] [i_7] [i_0] [i_13]) : (((/* implicit */long long int) arr_42 [i_14] [i_7] [i_0] [i_14]))))))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 16; i_15 += 2) 
                    {
                        arr_54 [i_0] [i_7] [i_11] [i_0] [i_7] = ((/* implicit */_Bool) arr_33 [i_0]);
                        arr_55 [10LL] [i_0] [i_11] [i_0] [i_15 + 1] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */int) arr_11 [i_15 - 1] [i_7] [i_0 + 4])), (arr_20 [i_0]))));
                        var_34 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 + 1] [i_0] [i_0])) ? (arr_30 [i_0] [i_7] [i_13] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_0] [i_0] [i_7] [i_0] [i_13] [i_15 + 1]))))));
                    }
                }
                arr_56 [i_0] [i_7] [i_11] [i_0] = ((/* implicit */int) arr_14 [i_0] [i_7] [i_7] [i_7] [i_7] [i_7]);
                var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_6 [i_0 - 2])))) ? (((((/* implicit */_Bool) ((short) arr_20 [i_11]))) ? (((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_11] [i_0] [i_0])) ? (((/* implicit */int) arr_24 [i_0] [i_11])) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_7] [(signed char)13] [i_11])))) : (((((/* implicit */_Bool) arr_50 [i_11] [i_7] [i_7] [2] [i_11])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_7] [i_11] [i_0])) : (arr_0 [i_11]))))) : (((((/* implicit */_Bool) arr_39 [i_0] [i_0 + 2] [i_11])) ? (((/* implicit */int) arr_1 [i_11])) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_11] [i_0])) ? (((/* implicit */int) arr_47 [i_0] [i_0] [i_7] [i_7] [i_11] [i_11])) : (arr_42 [i_0] [i_0] [i_11] [i_0])))))));
                arr_57 [i_0] [i_7] [i_0] [i_11] = arr_1 [i_0 + 4];
            }
            arr_58 [i_0] = min((((((/* implicit */_Bool) arr_41 [i_0])) ? (arr_41 [i_0]) : (arr_41 [i_0]))), (((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) arr_16 [i_7] [i_7] [i_0 - 1] [(unsigned short)11] [i_0] [i_0])) : (arr_20 [i_0]))));
        }
    }
    for (unsigned long long int i_16 = 3; i_16 < 14; i_16 += 4) /* same iter space */
    {
        arr_61 [i_16] [i_16] = arr_9 [i_16] [i_16] [i_16] [i_16 + 1];
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_16] [i_16 + 4] [i_16 + 4] [i_16] [i_16] [i_16])) ? (arr_10 [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_35 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2])), (arr_34 [i_16] [i_16] [i_16] [i_16] [i_16 - 1])))))))) ? (((((/* implicit */_Bool) max((arr_12 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */short) arr_39 [i_16] [i_16] [i_16]))))) ? (((((/* implicit */_Bool) arr_16 [i_16] [i_16 + 4] [(signed char)2] [i_16] [i_16] [i_16])) ? (arr_15 [i_16] [i_16] [i_16]) : (arr_41 [i_16]))) : (((((/* implicit */_Bool) arr_41 [i_16])) ? (arr_46 [i_16] [i_16]) : (((/* implicit */int) arr_1 [i_16])))))) : (((/* implicit */int) arr_24 [i_16 + 4] [i_16]))));
    }
    for (unsigned long long int i_17 = 3; i_17 < 14; i_17 += 4) /* same iter space */
    {
        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_17] [i_17 + 4] [i_17 - 2] [i_17 - 3])) ? (((((/* implicit */_Bool) arr_48 [i_17] [i_17 - 1] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_9 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_19 [i_17] [i_17])))) : (((/* implicit */int) arr_1 [i_17 + 1]))))) ? (((/* implicit */int) arr_11 [i_17] [i_17] [i_17 + 2])) : ((((_Bool)1) ? (((/* implicit */int) (signed char)10)) : (0))));
        var_38 = ((/* implicit */long long int) ((_Bool) min((arr_27 [i_17 - 2] [i_17 + 3]), (arr_27 [i_17 + 3] [i_17 + 4]))));
        arr_64 [i_17] = ((/* implicit */signed char) arr_1 [i_17]);
    }
    for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
    {
        var_39 = ((/* implicit */signed char) arr_60 [i_18] [i_18]);
        arr_68 [i_18] [i_18] = ((/* implicit */unsigned short) arr_14 [i_18] [i_18] [(unsigned char)12] [i_18] [i_18] [i_18]);
    }
}
