/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74211
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((signed char) min((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
                arr_6 [i_0] [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2394414103596110729LL)))))) % (((1U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-2394414103596110730LL) : (((/* implicit */long long int) ((/* implicit */int) ((3043486324U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) arr_8 [i_2]);
        var_16 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4294950912U)))) ? ((+(7680U))) : (arr_9 [0U] [0U])))) : ((~(arr_2 [6])))));
        arr_11 [8LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((-1811622409) > (((/* implicit */int) (unsigned short)17730)))))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((((((/* implicit */_Bool) var_11)) ? (2197959905U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10890))))) << (((((unsigned long long int) 1006632960)) - (1006632948ULL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned short)16823)))))));
    }
    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        var_17 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((arr_13 [(signed char)0] [(signed char)0]), (2699540143829791628LL))), (((/* implicit */long long int) (-(var_13)))))))));
        arr_14 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-917))));
        var_18 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((_Bool) (unsigned char)255))), ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_11))));
        var_19 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7))))) & (max((var_14), (((/* implicit */unsigned int) var_8)))))), (((unsigned int) var_7))));
    }
}
