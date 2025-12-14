/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63151
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 += ((/* implicit */int) (~(((unsigned long long int) arr_0 [i_0]))));
        var_13 = (+(((((/* implicit */_Bool) 1006642258644470883ULL)) ? (18446462598732840960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~((+(arr_5 [i_2 - 1] [6ULL] [i_1] [i_0]))))))));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_9 [i_0] [i_1] [0ULL] [0ULL] [i_1] [i_3]))));
                    arr_10 [i_3] [i_1] [i_2] [i_2] [i_2] [i_0] = (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 - 1] [i_3] [i_3] [(_Bool)1])))));
                }
                for (int i_4 = 3; i_4 < 8; i_4 += 4) 
                {
                    arr_13 [i_0] [i_0] [(signed char)6] = ((_Bool) (-(((/* implicit */int) var_5))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (arr_5 [i_0] [3] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18027515404386639262ULL))))))));
                    var_17 += ((/* implicit */_Bool) ((int) (~(var_6))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 6; i_5 += 4) 
                    {
                        var_18 = ((_Bool) ((((/* implicit */_Bool) 1006642258644470883ULL)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)100))));
                        var_19 = ((/* implicit */signed char) ((_Bool) 18446462598732840984ULL));
                        arr_17 [i_5 - 1] [i_4 + 2] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5 + 4])))))));
                    }
                    for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */short) (+((+(117440512)))));
                        arr_22 [i_2] &= ((_Bool) (+(((/* implicit */int) (unsigned char)29))));
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    arr_25 [i_0] [i_0] [i_0] [0] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_4)))));
                    var_21 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2 - 1]))));
                }
            }
            for (signed char i_8 = 2; i_8 < 8; i_8 += 2) 
            {
                var_22 = (!(((/* implicit */_Bool) (unsigned char)126)));
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 9; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_10] [i_9 - 3] [i_9 - 3] [i_8 - 2] [i_1] [i_0]));
                            arr_35 [(_Bool)1] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((int) (-(arr_3 [i_9]))));
                            arr_36 [i_10] [i_9 - 2] [i_8] [i_8 + 1] [i_0] [i_0] = ((/* implicit */signed char) (+((+(var_10)))));
                            arr_37 [i_10] [4U] [(_Bool)1] [i_9 - 1] [(unsigned char)5] = ((/* implicit */short) arr_0 [i_9]);
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */signed char) ((((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
        }
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 7; i_13 += 1) 
                {
                    for (signed char i_14 = 3; i_14 < 9; i_14 += 2) 
                    {
                        {
                            arr_48 [i_0] [i_11] [i_12 + 1] [i_13] [i_13] [i_14 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_11] [i_12] [i_11])))))));
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_11] [i_0] [5ULL] [i_11] [i_11] [i_0]))));
                            var_27 = ((/* implicit */unsigned int) ((unsigned long long int) (-(arr_21 [i_0] [i_0] [i_12] [i_13] [i_14 - 1] [i_12 - 1] [i_11]))));
                            var_28 = ((/* implicit */unsigned long long int) arr_20 [i_0]);
                        }
                    } 
                } 
                var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_12] [i_11] [i_12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_12] [i_11] [i_0]))))) : (((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                for (signed char i_15 = 1; i_15 < 8; i_15 += 2) 
                {
                    arr_52 [i_15] [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    arr_53 [i_11] [3U] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_28 [i_0] [(signed char)3] [i_0])) : (((/* implicit */int) arr_45 [6] [i_12] [i_12] [i_11] [i_0] [i_0])))));
                    var_30 = ((/* implicit */_Bool) ((unsigned long long int) arr_41 [5ULL] [(_Bool)1]));
                    arr_54 [i_0] [i_11] [(_Bool)1] [i_15] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (short i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        arr_57 [i_0] [i_12] [i_12] [i_0] [i_16] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_42 [i_0] [i_0]))));
                        var_31 |= ((/* implicit */_Bool) (+((-(281474976710674ULL)))));
                        arr_58 [i_0] [i_0] [i_12] [i_15 + 2] [i_16 + 2] = ((/* implicit */short) (-(((unsigned int) arr_43 [i_11] [3ULL]))));
                    }
                }
            }
            for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                arr_61 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                var_32 = ((/* implicit */_Bool) max((var_32), (((_Bool) ((((/* implicit */_Bool) arr_30 [i_11] [i_17])) ? (((/* implicit */int) var_0)) : (arr_1 [i_0]))))));
                var_33 = ((/* implicit */short) ((var_7) ? (((((/* implicit */_Bool) var_3)) ? (1006642258644470893ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
            }
            for (short i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_10))))));
                arr_65 [i_18] [i_11] [i_11] [i_0] |= (((~(arr_19 [i_18] [i_11] [i_0] [i_0]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_11] [i_18]))))));
                var_35 = ((/* implicit */unsigned int) (-(((int) 117440512))));
            }
            for (short i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
            {
                arr_68 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_9)))));
                arr_69 [i_11] [i_11] [i_11] = ((/* implicit */signed char) (+(((unsigned long long int) arr_26 [i_0] [i_11] [i_0]))));
            }
            arr_70 [i_11] [i_11] [i_0] = ((/* implicit */unsigned long long int) (!(((var_10) == (((/* implicit */int) arr_39 [i_0]))))));
            var_36 &= ((/* implicit */signed char) ((((arr_38 [i_0]) && (((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(arr_11 [i_11]))))));
            /* LoopSeq 1 */
            for (short i_20 = 3; i_20 < 9; i_20 += 4) 
            {
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_47 [i_0] [i_11] [i_0] [(_Bool)1] [i_20])))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_59 [i_20 + 1] [i_11] [i_11] [i_0])) > (((/* implicit */int) (unsigned char)252)))))))))));
                var_38 |= (~(((/* implicit */int) arr_72 [i_20] [i_11] [i_11] [(unsigned char)8])));
            }
            arr_74 [(_Bool)1] [i_11] [8ULL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(signed char)4] [(signed char)4] [i_11]))) : (arr_6 [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
    {
        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) 18027515404386639268ULL))) > (arr_75 [(short)11]))))));
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            for (signed char i_23 = 0; i_23 < 17; i_23 += 1) 
            {
                {
                    var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 3; i_24 < 16; i_24 += 2) 
                    {
                        for (unsigned long long int i_25 = 1; i_25 < 16; i_25 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) ((unsigned char) arr_85 [i_25] [i_24] [i_21 + 1] [i_23] [i_22] [i_21 + 1] [(_Bool)1]))))));
                                var_42 = ((/* implicit */_Bool) arr_85 [i_21] [i_22] [i_23] [i_24] [i_25] [0] [i_25 - 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_26 = 0; i_26 < 17; i_26 += 4) 
                    {
                        arr_89 [i_21] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_81 [i_22] [i_22] [i_23])) ? (arr_82 [i_21] [i_22] [i_23] [i_23] [i_26] [i_22]) : (var_10))))))));
                        arr_90 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((unsigned char) 17440101815065080725ULL));
                        var_43 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_2)))) / (((/* implicit */int) ((unsigned char) (signed char)66)))));
                        arr_91 [i_26] [i_23] [6ULL] [i_21] |= ((/* implicit */short) arr_77 [i_21]);
                    }
                }
            } 
        } 
        arr_92 [i_21 + 1] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 1) 
    {
        var_44 &= ((/* implicit */_Bool) (+(((((_Bool) (_Bool)1)) ? (((/* implicit */int) (!(arr_86 [i_27] [i_27] [i_27] [i_27])))) : (((int) arr_76 [i_27] [i_27]))))));
        arr_95 [i_27] [i_27] = ((/* implicit */signed char) max((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_87 [i_27] [i_27] [i_27] [i_27]))))))))));
        var_45 = ((/* implicit */short) (+((+(((/* implicit */int) ((short) arr_94 [i_27])))))));
        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) arr_85 [i_27] [i_27] [i_27] [i_27] [(unsigned char)2] [i_27] [i_27]))));
    }
    var_47 = ((/* implicit */unsigned char) var_0);
}
