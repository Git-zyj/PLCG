/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83337
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)596)) : (((/* implicit */int) arr_0 [i_0]))))));
                var_11 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (unsigned char)210);
        var_12 = ((/* implicit */int) max((var_12), ((~(((/* implicit */int) arr_6 [i_2]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3])))));
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 606951514))));
                var_15 = (~(arr_7 [i_3]));
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)567)) >= (((((/* implicit */_Bool) (unsigned short)64931)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_5]))))));
                    arr_17 [i_2] [(unsigned short)18] [i_3] [(signed char)0] [(short)13] = ((/* implicit */signed char) ((606951494) <= (((/* implicit */int) (short)4063))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) ((7034710273643394276ULL) - (((/* implicit */unsigned long long int) 1873587643))));
                        var_18 = ((/* implicit */unsigned long long int) arr_19 [i_5] [i_5] [i_5 + 4] [i_6] [i_6]);
                        arr_20 [i_6] [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)45)) ? (15059823989619064464ULL) : (6668396276839517527ULL)));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-7)))));
                        var_20 ^= ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_5 + 4] [i_3]))));
                    }
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 11442517111602193485ULL))) ? (((unsigned long long int) arr_15 [i_5] [(unsigned char)3] [17LL] [i_3] [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
                for (short i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_8] [i_8]))))) <= (arr_7 [i_4])));
                        arr_30 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (2147483627) : (((/* implicit */int) arr_24 [i_8 - 3] [i_8 + 1] [i_8 - 1] [i_8 - 2]))));
                        arr_31 [i_2] [i_8] [i_4] [i_2] [i_9] [i_3] = ((/* implicit */unsigned char) arr_24 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]);
                        arr_32 [i_8] [i_8] [i_8] [i_2] = ((/* implicit */unsigned char) var_5);
                    }
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) arr_11 [i_2] [(unsigned char)6]);
                        var_24 = ((/* implicit */short) arr_16 [i_2] [i_3] [i_3] [i_8 - 2]);
                        var_25 += ((/* implicit */unsigned char) (signed char)-4);
                        arr_36 [i_2] [i_8] [(unsigned short)15] [i_2] [6ULL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_2] [16LL] [i_8] [i_8 + 1] [(unsigned short)2] [i_8] [i_8 - 2])) ? (((long long int) (short)-22634)) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_4] [i_8])))))));
                    }
                    arr_37 [i_4] [i_8] [(unsigned short)6] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */unsigned long long int) var_2)) : (0ULL)));
                }
                arr_38 [i_2] [i_2] [i_3] [i_3] = var_1;
            }
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
            {
                arr_41 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_33 [i_2] [i_3] [i_2] [i_2] [i_11]))) ? (((((/* implicit */_Bool) arr_39 [i_2])) ? (((/* implicit */int) arr_39 [i_2])) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) arr_26 [3] [3] [i_3] [i_11]))))));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_26 = ((((/* implicit */_Bool) (signed char)-8)) ? (15413187120167562277ULL) : (((/* implicit */unsigned long long int) 8159673832637028545LL)));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        var_27 &= ((/* implicit */int) (+(arr_40 [i_3] [i_12] [i_13])));
                        var_28 = ((/* implicit */unsigned char) var_1);
                        var_29 ^= ((/* implicit */short) -1811735427);
                        arr_47 [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (7004226962107358130ULL)));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        var_30 ^= ((/* implicit */long long int) arr_33 [i_2] [i_3] [i_11] [i_2] [i_2]);
                        arr_52 [i_2] [i_2] [i_3] [i_2] [i_12] [i_14] = ((/* implicit */short) (~(((/* implicit */int) arr_50 [i_2] [i_3] [i_11] [i_3] [i_14] [(short)1]))));
                        arr_53 [i_2] [i_14] [(unsigned char)3] [i_11] [i_14] = ((/* implicit */unsigned short) (+(7004226962107358130ULL)));
                    }
                }
                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_11] [i_2]))));
            }
            for (long long int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */short) 2147483627);
                var_33 = ((/* implicit */short) ((unsigned char) arr_49 [i_15] [i_3] [i_3] [i_3] [i_2]));
                arr_56 [i_2] [i_3] [8LL] [i_3] = ((/* implicit */int) (signed char)-4);
            }
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (signed char)15)) ? (-913012774) : (85777003)))))));
            arr_57 [i_2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_2] [i_3]))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_3] [i_3] [i_3])) ? (arr_21 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64940)))));
        }
        var_36 = (+(arr_48 [i_2] [i_2] [i_2] [i_2] [i_2]));
        /* LoopSeq 3 */
        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_2] [(unsigned char)16] [i_16] [i_2] [i_2])) ? (-2147483608) : (((/* implicit */int) var_4))));
            var_38 = ((/* implicit */signed char) var_4);
        }
        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            var_39 += ((/* implicit */signed char) 11653311886592736084ULL);
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) : (((((/* implicit */_Bool) 0ULL)) ? (8284982339580310875LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
            /* LoopSeq 1 */
            for (long long int i_18 = 3; i_18 < 18; i_18 += 4) 
            {
                arr_66 [i_2] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) <= (var_1)));
                var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_64 [i_17] [(unsigned short)16] [i_18 - 1] [i_18]))));
            }
            arr_67 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_5)) : (1645153165)))));
        }
        for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            arr_70 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [(signed char)12] [i_2] [i_19])) ? (((/* implicit */int) arr_29 [i_2] [i_19] [i_19] [18LL] [i_19])) : (((/* implicit */int) arr_29 [i_2] [0] [i_19] [i_19] [i_19]))));
            var_42 ^= arr_35 [i_2] [i_2] [i_2] [i_2] [i_2];
        }
    }
    /* vectorizable */
    for (short i_20 = 0; i_20 < 17; i_20 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_21 = 2; i_21 < 14; i_21 += 1) 
        {
            var_43 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_76 [i_20] [i_21 + 3] [i_20]))));
            var_44 += ((/* implicit */signed char) arr_46 [i_20] [i_20] [i_20] [i_20] [i_21]);
            /* LoopSeq 3 */
            for (unsigned short i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_80 [i_20] [i_21])) ? (((/* implicit */int) arr_10 [i_21] [i_21])) : (((/* implicit */int) arr_10 [i_22] [i_22]))));
                arr_81 [i_20] [i_20] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)121)) <= (85777003)));
            }
            for (unsigned short i_23 = 0; i_23 < 17; i_23 += 3) /* same iter space */
            {
                var_46 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) >= (arr_48 [i_23] [i_23] [i_23] [i_21] [i_20])));
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_23])))));
                var_48 = ((/* implicit */unsigned short) var_7);
                arr_86 [i_20] [i_20] [i_23] = ((/* implicit */long long int) (-(arr_14 [i_20] [i_21] [i_21] [i_21] [i_21 - 1])));
                arr_87 [i_20] [i_20] [i_20] [i_23] = ((/* implicit */unsigned short) (unsigned char)134);
            }
            for (unsigned short i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
            {
                arr_91 [7] [i_20] [i_21] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)134))));
                var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_21 - 1] [16] [i_20] [i_21] [16]))));
                arr_92 [(signed char)8] [i_20] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-7))));
                arr_93 [i_24] [i_20] [(signed char)2] = ((/* implicit */int) (short)16503);
            }
            /* LoopSeq 2 */
            for (unsigned short i_25 = 0; i_25 < 17; i_25 += 1) 
            {
                arr_96 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18238009156546749987ULL)) ? (((/* implicit */int) (unsigned short)64940)) : ((~(-932712301)))));
                var_50 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-23390))));
            }
            for (unsigned char i_26 = 0; i_26 < 17; i_26 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_27 = 0; i_27 < 17; i_27 += 2) 
                {
                    arr_103 [(unsigned char)10] [i_21] [i_20] [i_27] = ((/* implicit */unsigned short) (+(((unsigned long long int) (signed char)-7))));
                    var_51 *= ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)63)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
                var_52 = ((/* implicit */signed char) ((arr_40 [i_21] [i_21 - 2] [i_21 + 2]) < (arr_40 [i_20] [i_21 + 3] [i_21 - 1])));
            }
        }
        var_53 += ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
    }
}
