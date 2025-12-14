/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71633
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [14U])) ? ((-(arr_0 [i_1] [i_0]))) : (((/* implicit */int) arr_1 [(short)4] [(short)4]))));
            arr_5 [i_0 - 2] [(_Bool)1] |= ((unsigned char) (+(((/* implicit */int) arr_1 [i_0 - 2] [(short)8]))));
            var_19 += var_7;
            var_20 -= ((/* implicit */unsigned char) (!(((max((1664416167U), (((/* implicit */unsigned int) (short)30608)))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [20U])))))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_21 ^= ((((((/* implicit */int) var_16)) + (((/* implicit */int) arr_3 [i_0] [(short)10] [i_0 - 2])))) * (((/* implicit */int) ((unsigned char) arr_4 [(unsigned char)0]))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_2 [i_0]))))), ((-(((/* implicit */int) arr_7 [i_0] [i_0]))))));
        }
        for (short i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            var_22 -= ((/* implicit */_Bool) (signed char)127);
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) min((((/* implicit */int) (short)10108)), (var_17)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)30608)) : (((/* implicit */int) var_14))))))));
            arr_12 [i_0] = ((/* implicit */short) var_5);
        }
        arr_13 [6] &= ((/* implicit */unsigned int) min((arr_6 [i_0] [i_0 + 1]), (((((((/* implicit */int) arr_7 [(unsigned char)6] [(unsigned char)6])) + (2147483647))) << (((((((/* implicit */int) arr_7 [12U] [12U])) + (37))) - (4)))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_18 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(arr_16 [i_0]))), ((+(((/* implicit */int) arr_4 [i_0]))))))) && (((/* implicit */_Bool) arr_0 [i_4] [i_0 - 2]))));
            arr_19 [i_0] = var_16;
        }
    }
    for (signed char i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_25 [(unsigned char)16] &= ((/* implicit */_Bool) (+(arr_15 [(unsigned char)8])));
            var_24 *= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
        }
        for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_8 = 3; i_8 < 23; i_8 += 2) 
            {
                arr_33 [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((((/* implicit */int) (short)22535)) + (((/* implicit */int) (signed char)11))))) - (arr_32 [7] [i_7] [7])))));
                arr_34 [i_5] [i_7] = ((/* implicit */unsigned int) (unsigned char)0);
            }
            /* vectorizable */
            for (unsigned char i_9 = 2; i_9 < 23; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
                {
                    var_25 |= ((/* implicit */short) var_4);
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) arr_4 [i_11]))));
                        arr_46 [i_5] [i_7 + 3] [i_9 + 1] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (4294967295U)));
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        arr_49 [(unsigned char)17] [i_7 + 1] [i_7] [i_7 + 1] [i_12] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_12])) <= (((/* implicit */int) (short)-32756)))))) & (((((/* implicit */_Bool) arr_48 [i_5] [i_7] [(_Bool)1] [i_10 + 1] [i_12])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        arr_50 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_7])) ? (arr_6 [(_Bool)1] [i_7]) : (((/* implicit */int) arr_38 [i_5] [i_7 + 2] [i_9] [i_10 + 1] [i_7 + 2] [i_5 + 1]))));
                        arr_51 [i_12] = ((/* implicit */unsigned char) -1473171453);
                        arr_52 [i_5] [i_5] [(_Bool)1] [(short)8] [i_10] [i_9] |= ((/* implicit */short) (-(((/* implicit */int) arr_42 [i_7 + 1] [(short)15] [i_10 - 1]))));
                    }
                    for (int i_13 = 2; i_13 < 23; i_13 += 1) 
                    {
                        arr_55 [i_5 - 2] [i_5 - 1] [(unsigned char)7] [(unsigned char)7] [i_10] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_5 - 2] [i_13])) <= (var_8)));
                        arr_56 [i_10] [i_13] = ((unsigned char) -1473171453);
                        arr_57 [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)6616))));
                        arr_58 [i_13] [(signed char)5] [i_13] [(signed char)5] [i_13] [i_7 + 2] [i_5] = arr_39 [i_5] [i_7] [i_9] [i_13 - 1];
                    }
                }
                arr_59 [i_5] [i_7] [i_9 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) | (-109846442)));
                arr_60 [i_5] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_5] [i_7] [i_7] [i_9])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 + 1])) && (((/* implicit */_Bool) 2798888988U)))))));
            }
            for (int i_14 = 1; i_14 < 20; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_27 ^= ((/* implicit */unsigned char) (~((+(((/* implicit */int) max((var_7), (arr_65 [0U] [0U] [i_15]))))))));
                    /* LoopSeq 3 */
                    for (int i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
                    {
                        arr_69 [i_5] [i_7] [i_14] [i_14 - 1] [8] [8] [i_16] = ((/* implicit */short) var_4);
                        arr_70 [i_5] [i_5] [i_5] [(signed char)10] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_14)))))) ? (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_63 [i_5 - 2] [i_5 - 2] [i_5])))) : (((((/* implicit */_Bool) ((signed char) (signed char)0))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_42 [i_16] [i_7 - 1] [i_14 + 2])) - (arr_54 [i_16] [i_14 + 4] [i_15])))))));
                        arr_71 [i_14] [i_14] [i_14 + 3] [i_14] [i_14] [(signed char)23] [i_14] &= ((/* implicit */unsigned int) var_0);
                        arr_72 [5U] [i_7] [i_14 - 1] [(_Bool)1] [i_14 - 1] = ((((/* implicit */int) ((signed char) arr_9 [i_7 + 4] [i_5 - 1] [i_16]))) | (((/* implicit */int) ((unsigned char) arr_30 [i_5 - 2]))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_35 [i_7] [i_15] [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_62 [i_7 - 1] [i_7 - 1])))) : (((/* implicit */int) ((_Bool) arr_38 [i_16] [i_15] [i_14] [(signed char)10] [i_5 - 1] [i_5 - 2])))))) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_16] [(unsigned char)12] [7])) ? (arr_29 [i_16]) : (((/* implicit */int) (signed char)34))))))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
                    {
                        arr_75 [i_5] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_28 [i_5 - 2] [i_7 + 1] [i_7 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                        arr_76 [i_5 + 1] [i_5 + 1] [i_14 + 3] [i_15] [i_17] = ((/* implicit */unsigned char) var_6);
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                    {
                        arr_79 [(unsigned char)1] [i_7] [i_14 + 3] [19U] [i_18] [i_5] [(unsigned char)1] = ((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32767)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_17), (((/* implicit */int) arr_74 [i_5] [i_5] [i_5] [i_14] [7U] [i_15] [(_Bool)1])))))))) : (((/* implicit */int) ((signed char) arr_38 [(unsigned char)23] [i_7] [i_7] [i_14 + 3] [i_15] [i_18]))));
                        arr_80 [i_5] [i_7] [i_14] [i_15] [i_18] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)120)))), ((+(((/* implicit */int) arr_22 [i_7] [i_7])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [15U] [15U] [i_14] [i_14] [i_14 + 4])))))));
                        arr_81 [i_5] [(signed char)22] [i_14 - 1] [i_15] [i_14 - 1] [i_14 - 1] = max(((+(((/* implicit */int) arr_63 [i_5] [7] [i_15])))), (((/* implicit */int) min(((signed char)117), (((/* implicit */signed char) (_Bool)1))))));
                    }
                    arr_82 [i_15] [i_5] [i_7 + 1] [i_7 + 4] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_45 [i_5] [i_7 + 4] [i_5 - 1] [i_14 + 1])) >= (((/* implicit */int) arr_45 [(_Bool)1] [i_7 + 2] [i_5 - 1] [i_14 + 2])))))));
                    /* LoopSeq 4 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 1) /* same iter space */
                    {
                        arr_86 [i_5] [i_7 + 4] [i_7 + 4] [i_15] [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_5] [i_5]))));
                        arr_87 [i_15] [i_7] = ((_Bool) ((_Bool) (signed char)-89));
                    }
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 1) /* same iter space */
                    {
                        var_29 &= ((/* implicit */signed char) var_8);
                        arr_90 [i_5 - 2] [i_7] [i_14] [i_15] [i_20] = (-(((/* implicit */int) ((signed char) 627273979U))));
                        arr_91 [i_5] [i_7] [i_14 + 3] [4U] [i_20] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_14 + 1])) && (((/* implicit */_Bool) var_10))));
                    }
                    for (signed char i_21 = 2; i_21 < 22; i_21 += 1) 
                    {
                        arr_95 [(signed char)13] [21U] [(short)13] [i_21] [i_7 - 1] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_15 [i_21])));
                        arr_96 [i_21] [i_21] [i_15] [i_14] [i_7] [i_21] [13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_27 [i_5] [(unsigned char)9] [i_5])))) : (((int) (short)-3982)))) + (((var_13) + (((/* implicit */int) arr_17 [i_7 + 2] [i_21] [i_7 + 1]))))));
                        arr_97 [(unsigned char)14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_94 [i_5] [i_7] [i_14 + 4] [(signed char)1] [i_21] [i_21])) ? (((/* implicit */int) arr_64 [i_14 + 2] [i_7 + 1] [(_Bool)1])) : (((/* implicit */int) (signed char)-27))));
                        arr_98 [i_5] [(short)15] [i_7] [i_14] [i_14 + 3] [i_21] [i_21] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((-2147483636), (((/* implicit */int) (signed char)124))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) arr_68 [i_5] [i_5] [i_5] [i_15] [i_21])) : (((/* implicit */int) (signed char)-89))))) : (0U)))));
                    }
                    for (signed char i_22 = 1; i_22 < 22; i_22 += 2) 
                    {
                        var_30 &= ((/* implicit */short) min((var_6), (((/* implicit */unsigned int) 1283189261))));
                        arr_102 [i_5] [i_22] [i_22] [i_14] [(short)19] [(short)20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_67 [i_5] [(_Bool)1] [i_7] [i_7] [i_15] [i_22])), ((unsigned char)162)))) & (((((/* implicit */_Bool) 1U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)116))))))) ? (((((/* implicit */int) arr_31 [i_14 + 2] [i_15] [i_22 - 1])) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10))));
                        var_31 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_63 [i_5 - 2] [i_5] [i_5]))));
                        arr_103 [i_5] [(signed char)6] [i_7] [i_7] [i_22] [i_22] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) % (2184910358U));
                        var_32 ^= max((((((((/* implicit */_Bool) 0U)) ? (arr_28 [i_5] [i_7] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(unsigned char)18] [i_7] [(unsigned char)22] [i_7] [i_7]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5] [i_5] [i_14] [i_15] [i_5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 375588946))) && (((/* implicit */_Bool) (signed char)-107))))));
                    }
                }
                var_33 -= ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (arr_40 [(signed char)1] [i_14] [i_7 + 3] [i_5] [i_5] [i_5 - 2])));
            }
            var_34 ^= ((/* implicit */unsigned char) (+(3050955995U)));
            arr_104 [i_5] [i_5] = ((/* implicit */_Bool) arr_88 [i_5 - 1] [i_7]);
        }
        for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_113 [i_23] [i_23] [i_23] [(_Bool)1] = ((/* implicit */signed char) var_15);
                        arr_114 [i_5 + 1] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (var_3))))))) + ((-((+(((/* implicit */int) var_1))))))));
                    }
                } 
            } 
            arr_115 [i_5] [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) max((arr_61 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned char) arr_94 [i_23] [(signed char)6] [i_5] [i_5] [i_5] [i_5]))))) : (((var_16) ? (var_4) : (((/* implicit */int) var_16)))))))));
        }
        var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (max((arr_43 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5 + 1]), (arr_43 [i_5 + 1] [i_5 - 1] [i_5 - 2] [(_Bool)1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))) : (var_6)));
    }
    var_36 = ((/* implicit */signed char) min((max((min((((/* implicit */int) (signed char)-35)), (var_17))), (((((/* implicit */_Bool) 2560388906U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)234)))))), ((~(((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) var_3)))))))));
}
