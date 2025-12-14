/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68323
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
    var_20 = ((/* implicit */int) max((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) * (var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)97)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)210)) || (((/* implicit */_Bool) 435337705U)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) (~(arr_6 [i_4] [i_0])));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))))))));
                            arr_19 [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3]));
                        }
                    } 
                } 
            } 
            arr_20 [i_1] [i_1] = ((/* implicit */int) (signed char)118);
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (signed char)127))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [(unsigned char)8])) : (((/* implicit */int) var_9))))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) arr_16 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [(_Bool)1]);
                /* LoopSeq 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_25 &= ((int) arr_17 [4] [i_6 - 1]);
                    arr_28 [i_1] = ((/* implicit */unsigned char) var_2);
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_7]);
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((signed char) var_10)))));
                    arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) arr_30 [i_7 - 1] [i_7] [i_7] [i_7 - 1]));
                }
                var_28 = (-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_5]));
                arr_32 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((((2350612747U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))))) < (arr_22 [i_0])));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_8] [i_1] [i_8] [i_8] [i_8])) >= (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_0] [i_0]))));
                var_30 = ((/* implicit */unsigned int) arr_7 [i_8] [i_0]);
                arr_35 [i_8] [i_8] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) arr_9 [i_8] [i_1] [i_8]));
                arr_36 [i_1] [i_1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)122))));
                var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_1] [i_1] [i_1]))));
            }
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) max((var_32), (arr_30 [8U] [i_10] [i_11] [i_12])));
                            var_33 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_6))));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_10] [i_11 - 1])) && (((/* implicit */_Bool) (unsigned char)248)))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_9] [i_11] [i_11])) < (((/* implicit */int) arr_26 [i_10] [(unsigned char)13] [i_10] [i_10]))))) : (((/* implicit */int) arr_29 [i_0] [i_9] [1U] [i_11 + 1])))))));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_0] [i_10] [i_11 - 1])) && (((/* implicit */_Bool) arr_42 [i_0] [i_10] [i_12]))));
                        }
                    } 
                } 
                arr_48 [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_40 [i_10]))));
                arr_49 [i_10] [i_9] [i_10] [i_10] = ((((/* implicit */_Bool) arr_34 [i_10] [i_9] [i_10])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)15)));
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    var_37 = ((/* implicit */unsigned char) var_8);
                    var_38 = ((/* implicit */unsigned int) arr_47 [i_0] [i_0] [i_10] [i_9] [i_10]);
                    arr_53 [i_10] [0U] [i_10] = ((/* implicit */unsigned char) arr_22 [i_0]);
                }
                for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    arr_56 [i_10] [(signed char)6] [i_10] = ((/* implicit */unsigned char) ((int) arr_51 [i_14] [i_10] [(signed char)1] [i_9] [(signed char)1]));
                    arr_57 [i_0] [i_9] [i_10] [i_10] [i_10] = var_2;
                }
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0])) / (arr_2 [(signed char)14] [(signed char)14])))) ? (arr_6 [i_0] [i_15]) : (((((/* implicit */_Bool) arr_10 [i_0] [i_9] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0]))) : (var_16)))))));
                    arr_60 [i_0] [i_10] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */_Bool) arr_22 [i_9]);
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        {
                            arr_66 [i_10] [i_0] [i_10] [i_9] [i_0] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_63 [i_0] [i_9] [i_10] [i_9] [i_17]))))) && (((/* implicit */_Bool) var_11)));
                            var_40 = ((3636474275U) * (((/* implicit */unsigned int) ((arr_24 [i_9] [i_9]) | (((/* implicit */int) arr_47 [i_17] [i_16] [i_9] [i_9] [(_Bool)1]))))));
                            arr_67 [i_0] [i_0] [(_Bool)1] [i_16] [i_10] [i_17] [i_17] = ((/* implicit */int) arr_41 [i_0] [i_10] [i_16] [i_10]);
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) var_17)))));
                arr_70 [i_9] = ((/* implicit */signed char) ((arr_55 [i_0] [i_0] [i_9] [i_0]) / (((/* implicit */unsigned int) arr_58 [i_0] [i_0]))));
                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_58 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    for (unsigned char i_20 = 1; i_20 < 13; i_20 += 1) 
                    {
                        {
                            var_43 = ((((/* implicit */_Bool) arr_24 [i_20 - 1] [i_20 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1]))) : (var_12));
                            var_44 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_63 [i_20 - 1] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_2)))) != ((~(((/* implicit */int) arr_5 [i_19] [i_19]))))));
                        }
                    } 
                } 
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_80 [i_0] [i_9] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [(unsigned char)9] [i_9] [i_21])) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_23 [i_0] [i_9] [i_0] [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_9] [i_21])) : (arr_58 [i_0] [i_21])))));
                var_45 |= ((/* implicit */unsigned char) ((3201592133U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))));
                arr_81 [(_Bool)1] [(_Bool)1] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (var_1) : (var_6)))) ? (((/* implicit */int) ((unsigned char) 17U))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))));
                var_46 -= arr_76 [i_0] [i_0] [6U] [i_0] [i_0] [6U] [i_0];
                arr_82 [i_9] [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_4));
            }
            arr_83 [i_0] [i_9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_19) < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (unsigned char i_22 = 4; i_22 < 15; i_22 += 2) 
        {
            arr_86 [i_0] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_22 - 3];
            arr_87 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_16 [i_22] [(signed char)14] [(signed char)10] [i_22] [i_0] [i_0] [i_0]));
        }
        arr_88 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (4294967294U)));
        var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((arr_38 [i_0] [i_0]), (((/* implicit */unsigned int) arr_73 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    var_48 = ((/* implicit */int) min((((/* implicit */unsigned int) max((min((394364290), (-1400490986))), (((/* implicit */int) (unsigned char)97))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_18))))) : (max((var_14), (((/* implicit */unsigned int) var_5))))))));
}
