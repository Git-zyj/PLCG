/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6096
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
    var_10 -= ((/* implicit */unsigned long long int) 7179509931688177392LL);
    var_11 = ((/* implicit */int) min((((((/* implicit */_Bool) var_9)) ? (17661083857101279633ULL) : (140737488289792ULL))), (((((/* implicit */_Bool) (~(7179509931688177392LL)))) ? (min((((/* implicit */unsigned long long int) -7179509931688177404LL)), (17648054634698117843ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7179509931688177404LL) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
    var_12 = ((/* implicit */short) min(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (36028797018963904ULL))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = min((min((min((18446744073709551615ULL), (8142956953223639035ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 1])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7179509931688177430LL)) ? (7179509931688177403LL) : (((/* implicit */long long int) 1557831700U))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (0ULL)))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (var_3)))), (min((((/* implicit */int) var_2)), (625071420)))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) | (7179509931688177410LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 7; i_3 += 2) /* same iter space */
                    {
                        var_13 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17693429351513817879ULL)))))) / (arr_8 [i_0] [i_1] [i_2] [i_3]))) != (((/* implicit */unsigned long long int) var_6))));
                        var_14 -= min((((/* implicit */unsigned long long int) arr_1 [i_1] [i_3])), ((-(arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        var_15 -= ((/* implicit */short) min((((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) | (((((/* implicit */int) (unsigned short)2047)) - (-15))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) : (-7179509931688177404LL)))) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1] [i_1] [i_1])), ((short)29))))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 7; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) : (arr_0 [i_1] [i_4])))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)12)))) : (((/* implicit */int) arr_9 [i_4] [i_4 + 4] [i_2] [i_2] [i_2] [i_0 + 1])))), (((/* implicit */int) ((((var_3) ? (((/* implicit */int) (unsigned short)55779)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) > (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_2] [i_1] [i_0] [i_0])))))))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7723468433193145724ULL)) ? (3666202958045112927ULL) : (18446744073709551604ULL)));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)50686))))), (arr_10 [i_0] [i_1] [i_4 + 4])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 798689439011433781ULL)))) ? (min((arr_11 [i_1] [i_2] [i_4]), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4])))) : (((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_4 + 4]))))) : ((-(((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */unsigned long long int) 253952LL)) : (arr_10 [i_0] [i_1] [i_4])))))));
                        var_19 = ((/* implicit */int) min((min((798689439011433781ULL), (6111258868175232377ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63489)) ? ((+(253952LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((min((((/* implicit */int) var_4)), (-2090944969))) + (2147483647))) >> (((var_0) - (1419589973))))))));
}
