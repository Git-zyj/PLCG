/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91379
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
    var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [(signed char)9] [i_1]), (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [(signed char)1] [i_2 - 1])), (arr_8 [i_0] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) arr_1 [0LL])) : (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) * (((/* implicit */int) var_0)))))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned short)63746))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) min((var_6), (arr_2 [i_2] [i_1])))), (arr_8 [i_0] [i_1] [11U])))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_11))))), (arr_6 [i_0] [i_2 + 1] [i_2 - 1] [i_0]))) - (7081037987924838437ULL))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (4294967295U)))), (var_2))))));
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))))) : (((int) (signed char)111))));
        arr_12 [i_3] |= ((/* implicit */_Bool) min((((((((/* implicit */int) arr_10 [i_3] [i_3])) != (((/* implicit */int) arr_11 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_3])), (arr_10 [i_3] [i_3]))))) : (min((1275596866U), (((/* implicit */unsigned int) arr_11 [i_3])))))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)48)) - (36))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */short) ((arr_14 [i_4] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)194)))))));
        var_23 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (8119739289541179108LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned short)8)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5]))) : (arr_14 [i_5] [i_5])))) || (((/* implicit */_Bool) max((arr_17 [i_5]), (((/* implicit */int) var_7)))))))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (((/* implicit */int) arr_10 [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5]))))) ? (((/* implicit */int) arr_10 [i_5] [i_5])) : (((/* implicit */int) max((arr_10 [i_5] [i_5]), (arr_10 [i_5] [i_5])))))))));
        var_26 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)43020))))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_13 [i_5]))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) max((var_1), (var_9))))) ? (((((/* implicit */_Bool) (unsigned short)11581)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))));
    }
}
