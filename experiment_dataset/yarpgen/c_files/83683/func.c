/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83683
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((-1), (((/* implicit */int) (signed char)118))))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) var_7))));
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1))))), ((unsigned char)112)))), (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)21578)) || (((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) (unsigned short)57946)))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0])))));
                        var_20 ^= ((/* implicit */_Bool) ((long long int) arr_9 [i_1] [i_2] [i_3]));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            var_21 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7589))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)53555))) : (((((/* implicit */_Bool) (short)31308)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7325017081070730628LL)) ? ((-(arr_6 [i_2] [i_4 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57946)))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((unsigned long long int) (!(((/* implicit */_Bool) 8536386018097139545LL))))))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) (!((!(((/* implicit */_Bool) var_14))))))))));
                        }
                        var_25 ^= ((/* implicit */_Bool) ((unsigned char) (signed char)2));
                        var_26 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_9 [2U] [2U] [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_6 [i_1] [i_3])))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned char) ((11LL) - (((/* implicit */long long int) max(((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) 1228836388U))))))))));
                        var_28 = ((/* implicit */int) min((var_28), ((((-(((/* implicit */int) var_0)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 562949953421311LL)) : (var_9)))) ? (((((/* implicit */int) var_3)) << (((arr_8 [i_0] [i_0] [i_0]) - (346333998))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24959)))))))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((max((max((((/* implicit */long long int) (_Bool)1)), (var_14))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))) - ((-(((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) 2246413999U)) : (arr_14 [12LL]))))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_30 += ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6])))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) -1011701675)) : (arr_14 [(signed char)7])))) : (arr_12 [i_2] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) -1))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-8) : (-1))))))) - (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : ((-2147483647 - 1))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_10))));
            var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) 4924865003704279427LL)) ? (((/* implicit */int) ((_Bool) arr_21 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_2))))))))));
        }
        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned long long int) ((_Bool) var_7));
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_7] [i_11] = ((((/* implicit */_Bool) ((arr_10 [i_7] [i_10 - 1] [i_11] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)31308)))))) ? (((187769008371981499LL) / (((/* implicit */long long int) arr_10 [i_7] [i_10 - 1] [i_10] [i_10])))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_17 [i_10] [i_10 - 1] [i_10] [i_10 - 1] [i_10])), (arr_10 [i_10] [i_10 - 1] [i_10 - 1] [i_10])))));
                        var_35 ^= ((/* implicit */signed char) -8848872777901224917LL);
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned int) max((var_36), (min((((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) (_Bool)0)))))), (max((0U), ((~(arr_25 [i_7] [i_7] [i_7])))))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        arr_38 [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_12] [i_12]))));
        var_37 = (+(((/* implicit */int) ((unsigned char) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            for (signed char i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((unsigned short) arr_41 [i_13 + 1])))));
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((unsigned int) (unsigned char)0)))));
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_14] [i_15] [i_15 + 1] [(short)8])) ? (((/* implicit */int) arr_15 [i_15] [(unsigned char)10] [i_15 + 1] [i_15] [i_15])) : (((/* implicit */int) arr_21 [i_13] [i_15] [i_15 + 1] [i_15] [i_15 - 1] [i_15]))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) (unsigned short)1490)) > (((/* implicit */int) (unsigned char)61)))))));
                                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */long long int) arr_39 [i_16])) / (((((/* implicit */_Bool) var_3)) ? (4924865003704279422LL) : (((/* implicit */long long int) arr_8 [i_13] [i_13] [(short)11])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 17; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    for (long long int i_21 = 0; i_21 < 17; i_21 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)250)) ? (-1046641473) : (((/* implicit */int) (signed char)-25)))))))));
                            var_44 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 10876867775646116082ULL)) ? (arr_39 [i_13 + 1]) : (arr_39 [i_13 + 1])));
                            var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27)))))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63)) ? (3894379434071638461LL) : (((/* implicit */long long int) -1495669221))))))))));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_24 = 2; i_24 < 15; i_24 += 3) /* same iter space */
                        {
                            var_47 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11797))));
                            arr_72 [i_13] [i_24] [i_22] [i_23] [5ULL] = ((/* implicit */short) (-(3599880625U)));
                        }
                        for (signed char i_25 = 2; i_25 < 15; i_25 += 3) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_59 [i_25 - 2] [i_18 + 1] [i_18] [i_13 + 1])))))));
                            var_49 += ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_44 [i_13] [i_18])) ? (((/* implicit */int) var_3)) : (arr_8 [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
                            var_50 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))))));
                            var_51 += ((/* implicit */unsigned short) arr_11 [i_18] [i_18 + 1]);
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((short) var_7)))));
                            var_53 = ((/* implicit */unsigned short) max((var_53), ((unsigned short)48286)));
                        }
                        arr_78 [i_13 + 1] [i_22] [i_23] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))));
                        arr_79 [i_13] [i_13 + 1] [i_13] [i_13] = ((/* implicit */short) 2356607408641606061LL);
                        var_54 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) (short)9581)) ? (arr_64 [i_13 + 1]) : (arr_18 [i_13] [i_18 + 1] [i_23])))));
                    }
                } 
            } 
            var_55 = ((/* implicit */short) (~(((((/* implicit */int) arr_7 [i_13] [(short)15])) + (((/* implicit */int) arr_41 [i_18]))))));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))));
            /* LoopNest 2 */
            for (unsigned int i_28 = 2; i_28 < 16; i_28 += 3) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_13 + 1])) ? ((~(((/* implicit */int) (unsigned short)15872)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-396)))))));
                        arr_87 [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-3508))) / (arr_14 [i_28])))) && (((/* implicit */_Bool) ((unsigned short) var_9)))));
                    }
                } 
            } 
            var_58 = ((/* implicit */signed char) (~(arr_75 [i_13] [i_13 + 1])));
            var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) ((_Bool) (signed char)-63)))));
        }
    }
    for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) /* same iter space */
    {
        var_60 ^= ((/* implicit */unsigned long long int) ((_Bool) (+((+(((/* implicit */int) var_3)))))));
        arr_90 [i_30 + 1] [i_30 + 1] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_2 [i_30 + 1] [i_30 + 1]))))));
        var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_11) ? ((~(((/* implicit */int) arr_1 [i_30])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5652114426385342519LL)))))))))))));
        var_62 += (+((-(((/* implicit */int) (unsigned short)13)))));
        arr_91 [i_30] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)-62))));
    }
}
