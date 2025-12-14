/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95731
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
    var_19 = (~(((((/* implicit */_Bool) max((var_0), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2454677737U)) == (14306609978010350861ULL))))) : (1840289580U))));
    var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (38515)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (2454677737U) : (1840289553U)))) : ((+(0ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (16376U)));
        var_22 = ((/* implicit */long long int) (unsigned short)64733);
        var_23 = ((/* implicit */signed char) (unsigned short)54760);
    }
    var_24 *= var_11;
    /* LoopSeq 1 */
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1840289575U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (4294950900U)))))));
        var_25 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_3 [i_1 + 1] [i_1 + 1])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_2 + 1]))) : (arr_7 [i_1 + 1] [(signed char)0] [i_2 - 1]))))));
            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) 1840289551U))));
        }
        for (int i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) arr_7 [i_1] [i_3] [i_3]);
            arr_10 [i_1 + 2] [i_1] [i_1] = (-(1840289553U));
            var_29 = ((/* implicit */unsigned short) 2454677746U);
        }
        for (int i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) var_2);
            arr_15 [i_1] [i_1] = ((int) var_6);
            arr_16 [(signed char)11] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((signed char) var_2))), (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) 1031076574)))))), (arr_7 [i_4 - 1] [i_4] [i_4])));
        }
        for (short i_5 = 3; i_5 < 15; i_5 += 4) 
        {
            var_31 *= ((/* implicit */short) max((min((((/* implicit */int) ((((/* implicit */int) (signed char)-116)) >= (((/* implicit */int) (unsigned short)29))))), ((-(((/* implicit */int) arr_8 [i_5 - 3])))))), (((/* implicit */int) (unsigned short)62951))));
            arr_19 [i_5 - 3] [i_5] [10U] = (signed char)-20;
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 700489211210979594LL)) ? (arr_18 [i_1 - 1] [i_1 + 2] [i_5 - 1]) : (arr_18 [i_1 + 1] [i_1 + 2] [i_5 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_5 - 3] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 + 1] [i_1 + 1]))) : (2331282263U))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -585736633)) : (2454677742U)))));
            arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10776))) != (4127636882309320208ULL))))) : (arr_18 [i_5 - 3] [i_1] [10LL])));
            var_33 -= ((/* implicit */long long int) min((((unsigned int) (-(((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) arr_14 [i_1 + 1] [i_1 + 1]))));
        }
    }
}
