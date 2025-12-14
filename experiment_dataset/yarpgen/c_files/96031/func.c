/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96031
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
    var_17 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 287948901175001088ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9127))) : (9131397444334290203LL)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) 6U))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0 - 1])), ((unsigned short)65535)))) ? (max((((/* implicit */unsigned int) (unsigned char)189)), (16252928U))) : (4294967291U)))) ? (((((/* implicit */int) (unsigned short)9142)) & (((/* implicit */int) (unsigned short)56394)))) : (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (unsigned short)19)) : (((((/* implicit */_Bool) (unsigned short)56416)) ? (((/* implicit */int) (unsigned short)9130)) : (((/* implicit */int) var_16))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)243))))));
        var_19 = ((/* implicit */signed char) ((((arr_0 [i_0]) / (arr_0 [i_0]))) / (((((/* implicit */_Bool) (unsigned short)19)) ? (12623511142248940163ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3955064987868000282ULL)) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_1 [1ULL] [1ULL]))))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (1659338259652373548ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) 1182994535U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (var_15)))) : (((((/* implicit */_Bool) 10768999697527743671ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144)))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((16787405814057178068ULL), (((/* implicit */unsigned long long int) var_5)))) ^ ((~(var_0)))))) ? (min((((var_8) & (6ULL))), (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))))))) : (((/* implicit */unsigned long long int) ((var_14) ^ (((long long int) var_2)))))));
    var_22 = ((/* implicit */unsigned long long int) var_16);
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1216464246U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (0ULL)))) ? (((unsigned int) (unsigned short)23084)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) << (((var_12) - (16464249296431374412ULL))))))))));
}
