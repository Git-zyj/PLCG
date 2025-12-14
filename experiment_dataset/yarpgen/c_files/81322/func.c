/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81322
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
    var_17 *= ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) max((min(((+(((/* implicit */int) (signed char)53)))), (((/* implicit */int) ((_Bool) arr_5 [(unsigned char)8] [i_1] [1] [4ULL]))))), ((((-(1548626373))) | (((/* implicit */int) (short)31171))))));
                    var_19 *= ((/* implicit */unsigned char) ((int) min(((+(arr_6 [10LL] [i_2]))), (((/* implicit */long long int) ((int) var_3))))));
                }
                for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_10 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)60))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_5)))));
                        arr_14 [i_4] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17842)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)7] [(short)7])))))) ? (arr_13 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1]) : (((/* implicit */int) (short)-27355))));
                        arr_15 [i_0 + 3] [5ULL] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)190))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_3] [9LL])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_3] [1])) >= (((/* implicit */int) (short)-27355)))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [8U] [i_0] [i_5])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42)))));
                        arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0 + 3] [i_0 + 3] [i_0] [i_0]);
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 3] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)109))));
                            var_24 = ((/* implicit */signed char) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((int) arr_11 [i_7] [i_7] [i_0] [10LL]))));
                            var_25 = ((/* implicit */unsigned long long int) ((int) var_3));
                            arr_24 [7ULL] [(unsigned char)6] [i_0] [(unsigned char)6] [i_7] [7ULL] = ((/* implicit */long long int) arr_7 [i_0 + 2] [(unsigned char)1]);
                            arr_25 [i_7] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (short)27354);
                        }
                        for (int i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */int) (short)3398);
                            arr_29 [i_0] [i_6] [8LL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-2)) >= (((/* implicit */int) (unsigned char)242)))) ? (arr_22 [i_0 + 1] [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) : ((-(arr_22 [(short)1] [(signed char)9] [(unsigned char)10] [i_3] [i_6] [4] [i_0])))))) ? (((/* implicit */int) (short)-27355)) : (((/* implicit */int) min((arr_3 [i_1] [i_6]), (arr_3 [(_Bool)1] [i_0]))))));
                            var_27 = ((/* implicit */long long int) (+((-(var_13)))));
                            arr_30 [i_0] [i_0] [i_3] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_26 [i_8 + 1] [i_0 - 1] [i_0])), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -8289770141272840658LL)))))) : (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                            arr_31 [i_8 - 2] [(unsigned char)10] [i_0] [i_3] [i_0] [i_0 + 3] [i_0 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (-1466422928) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (short)27354)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2348)))))))) ? (((/* implicit */int) (((!(var_11))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [10] [i_8])), (arr_17 [8ULL] [(short)2] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_8 - 4])))))));
                        }
                        arr_32 [i_0] [i_0] [i_3] [(unsigned char)9] = var_2;
                    }
                }
                var_28 = ((/* implicit */signed char) (((~((+(((/* implicit */int) (signed char)-53)))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 2] [i_0 - 1]))) >= (var_5))))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_29 = ((/* implicit */unsigned char) (!(((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-15990)) >= (((/* implicit */int) (unsigned char)90))))))))));
                    var_30 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)-21950)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)170)) || (((/* implicit */_Bool) (signed char)58))))))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 - 1] [10])) != (((/* implicit */int) min(((_Bool)1), (var_11)))))))));
                    arr_36 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)110))))) ? (3964819729U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-76))))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_1] [i_9])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        for (signed char i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27354)) ? (((/* implicit */long long int) arr_38 [(short)6] [i_0] [i_11 - 1] [5ULL] [5ULL])) : ((-9223372036854775807LL - 1LL)))))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (+((+(((long long int) (unsigned char)90)))))))));
                                arr_42 [i_0] [i_1] [i_0] [i_0] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? ((-(arr_33 [i_10] [i_10 + 3] [i_10 - 1] [i_10]))) : (arr_33 [(short)7] [i_10] [i_10 - 2] [(short)0])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
