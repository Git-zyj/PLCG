/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96491
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */int) arr_1 [3LL] [i_0]);
            arr_5 [(signed char)17] [i_1] [(unsigned char)7] = ((/* implicit */unsigned int) (~(var_7)));
            arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((arr_2 [i_0] [i_1]) + (var_10)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_12 *= arr_0 [i_2];
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-64)) != (192557103))))) / (((((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) ^ (-9223372036854775791LL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_13 -= ((/* implicit */unsigned int) (~(var_10)));
                        arr_20 [i_0] [i_3] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((long long int) var_9)))));
                        var_14 = ((/* implicit */long long int) ((arr_3 [i_0]) & (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2])) : (var_7)))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_3])) ? (-9223372036854775791LL) : (((/* implicit */long long int) arr_12 [i_0] [(unsigned char)1] [i_0]))))) ? (((((/* implicit */_Bool) 727076296U)) ? (15360132283430846456ULL) : (arr_3 [6ULL]))) : (arr_8 [i_0] [i_2])));
                    }
                    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) arr_2 [i_0] [i_2])) : (((/* implicit */unsigned int) var_10))));
                        var_17 = ((/* implicit */long long int) max((var_17), ((-(arr_9 [i_0] [i_0] [i_3] [i_4])))));
                        var_18 ^= ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 1]))) : (((unsigned long long int) var_6)));
                        var_19 = arr_23 [i_0] [i_2] [(signed char)3] [i_4] [i_6 - 2];
                    }
                    arr_25 [i_2] [i_4] = ((/* implicit */unsigned short) ((2702187056U) & (4294967295U)));
                }
                for (unsigned long long int i_7 = 4; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_2] [i_2]);
                        arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) < (((((/* implicit */_Bool) -192557097)) ? (arr_27 [i_0] [i_0] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_2] [i_0] [i_7 - 4] [i_8])))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) arr_19 [i_9 - 1])) ? (arr_19 [i_9 - 1]) : (((/* implicit */long long int) 3677127805U))))));
                        arr_36 [i_9 + 2] [i_2] [i_9] [i_9 + 1] [i_9 - 1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 281474976709632ULL)) && (((/* implicit */_Bool) ((unsigned long long int) 1ULL)))));
                    }
                    for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_40 [i_0] [i_10] [i_3] [18U] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775790LL)) ? (2096612602U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10] [i_10] [i_7 + 4] [i_7 + 2] [i_3] [i_2] [i_0]))) < (9223372036854775807LL)))))));
                        arr_41 [i_0] [i_0] [i_0] [i_7] [i_10] = ((/* implicit */unsigned int) (-(var_10)));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((long long int) ((unsigned int) var_5))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) != (var_4)));
                    }
                    arr_45 [i_0] [i_3] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) arr_24 [i_7 - 1] [i_7 - 4] [i_7 + 1] [i_7 - 1] [i_7 - 1]));
                }
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (var_5)))) ? (((((/* implicit */_Bool) arr_26 [1U] [(signed char)20] [i_0])) ? (arr_8 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) 1046528))));
            }
            for (signed char i_12 = 2; i_12 < 19; i_12 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((int) arr_22 [i_12 - 2] [i_12 + 1] [i_12] [i_12 + 1])))));
                arr_48 [i_0] [i_0] [i_2] [i_12] = arr_32 [i_12] [i_2] [i_2] [2] [i_0];
                arr_49 [i_0] [(unsigned short)10] [4U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_42 [i_12] [i_2])))));
            }
            arr_50 [i_0] [i_2] [12] = ((/* implicit */long long int) (((-(var_6))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 297621378548346453ULL))))));
            arr_51 [i_0] |= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 491520U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */unsigned long long int) var_11)) ^ (var_6))));
        }
        arr_52 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_42 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_13 = 3; i_13 < 17; i_13 += 4) 
    {
        var_25 = ((/* implicit */long long int) (+(var_1)));
        /* LoopSeq 2 */
        for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 17; i_15 += 4) 
            {
                for (unsigned int i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            arr_69 [(unsigned short)7] [(unsigned short)7] [i_17] [i_16] [i_16 + 1] [i_17] = (-(var_9));
                            arr_70 [i_13 + 2] [i_17] [i_15] [i_13 + 2] [i_17] = ((/* implicit */signed char) (+(arr_53 [i_13 - 1])));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) -192557104))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_35 [i_14 + 2] [i_14] [i_13 - 2] [i_13 - 3] [i_14] [i_14 + 2]));
            var_28 = ((/* implicit */int) ((unsigned char) -9223372036854775802LL));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 3; i_18 < 17; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    {
                        var_29 += ((/* implicit */short) 2105408327495672380ULL);
                        arr_75 [i_14] [i_14] [i_14 + 2] [i_14 + 2] = ((/* implicit */long long int) (+(arr_2 [i_14] [i_14])));
                    }
                } 
            } 
            var_30 |= ((/* implicit */signed char) arr_56 [i_13 + 2]);
        }
        for (unsigned int i_20 = 1; i_20 < 17; i_20 += 1) 
        {
            arr_79 [i_13] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_13] [i_13] [(unsigned char)10] [i_13] [i_13 + 1] [i_13 + 2])) >> (((((/* implicit */int) (signed char)57)) - (45)))));
            arr_80 [i_20] [2ULL] [i_13 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-9223372036854775802LL)))) ? (arr_34 [i_13] [i_13] [i_20]) : (arr_38 [i_20] [i_20] [i_20 - 1] [i_20 + 1] [i_20])));
        }
        /* LoopNest 2 */
        for (int i_21 = 1; i_21 < 18; i_21 += 4) 
        {
            for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 19; i_23 += 2) 
                    {
                        arr_87 [i_13] [i_23] [16] [i_23] = ((/* implicit */long long int) var_7);
                        arr_88 [i_21 + 1] [i_22] = var_10;
                        var_31 += ((/* implicit */unsigned long long int) (-(arr_59 [i_13 - 1] [i_21 + 1])));
                    }
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 19; i_24 += 3) 
                    {
                        arr_92 [i_21] [i_13] [i_13] [i_13] = ((long long int) (-(var_8)));
                        arr_93 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((3567891000U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U))))))));
                    }
                    for (unsigned int i_25 = 3; i_25 < 16; i_25 += 2) 
                    {
                        var_32 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_14 [i_25 - 1] [13LL] [i_21 - 1] [i_13 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_13] [i_13] [i_22] [i_13] [i_13] [i_13]))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : ((-(arr_9 [i_13] [i_13] [i_13] [3U])))));
                        var_33 -= ((arr_62 [i_21 + 1]) << (((var_6) - (12928668750644170419ULL))));
                        /* LoopSeq 2 */
                        for (unsigned int i_26 = 0; i_26 < 19; i_26 += 1) /* same iter space */
                        {
                            arr_99 [i_13] [i_13] [i_25] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (var_5) : (arr_72 [i_21] [i_21] [i_26])))));
                            arr_100 [i_22] [i_25] = 18446744073709551615ULL;
                        }
                        for (unsigned int i_27 = 0; i_27 < 19; i_27 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned int) ((long long int) (signed char)57));
                            arr_103 [i_13] [i_25] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((var_4) + (((/* implicit */unsigned long long int) var_2)))) & (((unsigned long long int) arr_22 [i_13] [i_13] [(unsigned short)7] [i_13 - 3]))));
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_13 - 3] [i_21 - 1] [i_21 - 1])))))));
                            arr_104 [i_25] = ((((/* implicit */unsigned long long int) var_1)) & (var_9));
                        }
                    }
                    arr_105 [i_22] [i_13 + 2] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_13]))))) >= (((/* implicit */int) (signed char)69))));
                }
            } 
        } 
        arr_106 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_17 [i_13] [i_13 - 3] [18ULL]) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551592ULL) == (((/* implicit */unsigned long long int) var_10)))))) : (((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))));
        var_36 += ((/* implicit */unsigned long long int) arr_76 [(unsigned short)8] [i_13 - 3]);
    }
    var_37 = var_5;
}
