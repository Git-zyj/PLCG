/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95084
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_20 *= ((/* implicit */_Bool) arr_1 [(signed char)6]);
        var_21 &= ((/* implicit */signed char) ((unsigned char) ((arr_0 [i_0 - 2] [i_0]) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_22 = arr_2 [i_1] [i_3];
                        var_23 = ((/* implicit */long long int) (~((~(arr_2 [i_0] [i_0])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) arr_13 [i_0] [i_1] [(signed char)3])))));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)0);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_2])) & (arr_11 [i_0 - 3] [i_1] [i_4] [i_3]))) == (((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) var_9)))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0 - 3] [i_1] [9LL] [i_0] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_12)))) ? (arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 + 1]) : (((var_4) + (((/* implicit */int) arr_17 [i_5] [i_3] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((~(arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)49527)))))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) 10861191117093304780ULL)))))))))));
                            var_27 -= ((/* implicit */unsigned char) arr_1 [i_5]);
                            arr_20 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((arr_8 [i_0] [i_0] [i_0] [i_5]) - (((/* implicit */int) var_0)))) > (((/* implicit */int) var_17)))))));
                        }
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14500))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6 + 1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_11))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 + 2] [i_0 + 1]))) : ((+(arr_13 [i_3] [i_3] [i_3]))))))))));
                            var_29 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))), ((!((!(arr_9 [i_0] [i_0] [i_0] [i_3])))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((((_Bool) arr_8 [i_2] [i_1] [i_2] [i_3])) ? (((arr_11 [i_1] [0] [i_3] [i_6]) << (((((/* implicit */int) var_10)) - (62))))) : (((/* implicit */int) arr_17 [10] [i_0 - 1] [i_3] [i_3] [i_6 + 3])))) << (((max((((/* implicit */unsigned int) min((var_2), (var_2)))), (((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) - (1192485769U))))))));
                        }
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [(_Bool)1] [7LL])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((var_17) ? (((((/* implicit */unsigned long long int) arr_5 [i_7])) ^ (7585552956616246857ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_10))))))))));
                        arr_28 [i_7] [i_7] [i_7] [(unsigned char)0] [i_0] = ((/* implicit */unsigned int) ((arr_25 [i_0] [i_0 - 1] [i_0] [i_7]) == (arr_25 [i_0] [i_0 + 1] [i_0] [i_7])));
                        var_33 *= ((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [i_1] [i_7]);
                    }
                    arr_29 [(unsigned short)4] [(unsigned short)8] [(unsigned short)8] [0] &= ((/* implicit */_Bool) (((+(((/* implicit */int) max((((/* implicit */signed char) arr_9 [0U] [i_0 - 1] [i_1] [i_2])), (var_6)))))) ^ (((arr_10 [i_2]) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551611ULL)))))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_34 ^= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0])) != (((/* implicit */int) arr_22 [i_0 - 1] [i_1]))))), (((((/* implicit */int) arr_22 [i_0] [i_0 - 3])) / (((/* implicit */int) arr_22 [i_1] [i_8]))))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2])) > (((/* implicit */int) arr_23 [i_0] [(_Bool)1] [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0 - 2]))))))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_36 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 10861191117093304758ULL))))) & (((/* implicit */int) arr_26 [(unsigned short)6] [i_1] [i_2] [i_2] [i_9]))))) | (arr_32 [i_0] [(unsigned short)4])));
                        arr_36 [i_0] [i_1] [i_2] [i_9] = arr_16 [i_0] [i_1] [i_2] [i_9];
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) 10861191117093304758ULL))));
                    }
                    var_38 *= ((/* implicit */_Bool) max((7585552956616246857ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)20)))))));
                }
            } 
        } 
    }
    for (unsigned char i_10 = 3; i_10 < 11; i_10 += 4) /* same iter space */
    {
        arr_40 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((7585552956616246854ULL), (((/* implicit */unsigned long long int) (unsigned char)59)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)215)), ((short)0)))))))) * (arr_2 [i_10] [i_10])));
        var_39 = ((/* implicit */int) var_1);
        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (((-(arr_6 [i_10] [i_10 + 1] [i_10]))) & (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_10])) || (((/* implicit */_Bool) arr_30 [i_10 - 1])))))))))))));
    }
}
