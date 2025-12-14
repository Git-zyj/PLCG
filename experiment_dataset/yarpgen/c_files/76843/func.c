/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76843
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 3] [i_1 + 2]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */signed char) -1356648815);
                                arr_13 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (var_2)));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))));
                                var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_15)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 6; i_5 += 2) 
                    {
                        var_19 = ((_Bool) arr_0 [i_2 + 1]);
                        arr_16 [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) (_Bool)0));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) arr_2 [i_0]);
                        var_21 = ((/* implicit */_Bool) arr_14 [6LL] [0LL] [i_2] [i_2] [i_2]);
                    }
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        arr_21 [i_2] [i_1] [i_2 + 2] [i_1] [i_0] [i_7 - 1] = ((/* implicit */unsigned char) ((signed char) ((long long int) arr_4 [i_0] [i_1] [i_2])));
                        var_22 = ((/* implicit */signed char) ((unsigned int) arr_8 [i_2 + 2] [i_7]));
                        arr_22 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_19 [i_0] [i_1 + 4] [i_0] [i_7]))))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_26 [i_2 + 2] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */unsigned char) (~(arr_10 [i_2 - 1] [i_2 - 1])));
                        var_23 = ((/* implicit */unsigned char) ((short) (!(var_4))));
                        var_24 = ((/* implicit */long long int) ((var_15) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((var_0) ^ (((/* implicit */long long int) arr_3 [i_0] [i_2])))));
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1 + 1] [(short)1] [i_1] [(short)8]))) <= (var_2)))), ((~(((/* implicit */int) (signed char)-2)))))))));
                        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_10] [i_1 + 4]))))) ? (1824580623) : (-545173048)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_32 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [i_0])))))))));
                            arr_36 [i_0] [(_Bool)1] [i_0] [9] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((unsigned int) (signed char)3))), (((((/* implicit */_Bool) arr_29 [i_9] [6] [i_9] [i_9] [i_9])) ? (arr_20 [i_0]) : (((/* implicit */unsigned long long int) 3654798665U)))))), (((/* implicit */unsigned long long int) var_8))));
                        }
                        arr_37 [i_0] = ((/* implicit */short) var_0);
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */short) var_8);
                            arr_40 [(short)1] [i_1] [i_9] [i_9] [2ULL] [i_11] [5ULL] = ((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_1] [i_1]);
                            var_31 = ((/* implicit */unsigned char) arr_0 [i_1 - 1]);
                            arr_41 [i_0] = ((/* implicit */unsigned long long int) var_12);
                            var_32 -= ((/* implicit */unsigned short) arr_25 [i_11] [5LL] [i_1] [i_0] [i_11]);
                        }
                        for (signed char i_14 = 1; i_14 < 9; i_14 += 2) 
                        {
                            var_33 += ((/* implicit */long long int) arr_17 [i_0]);
                            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) 306463919765191580ULL))));
                            var_35 = ((/* implicit */unsigned short) arr_3 [5] [i_1]);
                        }
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) arr_29 [i_1] [5LL] [i_1] [i_1 - 1] [i_1 + 3]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_37 *= ((/* implicit */int) var_7);
                                var_38 = ((/* implicit */unsigned int) ((signed char) ((-2580718843079036683LL) & (((/* implicit */long long int) 503316480)))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */_Bool) var_13);
                }
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */signed char) max((var_40), (arr_9 [i_0] [(_Bool)0] [i_0])));
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) | (8717147692906045418LL))))))));
                    arr_53 [i_0] [i_17] [i_0] = ((/* implicit */long long int) 545173056);
                }
                var_42 = (-(((/* implicit */int) var_4)));
                var_43 |= ((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1] [i_0] [i_1 + 3]))));
                var_44 = ((/* implicit */unsigned short) (~(max((18140280153944360048ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_18 = 3; i_18 < 13; i_18 += 2) 
    {
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 1; i_21 < 14; i_21 += 1) 
                    {
                        for (long long int i_22 = 3; i_22 < 12; i_22 += 3) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned short) var_9);
                                arr_70 [i_18 + 3] [i_19 - 1] [i_19] [i_19] [i_20] = ((/* implicit */unsigned char) arr_67 [(_Bool)1] [i_21] [(_Bool)1] [i_21 - 1] [i_21] [i_19] [i_21 + 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        for (int i_24 = 0; i_24 < 16; i_24 += 1) 
                        {
                            {
                                var_46 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_24] [10LL] [i_19]))));
                                arr_76 [(_Bool)1] [i_19] [i_20] [i_23] [i_23] [i_18] = min((21ULL), (((/* implicit */unsigned long long int) -545173048)));
                                arr_77 [i_18] [i_19] [(_Bool)1] [i_18] [i_18 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                                arr_78 [i_19] [i_18] = var_9;
                                var_47 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(var_12)))), (((long long int) var_15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
