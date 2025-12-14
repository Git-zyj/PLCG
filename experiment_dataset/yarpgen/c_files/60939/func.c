/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60939
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) max((((max((var_12), (((/* implicit */long long int) (signed char)2)))) / (min((((/* implicit */long long int) -1194858898)), (arr_0 [i_0]))))), (min((((/* implicit */long long int) 2147483647)), (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_16 = ((/* implicit */int) (+(var_12)));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_17 = min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(unsigned short)0] [i_1]))))), (max((((/* implicit */unsigned long long int) -86201592)), (var_0))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_3 [i_1] [i_1]) ? (((int) ((var_8) ^ (((/* implicit */int) var_1))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (10668652486855511500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))))))));
        arr_4 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_1] [i_1])), (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned short)61760)) : (((/* implicit */int) (unsigned char)218))))));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_19 = ((/* implicit */long long int) arr_5 [i_2] [i_2]);
        arr_8 [0ULL] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97))))) & (((/* implicit */int) (unsigned char)96))));
        arr_9 [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((11997951505176626908ULL), (((/* implicit */unsigned long long int) -6LL)))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2] [6])) * (((/* implicit */int) (unsigned char)55)))))))) ? (((/* implicit */unsigned int) 1697652574)) : (max((2244781916U), (((/* implicit */unsigned int) -1728954413))))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_5)) : (var_7)))) : (max((var_0), (((/* implicit */unsigned long long int) (unsigned char)141))))))) ? (((/* implicit */long long int) 397221074)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -7630668304088313258LL)), (18446744073709551611ULL)))) ? (((var_7) % (var_10))) : (var_7)))));
}
