/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95938
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [7U]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_18 = min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 2] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) arr_6 [i_2] [i_2 + 2] [i_0 + 2] [i_0]))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_0 + 1] [i_0])) ? (arr_6 [i_2 - 1] [i_2 + 2] [i_0 - 1] [i_0]) : (((/* implicit */int) (unsigned char)64)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)64)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (125829120U)));
                            arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 1] [i_3])) ? (((/* implicit */int) (short)27222)) : (((/* implicit */int) var_5)))), ((~(((/* implicit */int) arr_8 [i_1] [(_Bool)1]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15598231340687986414ULL)))))) < (var_3)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (arr_6 [i_0] [(unsigned short)1] [i_2 + 1] [i_3 + 1])))));
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_2 + 1])) ? (max((((/* implicit */int) var_6)), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */int) arr_12 [(unsigned short)13] [i_2 + 2] [i_3 + 1] [i_3 + 1] [i_4])))))))));
                                var_21 ^= ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_1 [i_0] [(short)3])) & (((/* implicit */int) arr_1 [i_3] [i_1])))) | (min((arr_13 [i_0] [(unsigned short)20]), (((/* implicit */int) arr_4 [7LL] [7LL] [(short)15]))))))));
                                var_22 = ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_3 + 1] [i_3 + 1]);
                                var_23 = ((/* implicit */_Bool) arr_14 [i_0]);
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_5 [i_2 + 1] [i_0 + 2] [(signed char)17] [i_0]))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)57600)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_3 + 1])))) : ((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
                            }
                            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (short)32758)), (arr_14 [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))) ^ (((((((/* implicit */_Bool) (short)32739)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_17 [i_5] [(unsigned short)2] [(unsigned short)2] [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)67)))))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0 - 1] [i_1] [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (min((((/* implicit */int) arr_4 [i_0] [(unsigned char)5] [i_2])), (arr_6 [i_0] [15ULL] [15ULL] [15ULL]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_5] [i_5] [(unsigned short)10] [i_5] [i_5] [i_5] [10])) : (((/* implicit */int) (signed char)88))))))) : (((((/* implicit */unsigned int) arr_13 [i_3 + 1] [i_0 + 2])) - (0U)))));
                            }
                            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */signed char) arr_10 [i_0] [i_0]);
                                arr_22 [i_0] [(short)4] [i_2 + 2] [i_3] [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_1] [i_1] [18U]))) : (var_12))) : (((/* implicit */long long int) 3178906617U)))));
                                var_28 = min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_14)))))), (var_5));
                            }
                            for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                arr_26 [2U] [i_1] [i_2] [2U] [i_7] [(unsigned short)20] [i_7] = ((/* implicit */unsigned long long int) 1706172674U);
                                arr_27 [(signed char)21] [(signed char)21] = ((/* implicit */unsigned int) min((((signed char) (~(4294967295U)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) 2199019061248LL))))))));
                                arr_28 [(signed char)11] [i_1] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_2] [i_0]);
                            }
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) (short)14358)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 *= ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 1 */
    for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
    {
        arr_32 [i_8] [20] = ((/* implicit */long long int) arr_15 [i_8] [i_8] [(unsigned short)19] [i_8] [i_8] [i_8] [(unsigned short)19]);
        var_31 &= ((/* implicit */unsigned short) (~(max((((unsigned long long int) arr_13 [i_8 - 1] [i_8])), (((/* implicit */unsigned long long int) ((3065485673702947165LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (((~(arr_10 [i_8] [i_8 - 1]))) < ((+(arr_10 [i_8 + 1] [i_8 - 1]))))))));
        var_33 = ((/* implicit */short) arr_2 [i_8] [i_8]);
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_37 [(short)18] [(signed char)17] [i_8] = ((/* implicit */unsigned short) 0ULL);
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        arr_42 [i_8] [i_9] [i_10] [i_8] = ((/* implicit */signed char) ((((_Bool) min((((/* implicit */long long int) arr_35 [i_9])), (0LL)))) && (((/* implicit */_Bool) ((short) (~(var_3)))))));
                        var_34 = ((/* implicit */signed char) arr_9 [i_8] [0ULL] [i_10] [i_11]);
                    }
                } 
            } 
            arr_43 [i_8] [i_9] = ((/* implicit */unsigned short) 2216960300U);
        }
    }
    var_35 = ((/* implicit */unsigned long long int) var_6);
    var_36 = ((/* implicit */signed char) (unsigned short)65535);
}
