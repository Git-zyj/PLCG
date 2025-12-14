/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73962
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
    var_17 = ((/* implicit */unsigned short) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) arr_2 [i_1]))));
            /* LoopSeq 2 */
            for (long long int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((long long int) (+(var_16))));
                            arr_14 [i_0] [i_1] [i_0] [7LL] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((var_16) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2 - 4] [i_2] [i_3] [i_3] [i_3 + 1] [i_3])))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(var_16)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_18 [i_5] [i_1] [i_2 - 1] |= ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1] [8LL]);
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_2] [(unsigned short)17] [(unsigned short)12] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [19LL] [(signed char)12]);
                        var_20 = ((/* implicit */int) max((var_20), (arr_5 [i_0] [i_1] [i_0] [i_6])));
                        arr_23 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0] [17] [i_0] = -9223372036854775798LL;
                    }
                    for (unsigned short i_7 = 4; i_7 < 20; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_2] [i_0] = (+((~(((/* implicit */int) var_0)))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_0] [i_5]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_7 - 2]))) : (arr_20 [i_0] [(unsigned char)22] [i_0] [0LL] [(short)19] [i_7] [i_7 + 1])))));
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_4))))));
                        arr_30 [i_5] [i_0] [i_0] [i_2] [(unsigned char)22] [i_5] [i_8] |= ((/* implicit */int) ((((/* implicit */int) arr_28 [i_5] [i_2 + 1] [3] [i_0])) > (((/* implicit */int) arr_28 [(signed char)7] [i_2 + 1] [(signed char)7] [i_1]))));
                        var_22 += ((/* implicit */long long int) (~(var_1)));
                        arr_31 [i_0] [13LL] [i_5] [i_8] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [(unsigned char)0] [8LL] [4]);
                        var_23 = ((/* implicit */unsigned char) var_10);
                    }
                    for (signed char i_9 = 3; i_9 < 22; i_9 += 2) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [6LL] [i_0] = ((/* implicit */signed char) (((-(arr_32 [i_0] [i_9 - 3] [(unsigned char)15] [(signed char)19] [i_2] [i_5] [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) ((-1953562122) != (((/* implicit */int) var_0))))))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(arr_10 [i_2] [i_2 - 3] [i_2 + 1] [i_2]));
                        arr_38 [i_9] [(_Bool)1] [i_0] [i_1] [(unsigned short)16] = ((/* implicit */int) arr_10 [i_9] [i_5] [i_2 - 1] [i_1]);
                        var_24 = (-(arr_20 [i_9] [i_9 - 1] [i_0] [i_2 - 2] [i_0] [i_2] [i_2 - 2]));
                    }
                    arr_39 [(unsigned char)14] [i_5] [i_0] |= arr_10 [i_0] [i_0] [i_2] [i_5];
                    arr_40 [(signed char)5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_0] [(unsigned char)8] [i_2] [i_2])))));
                }
                for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_47 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_32 [i_0] [(signed char)4] [i_1] [i_1] [i_2] [i_10] [i_11])))) ? (((var_13) >> (((((/* implicit */int) arr_34 [(unsigned short)6])) - (64))))) : (((/* implicit */unsigned long long int) var_10))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)12]))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_10 + 3] [i_2 + 2])) ? (arr_41 [i_10 - 3] [i_10 - 3] [i_10] [i_12 + 3] [i_12] [(unsigned short)14]) : (var_13)));
                        arr_51 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(unsigned short)7] [(unsigned short)7] [i_0] [(unsigned char)8] [i_0] [(unsigned short)13] [i_12]))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_12] [i_10 + 2] [i_1] [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (arr_35 [i_0] [19] [13] [i_2 - 4] [i_10] [i_12] [i_12 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_2] [22ULL] [i_12])))))));
                        var_27 = ((/* implicit */int) ((long long int) (unsigned short)63606));
                    }
                    arr_52 [i_0] [(signed char)10] [i_0] |= ((/* implicit */int) (+(((long long int) arr_32 [3] [i_1] [i_1] [i_2] [i_2] [(unsigned char)7] [i_10]))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_15))));
                }
            }
            for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
            {
                arr_55 [18] [18] &= arr_42 [i_13 + 1] [i_13] [20] [i_13 - 1] [i_13];
                arr_56 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_34 [i_13 - 1]);
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    arr_61 [i_0] [i_14] [i_13] [i_14] &= ((/* implicit */_Bool) arr_42 [i_0] [(signed char)8] [i_1] [i_13] [i_14]);
                    arr_62 [i_13] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_13] [i_14])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_48 [3LL] [i_0] [i_0] [i_0] [i_0]))))) : (arr_20 [17] [i_1] [i_0] [i_13 + 1] [i_13 - 1] [17] [(unsigned char)4])));
                    arr_63 [i_1] [i_0] = ((/* implicit */unsigned char) (-(arr_27 [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 2] [i_13] [i_13 - 2] [i_13])));
                }
                var_29 = (i_0 % 2 == 0) ? (((long long int) ((var_13) << (((((/* implicit */int) arr_8 [22LL] [i_1] [22LL] [i_1] [i_0])) - (2884)))))) : (((long long int) ((var_13) << (((((((/* implicit */int) arr_8 [22LL] [i_1] [22LL] [i_1] [i_0])) - (2884))) - (40158))))));
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_16))));
            }
            arr_64 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])) | ((-9223372036854775807LL - 1LL))));
        }
        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            arr_67 [i_0] = arr_20 [i_0] [i_15] [i_0] [16] [i_15] [(unsigned char)12] [i_15];
            var_31 |= ((/* implicit */short) arr_59 [(short)2] [i_0] [i_15] [(unsigned char)2] [i_0] [i_15]);
            var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_15] [i_15]))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        {
                            var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_9))))) <= (var_10)));
                            var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (unsigned char)29))))));
                            var_35 |= ((/* implicit */long long int) (unsigned char)210);
                            arr_75 [(unsigned char)0] [i_0] [i_16] [i_16] = ((/* implicit */unsigned short) var_13);
                            var_36 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (var_15))) <= (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */long long int) (-(arr_19 [i_0] [i_15])));
        }
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_72 [4]))));
        /* LoopNest 2 */
        for (short i_19 = 1; i_19 < 20; i_19 += 1) 
        {
            for (unsigned char i_20 = 1; i_20 < 22; i_20 += 3) 
            {
                {
                    arr_81 [i_0] [i_0] [i_20] = ((/* implicit */unsigned char) (+(arr_41 [i_19 + 2] [2] [i_20 + 1] [2] [i_20] [i_20 - 1])));
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 2; i_21 < 22; i_21 += 3) 
                    {
                        for (unsigned short i_22 = 3; i_22 < 19; i_22 += 3) 
                        {
                            {
                                var_39 &= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                                var_40 = ((/* implicit */int) (+(var_13)));
                                var_41 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)96))));
                                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_84 [(signed char)16] [(unsigned short)10] [i_20] [(unsigned short)10] [i_0])))) ? ((+(((/* implicit */int) (unsigned char)123)))) : (((/* implicit */int) (unsigned short)63605)))))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */short) arr_74 [i_0] [i_19]);
                    arr_86 [4ULL] [i_0] [i_20] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)47949))));
                }
            } 
        } 
    }
}
