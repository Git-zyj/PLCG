/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98253
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (signed char)48))));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)9317))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_18) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        arr_3 [7LL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-49))))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0 + 1]))))));
        var_21 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (signed char)49)) ? (-1462668896) : (((/* implicit */int) arr_1 [i_0])))) <= (((((arr_0 [(short)9]) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (102))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9318))) : (2362862262U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (max((((/* implicit */long long int) var_4)), (var_7)))))))) : (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (signed char)49)) ? (-1462668896) : (((/* implicit */int) arr_1 [i_0])))) <= (((((arr_0 [(short)9]) + (2147483647))) >> (((((((/* implicit */int) arr_1 [i_0])) - (102))) - (52))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9318))) : (2362862262U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (max((((/* implicit */long long int) var_4)), (var_7))))))));
    }
    var_22 -= ((/* implicit */signed char) ((((max((((/* implicit */long long int) var_11)), (var_1))) == (((((/* implicit */_Bool) var_19)) ? (8575106075824236170LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)31), ((signed char)48))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_2)))))) / (var_8)))));
}
