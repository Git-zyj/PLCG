/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99320
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
    var_16 = min(((+(max((var_8), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) | ((+(var_15)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + ((~(arr_4 [i_0] [i_0])))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_3 = 2; i_3 < 7; i_3 += 4) 
                {
                    arr_11 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_6 [i_3 + 3] [i_1 + 1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                    var_18 = ((/* implicit */unsigned short) (+((-(arr_3 [i_3] [i_1])))));
                }
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_3))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? ((-(var_7))) : ((-(((/* implicit */int) var_10)))))))));
                    var_21 = ((/* implicit */int) arr_6 [i_0] [(unsigned char)2] [i_0] [i_0]);
                    var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) arr_10 [i_2] [(short)8] [i_1] [i_1 - 3] [i_1] [i_2]))))));
                }
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_24 |= ((/* implicit */long long int) var_11);
                            var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                            var_26 *= ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [1ULL] [1ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 2]))))));
                var_28 = ((/* implicit */signed char) arr_20 [i_0] [i_1 + 1]);
            }
            for (int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) arr_28 [i_0] [i_0])) : (((var_12) ? (((/* implicit */int) arr_14 [i_10] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_10] [i_0] [i_0] [i_0]))))));
                            arr_32 [i_0] [i_1] [i_1] [i_9 - 1] [i_1] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)7]))))) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_9 - 1] [i_9 - 1] [i_0]))));
                            var_30 |= ((/* implicit */unsigned short) arr_18 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_8] [i_10] [i_9 - 1] [i_9 - 1]);
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_13 [i_0] [i_0] [i_8] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 6; i_11 += 2) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_14)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_8])))))))));
                    var_33 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [1] [(unsigned short)6])) ? (var_11) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_11]))))));
                }
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_34 = ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    var_35 = arr_21 [i_0] [i_1] [i_1];
                }
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((arr_2 [i_8]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_8])))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_13 = 1; i_13 < 8; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 6; i_14 += 4) 
                {
                    {
                        var_37 -= ((/* implicit */signed char) (((-(var_11))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_30 [6LL] [0] [i_13] [(short)2] [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                        arr_42 [i_14] [i_0] [i_0] [9U] = ((((/* implicit */_Bool) arr_38 [i_1 - 1] [i_13 - 1] [i_0])) ? (((/* implicit */int) arr_38 [i_14 + 3] [i_14 + 3] [i_0])) : (((/* implicit */int) arr_38 [i_0] [i_1 - 2] [i_0])));
                    }
                } 
            } 
            arr_43 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (+(arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])));
        }
        for (int i_15 = 2; i_15 < 9; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (long long int i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_18 = 2; i_18 < 9; i_18 += 4) 
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) arr_13 [i_0] [i_0] [i_16] [(_Bool)0]))));
                            var_40 = ((/* implicit */int) min((var_40), ((+(((/* implicit */int) arr_0 [i_15 - 2] [i_16]))))));
                        }
                        for (unsigned int i_19 = 1; i_19 < 9; i_19 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_0])) ? (((/* implicit */int) arr_45 [i_0])) : (((/* implicit */int) arr_9 [i_15 - 1] [i_15 - 2]))));
                            var_42 = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_19 - 1] [i_19 - 1] [i_15 - 2] [i_15] [i_15]))));
                        }
                        for (unsigned short i_20 = 3; i_20 < 9; i_20 += 1) 
                        {
                            var_43 ^= ((/* implicit */int) arr_15 [i_0] [(_Bool)1] [(_Bool)1] [i_17] [i_15] [i_15]);
                            var_44 = arr_4 [i_0] [(signed char)9];
                            var_45 = (signed char)(-127 - 1);
                            var_46 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                            var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-122))));
                        }
                        arr_60 [i_16] [i_15 - 1] [i_17] [i_17] [i_15 - 1] [i_17 + 1] &= ((/* implicit */signed char) arr_22 [i_17 - 1]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned long long int) arr_25 [i_15 - 2] [i_15] [i_0]);
                var_49 &= ((/* implicit */unsigned long long int) ((arr_62 [i_15 + 1] [i_15 - 1] [i_15 + 1]) % (((/* implicit */int) var_10))));
            }
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 4) /* same iter space */
            {
                var_50 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (short i_23 = 2; i_23 < 8; i_23 += 4) 
                {
                    var_51 += ((/* implicit */unsigned long long int) var_0);
                    var_52 = arr_41 [i_0] [i_23 + 2] [(_Bool)1];
                }
            }
            var_53 = ((/* implicit */signed char) (-(((/* implicit */int) arr_38 [i_0] [i_0] [i_0]))));
        }
        /* LoopSeq 2 */
        for (signed char i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_68 [i_0] [i_24])) ? (((/* implicit */int) arr_68 [i_0] [i_0])) : (((/* implicit */int) arr_68 [i_0] [i_24]))));
            var_55 += ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_45 [(unsigned short)2]))))));
            var_56 = ((/* implicit */unsigned short) var_1);
            arr_70 [i_0] = (~(var_7));
            arr_71 [i_0] [i_0] = ((/* implicit */long long int) (-(arr_12 [i_0] [i_24] [i_24] [i_0])));
        }
        for (signed char i_25 = 0; i_25 < 10; i_25 += 1) /* same iter space */
        {
            arr_75 [(short)7] [i_0] [i_0] = arr_53 [(unsigned short)8] [i_0] [(unsigned short)8] [i_0] [i_25] [i_0] [i_25];
            var_57 = ((/* implicit */unsigned int) arr_54 [i_0] [i_0] [i_25] [i_25] [i_25]);
        }
        var_58 ^= ((/* implicit */signed char) arr_8 [i_0]);
    }
}
