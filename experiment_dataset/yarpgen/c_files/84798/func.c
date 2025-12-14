/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84798
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(49152)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = var_13;
                    var_17 = ((/* implicit */long long int) min((((/* implicit */int) var_8)), ((~((~(((/* implicit */int) arr_6 [i_0]))))))));
                    var_18 = ((1152921504606814208LL) >> (((640765965U) - (640765953U))));
                }
            } 
        } 
    }
    var_19 = ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_5)), (var_9)))))) ? (14075666844114741464ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_7), (-1878922693)))), (var_9)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (var_7)))))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) var_11))))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((640765965U) >> (((((/* implicit */int) var_5)) + (24277)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) (+(var_11)))))))) : (max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 3 */
    for (short i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) arr_11 [i_3 + 1]);
        arr_14 [i_3] = ((/* implicit */_Bool) var_2);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)0)), ((+(((((/* implicit */_Bool) var_15)) ? (arr_7 [i_3] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4] [i_5])))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_23 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_5]))))), (max(((+(var_12))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_11))))))));
                                arr_25 [i_3] [i_3] [i_5] [(unsigned char)1] [i_7] [i_3] = ((/* implicit */signed char) (unsigned char)229);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        arr_29 [i_8] [i_3] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */_Bool) 640765965U)) ? (arr_7 [i_3] [i_4] [i_5]) : (((/* implicit */long long int) arr_19 [i_3] [(short)4] [(short)4] [i_3]))))), (((/* implicit */long long int) var_16))));
                        var_24 |= (~(((/* implicit */int) (_Bool)0)));
                    }
                    for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3]);
                        arr_32 [i_3] [i_3] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned int) ((short) max((-3848873790423952780LL), (((/* implicit */long long int) -9)))));
                        arr_33 [i_3] = max((((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_4] [i_3] [i_5] [i_5])) * (((/* implicit */int) arr_15 [i_9 + 1] [i_4] [(signed char)5]))))) : (min((var_15), (((/* implicit */unsigned int) arr_10 [i_3])))))), (((/* implicit */unsigned int) (((+(var_15))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8)))))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_20 [i_3 - 1])), ((+(var_0)))))), (max((((/* implicit */unsigned long long int) max((var_6), (var_7)))), (((((/* implicit */unsigned long long int) arr_7 [i_3] [(unsigned char)9] [i_3])) ^ (var_12)))))));
        var_27 = ((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_6 [i_3 - 1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_3]))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (var_6)))))));
    }
    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_28 = ((((/* implicit */_Bool) arr_40 [i_11 + 1])) ? ((~((+(var_15))))) : (max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (arr_39 [i_12])))))));
                        var_29 = ((/* implicit */int) var_12);
                        var_30 -= arr_34 [i_10];
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                for (int i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) ((signed char) var_8));
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_15] [i_16] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_44 [i_15 + 1] [i_15 + 1]))))), (var_10)));
                        /* LoopSeq 4 */
                        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            var_32 = ((/* implicit */short) (~(((/* implicit */int) ((max((arr_50 [i_10] [i_10] [12]), (((/* implicit */long long int) var_0)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) -3702519339497683601LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (var_1)))))))));
                            var_33 *= (~(-9223372036854775805LL));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) var_4)) ? (2561050133003547801ULL) : (arr_34 [i_15]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
                            var_35 -= var_15;
                            var_36 += ((/* implicit */signed char) var_4);
                        }
                        for (int i_19 = 1; i_19 < 19; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */signed char) (((~(((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((arr_41 [i_10] [i_16]) == (((/* implicit */unsigned int) 127)))))));
                            arr_60 [i_10] [i_10] [i_15] [i_16] [i_16] = ((/* implicit */long long int) var_10);
                            var_38 = ((/* implicit */short) 170957279);
                            var_39 ^= ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                        }
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_63 [i_10] [(_Bool)1] [(_Bool)1] [i_10] [i_10] = ((/* implicit */unsigned int) var_5);
                            arr_64 [i_10] [i_10] [i_14] [i_10] [i_10] |= (((+(((/* implicit */int) var_13)))) / (((((/* implicit */_Bool) arr_48 [i_14] [i_14])) ? (((/* implicit */int) arr_57 [(_Bool)1] [i_14] [i_15] [(_Bool)1] [i_20])) : (var_7))));
                        }
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10] [i_10] [15LL])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) arr_35 [i_10])) : (var_16))) >= (((/* implicit */unsigned int) arr_35 [i_10]))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 24; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        for (unsigned short i_25 = 0; i_25 < 24; i_25 += 4) 
                        {
                            {
                                arr_77 [i_21] [i_21] [i_24] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_74 [i_22] [i_23] [i_25])))))) ? (var_11) : (var_7)));
                                var_41 = ((/* implicit */unsigned long long int) var_15);
                                arr_78 [i_21] [i_21] [i_21] [i_21] [i_25] [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned int) var_11)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_74 [(signed char)8] [i_23] [i_24])))) ? (((/* implicit */long long int) 3654201331U)) : ((~(9223372036854775805LL))))) : (((/* implicit */long long int) var_7))));
                                arr_79 [i_21] [i_22] [i_21] = ((/* implicit */short) arr_74 [i_23] [i_24] [i_25]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_26 = 2; i_26 < 22; i_26 += 2) 
                    {
                        for (unsigned int i_27 = 2; i_27 < 23; i_27 += 4) 
                        {
                            {
                                arr_86 [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (arr_74 [(signed char)10] [i_22] [i_22]) : (((/* implicit */unsigned long long int) arr_73 [i_26] [i_23] [i_22] [i_21])))), (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) (+(3654201330U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 640765961U)) || (((/* implicit */_Bool) (short)4094)))))) : (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_66 [i_22] [(short)15])))) ? (((/* implicit */int) ((arr_67 [i_21] [i_22] [i_23]) != (4294967295U)))) : (((var_6) & (((/* implicit */int) (_Bool)0)))))))));
                                arr_87 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_21] [i_21] [i_21])) ? (((((/* implicit */_Bool) arr_85 [i_27] [i_22] [i_21])) ? (arr_83 [i_21] [i_27 + 1] [i_23] [i_26 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)13)) ? (((((/* implicit */_Bool) var_16)) ? (((9223372036854775805LL) ^ (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) arr_75 [i_21] [i_21] [i_21] [i_21] [19] [i_21]))));
                                arr_88 [i_21] [i_26 + 2] [i_23] [i_21] [i_21] = ((/* implicit */short) ((((((/* implicit */unsigned int) var_7)) == (arr_75 [i_21] [i_26 + 2] [i_23] [i_26] [i_27 - 2] [i_27]))) ? (arr_75 [i_23] [i_26 + 2] [i_26 + 2] [i_26] [i_27 + 1] [i_23]) : (min((arr_73 [i_21] [i_26 - 1] [i_21] [i_26]), (arr_73 [i_21] [i_26 - 1] [i_23] [3U])))));
                            }
                        } 
                    } 
                    arr_89 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_68 [i_21])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3848873790423952779LL)) ? (arr_82 [i_23] [i_23] [i_23] [i_21]) : (max((((/* implicit */long long int) var_16)), (arr_82 [i_21] [4LL] [i_23] [i_23])))))) : (min((((0ULL) * (((/* implicit */unsigned long long int) 63LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_0))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_28 = 0; i_28 < 24; i_28 += 3) 
        {
            for (int i_29 = 1; i_29 < 22; i_29 += 4) 
            {
                for (signed char i_30 = 0; i_30 < 24; i_30 += 3) 
                {
                    {
                        arr_99 [i_21] [16U] [i_29] &= var_5;
                        var_43 += ((/* implicit */short) max((arr_82 [i_21] [6LL] [(signed char)13] [i_30]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_84 [i_29 + 2] [i_29 - 1] [i_29 + 1] [(unsigned short)4] [i_29] [i_29 - 1] [i_29 - 1])) ? (((/* implicit */int) arr_84 [(_Bool)0] [i_29 - 1] [i_29] [16ULL] [(_Bool)0] [i_29] [i_29 + 2])) : (((/* implicit */int) (signed char)-45)))))));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)254))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (var_12))))) : (((/* implicit */int) ((signed char) ((_Bool) arr_73 [i_30] [i_29] [i_28] [i_21]))))));
                    }
                } 
            } 
        } 
    }
}
