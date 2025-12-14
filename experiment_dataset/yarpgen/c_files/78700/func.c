/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78700
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
    var_20 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [13U] [i_2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) == (((/* implicit */int) var_8))))) : ((~(((/* implicit */int) var_12))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_10 [i_0] [(unsigned char)20] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_1 [i_2] [i_3]))))));
                        var_21 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [(signed char)10] [i_1] [i_2])) <= (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)1] [i_3]))));
                        arr_12 [i_0] [20LL] [i_0] = ((/* implicit */signed char) var_10);
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4] [i_5])) * (((/* implicit */int) var_9))));
                                arr_22 [4LL] [i_0] [i_4] [i_0] [i_0] = ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_20 [i_4] [i_1] [i_4] [i_0] [i_5] [i_1])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~((~(var_17))))))));
                    arr_23 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) var_2)) <= (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_9 [i_0] [(signed char)2] [i_1] [i_4])) : (((/* implicit */int) arr_6 [i_0] [i_4] [5ULL]))))));
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))) <= (arr_13 [i_1] [22LL] [i_4])));
                }
                for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) var_0);
                    var_26 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((_Bool) var_17))))), (min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) arr_0 [i_0]))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_7] [i_1]))))) == (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned long long int) var_14)) : (min((8872977361513550780ULL), (((/* implicit */unsigned long long int) -4171125470179565109LL))))))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) 4864681828318403365ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_7] [i_7] [i_8 - 1]))) : (var_1))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (-4171125470179565108LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [3LL] [i_7] [i_1] [i_0])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775783LL)) ? (4171125470179565128LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77))))))));
                        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((((/* implicit */int) arr_28 [i_8 + 1])) <= (((/* implicit */int) arr_28 [i_7])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (0U) : (((/* implicit */unsigned int) var_17))))) : (((((/* implicit */_Bool) -134982431)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (36026597995708416ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_4 [i_0] [i_8]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_4 [i_7] [i_0]))) : ((~(((/* implicit */int) (_Bool)1))))))))))));
                            arr_33 [i_7] [i_9] = ((unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(signed char)17] [i_8] [i_9])))))));
                            arr_34 [i_0] [i_1] [i_7] [5ULL] [i_9] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(7948532733641716875ULL)))) ? (((/* implicit */int) arr_31 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 1])) : ((-(((/* implicit */int) var_15))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 2; i_10 < 23; i_10 += 3) 
                        {
                            arr_38 [i_7] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_16))))) == (((/* implicit */int) arr_20 [(unsigned char)8] [i_1] [i_7] [i_8] [i_1] [i_10 - 1]))));
                            var_31 ^= ((/* implicit */unsigned long long int) (!(((var_17) == (((/* implicit */int) var_2))))));
                            var_32 += ((/* implicit */signed char) (~(arr_17 [i_7])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1])) || (((/* implicit */_Bool) max((var_19), (((/* implicit */signed char) (_Bool)1)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_19))))), ((((_Bool)1) ? (4171125470179565113LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6809)))))))));
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (((-(((/* implicit */int) max((arr_24 [(signed char)16] [i_7] [i_1]), (arr_40 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))))) <= (((/* implicit */int) ((((arr_27 [i_0] [i_0] [i_0] [(_Bool)1]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_8 - 1] [i_11] [i_8 + 2] [i_11])))))))))));
                            arr_43 [i_0] [(signed char)15] [i_11] [17LL] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26435))) : (arr_42 [i_0] [i_1] [i_7] [i_8] [i_11]))), (((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */unsigned long long int) arr_13 [i_7] [i_8] [i_11])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (-8416496724731240722LL)));
                            arr_44 [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) 951898530)))), ((_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(signed char)16]))))))) == (arr_42 [(_Bool)0] [2LL] [i_7] [i_11] [i_11]))))));
                        }
                        var_35 = ((/* implicit */unsigned char) max((((arr_30 [18U] [i_1] [i_7] [i_7] [i_7] [i_8 - 1]) == (arr_30 [(unsigned char)6] [i_1] [i_8] [i_8 - 1] [i_1] [i_8 + 1]))), (((arr_30 [i_1] [i_7] [i_7] [i_7] [i_1] [i_8 - 1]) <= (arr_30 [10LL] [i_1] [(signed char)11] [i_8] [i_1] [i_8 - 1])))));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)192)))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) arr_31 [i_0] [i_7] [i_1] [i_0])) ? (((/* implicit */int) arr_40 [i_12] [4U] [i_7] [i_1] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_12]))))));
                        arr_48 [(unsigned char)7] [i_1] &= ((/* implicit */signed char) (!(((arr_17 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)22] [i_0] [0ULL] [(signed char)11])))))));
                    }
                }
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (arr_42 [i_0] [i_0] [i_0] [i_0] [(short)13])))) ? (((arr_0 [i_0]) ? (-1709797697503813832LL) : (((/* implicit */long long int) arr_3 [i_0] [i_0] [(signed char)14])))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_1] [i_0] [i_0])), (max((((/* implicit */unsigned char) var_10)), (var_15))))))))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            arr_55 [i_0] [23LL] [i_13] [i_14] = ((/* implicit */int) max((((/* implicit */long long int) ((max((arr_36 [9U] [9U] [i_1] [21ULL] [i_13] [i_14] [i_14]), (((/* implicit */unsigned long long int) var_16)))) <= (((/* implicit */unsigned long long int) arr_30 [i_14] [i_0] [i_13] [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [i_13])), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0]))) : (arr_53 [i_0] [i_1] [3LL] [i_14])))));
                            var_39 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)6800)) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */int) ((((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) arr_8 [i_0] [i_0] [i_14]))))) <= (((/* implicit */int) ((2176050371U) == (((/* implicit */unsigned int) arr_51 [i_0] [i_0] [i_0]))))))))));
                            arr_56 [19LL] [i_14] [i_14] |= ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_13]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_49 [i_0] [i_1] [i_14])))))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [22ULL] [i_0] [i_0] [i_0] [i_1] [i_1]))) == (2333200455295436159LL)))) <= (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_11)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)-20403)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) arr_41 [i_0] [i_0] [i_1] [i_0] [(unsigned char)4]))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_0] [(unsigned char)3] [(unsigned char)3])), (arr_6 [0LL] [i_0] [i_0]))))))));
                arr_57 [i_0] [i_1] = ((/* implicit */_Bool) (+(var_17)));
            }
        } 
    } 
    var_41 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) == ((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)26))))))));
}
