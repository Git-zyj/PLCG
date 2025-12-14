/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89584
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
    var_19 = ((/* implicit */long long int) min((262143ULL), (((/* implicit */unsigned long long int) ((signed char) (~(1227389846U)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */int) var_17);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((arr_1 [i_1] [i_1 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1 - 2])))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (65535ULL) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [(signed char)13] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_2)), (70673562U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_2])) : (arr_13 [i_2])))) ? ((+(65554ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305843009213693951LL)) ? (((/* implicit */int) (unsigned char)1)) : (var_0)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_2] [i_2] [i_4])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) 70673562U)) || (((/* implicit */_Bool) arr_9 [i_3 - 1] [(unsigned short)10])))))));
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                            arr_19 [i_2] [i_2] [i_2] [i_6] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((int) arr_5 [i_2]))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 451195236)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_2]))) : (arr_17 [i_6])))) || (((/* implicit */_Bool) arr_0 [i_2] [i_3 - 1]))));
                            arr_20 [i_2] [i_2] [i_4] [i_4] [i_4] [(short)19] = ((/* implicit */short) (+(((/* implicit */int) arr_18 [(short)0] [i_5 - 1] [(signed char)3] [i_5] [i_2] [i_3]))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            var_26 |= ((/* implicit */signed char) (~(arr_13 [i_5 + 1])));
                            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [2ULL]);
                            arr_23 [i_7] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) arr_18 [i_3 + 2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_24 [i_2] [i_3 - 1] [i_2] [i_2] [i_5 - 1] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_5] [i_4] [11ULL]))));
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            var_29 = (+(4224293734U));
                            arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                        {
                            var_30 = ((((/* implicit */_Bool) (-(var_16)))) ? (((((/* implicit */int) (short)-17030)) | (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_0 [i_2] [i_3])));
                            var_31 = (~((~(((/* implicit */int) var_4)))));
                            var_32 = ((/* implicit */short) arr_9 [i_9 - 1] [i_2]);
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_2] [(signed char)12] [i_4] [(signed char)12] [(unsigned short)6] [i_4])) != (((/* implicit */int) arr_18 [i_9 + 1] [(signed char)18] [i_5] [i_4] [(signed char)18] [i_2])))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_2] [i_10] [i_10] [i_10] = ((/* implicit */int) arr_32 [i_2] [i_3] [i_4] [(signed char)7] [i_5] [(signed char)7] [i_10]);
                            arr_35 [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 2] [i_5 - 3])) ? (((long long int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5])) : (((/* implicit */long long int) 4224293735U))));
                            var_34 = ((/* implicit */int) (unsigned char)35);
                            var_35 -= ((/* implicit */unsigned short) (unsigned char)228);
                            var_36 ^= ((/* implicit */int) arr_33 [i_2] [i_3] [i_2] [i_5] [i_10]);
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_2] [i_2] [i_2] [16ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_5 + 3] [i_5 + 2]))) : (7992267581342392877ULL)));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5] [i_5] [(unsigned short)9] [i_5 + 1] [i_5 - 2])) ? (((/* implicit */int) arr_21 [i_5 - 2] [i_5 - 1] [i_5 - 2] [13U] [i_5 - 1] [i_5 - 1] [i_5 - 3])) : (((/* implicit */int) arr_21 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [(signed char)10] [i_5 + 3]))));
                            var_38 *= ((/* implicit */unsigned long long int) 390826698);
                        }
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                    {
                        arr_43 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (516096U) : (arr_17 [i_12])))) | ((~(11026711676974118159ULL))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (5734074623995253377LL)))) ? (((((/* implicit */_Bool) -1142503227)) ? (18446744073709486081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))))) : (65535ULL)))));
                        var_39 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [(short)10] [(short)10])), (max((arr_36 [i_4] [i_3 - 1] [i_2] [i_3] [i_2] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */int) (short)8699)) < (((/* implicit */int) (unsigned char)234)))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)25)), (arr_36 [i_3 + 1] [i_3] [i_4] [i_14] [i_14] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1968653136U))))))) : (((/* implicit */int) arr_15 [i_2] [i_3 + 2] [i_3 + 2] [i_13] [i_14] [i_3 + 2])))))));
                            var_41 = ((/* implicit */long long int) (-(min((min((((/* implicit */unsigned long long int) (signed char)122)), (144115188075855871ULL))), (max((17966133402893771550ULL), (((/* implicit */unsigned long long int) -5421142158319572288LL))))))));
                            var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_2])), ((+(arr_42 [i_2])))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (807317626U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-9780))))))));
                        }
                        for (int i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            arr_54 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((((arr_47 [i_2]) + (9223372036854775807LL))) >> (((6941528319601352353ULL) - (6941528319601352332ULL))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((int) arr_1 [i_15] [i_3 + 2])) : (((/* implicit */int) (signed char)-66))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((((((arr_47 [i_2]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((6941528319601352353ULL) - (6941528319601352332ULL))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((int) arr_1 [i_15] [i_3 + 2])) : (((/* implicit */int) (signed char)-66)))));
                            var_43 = ((/* implicit */int) (+(((((/* implicit */long long int) arr_26 [i_3 + 2])) ^ (arr_32 [i_2] [i_2] [i_3] [i_3] [i_13] [i_15] [i_15])))));
                            var_44 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [(signed char)12] [i_2])))))))));
                        }
                        arr_55 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)234))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)44858)) + (((/* implicit */int) arr_30 [i_13] [18] [i_3] [i_3] [15ULL]))));
                    }
                    var_46 &= ((/* implicit */int) (~((~(((((/* implicit */_Bool) arr_41 [(signed char)3] [i_3])) ? (arr_1 [(short)10] [22ULL]) : (arr_50 [i_2] [i_2] [i_3] [i_3] [i_2])))))));
                }
            } 
        } 
    }
}
