/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95383
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_1] [i_1] [i_1] &= ((min((((/* implicit */unsigned int) max((var_8), (var_18)))), (min((arr_4 [i_0] [i_1] [i_2 - 2]), (((/* implicit */unsigned int) var_18)))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((arr_4 [i_0] [18LL] [i_2 - 1]), (var_6)))))));
                    var_20 = ((/* implicit */long long int) ((unsigned long long int) min((((unsigned int) (unsigned char)226)), (arr_5 [i_0] [i_1] [(_Bool)1]))));
                    var_21 -= ((/* implicit */short) ((int) 16347099467809650165ULL));
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */short) ((unsigned char) (!((_Bool)1))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)16256))))) : (((unsigned int) (unsigned short)20672))));
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 3] [i_3 - 3] [i_3]))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_12 [i_0] [i_0] [(_Bool)1])))));
                    var_24 |= ((/* implicit */short) ((unsigned int) var_14));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) var_17));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_22 [i_6] [i_3]))));
                            var_27 ^= (!(((/* implicit */_Bool) (unsigned short)16242)));
                            arr_26 [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16266)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))));
                            arr_27 [5U] [(_Bool)1] [5U] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_7] [i_0] [i_0])) ? ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_3] [i_0])) : (((/* implicit */int) (short)11718)))))));
                        }
                        var_28 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_21 [i_0] [i_0] [i_0] [i_6] [i_1]))))));
                        var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((var_15) - (819001682)))))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) var_8))))));
                    }
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_11) : (arr_5 [i_0] [i_0] [i_3 - 1])))) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (short)-25101))))) : (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_12 [i_0] [11] [i_8]))) ? ((((!(((/* implicit */_Bool) (unsigned char)137)))) ? (max((var_6), (((/* implicit */unsigned int) (unsigned char)226)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)118)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-1539964923) + (2147483647))) >> (((var_3) - (3291217588U)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) 829332308U))))))));
                    var_32 = ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)64)), ((unsigned short)16231)));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 4; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_38 [i_0] [i_1] [i_9] [i_9] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4194303))) ? (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-590)))) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_9] [i_1] [(short)4]))));
                                arr_39 [i_0] [i_9] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_29 [i_0] [i_0] [(short)11])))) != (((/* implicit */int) var_5))));
                                var_33 = var_6;
                                var_34 = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(short)13])) ? (((/* implicit */int) var_4)) : (-1588094991));
                            }
                        } 
                    } 
                    var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_15 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6])) : (((((/* implicit */_Bool) var_16)) ? (arr_25 [i_1] [i_1] [i_0]) : (((/* implicit */int) arr_10 [i_1])))));
                    var_36 = ((/* implicit */_Bool) max((var_36), ((!(((((/* implicit */int) var_10)) == (((/* implicit */int) var_2))))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            {
                                arr_50 [i_1] [i_1] [(short)15] [i_13] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (max((((var_12) ? (-3620571384079696676LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_14] [i_12]))))), (((/* implicit */long long int) (((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) var_15)))))))));
                                arr_51 [i_0] [i_12] [i_0] [i_13] [i_14] = ((/* implicit */unsigned int) var_7);
                                var_37 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) (unsigned short)49301))))) ? (((/* implicit */unsigned long long int) ((var_15) ^ (134217727)))) : (((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_12] [i_12])) ? (arr_21 [i_0] [i_1] [i_12] [(_Bool)1] [i_1]) : (var_0)))))));
                            }
                        } 
                    } 
                    var_38 ^= ((/* implicit */unsigned int) arr_34 [10U] [i_0] [i_1] [i_12]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)99)), (min(((+(((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) arr_45 [i_0] [(unsigned char)16] [i_16 - 1] [i_16 - 1] [i_12] [i_0]))))));
                                arr_57 [11U] [i_1] [11U] [i_15] [i_12] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_16] [i_16 - 1] [i_16 + 1] [i_1])) ? (min((269828165), (((/* implicit */int) var_12)))) : (((/* implicit */int) var_17))))) ? (min((((/* implicit */long long int) max((var_7), (((/* implicit */short) var_19))))), (min((-8764770330252727594LL), (((/* implicit */long long int) 1082222265U)))))) : (((/* implicit */long long int) 1757740798))));
                                arr_58 [2] [i_12] [i_12] [12U] = ((/* implicit */long long int) arr_1 [i_16 + 1]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 1) 
    {
        for (unsigned short i_18 = 2; i_18 < 11; i_18 += 1) 
        {
            {
                var_40 |= 3937759704U;
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_24 [i_17] [4] [i_17 + 1] [i_17 - 1] [(unsigned char)12] [i_17] [(unsigned char)12])), (((((1275066205U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (147576969606591726LL))))))));
                arr_65 [i_18 + 1] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)16231)), (1064150207)))) ? (((((/* implicit */_Bool) (short)-15850)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_14 [i_17] [i_17] [i_18] [i_18 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (1653978082U)))), (var_6)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) max((var_8), (((/* implicit */short) var_10))))) / (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */int) var_2)))))))))));
}
