/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76403
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2595258471329294734LL)) >= (8657348405828548886ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))));
        arr_5 [i_0] = ((/* implicit */int) -5814602603207140528LL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) | (-5814602603207140528LL)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */signed char) 873614464);
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((arr_0 [12] [i_2]) / (arr_0 [i_2] [i_2])));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5814602603207140528LL)) ? (5814602603207140528LL) : (arr_16 [11ULL]))))));
        var_15 ^= ((/* implicit */unsigned int) ((var_7) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_17 [i_3])) - (96))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_4))));
            arr_25 [i_4] [13LL] [i_4] = ((/* implicit */unsigned int) (+(-5814602603207140528LL)));
        }
        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                arr_31 [i_4] [0ULL] [0ULL] [i_4] &= ((/* implicit */int) ((((var_6) ^ (((/* implicit */unsigned long long int) 1080863910568919040LL)))) - (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))));
                arr_32 [i_4] [i_4] [i_6] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (arr_20 [i_4]) : (((/* implicit */unsigned long long int) arr_16 [i_4])))) | (arr_30 [i_4] [i_6] [i_6] [i_7])));
            }
            var_16 = ((/* implicit */long long int) (!(var_0)));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_35 [i_4] [i_4] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_16 [i_4])));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_33 [15U] [i_4] [i_8])) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) : (var_6)));
        }
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_38 [10] |= ((/* implicit */int) var_9);
            var_18 = ((/* implicit */signed char) ((8047256018603422021LL) / (arr_26 [(unsigned short)15] [i_9])));
        }
        arr_39 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-8047256018603422022LL) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4])))))) ? (((((/* implicit */_Bool) (signed char)-18)) ? (var_4) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_19 |= ((/* implicit */long long int) ((var_8) || (((/* implicit */_Bool) 24ULL))));
        arr_40 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4])) ? (var_4) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        arr_44 [i_10] = ((arr_18 [i_10]) / (((/* implicit */long long int) 32768U)));
        arr_45 [i_10] = ((/* implicit */unsigned short) (+(arr_21 [i_10])));
        arr_46 [i_10] = ((/* implicit */int) arr_14 [i_10]);
    }
}
