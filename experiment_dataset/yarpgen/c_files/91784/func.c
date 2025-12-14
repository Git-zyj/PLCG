/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91784
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((_Bool) ((((/* implicit */int) ((_Bool) var_4))) ^ (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((arr_8 [i_3] [i_0] [i_0] [i_3] [i_3]) ? (12568457100659554223ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23942))))) | (((/* implicit */unsigned long long int) arr_7 [i_4] [i_3] [i_2]))))));
                                var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_3])), ((-(((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) 1787016560)) ? (-1787016560) : (1787016560))) : (max((((/* implicit */int) arr_3 [i_2] [i_2] [i_3])), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))))));
                                arr_10 [(signed char)10] [i_2] [i_0] = max(((short)15), (arr_3 [i_0] [i_1] [i_2]));
                                var_14 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1787016550)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_2] [i_4]), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_8)) : (var_7))) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1] [i_0 + 2]) : (arr_9 [i_2] [i_0 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_6 + 1] [i_6])) ? (((/* implicit */long long int) max((max((arr_0 [i_0] [i_2]), (((/* implicit */int) var_5)))), (max((arr_11 [i_0] [i_1] [i_2] [i_2] [(short)0]), (((/* implicit */int) var_9))))))) : (arr_9 [i_0] [i_0])));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [3] [(short)2] [i_0] [i_5])) ? (((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_6 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_6 - 2] [i_0 + 2] [i_0 + 1])))) : ((~((~(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_18 [i_7] [i_7]))))), (max((arr_9 [i_0] [(short)4]), (((/* implicit */long long int) 28U)))))) ^ (((/* implicit */long long int) var_7))));
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_18 = max((arr_23 [i_0] [i_7] [i_0] [i_9]), (((/* implicit */short) ((signed char) var_4))));
                        var_19 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) arr_9 [i_0] [i_8])) ? (arr_20 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_7] [i_9])))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_4)))) ? (max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_9])), (((long long int) var_8)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))))));
                    }
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_27 [i_0] = ((/* implicit */short) ((unsigned int) (~(((((/* implicit */int) arr_24 [i_10] [i_0] [i_0])) + (((/* implicit */int) arr_12 [(short)5] [i_8] [i_0] [i_8])))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_2 [2ULL] [i_8] [i_0]))));
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_22 *= ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_13 [i_0] [i_0])))) ? (arr_13 [i_0] [i_0 - 1]) : (((/* implicit */int) arr_18 [i_7] [i_8])))) | (((/* implicit */int) arr_14 [i_0] [i_7] [i_8] [i_11] [i_7]))));
                        var_23 &= ((/* implicit */signed char) var_0);
                        var_24 = (short)20332;
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_33 [i_0] [7ULL] [7ULL] [7ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((-1787016560) + (2147483647))) << (((arr_2 [i_12] [i_7] [i_0]) - (7893767428369589242LL)))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1787016551)))) ? (((/* implicit */int) (short)-10020)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [5LL] [i_0] [i_7] [i_7])))))))) : (((((_Bool) 1787016534)) ? (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [(short)6] [i_0] [(short)6])) : (((((/* implicit */_Bool) -1787016551)) ? (arr_21 [i_0] [i_7] [i_8] [i_12] [i_0 - 1]) : (((/* implicit */unsigned long long int) var_7))))))));
                        arr_34 [i_0] [i_7] [i_8] [5U] [i_7] = ((/* implicit */signed char) var_9);
                        /* LoopSeq 3 */
                        for (short i_13 = 2; i_13 < 7; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (-1787016552) : (((((/* implicit */_Bool) (~(-1787016552)))) ? (((((/* implicit */_Bool) (short)24338)) ? (361496970) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_0])))) : (arr_13 [i_0 + 2] [i_13 + 2])))));
                            var_26 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [(short)1] [i_13] [i_13 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [4U] [4U] [i_12] [i_12] [i_13 + 3]))) : (arr_32 [i_0] [i_12] [i_0] [i_12] [i_13 + 3]))));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (-(((((-1787016551) + (2147483647))) >> (((var_4) + (2283220658232821217LL)))))));
                            var_28 = ((/* implicit */signed char) arr_13 [i_7] [i_14]);
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) arr_5 [i_14] [i_7] [i_7])) ? (((/* implicit */unsigned int) var_7)) : (var_0)))));
                        }
                        for (short i_15 = 3; i_15 < 10; i_15 += 1) 
                        {
                            arr_43 [i_0] [i_7] [i_0] [i_12] = ((short) arr_21 [i_0] [i_0] [i_8] [i_12] [i_15]);
                            var_30 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_20 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_20 [i_0 + 1]))), (((/* implicit */unsigned int) ((arr_14 [i_7] [i_15 - 3] [i_7] [i_12] [i_12]) ? (((/* implicit */int) arr_18 [7ULL] [i_0 - 1])) : (arr_0 [i_15 - 2] [i_15]))))));
                        }
                    }
                }
            } 
        } 
        var_31 *= ((/* implicit */unsigned long long int) 4721622584958274224LL);
        arr_44 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((arr_2 [i_0 - 1] [i_0] [i_0]), (((/* implicit */long long int) var_8)))) : (arr_9 [i_0] [i_0])));
    }
    var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_9)), (var_4)))))) ? ((-(((int) var_6)))) : (max((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_1))))))))));
    var_33 = ((/* implicit */unsigned long long int) var_0);
    var_34 = (!(((/* implicit */_Bool) var_0)));
}
