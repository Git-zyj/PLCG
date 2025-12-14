/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97000
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
    var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 2062718246U))))), (((short) var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) var_9);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(var_17)))))) ? ((((+(((/* implicit */int) var_19)))) + ((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_18)))))))))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((max((6699480944083140910ULL), (((/* implicit */unsigned long long int) 2040884144U)))) * (var_2))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_16 [i_6] [i_5 - 1] [i_0] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) var_13)) <= (var_12)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 18180127243161927872ULL))))))) | (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (var_5))))));
                            var_24 = ((/* implicit */unsigned int) var_10);
                            arr_17 [i_0] [(signed char)4] [i_6] = ((/* implicit */long long int) arr_13 [i_0] [i_1]);
                            /* LoopSeq 1 */
                            for (int i_7 = 2; i_7 < 9; i_7 += 4) 
                            {
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) var_18)), (((int) 18446744073709551613ULL))));
                                var_26 = ((((((((/* implicit */_Bool) var_9)) ? (18180127243161927872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_1 - 1] [i_6] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)75))))) : (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_3 [i_7 + 3] [i_5 - 1])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_5] [i_6] [i_7 + 3] [10]))))))));
                                arr_21 [i_6] [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_14)) << (((((/* implicit */int) min((var_13), (((/* implicit */signed char) (_Bool)1))))) + (109)))))));
                                arr_22 [i_0] [i_5] &= ((/* implicit */signed char) ((_Bool) (_Bool)1));
                                arr_23 [i_0] [i_6] [(_Bool)1] [i_6] [6U] = ((/* implicit */signed char) max((max((arr_14 [8ULL] [i_7 - 2] [i_7 - 2] [i_6] [i_7 + 3]), (arr_14 [i_1] [i_7 - 1] [i_1] [i_6] [(signed char)1]))), (((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_7 - 2] [i_5 - 1] [i_6] [i_7])) ? (2040884153U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned int i_9 = 3; i_9 < 11; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                            {
                                arr_34 [i_0] [i_1 - 1] [i_8] [11] [i_8] [i_1 - 1] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (signed char)71)) == (((/* implicit */int) arr_24 [i_10])))));
                                var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (((var_9) & (((/* implicit */unsigned int) var_15))))));
                                arr_35 [i_0] [i_1] [i_8] [i_9 - 2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((signed char) var_13)))));
                            }
                            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (2040884153U))) ? (((/* implicit */int) arr_27 [i_0] [i_1 - 1] [i_9 - 3] [4U] [i_9 + 1])) : (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_8] [i_9 - 3] [i_0] [(signed char)6]))))))))) ? (max(((-(var_15))), (((((/* implicit */_Bool) arr_15 [i_0] [(short)4] [i_8] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-61)))))) : (((((/* implicit */_Bool) ((unsigned int) 3895370105U))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (_Bool)1))))))));
                            var_29 *= ((/* implicit */_Bool) 4294967278U);
                            /* LoopSeq 1 */
                            for (signed char i_11 = 3; i_11 < 9; i_11 += 4) 
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_0] [i_9 - 1] [i_1 - 1])))))))));
                                arr_39 [(signed char)10] [2U] [2U] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_10 [6U] [(_Bool)1] [i_9 + 1] [i_9 + 1] [6U])) > (((/* implicit */int) (_Bool)0))))), (((int) ((_Bool) var_17)))));
                            }
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_16), (arr_4 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))) ? ((~(max((arr_0 [i_1] [i_0]), (((/* implicit */int) var_14)))))) : ((~(((((/* implicit */int) (signed char)30)) >> (((var_12) - (767872651)))))))));
            }
        } 
    } 
}
