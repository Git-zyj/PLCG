/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61601
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
    var_16 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_7))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_0 + 1])))) ? (arr_0 [i_0 + 1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) | (((((/* implicit */long long int) var_6)) + (var_1)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        arr_5 [9ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)4))));
        arr_6 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (arr_3 [i_1] [i_1 + 2]))) : (((unsigned int) (unsigned short)0))));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9))))))));
}
