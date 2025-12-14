/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71382
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) <= ((~(((/* implicit */int) var_1)))))) ? (min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) -9100809708700589873LL)))), (((/* implicit */unsigned long long int) ((long long int) -9100809708700589848LL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)22892)), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (9100809708700589892LL))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) 5943336052408749922ULL);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((7649576106216703008ULL) & (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0]))) : (7649576106216703008ULL)))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) (unsigned char)0))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [4LL] [4LL])) & (((/* implicit */int) arr_2 [2LL]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)10] [(unsigned short)10]))) & (((((/* implicit */_Bool) var_17)) ? (607565558U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) ((max((var_2), (((/* implicit */unsigned int) arr_0 [i_1] [i_1])))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)207)), (arr_6 [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_1]), (((/* implicit */unsigned short) var_14))))))))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
    }
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_16 [i_2] [i_3] = ((/* implicit */long long int) (unsigned char)1);
            var_19 = ((/* implicit */long long int) var_8);
            arr_17 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_3])) ? (((607565558U) >> (((607565552U) - (607565525U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))))));
        }
        arr_18 [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_2]) : (arr_12 [i_2]))))));
        var_20 -= arr_15 [i_2 + 1];
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 7649576106216703008ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (var_2))))));
    }
    var_22 = ((((/* implicit */_Bool) max((9100809708700589866LL), (((/* implicit */long long int) (unsigned short)4092))))) ? (((unsigned long long int) min((-15LL), (((/* implicit */long long int) var_2))))) : (((/* implicit */unsigned long long int) min((var_0), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_5)) : (var_4)))))));
}
