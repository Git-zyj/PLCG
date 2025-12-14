/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67737
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
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((int) arr_1 [4ULL]))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))) : (arr_6 [i_0 - 1] [i_2] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((unsigned int) arr_12 [i_4 + 2] [i_4 - 1] [i_2] [i_4 + 2] [i_4 - 1] [i_4]));
                                arr_13 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) / (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))) : (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) : (arr_6 [i_0] [i_2] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (unsigned char)40);
                                arr_20 [i_1 - 1] [i_2] [i_1 - 1] [(unsigned char)15] [i_1 - 1] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
        {
            arr_23 [i_0 + 2] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) 560940130)))))));
            var_21 = (!(((/* implicit */_Bool) (signed char)126)));
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
        {
            arr_26 [i_0] [i_0] [(signed char)0] = ((/* implicit */unsigned char) 3756956707820431350LL);
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0LL)) < (var_1))))));
                            arr_34 [(unsigned char)4] [i_8] [i_8] [i_8] [7] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) == (((/* implicit */int) (signed char)127))))) : (((/* implicit */int) arr_28 [i_11 - 1] [i_11] [i_11 - 1]))));
                            arr_35 [(signed char)2] [i_8] [i_8] [i_8] [i_8] [i_8] = ((signed char) (signed char)104);
                            var_23 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-20107))) == (arr_4 [i_11 - 1])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) ((signed char) (_Bool)1));
                arr_36 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (~(arr_22 [i_0 - 2] [i_0 - 2] [i_0 + 1])));
            }
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_18 [i_13])))));
                    arr_42 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((int) 3221225472U));
                    arr_43 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)242)) == ((~(((/* implicit */int) (unsigned char)175))))));
                }
                for (short i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
                {
                    arr_46 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])))));
                    arr_47 [i_0] [i_0] [(unsigned char)6] [13ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-196185717566284244LL)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [13U] [13U] [i_12])) * (((/* implicit */int) (unsigned short)32256)))))));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) (short)14643)) >> (((((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_12] [i_0 - 2] [i_0 + 2] [i_0 + 1])) + (94))))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 - 1] [i_0] [8LL] [i_0] [i_0])))))));
                }
                for (short i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_50 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) (-(var_6)));
                }
                var_29 = ((/* implicit */unsigned char) ((int) var_16));
                var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)122))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (unsigned char i_17 = 1; i_17 < 20; i_17 += 4) 
                    {
                        {
                            var_31 += (+(((/* implicit */int) ((signed char) (signed char)-9))));
                            var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17] [i_17] [i_17 + 1] [i_17 - 1] [i_17] [i_17 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_8] [(short)14])))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 1; i_19 < 19; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 26U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (var_6))))))));
                        var_34 = ((/* implicit */unsigned short) ((long long int) ((short) var_6)));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((arr_21 [i_0 - 2] [i_0 + 2]) == ((+(((/* implicit */int) (_Bool)1)))))))));
                        var_36 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) arr_24 [i_0 - 2] [i_0 + 2])) : (arr_62 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0] [i_0])));
                        var_37 = ((/* implicit */int) arr_6 [i_20] [i_0] [i_20]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_21 = 1; i_21 < 20; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                {
                    {
                        var_38 = ((/* implicit */short) ((long long int) (signed char)(-127 - 1)));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_5 [9] [i_0 + 1] [i_0 + 1]))));
                        var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3413905802646702759LL)) ? (((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2]) == (arr_40 [20LL])))) : (((((/* implicit */int) arr_65 [i_0])) * (((/* implicit */int) (_Bool)0))))));
                        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
                    }
                } 
            } 
        }
        for (long long int i_23 = 2; i_23 < 20; i_23 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_24 = 1; i_24 < 20; i_24 += 3) 
            {
                arr_72 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 11921078057730894083ULL)) ? ((~(5733100670435283308ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) & (((6ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7963)))))));
            }
            for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 2) 
            {
                var_43 += ((/* implicit */long long int) (-(((unsigned long long int) (signed char)(-127 - 1)))));
                arr_75 [i_0] = ((/* implicit */short) ((int) arr_69 [i_23] [i_23 - 2]));
                arr_76 [i_0] [i_0 - 2] [i_0] = ((unsigned int) ((0LL) < (-24LL)));
            }
            /* LoopSeq 2 */
            for (short i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_27 = 1; i_27 < 18; i_27 += 4) 
                {
                    for (int i_28 = 1; i_28 < 20; i_28 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (_Bool)1))));
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [i_27] [i_27 + 1] [i_27] [i_27 + 1] [i_26] [i_27])) ? (((/* implicit */int) ((196185717566284260LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_15))));
                            var_46 = ((/* implicit */_Bool) (signed char)108);
                            arr_87 [i_0 + 2] [i_0 + 2] [i_23] [i_0] [i_0] [i_0 - 1] [i_0] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_86 [i_28 - 1] [i_28 - 1] [i_28 + 1] [i_28] [i_0] [i_28 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 3) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)300))));
                            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (((((/* implicit */_Bool) 1977107165)) ? (((/* implicit */unsigned long long int) arr_77 [i_0] [i_23] [i_0 - 2])) : (var_12))))))));
                            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((1841074034) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_23 - 2] [i_23 - 1] [i_23 + 1] [i_23] [i_23]))) : (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))));
                            var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_68 [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
            for (long long int i_31 = 0; i_31 < 21; i_31 += 3) 
            {
                arr_97 [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((1841074045) & (((/* implicit */int) (_Bool)1))));
                var_51 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_94 [i_0] [i_0] [i_0] [(unsigned char)10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)(-127 - 1))))));
            }
            var_52 &= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) | (var_12)))));
            var_53 = ((/* implicit */unsigned long long int) (~(((var_0) / (((/* implicit */long long int) 4294967295U))))));
        }
    }
    for (signed char i_32 = 0; i_32 < 18; i_32 += 4) 
    {
        var_54 = ((((/* implicit */_Bool) max((11921078057730894083ULL), (((/* implicit */unsigned long long int) -7667196495624812214LL))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */long long int) arr_25 [i_32] [i_32] [i_32])) ^ (7926598651011598960LL))));
        arr_100 [i_32] = ((((/* implicit */long long int) ((/* implicit */int) (!(arr_56 [i_32]))))) / ((~(-4210929942660927634LL))));
    }
}
