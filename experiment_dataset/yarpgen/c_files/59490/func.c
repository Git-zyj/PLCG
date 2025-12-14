/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59490
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
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)8041), (var_0))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_21 &= (+(((((/* implicit */_Bool) 0ULL)) ? (arr_3 [4ULL]) : (3490993138760086471ULL))));
        var_22 ^= ((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 2]);
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) -5332450084386840668LL)) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1]))), ((~(arr_4 [i_1 + 2])))));
        arr_8 [i_1 + 1] = ((/* implicit */unsigned long long int) (unsigned short)11416);
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_23 |= ((/* implicit */unsigned short) ((max((9254560652055523737ULL), (min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_2] [i_2]))))) & (((((((/* implicit */_Bool) (unsigned short)28198)) ? (((/* implicit */unsigned long long int) -3472726548993646383LL)) : (arr_3 [i_2]))) << (((((((/* implicit */int) (unsigned short)44473)) << (((arr_11 [i_2]) - (1093244568))))) - (182161364)))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(arr_11 [i_2]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (28ULL) : (0ULL)))) ? (((((/* implicit */unsigned long long int) arr_12 [i_3])) / (((unsigned long long int) arr_12 [i_3])))) : (max((((/* implicit */unsigned long long int) arr_16 [i_5] [i_3] [i_3])), (arr_13 [i_3])))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(18446744073709551611ULL))))));
                    var_27 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) var_4)) : (0ULL))), (((/* implicit */unsigned long long int) arr_12 [i_3])))) <= (min((9281492234263935246ULL), (1125350151028736ULL)))));
                    var_28 *= ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_14))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_16)));
}
